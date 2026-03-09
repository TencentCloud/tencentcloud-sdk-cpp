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

#ifndef TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDSNAPSHOTPOLICIESRESPONSE_H_
#define TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDSNAPSHOTPOLICIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cetcd/v20220325/model/EtcdSnapshotPolicy.h>


namespace TencentCloud
{
    namespace Cetcd
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribeEtcdSnapshotPolicies返回参数结构体
                */
                class DescribeEtcdSnapshotPoliciesResponse : public AbstractModel
                {
                public:
                    DescribeEtcdSnapshotPoliciesResponse();
                    ~DescribeEtcdSnapshotPoliciesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SnapshotPolicies 备份策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EtcdSnapshotPolicy> GetSnapshotPolicies() const;

                    /**
                     * 判断参数 SnapshotPolicies 是否已赋值
                     * @return SnapshotPolicies 是否已赋值
                     * 
                     */
                    bool SnapshotPoliciesHasBeenSet() const;

                private:

                    /**
                     * 备份策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EtcdSnapshotPolicy> m_snapshotPolicies;
                    bool m_snapshotPoliciesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CETCD_V20220325_MODEL_DESCRIBEETCDSNAPSHOTPOLICIESRESPONSE_H_
