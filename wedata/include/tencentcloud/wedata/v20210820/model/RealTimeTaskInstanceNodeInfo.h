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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCENODEINFO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCENODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceNodeInfo.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实时任务实例当前的节点信息
                */
                class RealTimeTaskInstanceNodeInfo : public AbstractModel
                {
                public:
                    RealTimeTaskInstanceNodeInfo();
                    ~RealTimeTaskInstanceNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskName() const;

                    /**
                     * 设置任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskName 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskName(const std::string& _taskName);

                    /**
                     * 判断参数 TaskName 是否已赋值
                     * @return TaskName 是否已赋值
                     * 
                     */
                    bool TaskNameHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取实时任务实例节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceNodeInfoList 实时任务实例节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<InstanceNodeInfo> GetInstanceNodeInfoList() const;

                    /**
                     * 设置实时任务实例节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _instanceNodeInfoList 实时任务实例节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstanceNodeInfoList(const std::vector<InstanceNodeInfo>& _instanceNodeInfoList);

                    /**
                     * 判断参数 InstanceNodeInfoList 是否已赋值
                     * @return InstanceNodeInfoList 是否已赋值
                     * 
                     */
                    bool InstanceNodeInfoListHasBeenSet() const;

                private:

                    /**
                     * 任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskName;
                    bool m_taskNameHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实时任务实例节点信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<InstanceNodeInfo> m_instanceNodeInfoList;
                    bool m_instanceNodeInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REALTIMETASKINSTANCENODEINFO_H_
