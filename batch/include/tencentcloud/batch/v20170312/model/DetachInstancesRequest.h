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

#ifndef TENCENTCLOUD_BATCH_V20170312_MODEL_DETACHINSTANCESREQUEST_H_
#define TENCENTCLOUD_BATCH_V20170312_MODEL_DETACHINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Batch
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DetachInstances请求参数结构体
                */
                class DetachInstancesRequest : public AbstractModel
                {
                public:
                    DetachInstancesRequest();
                    ~DetachInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * @return EnvId 计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * @param _envId 计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取实例ID列表，实例ID通过调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728)获取。
                     * @return InstanceIds 实例ID列表，实例ID通过调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728)获取。
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置实例ID列表，实例ID通过调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728)获取。
                     * @param _instanceIds 实例ID列表，实例ID通过调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728)获取。
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
                     * 计算环境ID，环境ID通过调用接口 [DescribeComputeEnvs](https://cloud.tencent.com/document/api/599/15893)获取。
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 实例ID列表，实例ID通过调用接口 [DescribeInstances](https://cloud.tencent.com/document/api/213/15728)获取。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BATCH_V20170312_MODEL_DETACHINSTANCESREQUEST_H_
