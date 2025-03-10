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

#ifndef TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_
#define TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tat
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CancelInvocation请求参数结构体
                */
                class CancelInvocationRequest : public AbstractModel
                {
                public:
                    CancelInvocationRequest();
                    ~CancelInvocationRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取执行活动ID。

可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
                     * @return InvocationId 执行活动ID。

可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
                     * 
                     */
                    std::string GetInvocationId() const;

                    /**
                     * 设置执行活动ID。

可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
                     * @param _invocationId 执行活动ID。

可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
                     * 
                     */
                    void SetInvocationId(const std::string& _invocationId);

                    /**
                     * 判断参数 InvocationId 是否已赋值
                     * @return InvocationId 是否已赋值
                     * 
                     */
                    bool InvocationIdHasBeenSet() const;

                    /**
                     * 获取实例ID列表，上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     * @return InstanceIds 实例ID列表，上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表，上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     * @param _instanceIds 实例ID列表，上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 执行活动ID。

可通过 [DescribeInvocations(查询执行活动)](https://cloud.tencent.com/document/api/1340/52679) 接口获取。
                     */
                    std::string m_invocationId;
                    bool m_invocationIdHasBeenSet;

                    /**
                     * 实例ID列表，上限100。

可通过对应云产品的查询实例接口获取实例 ID。目前支持实例类型：
- CVM
- Lighthouse
- TAT 托管实例
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TAT_V20201028_MODEL_CANCELINVOCATIONREQUEST_H_
