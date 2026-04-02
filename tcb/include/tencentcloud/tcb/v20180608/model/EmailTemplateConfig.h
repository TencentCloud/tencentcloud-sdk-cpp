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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_EMAILTEMPLATECONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_EMAILTEMPLATECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/LocalizedTemplate.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 邮件模板配置
                */
                class EmailTemplateConfig : public AbstractModel
                {
                public:
                    EmailTemplateConfig();
                    ~EmailTemplateConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>注册登录模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegisterSignIn <p>注册登录模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LocalizedTemplate GetRegisterSignIn() const;

                    /**
                     * 设置<p>注册登录模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registerSignIn <p>注册登录模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegisterSignIn(const LocalizedTemplate& _registerSignIn);

                    /**
                     * 判断参数 RegisterSignIn 是否已赋值
                     * @return RegisterSignIn 是否已赋值
                     * 
                     */
                    bool RegisterSignInHasBeenSet() const;

                    /**
                     * 获取<p>默认模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DefaultTpl <p>默认模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LocalizedTemplate GetDefaultTpl() const;

                    /**
                     * 设置<p>默认模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _defaultTpl <p>默认模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDefaultTpl(const LocalizedTemplate& _defaultTpl);

                    /**
                     * 判断参数 DefaultTpl 是否已赋值
                     * @return DefaultTpl 是否已赋值
                     * 
                     */
                    bool DefaultTplHasBeenSet() const;

                private:

                    /**
                     * <p>注册登录模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalizedTemplate m_registerSignIn;
                    bool m_registerSignInHasBeenSet;

                    /**
                     * <p>默认模板</p><p>入参限制：模板中必须包含{{.VerificationCode}}变量，用于邮件中验证码的展示，可选变量有{{.Usage}}、{{.ExpireMinutes}}、{{.Email}}。邮件模板中禁止包含 script、javascript、onclick、onload、iframe、link 标签及 CSS expression、CSS url() 等</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LocalizedTemplate m_defaultTpl;
                    bool m_defaultTplHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EMAILTEMPLATECONFIG_H_
