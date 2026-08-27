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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONTASK_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 实例同步/实例复制任务列表
                */
                class ReplicationTask : public AbstractModel
                {
                public:
                    ReplicationTask();
                    ~ReplicationTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceType 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取源资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SrcResource 源资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSrcResource() const;

                    /**
                     * 设置源资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _srcResource 源资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSrcResource(const std::string& _srcResource);

                    /**
                     * 判断参数 SrcResource 是否已赋值
                     * @return SrcResource 是否已赋值
                     * 
                     */
                    bool SrcResourceHasBeenSet() const;

                    /**
                     * 获取目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DstResource 目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDstResource() const;

                    /**
                     * 设置目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dstResource 目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDstResource(const std::string& _dstResource);

                    /**
                     * 判断参数 DstResource 是否已赋值
                     * @return DstResource 是否已赋值
                     * 
                     */
                    bool DstResourceHasBeenSet() const;

                    /**
                     * 获取Job任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobID Job任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobID() const;

                    /**
                     * 设置Job任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobID Job任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobID(const std::string& _jobID);

                    /**
                     * 判断参数 JobID 是否已赋值
                     * @return JobID 是否已赋值
                     * 
                     */
                    bool JobIDHasBeenSet() const;

                    /**
                     * 获取任务执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务执行状态
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 资源类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 源资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_srcResource;
                    bool m_srcResourceHasBeenSet;

                    /**
                     * 目的资源
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dstResource;
                    bool m_dstResourceHasBeenSet;

                    /**
                     * Job任务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobID;
                    bool m_jobIDHasBeenSet;

                    /**
                     * 任务执行状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_REPLICATIONTASK_H_
