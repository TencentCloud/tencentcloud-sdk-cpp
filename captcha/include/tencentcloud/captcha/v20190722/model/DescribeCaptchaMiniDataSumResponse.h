/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIDATASUMRESPONSE_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIDATASUMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaMiniDataSum返回参数结构体
                */
                class DescribeCaptchaMiniDataSumResponse : public AbstractModel
                {
                public:
                    DescribeCaptchaMiniDataSumResponse();
                    ~DescribeCaptchaMiniDataSumResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取请求总量
                     * @return GetSum 请求总量
                     * 
                     */
                    int64_t GetGetSum() const;

                    /**
                     * 判断参数 GetSum 是否已赋值
                     * @return GetSum 是否已赋值
                     * 
                     */
                    bool GetSumHasBeenSet() const;

                    /**
                     * 获取请求验证成功量
                     * @return VfySuccSum 请求验证成功量
                     * 
                     */
                    int64_t GetVfySuccSum() const;

                    /**
                     * 判断参数 VfySuccSum 是否已赋值
                     * @return VfySuccSum 是否已赋值
                     * 
                     */
                    bool VfySuccSumHasBeenSet() const;

                    /**
                     * 获取请求验证量
                     * @return VfySum 请求验证量
                     * 
                     */
                    int64_t GetVfySum() const;

                    /**
                     * 判断参数 VfySum 是否已赋值
                     * @return VfySum 是否已赋值
                     * 
                     */
                    bool VfySumHasBeenSet() const;

                    /**
                     * 获取拦截攻击量
                     * @return AttackSum 拦截攻击量
                     * 
                     */
                    int64_t GetAttackSum() const;

                    /**
                     * 判断参数 AttackSum 是否已赋值
                     * @return AttackSum 是否已赋值
                     * 
                     */
                    bool AttackSumHasBeenSet() const;

                    /**
                     * 获取返回信息
                     * @return CaptchaMsg 返回信息
                     * 
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     * 
                     */
                    bool CaptchaMsgHasBeenSet() const;

                    /**
                     * 获取成功返回0  其它失败
                     * @return CaptchaCode 成功返回0  其它失败
                     * 
                     */
                    int64_t GetCaptchaCode() const;

                    /**
                     * 判断参数 CaptchaCode 是否已赋值
                     * @return CaptchaCode 是否已赋值
                     * 
                     */
                    bool CaptchaCodeHasBeenSet() const;

                    /**
                     * 获取票据校验总量
                     * @return CheckTicketSum 票据校验总量
                     * 
                     */
                    int64_t GetCheckTicketSum() const;

                    /**
                     * 判断参数 CheckTicketSum 是否已赋值
                     * @return CheckTicketSum 是否已赋值
                     * 
                     */
                    bool CheckTicketSumHasBeenSet() const;

                    /**
                     * 获取票据验证通过量
                     * @return TicketThroughputSum 票据验证通过量
                     * 
                     */
                    int64_t GetTicketThroughputSum() const;

                    /**
                     * 判断参数 TicketThroughputSum 是否已赋值
                     * @return TicketThroughputSum 是否已赋值
                     * 
                     */
                    bool TicketThroughputSumHasBeenSet() const;

                    /**
                     * 获取票据验证拦截量
                     * @return TicketInterceptSum 票据验证拦截量
                     * 
                     */
                    int64_t GetTicketInterceptSum() const;

                    /**
                     * 判断参数 TicketInterceptSum 是否已赋值
                     * @return TicketInterceptSum 是否已赋值
                     * 
                     */
                    bool TicketInterceptSumHasBeenSet() const;

                private:

                    /**
                     * 请求总量
                     */
                    int64_t m_getSum;
                    bool m_getSumHasBeenSet;

                    /**
                     * 请求验证成功量
                     */
                    int64_t m_vfySuccSum;
                    bool m_vfySuccSumHasBeenSet;

                    /**
                     * 请求验证量
                     */
                    int64_t m_vfySum;
                    bool m_vfySumHasBeenSet;

                    /**
                     * 拦截攻击量
                     */
                    int64_t m_attackSum;
                    bool m_attackSumHasBeenSet;

                    /**
                     * 返回信息
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                    /**
                     * 成功返回0  其它失败
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * 票据校验总量
                     */
                    int64_t m_checkTicketSum;
                    bool m_checkTicketSumHasBeenSet;

                    /**
                     * 票据验证通过量
                     */
                    int64_t m_ticketThroughputSum;
                    bool m_ticketThroughputSumHasBeenSet;

                    /**
                     * 票据验证拦截量
                     */
                    int64_t m_ticketInterceptSum;
                    bool m_ticketInterceptSumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIDATASUMRESPONSE_H_
