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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNINSTANCEREGIONSTATUSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNINSTANCEREGIONSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeCcnInstanceRegionStatus请求参数结构体
                */
                class DescribeCcnInstanceRegionStatusRequest : public AbstractModel
                {
                public:
                    DescribeCcnInstanceRegionStatusRequest();
                    ~DescribeCcnInstanceRegionStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>云联网ID</p>
                     * @return CcnId <p>云联网ID</p>
                     * 
                     */
                    std::string GetCcnId() const;

                    /**
                     * 设置<p>云联网ID</p>
                     * @param _ccnId <p>云联网ID</p>
                     * 
                     */
                    void SetCcnId(const std::string& _ccnId);

                    /**
                     * 判断参数 CcnId 是否已赋值
                     * @return CcnId 是否已赋值
                     * 
                     */
                    bool CcnIdHasBeenSet() const;

                    /**
                     * 获取<p>要查询引流网络部署状态的云联网关联的实例ID列表</p>
                     * @return InstanceIds <p>要查询引流网络部署状态的云联网关联的实例ID列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>要查询引流网络部署状态的云联网关联的实例ID列表</p>
                     * @param _instanceIds <p>要查询引流网络部署状态的云联网关联的实例ID列表</p>
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
                     * 获取<p>引流路由方法 0:多路由表, 1:策略路由</p>
                     * @return RoutingMode <p>引流路由方法 0:多路由表, 1:策略路由</p>
                     * 
                     */
                    uint64_t GetRoutingMode() const;

                    /**
                     * 设置<p>引流路由方法 0:多路由表, 1:策略路由</p>
                     * @param _routingMode <p>引流路由方法 0:多路由表, 1:策略路由</p>
                     * 
                     */
                    void SetRoutingMode(const uint64_t& _routingMode);

                    /**
                     * 判断参数 RoutingMode 是否已赋值
                     * @return RoutingMode 是否已赋值
                     * 
                     */
                    bool RoutingModeHasBeenSet() const;

                private:

                    /**
                     * <p>云联网ID</p>
                     */
                    std::string m_ccnId;
                    bool m_ccnIdHasBeenSet;

                    /**
                     * <p>要查询引流网络部署状态的云联网关联的实例ID列表</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>引流路由方法 0:多路由表, 1:策略路由</p>
                     */
                    uint64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECCNINSTANCEREGIONSTATUSREQUEST_H_
