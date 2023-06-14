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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATESERVICEDISCOVERYRESPONSE_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATESERVICEDISCOVERYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/ServiceDiscoveryItem.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * UpdateServiceDiscovery返回参数结构体
                */
                class UpdateServiceDiscoveryResponse : public AbstractModel
                {
                public:
                    UpdateServiceDiscoveryResponse();
                    ~UpdateServiceDiscoveryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取更新成功之后，返回对应服务发现的信息
                     * @return ServiceDiscovery 更新成功之后，返回对应服务发现的信息
                     * 
                     */
                    ServiceDiscoveryItem GetServiceDiscovery() const;

                    /**
                     * 判断参数 ServiceDiscovery 是否已赋值
                     * @return ServiceDiscovery 是否已赋值
                     * 
                     */
                    bool ServiceDiscoveryHasBeenSet() const;

                private:

                    /**
                     * 更新成功之后，返回对应服务发现的信息
                     */
                    ServiceDiscoveryItem m_serviceDiscovery;
                    bool m_serviceDiscoveryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATESERVICEDISCOVERYRESPONSE_H_
