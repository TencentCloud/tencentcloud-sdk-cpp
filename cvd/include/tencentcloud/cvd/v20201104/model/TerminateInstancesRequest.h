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

#ifndef TENCENTCLOUD_CVD_V20201104_MODEL_TERMINATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVD_V20201104_MODEL_TERMINATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvd
    {
        namespace V20201104
        {
            namespace Model
            {
                /**
                * TerminateInstances请求参数结构体
                */
                class TerminateInstancesRequest : public AbstractModel
                {
                public:
                    TerminateInstancesRequest();
                    ~TerminateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一个或多个待操作的实例ID。每次请求批量实例的上限为10。</p>
                     * @return InstanceIds <p>一个或多个待操作的实例ID。每次请求批量实例的上限为10。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>一个或多个待操作的实例ID。每次请求批量实例的上限为10。</p>
                     * @param _instanceIds <p>一个或多个待操作的实例ID。每次请求批量实例的上限为10。</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>是否立即销毁实例。默认false。 立即销毁的实例不会进入隔离期。</p>
                     * @return DestroyImmediately <p>是否立即销毁实例。默认false。 立即销毁的实例不会进入隔离期。</p>
                     * 
                     */
                    bool GetDestroyImmediately() const;

                    /**
                     * 设置<p>是否立即销毁实例。默认false。 立即销毁的实例不会进入隔离期。</p>
                     * @param _destroyImmediately <p>是否立即销毁实例。默认false。 立即销毁的实例不会进入隔离期。</p>
                     * 
                     */
                    void SetDestroyImmediately(const bool& _destroyImmediately);

                    /**
                     * 判断参数 DestroyImmediately 是否已赋值
                     * @return DestroyImmediately 是否已赋值
                     * 
                     */
                    bool DestroyImmediatelyHasBeenSet() const;

                private:

                    /**
                     * <p>一个或多个待操作的实例ID。每次请求批量实例的上限为10。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>是否立即销毁实例。默认false。 立即销毁的实例不会进入隔离期。</p>
                     */
                    bool m_destroyImmediately;
                    bool m_destroyImmediatelyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVD_V20201104_MODEL_TERMINATEINSTANCESREQUEST_H_
