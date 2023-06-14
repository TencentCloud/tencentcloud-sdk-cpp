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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLCONFIG_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnAclGroup.h>
#include <tencentcloud/cdn/v20180606/model/ScdnErrorPage.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedScdnAclGroup.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN访问控制
                */
                class ScdnAclConfig : public AbstractModel
                {
                public:
                    ScdnAclConfig();
                    ~ScdnAclConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SCDN访问控制配置开关，取值有：
on：开启
off：关闭
                     * @return Switch SCDN访问控制配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置SCDN访问控制配置开关，取值有：
on：开启
off：关闭
                     * @param _switch SCDN访问控制配置开关，取值有：
on：开启
off：关闭
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取新版本请使用AdvancedScriptData
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptData 新版本请使用AdvancedScriptData
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ScdnAclGroup> GetScriptData() const;

                    /**
                     * 设置新版本请使用AdvancedScriptData
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptData 新版本请使用AdvancedScriptData
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptData(const std::vector<ScdnAclGroup>& _scriptData);

                    /**
                     * 判断参数 ScriptData 是否已赋值
                     * @return ScriptData 是否已赋值
                     * 
                     */
                    bool ScriptDataHasBeenSet() const;

                    /**
                     * 获取错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrorPage 错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ScdnErrorPage GetErrorPage() const;

                    /**
                     * 设置错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errorPage 错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrorPage(const ScdnErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     * 
                     */
                    bool ErrorPageHasBeenSet() const;

                    /**
                     * 获取Acl规则组，switch为on时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AdvancedScriptData Acl规则组，switch为on时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdvancedScdnAclGroup> GetAdvancedScriptData() const;

                    /**
                     * 设置Acl规则组，switch为on时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _advancedScriptData Acl规则组，switch为on时必填
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAdvancedScriptData(const std::vector<AdvancedScdnAclGroup>& _advancedScriptData);

                    /**
                     * 判断参数 AdvancedScriptData 是否已赋值
                     * @return AdvancedScriptData 是否已赋值
                     * 
                     */
                    bool AdvancedScriptDataHasBeenSet() const;

                private:

                    /**
                     * SCDN访问控制配置开关，取值有：
on：开启
off：关闭
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 新版本请使用AdvancedScriptData
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ScdnAclGroup> m_scriptData;
                    bool m_scriptDataHasBeenSet;

                    /**
                     * 错误页面配置
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ScdnErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                    /**
                     * Acl规则组，switch为on时必填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdvancedScdnAclGroup> m_advancedScriptData;
                    bool m_advancedScriptDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLCONFIG_H_
