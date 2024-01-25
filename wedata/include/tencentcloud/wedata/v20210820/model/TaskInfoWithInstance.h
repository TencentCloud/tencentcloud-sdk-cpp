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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOWITHINSTANCE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOWITHINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务信息，携带了实例时间
                */
                class TaskInfoWithInstance : public AbstractModel
                {
                public:
                    TaskInfoWithInstance();
                    ~TaskInfoWithInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParentId() const;

                    /**
                     * 设置任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentId 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentId(const std::string& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取实例时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceRunDateList 实例时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetInstanceRunDateList() const;

                    /**
                     * 设置实例时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceRunDateList 实例时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceRunDateList(const std::vector<std::string>& _instanceRunDateList);

                    /**
                     * 判断参数 InstanceRunDateList 是否已赋值
                     * @return InstanceRunDateList 是否已赋值
                     * 
                     */
                    bool InstanceRunDateListHasBeenSet() const;

                    /**
                     * 获取实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceCount 实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetInstanceCount() const;

                    /**
                     * 设置实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceCount 实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceCount(const uint64_t& _instanceCount);

                    /**
                     * 判断参数 InstanceCount 是否已赋值
                     * @return InstanceCount 是否已赋值
                     * 
                     */
                    bool InstanceCountHasBeenSet() const;

                    /**
                     * 获取调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SchedulerDescription 调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSchedulerDescription() const;

                    /**
                     * 设置调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _schedulerDescription 调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSchedulerDescription(const std::string& _schedulerDescription);

                    /**
                     * 判断参数 SchedulerDescription 是否已赋值
                     * @return SchedulerDescription 是否已赋值
                     * 
                     */
                    bool SchedulerDescriptionHasBeenSet() const;

                private:

                    /**
                     * 任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 实例时间列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instanceRunDateList;
                    bool m_instanceRunDateListHasBeenSet;

                    /**
                     * 实例个数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_instanceCount;
                    bool m_instanceCountHasBeenSet;

                    /**
                     * 调度描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_schedulerDescription;
                    bool m_schedulerDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKINFOWITHINSTANCE_H_
