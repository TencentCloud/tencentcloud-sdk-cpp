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

#ifndef TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERENDPOINTWANSTATUSREQUEST_H_
#define TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERENDPOINTWANSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdcpg
    {
        namespace V20211118
        {
            namespace Model
            {
                /**
                * ModifyClusterEndpointWanStatus请求参数结构体
                */
                class ModifyClusterEndpointWanStatusRequest : public AbstractModel
                {
                public:
                    ModifyClusterEndpointWanStatusRequest();
                    ~ModifyClusterEndpointWanStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取接入点ID
                     * @return EndpointId 接入点ID
                     * 
                     */
                    std::string GetEndpointId() const;

                    /**
                     * 设置接入点ID
                     * @param _endpointId 接入点ID
                     * 
                     */
                    void SetEndpointId(const std::string& _endpointId);

                    /**
                     * 判断参数 EndpointId 是否已赋值
                     * @return EndpointId 是否已赋值
                     * 
                     */
                    bool EndpointIdHasBeenSet() const;

                    /**
                     * 获取取值为： 
 - OPEN：开启外网 
 - CLOSE：关闭外网
                     * @return WanStatus 取值为： 
 - OPEN：开启外网 
 - CLOSE：关闭外网
                     * 
                     */
                    std::string GetWanStatus() const;

                    /**
                     * 设置取值为： 
 - OPEN：开启外网 
 - CLOSE：关闭外网
                     * @param _wanStatus 取值为： 
 - OPEN：开启外网 
 - CLOSE：关闭外网
                     * 
                     */
                    void SetWanStatus(const std::string& _wanStatus);

                    /**
                     * 判断参数 WanStatus 是否已赋值
                     * @return WanStatus 是否已赋值
                     * 
                     */
                    bool WanStatusHasBeenSet() const;

                private:

                    /**
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 接入点ID
                     */
                    std::string m_endpointId;
                    bool m_endpointIdHasBeenSet;

                    /**
                     * 取值为： 
 - OPEN：开启外网 
 - CLOSE：关闭外网
                     */
                    std::string m_wanStatus;
                    bool m_wanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDCPG_V20211118_MODEL_MODIFYCLUSTERENDPOINTWANSTATUSREQUEST_H_
