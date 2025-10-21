/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAAPPIDINFOREQUEST_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAAPPIDINFOREQUEST_H_

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
                * DescribeCaptchaAppIdInfo请求参数结构体
                */
                class DescribeCaptchaAppIdInfoRequest : public AbstractModel
                {
                public:
                    DescribeCaptchaAppIdInfoRequest();
                    ~DescribeCaptchaAppIdInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取验证码应用注册APPID
                     * @return CaptchaAppId 验证码应用注册APPID
                     * 
                     */
                    uint64_t GetCaptchaAppId() const;

                    /**
                     * 设置验证码应用注册APPID
                     * @param _captchaAppId 验证码应用注册APPID
                     * 
                     */
                    void SetCaptchaAppId(const uint64_t& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                private:

                    /**
                     * 验证码应用注册APPID
                     */
                    uint64_t m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_DESCRIBECAPTCHAAPPIDINFOREQUEST_H_
