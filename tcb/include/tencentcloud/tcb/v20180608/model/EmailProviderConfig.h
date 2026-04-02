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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EMAILPROVIDERCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EMAILPROVIDERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/EmailSmtpConfig.h>
#include <tencentcloud/tcb/v20180608/model/EmailTemplateConfig.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 邮箱登录配置
                */
                class EmailProviderConfig : public AbstractModel
                {
                public:
                    EmailProviderConfig();
                    ~EmailProviderConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>smtp配置</p>
                     * @return SmtpConfig <p>smtp配置</p>
                     * 
                     */
                    EmailSmtpConfig GetSmtpConfig() const;

                    /**
                     * 设置<p>smtp配置</p>
                     * @param _smtpConfig <p>smtp配置</p>
                     * 
                     */
                    void SetSmtpConfig(const EmailSmtpConfig& _smtpConfig);

                    /**
                     * 判断参数 SmtpConfig 是否已赋值
                     * @return SmtpConfig 是否已赋值
                     * 
                     */
                    bool SmtpConfigHasBeenSet() const;

                    /**
                     * 获取<p>可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。</p>
                     * @return On <p>可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。</p>
                     * 
                     */
                    std::string GetOn() const;

                    /**
                     * 设置<p>可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。</p>
                     * @param _on <p>可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。</p>
                     * 
                     */
                    void SetOn(const std::string& _on);

                    /**
                     * 判断参数 On 是否已赋值
                     * @return On 是否已赋值
                     * 
                     */
                    bool OnHasBeenSet() const;

                    /**
                     * 获取<p>邮件模板配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TemplateConfig <p>邮件模板配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    EmailTemplateConfig GetTemplateConfig() const;

                    /**
                     * 设置<p>邮件模板配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _templateConfig <p>邮件模板配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTemplateConfig(const EmailTemplateConfig& _templateConfig);

                    /**
                     * 判断参数 TemplateConfig 是否已赋值
                     * @return TemplateConfig 是否已赋值
                     * 
                     */
                    bool TemplateConfigHasBeenSet() const;

                private:

                    /**
                     * <p>smtp配置</p>
                     */
                    EmailSmtpConfig m_smtpConfig;
                    bool m_smtpConfigHasBeenSet;

                    /**
                     * <p>可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。</p>
                     */
                    std::string m_on;
                    bool m_onHasBeenSet;

                    /**
                     * <p>邮件模板配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    EmailTemplateConfig m_templateConfig;
                    bool m_templateConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EMAILPROVIDERCONFIG_H_
