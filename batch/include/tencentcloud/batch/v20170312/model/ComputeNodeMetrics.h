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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODEMETRICS_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODEMETRICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 计算节点统计指标
                */
                class ComputeNodeMetrics : public AbstractModel
                {
                public:
                    ComputeNodeMetrics();
                    ~ComputeNodeMetrics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取已经完成提交的计算节点数量
                     * @return SubmittedCount 已经完成提交的计算节点数量
                     * 
                     */
                    uint64_t GetSubmittedCount() const;

                    /**
                     * 设置已经完成提交的计算节点数量
                     * @param _submittedCount 已经完成提交的计算节点数量
                     * 
                     */
                    void SetSubmittedCount(const uint64_t& _submittedCount);

                    /**
                     * 判断参数 SubmittedCount 是否已赋值
                     * @return SubmittedCount 是否已赋值
                     * 
                     */
                    bool SubmittedCountHasBeenSet() const;

                    /**
                     * 获取创建中的计算节点数量
                     * @return CreatingCount 创建中的计算节点数量
                     * 
                     */
                    uint64_t GetCreatingCount() const;

                    /**
                     * 设置创建中的计算节点数量
                     * @param _creatingCount 创建中的计算节点数量
                     * 
                     */
                    void SetCreatingCount(const uint64_t& _creatingCount);

                    /**
                     * 判断参数 CreatingCount 是否已赋值
                     * @return CreatingCount 是否已赋值
                     * 
                     */
                    bool CreatingCountHasBeenSet() const;

                    /**
                     * 获取创建失败的计算节点数量
                     * @return CreationFailedCount 创建失败的计算节点数量
                     * 
                     */
                    uint64_t GetCreationFailedCount() const;

                    /**
                     * 设置创建失败的计算节点数量
                     * @param _creationFailedCount 创建失败的计算节点数量
                     * 
                     */
                    void SetCreationFailedCount(const uint64_t& _creationFailedCount);

                    /**
                     * 判断参数 CreationFailedCount 是否已赋值
                     * @return CreationFailedCount 是否已赋值
                     * 
                     */
                    bool CreationFailedCountHasBeenSet() const;

                    /**
                     * 获取完成创建的计算节点数量
                     * @return CreatedCount 完成创建的计算节点数量
                     * 
                     */
                    uint64_t GetCreatedCount() const;

                    /**
                     * 设置完成创建的计算节点数量
                     * @param _createdCount 完成创建的计算节点数量
                     * 
                     */
                    void SetCreatedCount(const uint64_t& _createdCount);

                    /**
                     * 判断参数 CreatedCount 是否已赋值
                     * @return CreatedCount 是否已赋值
                     * 
                     */
                    bool CreatedCountHasBeenSet() const;

                    /**
                     * 获取运行中的计算节点数量
                     * @return RunningCount 运行中的计算节点数量
                     * 
                     */
                    uint64_t GetRunningCount() const;

                    /**
                     * 设置运行中的计算节点数量
                     * @param _runningCount 运行中的计算节点数量
                     * 
                     */
                    void SetRunningCount(const uint64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取销毁中的计算节点数量
                     * @return DeletingCount 销毁中的计算节点数量
                     * 
                     */
                    uint64_t GetDeletingCount() const;

                    /**
                     * 设置销毁中的计算节点数量
                     * @param _deletingCount 销毁中的计算节点数量
                     * 
                     */
                    void SetDeletingCount(const uint64_t& _deletingCount);

                    /**
                     * 判断参数 DeletingCount 是否已赋值
                     * @return DeletingCount 是否已赋值
                     * 
                     */
                    bool DeletingCountHasBeenSet() const;

                    /**
                     * 获取异常的计算节点数量
                     * @return AbnormalCount 异常的计算节点数量
                     * 
                     */
                    uint64_t GetAbnormalCount() const;

                    /**
                     * 设置异常的计算节点数量
                     * @param _abnormalCount 异常的计算节点数量
                     * 
                     */
                    void SetAbnormalCount(const uint64_t& _abnormalCount);

                    /**
                     * 判断参数 AbnormalCount 是否已赋值
                     * @return AbnormalCount 是否已赋值
                     * 
                     */
                    bool AbnormalCountHasBeenSet() const;

                private:

                    /**
                     * 已经完成提交的计算节点数量
                     */
                    uint64_t m_submittedCount;
                    bool m_submittedCountHasBeenSet;

                    /**
                     * 创建中的计算节点数量
                     */
                    uint64_t m_creatingCount;
                    bool m_creatingCountHasBeenSet;

                    /**
                     * 创建失败的计算节点数量
                     */
                    uint64_t m_creationFailedCount;
                    bool m_creationFailedCountHasBeenSet;

                    /**
                     * 完成创建的计算节点数量
                     */
                    uint64_t m_createdCount;
                    bool m_createdCountHasBeenSet;

                    /**
                     * 运行中的计算节点数量
                     */
                    uint64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * 销毁中的计算节点数量
                     */
                    uint64_t m_deletingCount;
                    bool m_deletingCountHasBeenSet;

                    /**
                     * 异常的计算节点数量
                     */
                    uint64_t m_abnormalCount;
                    bool m_abnormalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_COMPUTENODEMETRICS_H_
