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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCELANEGROUP_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCELANEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/LaneTrafficEntry.h>
#include <tencentcloud/tse/v20201207/model/GovernanceServiceDestination.h>
#include <tencentcloud/tse/v20201207/model/GovernanceLaneRule.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 泳道组
                */
                class DeleteGovernanceLaneGroup : public AbstractModel
                {
                public:
                    DeleteGovernanceLaneGroup();
                    ~DeleteGovernanceLaneGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 泳道名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取泳道组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 泳道组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置泳道组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 泳道组ID
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取泳道入口服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrafficEntries 泳道入口服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LaneTrafficEntry> GetTrafficEntries() const;

                    /**
                     * 设置泳道入口服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trafficEntries 泳道入口服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrafficEntries(const std::vector<LaneTrafficEntry>& _trafficEntries);

                    /**
                     * 判断参数 TrafficEntries 是否已赋值
                     * @return TrafficEntries 是否已赋值
                     * 
                     */
                    bool TrafficEntriesHasBeenSet() const;

                    /**
                     * 获取泳道服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Destinations 泳道服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GovernanceServiceDestination> GetDestinations() const;

                    /**
                     * 设置泳道服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destinations 泳道服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestinations(const std::vector<GovernanceServiceDestination>& _destinations);

                    /**
                     * 判断参数 Destinations 是否已赋值
                     * @return Destinations 是否已赋值
                     * 
                     */
                    bool DestinationsHasBeenSet() const;

                    /**
                     * 获取泳道组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 泳道组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置泳道组描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 泳道组描述
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取规则内容摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Revision 规则内容摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置规则内容摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _revision 规则内容摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRevision(const std::string& _revision);

                    /**
                     * 判断参数 Revision 是否已赋值
                     * @return Revision 是否已赋值
                     * 
                     */
                    bool RevisionHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取规则一致性状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Consistency 规则一致性状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConsistency() const;

                    /**
                     * 设置规则一致性状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _consistency 规则一致性状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConsistency(const std::string& _consistency);

                    /**
                     * 判断参数 Consistency 是否已赋值
                     * @return Consistency 是否已赋值
                     * 
                     */
                    bool ConsistencyHasBeenSet() const;

                    /**
                     * 获取泳道规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Rules 泳道规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GovernanceLaneRule> GetRules() const;

                    /**
                     * 设置泳道规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rules 泳道规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRules(const std::vector<GovernanceLaneRule>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                private:

                    /**
                     * 泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 泳道组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 泳道入口服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LaneTrafficEntry> m_trafficEntries;
                    bool m_trafficEntriesHasBeenSet;

                    /**
                     * 泳道服务列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GovernanceServiceDestination> m_destinations;
                    bool m_destinationsHasBeenSet;

                    /**
                     * 泳道组描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 规则内容摘要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 规则一致性状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_consistency;
                    bool m_consistencyHasBeenSet;

                    /**
                     * 泳道规则列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GovernanceLaneRule> m_rules;
                    bool m_rulesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DELETEGOVERNANCELANEGROUP_H_
