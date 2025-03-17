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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRESULTRESPONSE_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRESULTRESPONSE_H_

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
                * DescribeCaptchaMiniResult返回参数结构体
                */
                class DescribeCaptchaMiniResultResponse : public AbstractModel
                {
                public:
                    DescribeCaptchaMiniResultResponse();
                    ~DescribeCaptchaMiniResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取1     ticket verification succeeded     票据验证成功
7     CaptchaAppId does not match     票据与验证码应用APPID不匹配
8     ticket expired     票据超时
10    ticket format error     票据格式不正确
15    ticket decryption failed     票据解密失败
16    CaptchaAppId wrong format     检查验证码应用APPID错误
21    (1)ticket error     票据验证错误 (2)diff 一般是由于用户网络较差，导致前端自动容灾，而生成了容灾票据，业务侧可根据需要进行跳过或二次处理
25    invalid ticket     无效票据
26    system internal error     系统内部错误
31    UnauthorizedOperation.Unauthorized   无有效套餐包/账户已欠费
100   param err     参数校验错误
                     * @return CaptchaCode 1     ticket verification succeeded     票据验证成功
7     CaptchaAppId does not match     票据与验证码应用APPID不匹配
8     ticket expired     票据超时
10    ticket format error     票据格式不正确
15    ticket decryption failed     票据解密失败
16    CaptchaAppId wrong format     检查验证码应用APPID错误
21    (1)ticket error     票据验证错误 (2)diff 一般是由于用户网络较差，导致前端自动容灾，而生成了容灾票据，业务侧可根据需要进行跳过或二次处理
25    invalid ticket     无效票据
26    system internal error     系统内部错误
31    UnauthorizedOperation.Unauthorized   无有效套餐包/账户已欠费
100   param err     参数校验错误
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
                     * 获取状态描述及验证错误信息
                     * @return CaptchaMsg 状态描述及验证错误信息
                     * 
                     */
                    std::string GetCaptchaMsg() const;

                    /**
                     * 判断参数 CaptchaMsg 是否已赋值
                     * @return CaptchaMsg 是否已赋值
                     * 
                     */
                    bool CaptchaMsgHasBeenSet() const;

                private:

                    /**
                     * 1     ticket verification succeeded     票据验证成功
7     CaptchaAppId does not match     票据与验证码应用APPID不匹配
8     ticket expired     票据超时
10    ticket format error     票据格式不正确
15    ticket decryption failed     票据解密失败
16    CaptchaAppId wrong format     检查验证码应用APPID错误
21    (1)ticket error     票据验证错误 (2)diff 一般是由于用户网络较差，导致前端自动容灾，而生成了容灾票据，业务侧可根据需要进行跳过或二次处理
25    invalid ticket     无效票据
26    system internal error     系统内部错误
31    UnauthorizedOperation.Unauthorized   无有效套餐包/账户已欠费
100   param err     参数校验错误
                     */
                    int64_t m_captchaCode;
                    bool m_captchaCodeHasBeenSet;

                    /**
                     * 状态描述及验证错误信息
                     */
                    std::string m_captchaMsg;
                    bool m_captchaMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAMINIRESULTRESPONSE_H_
