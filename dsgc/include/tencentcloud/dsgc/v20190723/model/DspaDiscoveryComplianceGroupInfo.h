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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOMPLIANCEGROUPINFO_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOMPLIANCEGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryComplianceGroupRule.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 合规组信息
                */
                class DspaDiscoveryComplianceGroupInfo : public AbstractModel
                {
                public:
                    DspaDiscoveryComplianceGroupInfo();
                    ~DspaDiscoveryComplianceGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合规组ID
                     * @return ComplianceGroupId 合规组ID
                     * 
                     */
                    int64_t GetComplianceGroupId() const;

                    /**
                     * 设置合规组ID
                     * @param _complianceGroupId 合规组ID
                     * 
                     */
                    void SetComplianceGroupId(const int64_t& _complianceGroupId);

                    /**
                     * 判断参数 ComplianceGroupId 是否已赋值
                     * @return ComplianceGroupId 是否已赋值
                     * 
                     */
                    bool ComplianceGroupIdHasBeenSet() const;

                    /**
                     * 获取合规组名称
                     * @return Name 合规组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置合规组名称
                     * @param _name 合规组名称
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
                     * 获取合规组描述信息
                     * @return Description 合规组描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置合规组描述信息
                     * @param _description 合规组描述信息
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
                     * 获取合规组类型；0 默认合规组，1 系统合规组（除默认合规组外）, 2 自定义合规组
                     * @return ComplianceGroupType 合规组类型；0 默认合规组，1 系统合规组（除默认合规组外）, 2 自定义合规组
                     * 
                     */
                    int64_t GetComplianceGroupType() const;

                    /**
                     * 设置合规组类型；0 默认合规组，1 系统合规组（除默认合规组外）, 2 自定义合规组
                     * @param _complianceGroupType 合规组类型；0 默认合规组，1 系统合规组（除默认合规组外）, 2 自定义合规组
                     * 
                     */
                    void SetComplianceGroupType(const int64_t& _complianceGroupType);

                    /**
                     * 判断参数 ComplianceGroupType 是否已赋值
                     * @return ComplianceGroupType 是否已赋值
                     * 
                     */
                    bool ComplianceGroupTypeHasBeenSet() const;

                    /**
                     * 获取合规组对应的规则项
                     * @return ComplianceGroupRules 合规组对应的规则项
                     * 
                     */
                    std::vector<DspaDiscoveryComplianceGroupRule> GetComplianceGroupRules() const;

                    /**
                     * 设置合规组对应的规则项
                     * @param _complianceGroupRules 合规组对应的规则项
                     * 
                     */
                    void SetComplianceGroupRules(const std::vector<DspaDiscoveryComplianceGroupRule>& _complianceGroupRules);

                    /**
                     * 判断参数 ComplianceGroupRules 是否已赋值
                     * @return ComplianceGroupRules 是否已赋值
                     * 
                     */
                    bool ComplianceGroupRulesHasBeenSet() const;

                    /**
                     * 获取合规组对应的分级组ID
                     * @return LevelGroupId 合规组对应的分级组ID
                     * 
                     */
                    uint64_t GetLevelGroupId() const;

                    /**
                     * 设置合规组对应的分级组ID
                     * @param _levelGroupId 合规组对应的分级组ID
                     * 
                     */
                    void SetLevelGroupId(const uint64_t& _levelGroupId);

                    /**
                     * 判断参数 LevelGroupId 是否已赋值
                     * @return LevelGroupId 是否已赋值
                     * 
                     */
                    bool LevelGroupIdHasBeenSet() const;

                    /**
                     * 获取是否禁止使用（true，禁止使用，false，可以使用）
                     * @return Disabled 是否禁止使用（true，禁止使用，false，可以使用）
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置是否禁止使用（true，禁止使用，false，可以使用）
                     * @param _disabled 是否禁止使用（true，禁止使用，false，可以使用）
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                    /**
                     * 获取是否别名
                     * @return IsAlias 是否别名
                     * 
                     */
                    bool GetIsAlias() const;

                    /**
                     * 设置是否别名
                     * @param _isAlias 是否别名
                     * 
                     */
                    void SetIsAlias(const bool& _isAlias);

                    /**
                     * 判断参数 IsAlias 是否已赋值
                     * @return IsAlias 是否已赋值
                     * 
                     */
                    bool IsAliasHasBeenSet() const;

                    /**
                     * 获取1代表模版开启，0代表模版关闭
                     * @return Status 1代表模版开启，0代表模版关闭
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1代表模版开启，0代表模版关闭
                     * @param _status 1代表模版开启，0代表模版关闭
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取模版最后修改时间
                     * @return ModifyTime 模版最后修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置模版最后修改时间
                     * @param _modifyTime 模版最后修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 合规组ID
                     */
                    int64_t m_complianceGroupId;
                    bool m_complianceGroupIdHasBeenSet;

                    /**
                     * 合规组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 合规组描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 合规组类型；0 默认合规组，1 系统合规组（除默认合规组外）, 2 自定义合规组
                     */
                    int64_t m_complianceGroupType;
                    bool m_complianceGroupTypeHasBeenSet;

                    /**
                     * 合规组对应的规则项
                     */
                    std::vector<DspaDiscoveryComplianceGroupRule> m_complianceGroupRules;
                    bool m_complianceGroupRulesHasBeenSet;

                    /**
                     * 合规组对应的分级组ID
                     */
                    uint64_t m_levelGroupId;
                    bool m_levelGroupIdHasBeenSet;

                    /**
                     * 是否禁止使用（true，禁止使用，false，可以使用）
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                    /**
                     * 是否别名
                     */
                    bool m_isAlias;
                    bool m_isAliasHasBeenSet;

                    /**
                     * 1代表模版开启，0代表模版关闭
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 模版最后修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOMPLIANCEGROUPINFO_H_
