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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DISABLESNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DISABLESNAPSHOTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DisableSnapshotPolicies请求参数结构体
                */
                class DisableSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    DisableSnapshotPoliciesRequest();
                    ~DisableSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取快照策略Id。
                     * @return SnapshotPolicyIds 快照策略Id。
                     * 
                     */
                    std::vector<std::string> GetSnapshotPolicyIds() const;

                    /**
                     * 设置快照策略Id。
                     * @param _snapshotPolicyIds 快照策略Id。
                     * 
                     */
                    void SetSnapshotPolicyIds(const std::vector<std::string>& _snapshotPolicyIds);

                    /**
                     * 判断参数 SnapshotPolicyIds 是否已赋值
                     * @return SnapshotPolicyIds 是否已赋值
                     * 
                     */
                    bool SnapshotPolicyIdsHasBeenSet() const;

                private:

                    /**
                     * 快照策略Id。
                     */
                    std::vector<std::string> m_snapshotPolicyIds;
                    bool m_snapshotPolicyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DISABLESNAPSHOTPOLICIESREQUEST_H_
