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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TCCAPTCHAOPTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TCCAPTCHAOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 验证码认证实例信息。
                */
                class TCCaptchaOption : public AbstractModel
                {
                public:
                    TCCaptchaOption();
                    ~TCCaptchaOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CaptchaAppId 信息。
                     * @return CaptchaAppId CaptchaAppId 信息。
                     * 
                     */
                    std::string GetCaptchaAppId() const;

                    /**
                     * 设置CaptchaAppId 信息。
                     * @param _captchaAppId CaptchaAppId 信息。
                     * 
                     */
                    void SetCaptchaAppId(const std::string& _captchaAppId);

                    /**
                     * 判断参数 CaptchaAppId 是否已赋值
                     * @return CaptchaAppId 是否已赋值
                     * 
                     */
                    bool CaptchaAppIdHasBeenSet() const;

                    /**
                     * 获取AppSecretKey 信息。
                     * @return AppSecretKey AppSecretKey 信息。
                     * 
                     */
                    std::string GetAppSecretKey() const;

                    /**
                     * 设置AppSecretKey 信息。
                     * @param _appSecretKey AppSecretKey 信息。
                     * 
                     */
                    void SetAppSecretKey(const std::string& _appSecretKey);

                    /**
                     * 判断参数 AppSecretKey 是否已赋值
                     * @return AppSecretKey 是否已赋值
                     * 
                     */
                    bool AppSecretKeyHasBeenSet() const;

                private:

                    /**
                     * CaptchaAppId 信息。
                     */
                    std::string m_captchaAppId;
                    bool m_captchaAppIdHasBeenSet;

                    /**
                     * AppSecretKey 信息。
                     */
                    std::string m_appSecretKey;
                    bool m_appSecretKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TCCAPTCHAOPTION_H_
