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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_STARTINSTANCESREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_STARTINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * StartInstances请求参数结构体
                */
                class StartInstancesRequest : public AbstractModel
                {
                public:
                    StartInstancesRequest();
                    ~StartInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取待开启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @return InstanceIdSet 待开启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * 
                     */
                    std::vector<std::string> GetInstanceIdSet() const;

                    /**
                     * 设置待开启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * @param _instanceIdSet 待开启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     * 
                     */
                    void SetInstanceIdSet(const std::vector<std::string>& _instanceIdSet);

                    /**
                     * 判断参数 InstanceIdSet 是否已赋值
                     * @return InstanceIdSet 是否已赋值
                     * 
                     */
                    bool InstanceIdSetHasBeenSet() const;

                private:

                    /**
                     * 待开启的实例ID列表。在单次请求的过程中，单个region下的请求实例数上限为100。
                     */
                    std::vector<std::string> m_instanceIdSet;
                    bool m_instanceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_STARTINSTANCESREQUEST_H_
