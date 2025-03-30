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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDSNAPSHOTROLLBACKRESULTRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDSNAPSHOTROLLBACKRESULTRESPONSE_H_

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
                * DescribeRecordSnapshotRollbackResult返回参数结构体
                */
                class DescribeRecordSnapshotRollbackResultResponse : public AbstractModel
                {
                public:
                    DescribeRecordSnapshotRollbackResultResponse();
                    ~DescribeRecordSnapshotRollbackResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取回滚任务 ID
                     * @return JobId 回滚任务 ID
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

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
                     * 获取失败的记录信息
                     * @return FailedRecordList 失败的记录信息
                     * 
                     */
                    std::vector<SnapshotRecord> GetFailedRecordList() const;

                    /**
                     * 判断参数 FailedRecordList 是否已赋值
                     * @return FailedRecordList 是否已赋值
                     * 
                     */
                    bool FailedRecordListHasBeenSet() const;

                    /**
                     * 获取所属域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 所属域名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Progress 回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取回滚剩余时间（单位：分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LeftMinutes 回滚剩余时间（单位：分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLeftMinutes() const;

                    /**
                     * 判断参数 LeftMinutes 是否已赋值
                     * @return LeftMinutes 是否已赋值
                     * 
                     */
                    bool LeftMinutesHasBeenSet() const;

                    /**
                     * 获取总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total 总记录数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取失败记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Failed 失败记录数
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取成功记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Success 成功记录数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetSuccess() const;

                    /**
                     * 判断参数 Success 是否已赋值
                     * @return Success 是否已赋值
                     * 
                     */
                    bool SuccessHasBeenSet() const;

                    /**
                     * 获取快照下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosUrl 快照下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCosUrl() const;

                    /**
                     * 判断参数 CosUrl 是否已赋值
                     * @return CosUrl 是否已赋值
                     * 
                     */
                    bool CosUrlHasBeenSet() const;

                private:

                    /**
                     * 回滚任务 ID
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 回滚状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 失败的记录信息
                     */
                    std::vector<SnapshotRecord> m_failedRecordList;
                    bool m_failedRecordListHasBeenSet;

                    /**
                     * 所属域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 回滚进度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 回滚剩余时间（单位：分钟）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_leftMinutes;
                    bool m_leftMinutesHasBeenSet;

                    /**
                     * 总记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 失败记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_failed;
                    bool m_failedHasBeenSet;

                    /**
                     * 成功记录数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_success;
                    bool m_successHasBeenSet;

                    /**
                     * 快照下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cosUrl;
                    bool m_cosUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDSNAPSHOTROLLBACKRESULTRESPONSE_H_
