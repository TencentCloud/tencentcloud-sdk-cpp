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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_LANEINFO_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_LANEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/LaneGroup.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 泳道
                */
                class LaneInfo : public AbstractModel
                {
                public:
                    LaneInfo();
                    ~LaneInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneId 泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneId() const;

                    /**
                     * 设置泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneId 泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneId(const std::string& _laneId);

                    /**
                     * 判断参数 LaneId 是否已赋值
                     * @return LaneId 是否已赋值
                     * 
                     */
                    bool LaneIdHasBeenSet() const;

                    /**
                     * 获取泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneName 泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneName() const;

                    /**
                     * 设置泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneName 泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneName(const std::string& _laneName);

                    /**
                     * 判断参数 LaneName 是否已赋值
                     * @return LaneName 是否已赋值
                     * 
                     */
                    bool LaneNameHasBeenSet() const;

                    /**
                     * 获取泳道备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 泳道备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置泳道备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 泳道备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取泳道部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneGroupList 泳道部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LaneGroup> GetLaneGroupList() const;

                    /**
                     * 设置泳道部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneGroupList 泳道部署组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneGroupList(const std::vector<LaneGroup>& _laneGroupList);

                    /**
                     * 判断参数 LaneGroupList 是否已赋值
                     * @return LaneGroupList 是否已赋值
                     * 
                     */
                    bool LaneGroupListHasBeenSet() const;

                    /**
                     * 获取是否入口应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Entrance 是否入口应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEntrance() const;

                    /**
                     * 设置是否入口应用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _entrance 是否入口应用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEntrance(const bool& _entrance);

                    /**
                     * 判断参数 Entrance 是否已赋值
                     * @return Entrance 是否已赋值
                     * 
                     */
                    bool EntranceHasBeenSet() const;

                    /**
                     * 获取泳道已经关联部署组的命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceIdList 泳道已经关联部署组的命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNamespaceIdList() const;

                    /**
                     * 设置泳道已经关联部署组的命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceIdList 泳道已经关联部署组的命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceIdList(const std::vector<std::string>& _namespaceIdList);

                    /**
                     * 判断参数 NamespaceIdList 是否已赋值
                     * @return NamespaceIdList 是否已赋值
                     * 
                     */
                    bool NamespaceIdListHasBeenSet() const;

                    /**
                     * 获取泳道部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneGroupId 泳道部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneGroupId() const;

                    /**
                     * 设置泳道部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneGroupId 泳道部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneGroupId(const std::string& _laneGroupId);

                    /**
                     * 判断参数 LaneGroupId 是否已赋值
                     * @return LaneGroupId 是否已赋值
                     * 
                     */
                    bool LaneGroupIdHasBeenSet() const;

                private:

                    /**
                     * 泳道ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneId;
                    bool m_laneIdHasBeenSet;

                    /**
                     * 泳道名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneName;
                    bool m_laneNameHasBeenSet;

                    /**
                     * 泳道备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 泳道部署组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LaneGroup> m_laneGroupList;
                    bool m_laneGroupListHasBeenSet;

                    /**
                     * 是否入口应用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_entrance;
                    bool m_entranceHasBeenSet;

                    /**
                     * 泳道已经关联部署组的命名空间列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_namespaceIdList;
                    bool m_namespaceIdListHasBeenSet;

                    /**
                     * 泳道部署组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneGroupId;
                    bool m_laneGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_LANEINFO_H_
