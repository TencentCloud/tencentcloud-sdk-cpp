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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNELROUTE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNELROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * 专线通道路由
                */
                class DirectConnectTunnelRoute : public AbstractModel
                {
                public:
                    DirectConnectTunnelRoute();
                    ~DirectConnectTunnelRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专用通道路由ID
                     * @return RouteId 专用通道路由ID
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置专用通道路由ID
                     * @param RouteId 专用通道路由ID
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取网段CIDR
                     * @return DestinationCidrBlock 网段CIDR
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置网段CIDR
                     * @param DestinationCidrBlock 网段CIDR
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取路由类型：BGP/STATIC路由
                     * @return RouteType 路由类型：BGP/STATIC路由
                     */
                    std::string GetRouteType() const;

                    /**
                     * 设置路由类型：BGP/STATIC路由
                     * @param RouteType 路由类型：BGP/STATIC路由
                     */
                    void SetRouteType(const std::string& _routeType);

                    /**
                     * 判断参数 RouteType 是否已赋值
                     * @return RouteType 是否已赋值
                     */
                    bool RouteTypeHasBeenSet() const;

                    /**
                     * 获取ENABLE：路由启用，DISABLE：路由禁用
                     * @return Status ENABLE：路由启用，DISABLE：路由禁用
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置ENABLE：路由启用，DISABLE：路由禁用
                     * @param Status ENABLE：路由启用，DISABLE：路由禁用
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取ASPath信息
                     * @return ASPath ASPath信息
                     */
                    std::vector<std::string> GetASPath() const;

                    /**
                     * 设置ASPath信息
                     * @param ASPath ASPath信息
                     */
                    void SetASPath(const std::vector<std::string>& _aSPath);

                    /**
                     * 判断参数 ASPath 是否已赋值
                     * @return ASPath 是否已赋值
                     */
                    bool ASPathHasBeenSet() const;

                    /**
                     * 获取路由下一跳IP
                     * @return NextHop 路由下一跳IP
                     */
                    std::string GetNextHop() const;

                    /**
                     * 设置路由下一跳IP
                     * @param NextHop 路由下一跳IP
                     */
                    void SetNextHop(const std::string& _nextHop);

                    /**
                     * 判断参数 NextHop 是否已赋值
                     * @return NextHop 是否已赋值
                     */
                    bool NextHopHasBeenSet() const;

                private:

                    /**
                     * 专用通道路由ID
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * 网段CIDR
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 路由类型：BGP/STATIC路由
                     */
                    std::string m_routeType;
                    bool m_routeTypeHasBeenSet;

                    /**
                     * ENABLE：路由启用，DISABLE：路由禁用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * ASPath信息
                     */
                    std::vector<std::string> m_aSPath;
                    bool m_aSPathHasBeenSet;

                    /**
                     * 路由下一跳IP
                     */
                    std::string m_nextHop;
                    bool m_nextHopHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DIRECTCONNECTTUNNELROUTE_H_
