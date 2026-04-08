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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_TCEOCAPTCHAOPTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_TCEOCAPTCHAOPTION_H_

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
                * EdgeOne 人机校验认证实例信息。
                */
                class TCEOCaptchaOption : public AbstractModel
                {
                public:
                    TCEOCaptchaOption();
                    ~TCEOCaptchaOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EdgeOne 人机校验模式，取值有：<li> Invisible：无感验证；</li><li>Adaptive：自适应交互验证。</li>
                     * @return CaptchaMode EdgeOne 人机校验模式，取值有：<li> Invisible：无感验证；</li><li>Adaptive：自适应交互验证。</li>
                     * 
                     */
                    std::string GetCaptchaMode() const;

                    /**
                     * 设置EdgeOne 人机校验模式，取值有：<li> Invisible：无感验证；</li><li>Adaptive：自适应交互验证。</li>
                     * @param _captchaMode EdgeOne 人机校验模式，取值有：<li> Invisible：无感验证；</li><li>Adaptive：自适应交互验证。</li>
                     * 
                     */
                    void SetCaptchaMode(const std::string& _captchaMode);

                    /**
                     * 判断参数 CaptchaMode 是否已赋值
                     * @return CaptchaMode 是否已赋值
                     * 
                     */
                    bool CaptchaModeHasBeenSet() const;

                private:

                    /**
                     * EdgeOne 人机校验模式，取值有：<li> Invisible：无感验证；</li><li>Adaptive：自适应交互验证。</li>
                     */
                    std::string m_captchaMode;
                    bool m_captchaModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_TCEOCAPTCHAOPTION_H_
