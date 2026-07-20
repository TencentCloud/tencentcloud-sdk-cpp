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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWSWITCHREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWSWITCHREQUEST_H_

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
                * ModifyNatFwSwitch请求参数结构体
                */
                class ModifyNatFwSwitchRequest : public AbstractModel
                {
                public:
                    ModifyNatFwSwitchRequest();
                    ~ModifyNatFwSwitchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>开关，0：关闭，1：开启</p>
                     * @return Enable <p>开关，0：关闭，1：开启</p>
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置<p>开关，0：关闭，1：开启</p>
                     * @param _enable <p>开关，0：关闭，1：开启</p>
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取<p>防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * @return CfwInsIdList <p>防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * 
                     */
                    std::vector<std::string> GetCfwInsIdList() const;

                    /**
                     * 设置<p>防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * @param _cfwInsIdList <p>防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * 
                     */
                    void SetCfwInsIdList(const std::vector<std::string>& _cfwInsIdList);

                    /**
                     * 判断参数 CfwInsIdList 是否已赋值
                     * @return CfwInsIdList 是否已赋值
                     * 
                     */
                    bool CfwInsIdListHasBeenSet() const;

                    /**
                     * 获取<p>子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * @return SubnetIdList <p>子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * 
                     */
                    std::vector<std::string> GetSubnetIdList() const;

                    /**
                     * 设置<p>子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * @param _subnetIdList <p>子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * 
                     */
                    void SetSubnetIdList(const std::vector<std::string>& _subnetIdList);

                    /**
                     * 判断参数 SubnetIdList 是否已赋值
                     * @return SubnetIdList 是否已赋值
                     * 
                     */
                    bool SubnetIdListHasBeenSet() const;

                    /**
                     * 获取<p>路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * @return RouteTableIdList <p>路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * 
                     */
                    std::vector<std::string> GetRouteTableIdList() const;

                    /**
                     * 设置<p>路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * @param _routeTableIdList <p>路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     * 
                     */
                    void SetRouteTableIdList(const std::vector<std::string>& _routeTableIdList);

                    /**
                     * 判断参数 RouteTableIdList 是否已赋值
                     * @return RouteTableIdList 是否已赋值
                     * 
                     */
                    bool RouteTableIdListHasBeenSet() const;

                private:

                    /**
                     * <p>开关，0：关闭，1：开启</p>
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * <p>防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     */
                    std::vector<std::string> m_cfwInsIdList;
                    bool m_cfwInsIdListHasBeenSet;

                    /**
                     * <p>子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     */
                    std::vector<std::string> m_subnetIdList;
                    bool m_subnetIdListHasBeenSet;

                    /**
                     * <p>路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。</p>
                     */
                    std::vector<std::string> m_routeTableIdList;
                    bool m_routeTableIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWSWITCHREQUEST_H_
