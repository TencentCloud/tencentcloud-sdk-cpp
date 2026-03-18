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
                     * 获取smtp配置
                     * @return SmtpConfig smtp配置
                     * 
                     */
                    EmailSmtpConfig GetSmtpConfig() const;

                    /**
                     * 设置smtp配置
                     * @param _smtpConfig smtp配置
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
                     * 获取可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。
                     * @return On 可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。
                     * 
                     */
                    std::string GetOn() const;

                    /**
                     * 设置可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。
                     * @param _on 可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。
                     * 
                     */
                    void SetOn(const std::string& _on);

                    /**
                     * 判断参数 On 是否已赋值
                     * @return On 是否已赋值
                     * 
                     */
                    bool OnHasBeenSet() const;

                private:

                    /**
                     * smtp配置
                     */
                    EmailSmtpConfig m_smtpConfig;
                    bool m_smtpConfigHasBeenSet;

                    /**
                     * 可选：TRUE，FALSE，如果On为TRUE，则表示采用默认代发。
                     */
                    std::string m_on;
                    bool m_onHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_EMAILPROVIDERCONFIG_H_
