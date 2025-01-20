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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN网关目的路由
                */
                class VpnGatewayRoute : public AbstractModel
                {
                public:
                    VpnGatewayRoute();
                    ~VpnGatewayRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目的端IDC网段。
                     * @return DestinationCidrBlock 目的端IDC网段。
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置目的端IDC网段。
                     * @param _destinationCidrBlock 目的端IDC网段。
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取下一跳类型（关联实例类型）可选值："VPNCONN"（VPN通道）， "CCN"（CCN实例）。
                     * @return InstanceType 下一跳类型（关联实例类型）可选值："VPNCONN"（VPN通道）， "CCN"（CCN实例）。
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置下一跳类型（关联实例类型）可选值："VPNCONN"（VPN通道）， "CCN"（CCN实例）。
                     * @param _instanceType 下一跳类型（关联实例类型）可选值："VPNCONN"（VPN通道）， "CCN"（CCN实例）。
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取下一跳实例ID。
                     * @return InstanceId 下一跳实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置下一跳实例ID。
                     * @param _instanceId 下一跳实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取优先级，可选值：0，100。
                     * @return Priority 优先级，可选值：0，100。
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级，可选值：0，100。
                     * @param _priority 优先级，可选值：0，100。
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取启用状态，可选值："ENABLE"（启用），"DISABLE"  (禁用)。
                     * @return Status 启用状态，可选值："ENABLE"（启用），"DISABLE"  (禁用)。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置启用状态，可选值："ENABLE"（启用），"DISABLE"  (禁用)。
                     * @param _status 启用状态，可选值："ENABLE"（启用），"DISABLE"  (禁用)。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取路由条目ID。
                     * @return RouteId 路由条目ID。
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置路由条目ID。
                     * @param _routeId 路由条目ID。
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取路由类型，可选值："VPC"（VPC路由），"CCN"（云联网传播路由），"Static"（静态路由），"BGP"（BGP路由）。
                     * @return Type 路由类型，可选值："VPC"（VPC路由），"CCN"（云联网传播路由），"Static"（静态路由），"BGP"（BGP路由）。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置路由类型，可选值："VPC"（VPC路由），"CCN"（云联网传播路由），"Static"（静态路由），"BGP"（BGP路由）。
                     * @param _type 路由类型，可选值："VPC"（VPC路由），"CCN"（云联网传播路由），"Static"（静态路由），"BGP"（BGP路由）。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间。
                     * @return UpdateTime 更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间。
                     * @param _updateTime 更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 目的端IDC网段。
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 下一跳类型（关联实例类型）可选值："VPNCONN"（VPN通道）， "CCN"（CCN实例）。
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 下一跳实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 优先级，可选值：0，100。
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 启用状态，可选值："ENABLE"（启用），"DISABLE"  (禁用)。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 路由条目ID。
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 路由类型，可选值："VPC"（VPC路由），"CCN"（云联网传播路由），"Static"（静态路由），"BGP"（BGP路由）。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYROUTE_H_
