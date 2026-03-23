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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_MCPSECURITYRULESVO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_MCPSECURITYRULESVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 绑定的安全规则列表
                */
                class McpSecurityRulesVO : public AbstractModel
                {
                public:
                    McpSecurityRulesVO();
                    ~McpSecurityRulesVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return ID 规则ID
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置规则ID
                     * @param _iD 规则ID
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取规则类型
                     * @return Type 规则类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置规则类型
                     * @param _type 规则类型
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
                     * 获取规则名称
                     * @return Name 规则名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置规则名称
                     * @param _name 规则名称
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
                     * 获取规则描述
                     * @return Description 规则描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置规则描述
                     * @param _description 规则描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取风险等级
                     * @return RiskLevel 风险等级
                     * 
                     */
                    std::string GetRiskLevel() const;

                    /**
                     * 设置风险等级
                     * @param _riskLevel 风险等级
                     * 
                     */
                    void SetRiskLevel(const std::string& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取版本号
                     * @return VersionNumber 版本号
                     * 
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置版本号
                     * @param _versionNumber 版本号
                     * 
                     */
                    void SetVersionNumber(const std::string& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取状态开关
                     * @return Status 状态开关
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态开关
                     * @param _status 状态开关
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取当前选择的处置动作
                     * @return Act 当前选择的处置动作
                     * 
                     */
                    std::string GetAct() const;

                    /**
                     * 设置当前选择的处置动作
                     * @param _act 当前选择的处置动作
                     * 
                     */
                    void SetAct(const std::string& _act);

                    /**
                     * 判断参数 Act 是否已赋值
                     * @return Act 是否已赋值
                     * 
                     */
                    bool ActHasBeenSet() const;

                    /**
                     * 获取支持的处置动作
                     * @return SupportActs 支持的处置动作
                     * 
                     */
                    std::vector<std::string> GetSupportActs() const;

                    /**
                     * 设置支持的处置动作
                     * @param _supportActs 支持的处置动作
                     * 
                     */
                    void SetSupportActs(const std::vector<std::string>& _supportActs);

                    /**
                     * 判断参数 SupportActs 是否已赋值
                     * @return SupportActs 是否已赋值
                     * 
                     */
                    bool SupportActsHasBeenSet() const;

                    /**
                     * 获取内容类型
                     * @return BodyType 内容类型
                     * 
                     */
                    std::string GetBodyType() const;

                    /**
                     * 设置内容类型
                     * @param _bodyType 内容类型
                     * 
                     */
                    void SetBodyType(const std::string& _bodyType);

                    /**
                     * 判断参数 BodyType 是否已赋值
                     * @return BodyType 是否已赋值
                     * 
                     */
                    bool BodyTypeHasBeenSet() const;

                    /**
                     * 获取icon类型
                     * @return IconType icon类型
                     * 
                     */
                    std::string GetIconType() const;

                    /**
                     * 设置icon类型
                     * @param _iconType icon类型
                     * 
                     */
                    void SetIconType(const std::string& _iconType);

                    /**
                     * 判断参数 IconType 是否已赋值
                     * @return IconType 是否已赋值
                     * 
                     */
                    bool IconTypeHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 规则类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 规则名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 风险等级
                     */
                    std::string m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * 版本号
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * 状态开关
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 当前选择的处置动作
                     */
                    std::string m_act;
                    bool m_actHasBeenSet;

                    /**
                     * 支持的处置动作
                     */
                    std::vector<std::string> m_supportActs;
                    bool m_supportActsHasBeenSet;

                    /**
                     * 内容类型
                     */
                    std::string m_bodyType;
                    bool m_bodyTypeHasBeenSet;

                    /**
                     * icon类型
                     */
                    std::string m_iconType;
                    bool m_iconTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_MCPSECURITYRULESVO_H_
