// This is the root layout component for your Next.js app.
// Learn more: https://nextjs.org/docs/app/building-your-application/routing/pages-and-layouts#root-layout-required

import { Arimo } from 'next/font/google'
import './styles.css'

const arimo = Arimo({
  subsets: ['latin'],
  display: 'swap',
  variable: '--font-arimo',
})

export default function Layout({ children }) {
  return (
    <html lang="en">
      <body className={arimo.variable}>
        {children}
      </body>
    </html>
  )
}