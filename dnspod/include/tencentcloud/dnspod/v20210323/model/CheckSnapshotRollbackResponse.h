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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_CHECKSNAPSHOTROLLBACKRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_CHECKSNAPSHOTROLLBACKRESPONSE_H_

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
                * CheckSnapshotRollback返回参数结构体
                */
                class CheckSnapshotRollbackResponse : public AbstractModel
                {
                public:
                    CheckSnapshotRollbackResponse();
                    ~CheckSnapshotRollbackResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取快照记录 ID
                     * @return SnapshotId 快照记录 ID
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
                     * 获取回滚时长（分钟）
                     * @return CostMinutes 回滚时长（分钟）
                     * 
                     */
                    uint64_t GetCostMinutes() const;

                    /**
                     * 判断参数 CostMinutes 是否已赋值
                     * @return CostMinutes 是否已赋值
                     * 
                     */
                    bool CostMinutesHasBeenSet() const;

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
                     * 获取解析记录总数
                     * @return Total 解析记录总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取值为 1，表示超时
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeout 值为 1，表示超时
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取检查失败数量
                     * @return Failed 检查失败数量
                     * 
                     */
                    uint64_t GetFailed() const;

                    /**
                     * 判断参数 Failed 是否已赋值
                     * @return Failed 是否已赋值
                     * 
                     */
                    bool FailedHasBeenSet() const;

                    /**
                     * 获取失败记录信息
                     * @return FailedRecordList 失败记录信息
                     * 
                     */
                    std::vector<SnapshotRecord> GetFailedRecordList() const;

                    /**
                     * 判断参数 FailedRecordList 是否已赋值
                     * @return FailedRecordList 是否已赋值
                     * 
                     */
                    bool FailedRecordListHasBeenSet() const;

                private:

                    /**
                     * 快照记录 ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 回滚时长（分钟）
                     */
                    uint64_t m_costMinutes;
                    bool m_costMinutesHasBeenSet;

                    /**
                     * 快照所属域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 解析记录总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 值为 1，表示超时
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * 检查失败数量
                     */
                    uint64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * 失败记录信息
                     */
                    std::vector<SnapshotRecord> m_failedRecordList;
                    bool m_failedRecordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_CHECKSNAPSHOTROLLBACKRESPONSE_H_
