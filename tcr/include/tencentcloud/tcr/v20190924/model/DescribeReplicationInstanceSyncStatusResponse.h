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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationLog.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationInstanceSyncStatus返回参数结构体
                */
                class DescribeReplicationInstanceSyncStatusResponse : public AbstractModel
                {
                public:
                    DescribeReplicationInstanceSyncStatusResponse();
                    ~DescribeReplicationInstanceSyncStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取同步状态
                     * @return ReplicationStatus 同步状态
                     * 
                     */
                    std::string GetReplicationStatus() const;

                    /**
                     * 判断参数 ReplicationStatus 是否已赋值
                     * @return ReplicationStatus 是否已赋值
                     * 
                     */
                    bool ReplicationStatusHasBeenSet() const;

                    /**
                     * 获取同步完成时间
                     * @return ReplicationTime 同步完成时间
                     * 
                     */
                    std::string GetReplicationTime() const;

                    /**
                     * 判断参数 ReplicationTime 是否已赋值
                     * @return ReplicationTime 是否已赋值
                     * 
                     */
                    bool ReplicationTimeHasBeenSet() const;

                    /**
                     * 获取同步日志
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicationLog 同步日志
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReplicationLog GetReplicationLog() const;

                    /**
                     * 判断参数 ReplicationLog 是否已赋值
                     * @return ReplicationLog 是否已赋值
                     * 
                     */
                    bool ReplicationLogHasBeenSet() const;

                private:

                    /**
                     * 同步状态
                     */
                    std::string m_replicationStatus;
                    bool m_replicationStatusHasBeenSet;

                    /**
                     * 同步完成时间
                     */
                    std::string m_replicationTime;
                    bool m_replicationTimeHasBeenSet;

                    /**
                     * 同步日志
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReplicationLog m_replicationLog;
                    bool m_replicationLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONINSTANCESYNCSTATUSRESPONSE_H_
