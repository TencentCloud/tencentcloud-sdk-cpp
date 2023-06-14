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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBRESULT_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * 复制作业单条明细结果
                */
                class CopyJobResult : public AbstractModel
                {
                public:
                    CopyJobResult();
                    ~CopyJobResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取原作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 原作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置原作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 原作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取原作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobName 原作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置原作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobName 原作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     * 
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取新作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetJobName 新作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetJobName() const;

                    /**
                     * 设置新作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetJobName 新作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetJobName(const std::string& _targetJobName);

                    /**
                     * 判断参数 TargetJobName 是否已赋值
                     * @return TargetJobName 是否已赋值
                     * 
                     */
                    bool TargetJobNameHasBeenSet() const;

                    /**
                     * 获取新作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetJobId 新作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTargetJobId() const;

                    /**
                     * 设置新作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetJobId 新作业id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetJobId(const std::string& _targetJobId);

                    /**
                     * 判断参数 TargetJobId 是否已赋值
                     * @return TargetJobId 是否已赋值
                     * 
                     */
                    bool TargetJobIdHasBeenSet() const;

                    /**
                     * 获取失败时候的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 失败时候的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置失败时候的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 失败时候的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取0 成功  -1 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 0 成功  -1 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetResult() const;

                    /**
                     * 设置0 成功  -1 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 0 成功  -1 失败
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const int64_t& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取目标集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterName 目标集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置目标集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterName 目标集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取目标集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClusterId 目标集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置目标集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clusterId 目标集群id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobType 作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetJobType() const;

                    /**
                     * 设置作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobType 作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobType(const int64_t& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                private:

                    /**
                     * 原作业id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 原作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 新作业名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetJobName;
                    bool m_targetJobNameHasBeenSet;

                    /**
                     * 新作业id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_targetJobId;
                    bool m_targetJobIdHasBeenSet;

                    /**
                     * 失败时候的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 0 成功  -1 失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 目标集群名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 目标集群id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 作业类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_jobType;
                    bool m_jobTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_COPYJOBRESULT_H_
