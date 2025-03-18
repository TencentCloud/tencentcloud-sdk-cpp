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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUPMETA_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUPMETA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ManagedRuleDetail.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 托管规则组信息
                */
                class ManagedRuleGroupMeta : public AbstractModel
                {
                public:
                    ManagedRuleGroupMeta();
                    ~ManagedRuleGroupMeta() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取托管规则组描述，仅出参。
                     * @return GroupDetail 托管规则组描述，仅出参。
                     * 
                     */
                    std::string GetGroupDetail() const;

                    /**
                     * 设置托管规则组描述，仅出参。
                     * @param _groupDetail 托管规则组描述，仅出参。
                     * 
                     */
                    void SetGroupDetail(const std::string& _groupDetail);

                    /**
                     * 判断参数 GroupDetail 是否已赋值
                     * @return GroupDetail 是否已赋值
                     * 
                     */
                    bool GroupDetailHasBeenSet() const;

                    /**
                     * 获取托管规则组名称，仅出参。
                     * @return GroupName 托管规则组名称，仅出参。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置托管规则组名称，仅出参。
                     * @param _groupName 托管规则组名称，仅出参。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取当前托管规则组下的所有子规则信息，仅出参。
                     * @return RuleDetails 当前托管规则组下的所有子规则信息，仅出参。
                     * 
                     */
                    std::vector<ManagedRuleDetail> GetRuleDetails() const;

                    /**
                     * 设置当前托管规则组下的所有子规则信息，仅出参。
                     * @param _ruleDetails 当前托管规则组下的所有子规则信息，仅出参。
                     * 
                     */
                    void SetRuleDetails(const std::vector<ManagedRuleDetail>& _ruleDetails);

                    /**
                     * 判断参数 RuleDetails 是否已赋值
                     * @return RuleDetails 是否已赋值
                     * 
                     */
                    bool RuleDetailsHasBeenSet() const;

                private:

                    /**
                     * 托管规则组描述，仅出参。
                     */
                    std::string m_groupDetail;
                    bool m_groupDetailHasBeenSet;

                    /**
                     * 托管规则组名称，仅出参。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 当前托管规则组下的所有子规则信息，仅出参。
                     */
                    std::vector<ManagedRuleDetail> m_ruleDetails;
                    bool m_ruleDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MANAGEDRULEGROUPMETA_H_
