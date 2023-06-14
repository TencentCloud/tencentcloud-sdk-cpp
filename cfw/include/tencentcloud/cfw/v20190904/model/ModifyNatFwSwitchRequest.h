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
                     * 获取开关，0：关闭，1：开启
                     * @return Enable 开关，0：关闭，1：开启
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置开关，0：关闭，1：开启
                     * @param _enable 开关，0：关闭，1：开启
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
                     * 获取防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * @return CfwInsIdList 防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * 
                     */
                    std::vector<std::string> GetCfwInsIdList() const;

                    /**
                     * 设置防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * @param _cfwInsIdList 防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
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
                     * 获取子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * @return SubnetIdList 子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * 
                     */
                    std::vector<std::string> GetSubnetIdList() const;

                    /**
                     * 设置子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * @param _subnetIdList 子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
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
                     * 获取路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * @return RouteTableIdList 路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * 
                     */
                    std::vector<std::string> GetRouteTableIdList() const;

                    /**
                     * 设置路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     * @param _routeTableIdList 路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
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
                     * 开关，0：关闭，1：开启
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 防火墙实例id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     */
                    std::vector<std::string> m_cfwInsIdList;
                    bool m_cfwInsIdListHasBeenSet;

                    /**
                     * 子网id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     */
                    std::vector<std::string> m_subnetIdList;
                    bool m_subnetIdListHasBeenSet;

                    /**
                     * 路由表id列表，其中CfwInsIdList，SubnetIdList和RouteTableIdList只能传递一种。
                     */
                    std::vector<std::string> m_routeTableIdList;
                    bool m_routeTableIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_MODIFYNATFWSWITCHREQUEST_H_
