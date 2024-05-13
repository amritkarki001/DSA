/**
 * v0 by Vercel.
 * @see https://v0.dev/t/uIPatJZmveM
 * Documentation: https://v0.dev/docs#integrating-generated-code-into-your-nextjs-app
 */
import Link from "next/link"
import { Label } from "@/components/ui/label"
import { Input } from "@/components/ui/input"
import { Textarea } from "@/components/ui/textarea"
import { Button } from "@/components/ui/button"

export default function Component() {
  return (
    <div className="flex flex-col min-h-[100dvh]">
      <header className="px-4 lg:px-6 h-14 flex items-center">
        <Link className="flex items-center justify-center" href="#">
          <MountainIcon className="h-6 w-6" />
          <span className="sr-only">Amrit Karki</span>
        </Link>
        <nav className="ml-auto flex gap-4 sm:gap-6">
          <Link className="text-sm font-medium hover:underline underline-offset-4" href="#">
            About
          </Link>
          <Link className="text-sm font-medium hover:underline underline-offset-4" href="#">
            Work
          </Link>
          <Link className="text-sm font-medium hover:underline underline-offset-4" href="#">
            Contact
          </Link>
        </nav>
      </header>
      <main className="flex-1">
        <section className="w-full py-12 md:py-24 lg:py-32 xl:py-48">
          <div className="container px-4 md:px-6">
            <div className="grid gap-6 lg:grid-cols-[1fr_400px] lg:gap-12 xl:grid-cols-[1fr_600px]">
              <div className="flex flex-col justify-center space-y-4">
                <div className="space-y-2">
                  <h1 className="text-3xl font-bold tracking-tighter sm:text-5xl xl:text-6xl/none">Amrit Karki</h1>
                  <h2 className="text-xl font-medium text-gray-500 dark:text-gray-400">Graphic & UI/UX Designer</h2>
                  <p className="max-w-[600px] text-gray-500 md:text-xl dark:text-gray-400">
                    Amrit is a passionate designer with a keen eye for detail and a love for creating beautiful,
                    user-friendly experiences.
                  </p>
                </div>
              </div>
              <img
                alt="Amrit Karki"
                className="mx-auto aspect-square overflow-hidden rounded-xl object-cover sm:w-full lg:order-last"
                height="550"
                src="/placeholder.svg"
                width="550"
              />
            </div>
          </div>
        </section>
        <section className="w-full py-12 md:py-24 lg:py-32">
          <div className="container px-4 md:px-6">
            <div className="space-y-4 md:space-y-6">
              <div className="space-y-2">
                <h2 className="text-3xl font-bold tracking-tighter sm:text-4xl md:text-5xl">Featured Work</h2>
                <p className="max-w-[600px] text-gray-500 md:text-xl/relaxed lg:text-base/relaxed xl:text-xl/relaxed dark:text-gray-400">
                  Check out some of Amrit's best design work.
                </p>
              </div>
              <div className="grid grid-cols-1 gap-4 sm:grid-cols-2 md:grid-cols-3 lg:gap-6">
                <div className="relative group overflow-hidden rounded-lg">
                  <Link className="absolute inset-0 z-10" href="#">
                    <span className="sr-only">View Project</span>
                  </Link>
                  <img
                    alt="Web Design"
                    className="object-cover w-full h-60"
                    height={300}
                    src="/placeholder.svg"
                    style={{
                      aspectRatio: "400/300",
                      objectFit: "cover",
                    }}
                    width={400}
                  />
                  <div className="bg-white p-4 dark:bg-gray-950">
                    <h3 className="font-semibold text-lg md:text-xl">Web Design</h3>
                    <p className="text-sm text-gray-500 dark:text-gray-400">
                      Beautifully crafted websites that deliver a seamless user experience.
                    </p>
                  </div>
                </div>
                <div className="relative group overflow-hidden rounded-lg">
                  <Link className="absolute inset-0 z-10" href="#">
                    <span className="sr-only">View Project</span>
                  </Link>
                  <img
                    alt="Mobile App Design"
                    className="object-cover w-full h-60"
                    height={300}
                    src="/placeholder.svg"
                    style={{
                      aspectRatio: "400/300",
                      objectFit: "cover",
                    }}
                    width={400}
                  />
                  <div className="bg-white p-4 dark:bg-gray-950">
                    <h3 className="font-semibold text-lg md:text-xl">Mobile App Design</h3>
                    <p className="text-sm text-gray-500 dark:text-gray-400">
                      Intuitive and visually stunning mobile app designs.
                    </p>
                  </div>
                </div>
                <div className="relative group overflow-hidden rounded-lg">
                  <Link className="absolute inset-0 z-10" href="#">
                    <span className="sr-only">View Project</span>
                  </Link>
                  <img
                    alt="Branding"
                    className="object-cover w-full h-60"
                    height={300}
                    src="/placeholder.svg"
                    style={{
                      aspectRatio: "400/300",
                      objectFit: "cover",
                    }}
                    width={400}
                  />
                  <div className="bg-white p-4 dark:bg-gray-950">
                    <h3 className="font-semibold text-lg md:text-xl">Branding</h3>
                    <p className="text-sm text-gray-500 dark:text-gray-400">
                      Crafting memorable brand identities that stand out.
                    </p>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </section>
        <section className="w-full py-12 md:py-24 lg:py-32 bg-gray-100 dark:bg-gray-800">
          <div className="container px-4 md:px-6">
            <div className="space-y-4 md:space-y-6">
              <div className="space-y-2">
                <h2 className="text-3xl font-bold tracking-tighter sm:text-4xl md:text-5xl">About Amrit</h2>
                <p className="max-w-[600px] text-gray-500 md:text-xl/relaxed lg:text-base/relaxed xl:text-xl/relaxed dark:text-gray-400">
                  Learn more about Amrit's background and experience.
                </p>
              </div>
              <div className="grid grid-cols-1 gap-6 md:grid-cols-2 lg:gap-10">
                <div className="space-y-4">
                  <h3 className="text-xl font-bold">Bio</h3>
                  <p className="text-gray-500 dark:text-gray-400">
                    Amrit is a passionate graphic and UI/UX designer with over 5 years of experience. He has a keen eye
                    for detail and a love for creating beautiful, user-friendly designs. Amrit has worked with a wide
                    range of clients, from startups to large enterprises, and has a proven track record of delivering
                    high-quality work.
                  </p>
                </div>
                <div className="space-y-4">
                  <h3 className="text-xl font-bold">Resume</h3>
                  <div className="flex flex-col gap-2">
                    <div className="flex items-center gap-2">
                      <BriefcaseIcon className="h-5 w-5 text-gray-500 dark:text-gray-400" />
                      <div>
                        <div className="font-medium">Graphic Designer</div>
                        <div className="text-sm text-gray-500 dark:text-gray-400">Acme Inc, 2018 - Present</div>
                      </div>
                    </div>
                    <div className="flex items-center gap-2">
                      <BriefcaseIcon className="h-5 w-5 text-gray-500 dark:text-gray-400" />
                      <div>
                        <div className="font-medium">UI/UX Designer</div>
                        <div className="text-sm text-gray-500 dark:text-gray-400">Vercel, 2016 - 2018</div>
                      </div>
                    </div>
                    <div className="flex items-center gap-2">
                      <GraduationCapIcon className="h-5 w-5 text-gray-500 dark:text-gray-400" />
                      <div>
                        <div className="font-medium">Bachelor of Fine Arts</div>
                        <div className="text-sm text-gray-500 dark:text-gray-400">
                          University of the Arts, 2013 - 2016
                        </div>
                      </div>
                    </div>
                  </div>
                </div>
              </div>
            </div>
          </div>
        </section>
        <section className="w-full py-12 md:py-24 lg:py-32">
          <div className="container px-4 md:px-6">
            <div className="space-y-4 md:space-y-6">
              <div className="space-y-2">
                <h2 className="text-3xl font-bold tracking-tighter sm:text-4xl md:text-5xl">Get in Touch</h2>
                <p className="max-w-[600px] text-gray-500 md:text-xl/relaxed lg:text-base/relaxed xl:text-xl/relaxed dark:text-gray-400">
                  Have a project in mind? Let's chat.
                </p>
              </div>
              <div className="mx-auto w-full max-w-md space-y-4">
                <form className="grid gap-4">
                  <div className="space-y-2">
                    <Label htmlFor="name">Name</Label>
                    <Input id="name" placeholder="John Doe" required type="text" />
                  </div>
                  <div className="space-y-2">
                    <Label htmlFor="email">Email</Label>
                    <Input id="email" placeholder="john@example.com" required type="email" />
                  </div>
                  <div className="space-y-2">
                    <Label htmlFor="message">Message</Label>
                    <Textarea id="message" placeholder="How can I help you?" required />
                  </div>
                  <Button className="w-full" type="submit">
                    Send Message
                  </Button>
                </form>
              </div>
            </div>
          </div>
        </section>
      </main>
      <footer className="flex flex-col gap-2 sm:flex-row py-6 w-full shrink-0 items-center px-4 md:px-6 border-t">
        <p className="text-xs text-gray-500 dark:text-gray-400">© 2024 Amrit Karki. All rights reserved.</p>
        <nav className="sm:ml-auto flex gap-4 sm:gap-6">
          <Link className="text-xs hover:underline underline-offset-4" href="#">
            Privacy
          </Link>
          <Link className="text-xs hover:underline underline-offset-4" href="#">
            Terms
          </Link>
        </nav>
      </footer>
    </div>
  )
}

function BriefcaseIcon(props) {
  return (
    <svg
      {...props}
      xmlns="http://www.w3.org/2000/svg"
      width="24"
      height="24"
      viewBox="0 0 24 24"
      fill="none"
      stroke="currentColor"
      strokeWidth="2"
      strokeLinecap="round"
      strokeLinejoin="round"
    >
      <path d="M16 20V4a2 2 0 0 0-2-2h-4a2 2 0 0 0-2 2v16" />
      <rect width="20" height="14" x="2" y="6" rx="2" />
    </svg>
  )
}


function GraduationCapIcon(props) {
  return (
    <svg
      {...props}
      xmlns="http://www.w3.org/2000/svg"
      width="24"
      height="24"
      viewBox="0 0 24 24"
      fill="none"
      stroke="currentColor"
      strokeWidth="2"
      strokeLinecap="round"
      strokeLinejoin="round"
    >
      <path d="M21.42 10.922a1 1 0 0 0-.019-1.838L12.83 5.18a2 2 0 0 0-1.66 0L2.6 9.08a1 1 0 0 0 0 1.832l8.57 3.908a2 2 0 0 0 1.66 0z" />
      <path d="M22 10v6" />
      <path d="M6 12.5V16a6 3 0 0 0 12 0v-3.5" />
    </svg>
  )
}


function MountainIcon(props) {
  return (
    <svg
      {...props}
      xmlns="http://www.w3.org/2000/svg"
      width="24"
      height="24"
      viewBox="0 0 24 24"
      fill="none"
      stroke="currentColor"
      strokeWidth="2"
      strokeLinecap="round"
      strokeLinejoin="round"
    >
      <path d="m8 3 4 8 5-5 5 15H2L8 3z" />
    </svg>
  )
}