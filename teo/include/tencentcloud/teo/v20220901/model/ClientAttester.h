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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/TCRCEOption.h>
#include <tencentcloud/teo/v20220901/model/TCCaptchaOption.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 认证选项配置。
                */
                class ClientAttester : public AbstractModel
                {
                public:
                    ClientAttester();
                    ~ClientAttester() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取认证选项 ID。
                     * @return Id 认证选项 ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置认证选项 ID。
                     * @param _id 认证选项 ID。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取认证选项名称。
                     * @return Name 认证选项名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置认证选项名称。
                     * @param _name 认证选项名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取认证规则类型。仅出参返回，取值有：
<li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li>
<li>CUSTOM: 用户自定义规则。</li>
                     * @return Type 认证规则类型。仅出参返回，取值有：
<li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li>
<li>CUSTOM: 用户自定义规则。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置认证规则类型。仅出参返回，取值有：
<li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li>
<li>CUSTOM: 用户自定义规则。</li>
                     * @param _type 认证规则类型。仅出参返回，取值有：
<li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li>
<li>CUSTOM: 用户自定义规则。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取认证方法。取值有：
<li>TC-RCE: 使用全栈式风控引擎进行认证；</li>
<li>TC-CAPTCHA: 使用天御验证码进行认证。</li>
                     * @return AttesterSource 认证方法。取值有：
<li>TC-RCE: 使用全栈式风控引擎进行认证；</li>
<li>TC-CAPTCHA: 使用天御验证码进行认证。</li>
                     * 
                     */
                    std::string GetAttesterSource() const;

                    /**
                     * 设置认证方法。取值有：
<li>TC-RCE: 使用全栈式风控引擎进行认证；</li>
<li>TC-CAPTCHA: 使用天御验证码进行认证。</li>
                     * @param _attesterSource 认证方法。取值有：
<li>TC-RCE: 使用全栈式风控引擎进行认证；</li>
<li>TC-CAPTCHA: 使用天御验证码进行认证。</li>
                     * 
                     */
                    void SetAttesterSource(const std::string& _attesterSource);

                    /**
                     * 判断参数 AttesterSource 是否已赋值
                     * @return AttesterSource 是否已赋值
                     * 
                     */
                    bool AttesterSourceHasBeenSet() const;

                    /**
                     * 获取认证有效时间。默认为 60s，支持的单位有：
<li>s：秒，取值范围 60～43200；</li>
<li>m：分，取值范围 1～720；</li>
<li>h：小时，取值范围 1～12。</li>
                     * @return AttesterDuration 认证有效时间。默认为 60s，支持的单位有：
<li>s：秒，取值范围 60～43200；</li>
<li>m：分，取值范围 1～720；</li>
<li>h：小时，取值范围 1～12。</li>
                     * 
                     */
                    std::string GetAttesterDuration() const;

                    /**
                     * 设置认证有效时间。默认为 60s，支持的单位有：
<li>s：秒，取值范围 60～43200；</li>
<li>m：分，取值范围 1～720；</li>
<li>h：小时，取值范围 1～12。</li>
                     * @param _attesterDuration 认证有效时间。默认为 60s，支持的单位有：
<li>s：秒，取值范围 60～43200；</li>
<li>m：分，取值范围 1～720；</li>
<li>h：小时，取值范围 1～12。</li>
                     * 
                     */
                    void SetAttesterDuration(const std::string& _attesterDuration);

                    /**
                     * 判断参数 AttesterDuration 是否已赋值
                     * @return AttesterDuration 是否已赋值
                     * 
                     */
                    bool AttesterDurationHasBeenSet() const;

                    /**
                     * 获取TC-RCE 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * @return TCRCEOption TC-RCE 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * 
                     */
                    TCRCEOption GetTCRCEOption() const;

                    /**
                     * 设置TC-RCE 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * @param _tCRCEOption TC-RCE 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     * 
                     */
                    void SetTCRCEOption(const TCRCEOption& _tCRCEOption);

                    /**
                     * 判断参数 TCRCEOption 是否已赋值
                     * @return TCRCEOption 是否已赋值
                     * 
                     */
                    bool TCRCEOptionHasBeenSet() const;

                    /**
                     * 获取TC-CAPTCHA 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * @return TCCaptchaOption TC-CAPTCHA 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * 
                     */
                    TCCaptchaOption GetTCCaptchaOption() const;

                    /**
                     * 设置TC-CAPTCHA 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * @param _tCCaptchaOption TC-CAPTCHA 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     * 
                     */
                    void SetTCCaptchaOption(const TCCaptchaOption& _tCCaptchaOption);

                    /**
                     * 判断参数 TCCaptchaOption 是否已赋值
                     * @return TCCaptchaOption 是否已赋值
                     * 
                     */
                    bool TCCaptchaOptionHasBeenSet() const;

                private:

                    /**
                     * 认证选项 ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 认证选项名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 认证规则类型。仅出参返回，取值有：
<li>PRESET: 系统预置规则，仅允许修改 AttesterDuration；</li>
<li>CUSTOM: 用户自定义规则。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 认证方法。取值有：
<li>TC-RCE: 使用全栈式风控引擎进行认证；</li>
<li>TC-CAPTCHA: 使用天御验证码进行认证。</li>
                     */
                    std::string m_attesterSource;
                    bool m_attesterSourceHasBeenSet;

                    /**
                     * 认证有效时间。默认为 60s，支持的单位有：
<li>s：秒，取值范围 60～43200；</li>
<li>m：分，取值范围 1～720；</li>
<li>h：小时，取值范围 1～12。</li>
                     */
                    std::string m_attesterDuration;
                    bool m_attesterDurationHasBeenSet;

                    /**
                     * TC-RCE 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-RCE 时，此字段必填。</li>
                     */
                    TCRCEOption m_tCRCEOption;
                    bool m_tCRCEOptionHasBeenSet;

                    /**
                     * TC-CAPTCHA 认证的配置信息。
<li>当 AttesterSource 参数值为 TC-CAPTCHA 时，此字段必填。</li>
                     */
                    TCCaptchaOption m_tCCaptchaOption;
                    bool m_tCCaptchaOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CLIENTATTESTER_H_
