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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCELANERULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCELANERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/Argument.h>
#include <tencentcloud/tse/v20201207/model/TrafficGray.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 泳道规则
                */
                class GovernanceLaneRule : public AbstractModel
                {
                public:
                    GovernanceLaneRule();
                    ~GovernanceLaneRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD 泳道规则ID
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
                     * 获取泳道所属泳道组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneGroup 泳道所属泳道组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneGroup() const;

                    /**
                     * 设置泳道所属泳道组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneGroup 泳道所属泳道组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneGroup(const std::string& _laneGroup);

                    /**
                     * 判断参数 LaneGroup 是否已赋值
                     * @return LaneGroup 是否已赋值
                     * 
                     */
                    bool LaneGroupHasBeenSet() const;

                    /**
                     * 获取泳道规则启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Enable 泳道规则启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnable() const;

                    /**
                     * 设置泳道规则启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enable 泳道规则启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnable(const bool& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取流量标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrafficLabels 流量标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Argument> GetTrafficLabels() const;

                    /**
                     * 设置流量标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trafficLabels 流量标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrafficLabels(const std::vector<Argument>& _trafficLabels);

                    /**
                     * 判断参数 TrafficLabels 是否已赋值
                     * @return TrafficLabels 是否已赋值
                     * 
                     */
                    bool TrafficLabelsHasBeenSet() const;

                    /**
                     * 获取多个流量标签匹配方式
AND：与
OR：或
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrafficMatchMode 多个流量标签匹配方式
AND：与
OR：或
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTrafficMatchMode() const;

                    /**
                     * 设置多个流量标签匹配方式
AND：与
OR：或
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trafficMatchMode 多个流量标签匹配方式
AND：与
OR：或
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrafficMatchMode(const std::string& _trafficMatchMode);

                    /**
                     * 判断参数 TrafficMatchMode 是否已赋值
                     * @return TrafficMatchMode 是否已赋值
                     * 
                     */
                    bool TrafficMatchModeHasBeenSet() const;

                    /**
                     * 获取泳道匹配方式
STRICT：严格匹配
PERMISSIVE：宽松匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneMatchMode 泳道匹配方式
STRICT：严格匹配
PERMISSIVE：宽松匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneMatchMode() const;

                    /**
                     * 设置泳道匹配方式
STRICT：严格匹配
PERMISSIVE：宽松匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneMatchMode 泳道匹配方式
STRICT：严格匹配
PERMISSIVE：宽松匹配
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneMatchMode(const std::string& _laneMatchMode);

                    /**
                     * 判断参数 LaneMatchMode 是否已赋值
                     * @return LaneMatchMode 是否已赋值
                     * 
                     */
                    bool LaneMatchModeHasBeenSet() const;

                    /**
                     * 获取泳道灰度规则
                     * @return TrafficGray 泳道灰度规则
                     * 
                     */
                    TrafficGray GetTrafficGray() const;

                    /**
                     * 设置泳道灰度规则
                     * @param _trafficGray 泳道灰度规则
                     * 
                     */
                    void SetTrafficGray(const TrafficGray& _trafficGray);

                    /**
                     * 判断参数 TrafficGray 是否已赋值
                     * @return TrafficGray 是否已赋值
                     * 
                     */
                    bool TrafficGrayHasBeenSet() const;

                    /**
                     * 获取泳道规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 泳道规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置泳道规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 泳道规则描述
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
                     * 获取泳道标签内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneLabelValue 泳道标签内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneLabelValue() const;

                    /**
                     * 设置泳道标签内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneLabelValue 泳道标签内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneLabelValue(const std::string& _laneLabelValue);

                    /**
                     * 判断参数 LaneLabelValue 是否已赋值
                     * @return LaneLabelValue 是否已赋值
                     * 
                     */
                    bool LaneLabelValueHasBeenSet() const;

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
                     * 获取启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableTime 启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEnableTime() const;

                    /**
                     * 设置启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _enableTime 启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEnableTime(const std::string& _enableTime);

                    /**
                     * 判断参数 EnableTime 是否已赋值
                     * @return EnableTime 是否已赋值
                     * 
                     */
                    bool EnableTimeHasBeenSet() const;

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
                     * 获取泳道规则优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Priority 泳道规则优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置泳道规则优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _priority 泳道规则优先级
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取规则摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Revision 规则摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRevision() const;

                    /**
                     * 设置规则摘要
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _revision 规则摘要
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

                private:

                    /**
                     * 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 泳道所属泳道组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneGroup;
                    bool m_laneGroupHasBeenSet;

                    /**
                     * 泳道规则启用状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 流量标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Argument> m_trafficLabels;
                    bool m_trafficLabelsHasBeenSet;

                    /**
                     * 多个流量标签匹配方式
AND：与
OR：或
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_trafficMatchMode;
                    bool m_trafficMatchModeHasBeenSet;

                    /**
                     * 泳道匹配方式
STRICT：严格匹配
PERMISSIVE：宽松匹配
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneMatchMode;
                    bool m_laneMatchModeHasBeenSet;

                    /**
                     * 泳道灰度规则
                     */
                    TrafficGray m_trafficGray;
                    bool m_trafficGrayHasBeenSet;

                    /**
                     * 泳道规则描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 泳道标签内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneLabelValue;
                    bool m_laneLabelValueHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 启用时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_enableTime;
                    bool m_enableTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 泳道规则优先级
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 规则摘要
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_revision;
                    bool m_revisionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_GOVERNANCELANERULE_H_
