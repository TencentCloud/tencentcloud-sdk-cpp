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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONPOLICIESRESPONSE_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/ReplicationPolicyInfo.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeReplicationPolicies返回参数结构体
                */
                class DescribeReplicationPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeReplicationPoliciesResponse();
                    ~DescribeReplicationPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例同步策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReplicationPolicyInfoList 实例同步策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ReplicationPolicyInfo> GetReplicationPolicyInfoList() const;

                    /**
                     * 判断参数 ReplicationPolicyInfoList 是否已赋值
                     * @return ReplicationPolicyInfoList 是否已赋值
                     * 
                     */
                    bool ReplicationPolicyInfoListHasBeenSet() const;

                    /**
                     * 获取策略总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 策略总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 实例同步策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ReplicationPolicyInfo> m_replicationPolicyInfoList;
                    bool m_replicationPolicyInfoListHasBeenSet;

                    /**
                     * 策略总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBEREPLICATIONPOLICIESRESPONSE_H_
