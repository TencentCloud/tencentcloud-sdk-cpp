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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESNAPSHOTROLLBACKTASKRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESNAPSHOTROLLBACKTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeSnapshotRollbackTask返回参数结构体
                */
                class DescribeSnapshotRollbackTaskResponse : public AbstractModel
                {
                public:
                    DescribeSnapshotRollbackTaskResponse();
                    ~DescribeSnapshotRollbackTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取快照所属域名
                     * @return Domain 快照所属域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取快照 ID
                     * @return SnapshotId 快照 ID
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取回滚状态
                     * @return Status 回滚状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取快照回滚任务 ID
                     * @return TaskId 快照回滚任务 ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取总数量
                     * @return RecordCount 总数量
                     * 
                     */
                    uint64_t GetRecordCount() const;

                    /**
                     * 判断参数 RecordCount 是否已赋值
                     * @return RecordCount 是否已赋值
                     * 
                     */
                    bool RecordCountHasBeenSet() const;

                    /**
                     * 获取开始回滚时间
                     * @return CreatedOn 开始回滚时间
                     * 
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     * 
                     */
                    bool CreatedOnHasBeenSet() const;

                private:

                    /**
                     * 快照所属域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 快照 ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 回滚状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 快照回滚任务 ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 总数量
                     */
                    uint64_t m_recordCount;
                    bool m_recordCountHasBeenSet;

                    /**
                     * 开始回滚时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBESNAPSHOTROLLBACKTASKRESPONSE_H_
