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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_DELETEAUTOSNAPSHOTPOLICIESREQUEST_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_DELETEAUTOSNAPSHOTPOLICIESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DeleteAutoSnapshotPolicies请求参数结构体
                */
                class DeleteAutoSnapshotPoliciesRequest : public AbstractModel
                {
                public:
                    DeleteAutoSnapshotPoliciesRequest();
                    ~DeleteAutoSnapshotPoliciesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的定期快照策略ID列表，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     * @return AutoSnapshotPolicyIds 要删除的定期快照策略ID列表，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     * 
                     */
                    std::vector<std::string> GetAutoSnapshotPolicyIds() const;

                    /**
                     * 设置要删除的定期快照策略ID列表，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     * @param _autoSnapshotPolicyIds 要删除的定期快照策略ID列表，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     * 
                     */
                    void SetAutoSnapshotPolicyIds(const std::vector<std::string>& _autoSnapshotPolicyIds);

                    /**
                     * 判断参数 AutoSnapshotPolicyIds 是否已赋值
                     * @return AutoSnapshotPolicyIds 是否已赋值
                     * 
                     */
                    bool AutoSnapshotPolicyIdsHasBeenSet() const;

                private:

                    /**
                     * 要删除的定期快照策略ID列表，通过[ DescribeAutoSnapshotPolicies](https://cloud.tencent.com/document/api/362/33556)接口查询。
                     */
                    std::vector<std::string> m_autoSnapshotPolicyIds;
                    bool m_autoSnapshotPolicyIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_DELETEAUTOSNAPSHOTPOLICIESREQUEST_H_
