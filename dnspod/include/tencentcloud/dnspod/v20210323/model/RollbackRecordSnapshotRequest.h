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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_ROLLBACKRECORDSNAPSHOTREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_ROLLBACKRECORDSNAPSHOTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/SnapshotRecord.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * RollbackRecordSnapshot请求参数结构体
                */
                class RollbackRecordSnapshotRequest : public AbstractModel
                {
                public:
                    RollbackRecordSnapshotRequest();
                    ~RollbackRecordSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取快照 ID。可以通过接口DescribeSnapshotList查询快照 ID
                     * @return SnapshotId 快照 ID。可以通过接口DescribeSnapshotList查询快照 ID
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照 ID。可以通过接口DescribeSnapshotList查询快照 ID
                     * @param _snapshotId 快照 ID。可以通过接口DescribeSnapshotList查询快照 ID
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取解析记录信息
                     * @return RecordList 解析记录信息
                     * 
                     */
                    std::vector<SnapshotRecord> GetRecordList() const;

                    /**
                     * 设置解析记录信息
                     * @param _recordList 解析记录信息
                     * 
                     */
                    void SetRecordList(const std::vector<SnapshotRecord>& _recordList);

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                    /**
                     * 获取之前的快照回滚任务 ID。可从RollbackSnapshot接口获取
                     * @return TaskId 之前的快照回滚任务 ID。可从RollbackSnapshot接口获取
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置之前的快照回滚任务 ID。可从RollbackSnapshot接口获取
                     * @param _taskId 之前的快照回滚任务 ID。可从RollbackSnapshot接口获取
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * @return DomainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * 
                     */
                    uint64_t GetDomainId() const;

                    /**
                     * 设置域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * @param _domainId 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     * 
                     */
                    void SetDomainId(const uint64_t& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 快照 ID。可以通过接口DescribeSnapshotList查询快照 ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 解析记录信息
                     */
                    std::vector<SnapshotRecord> m_recordList;
                    bool m_recordListHasBeenSet;

                    /**
                     * 之前的快照回滚任务 ID。可从RollbackSnapshot接口获取
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 域名 ID 。参数 DomainId 优先级比参数 Domain 高，如果传递参数 DomainId 将忽略参数 Domain 。可以通过接口DescribeDomainList查到所有的Domain以及DomainId
                     */
                    uint64_t m_domainId;
                    bool m_domainIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_ROLLBACKRECORDSNAPSHOTREQUEST_H_
