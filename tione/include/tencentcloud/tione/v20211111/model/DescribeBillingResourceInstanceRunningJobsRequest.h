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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEINSTANCERUNNINGJOBSREQUEST_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEINSTANCERUNNINGJOBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * DescribeBillingResourceInstanceRunningJobs请求参数结构体
                */
                class DescribeBillingResourceInstanceRunningJobsRequest : public AbstractModel
                {
                public:
                    DescribeBillingResourceInstanceRunningJobsRequest();
                    ~DescribeBillingResourceInstanceRunningJobsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组id
                     * @return ResourceGroupId 资源组id
                     * 
                     */
                    std::string GetResourceGroupId() const;

                    /**
                     * 设置资源组id
                     * @param _resourceGroupId 资源组id
                     * 
                     */
                    void SetResourceGroupId(const std::string& _resourceGroupId);

                    /**
                     * 判断参数 ResourceGroupId 是否已赋值
                     * @return ResourceGroupId 是否已赋值
                     * 
                     */
                    bool ResourceGroupIdHasBeenSet() const;

                    /**
                     * 获取资源组节点id
                     * @return ResourceInstanceId 资源组节点id
                     * 
                     */
                    std::string GetResourceInstanceId() const;

                    /**
                     * 设置资源组节点id
                     * @param _resourceInstanceId 资源组节点id
                     * 
                     */
                    void SetResourceInstanceId(const std::string& _resourceInstanceId);

                    /**
                     * 判断参数 ResourceInstanceId 是否已赋值
                     * @return ResourceInstanceId 是否已赋值
                     * 
                     */
                    bool ResourceInstanceIdHasBeenSet() const;

                private:

                    /**
                     * 资源组id
                     */
                    std::string m_resourceGroupId;
                    bool m_resourceGroupIdHasBeenSet;

                    /**
                     * 资源组节点id
                     */
                    std::string m_resourceInstanceId;
                    bool m_resourceInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_DESCRIBEBILLINGRESOURCEINSTANCERUNNINGJOBSREQUEST_H_
