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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATERESOURCEPOOLPACKSREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATERESOURCEPOOLPACKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TerminateResourcePoolPacks请求参数结构体
                */
                class TerminateResourcePoolPacksRequest : public AbstractModel
                {
                public:
                    TerminateResourcePoolPacksRequest();
                    ~TerminateResourcePoolPacksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例资源池ID列表，支持批量销毁。形如：rpp-6rk3550n。每次请求的实例的上限为100。
                     * @return DedicatedResourcePackIds 实例资源池ID列表，支持批量销毁。形如：rpp-6rk3550n。每次请求的实例的上限为100。
                     * 
                     */
                    std::vector<std::string> GetDedicatedResourcePackIds() const;

                    /**
                     * 设置实例资源池ID列表，支持批量销毁。形如：rpp-6rk3550n。每次请求的实例的上限为100。
                     * @param _dedicatedResourcePackIds 实例资源池ID列表，支持批量销毁。形如：rpp-6rk3550n。每次请求的实例的上限为100。
                     * 
                     */
                    void SetDedicatedResourcePackIds(const std::vector<std::string>& _dedicatedResourcePackIds);

                    /**
                     * 判断参数 DedicatedResourcePackIds 是否已赋值
                     * @return DedicatedResourcePackIds 是否已赋值
                     * 
                     */
                    bool DedicatedResourcePackIdsHasBeenSet() const;

                private:

                    /**
                     * 实例资源池ID列表，支持批量销毁。形如：rpp-6rk3550n。每次请求的实例的上限为100。
                     */
                    std::vector<std::string> m_dedicatedResourcePackIds;
                    bool m_dedicatedResourcePackIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATERESOURCEPOOLPACKSREQUEST_H_
