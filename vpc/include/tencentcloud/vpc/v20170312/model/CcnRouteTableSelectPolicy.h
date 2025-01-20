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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLESELECTPOLICY_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLESELECTPOLICY_H_

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
                * 路由表选择策略信息
                */
                class CcnRouteTableSelectPolicy : public AbstractModel
                {
                public:
                    CcnRouteTableSelectPolicy();
                    ~CcnRouteTableSelectPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例类型：
私有网络: `VPC`
专线网关: `DIRECTCONNECT`
黑石私有网络: `BMVPC`
EDGE设备: `EDGE`
EDGE隧道: `EDGE_TUNNEL`
EDGE网关: `EDGE_VPNGW`
VPN网关：`VPNGW`
                     * @return InstanceType 实例类型：
私有网络: `VPC`
专线网关: `DIRECTCONNECT`
黑石私有网络: `BMVPC`
EDGE设备: `EDGE`
EDGE隧道: `EDGE_TUNNEL`
EDGE网关: `EDGE_VPNGW`
VPN网关：`VPNGW`
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置实例类型：
私有网络: `VPC`
专线网关: `DIRECTCONNECT`
黑石私有网络: `BMVPC`
EDGE设备: `EDGE`
EDGE隧道: `EDGE_TUNNEL`
EDGE网关: `EDGE_VPNGW`
VPN网关：`VPNGW`
                     * @param _instanceType 实例类型：
私有网络: `VPC`
专线网关: `DIRECTCONNECT`
黑石私有网络: `BMVPC`
EDGE设备: `EDGE`
EDGE隧道: `EDGE_TUNNEL`
EDGE网关: `EDGE_VPNGW`
VPN网关：`VPNGW`
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
                     * 获取实例ID。
                     * @return InstanceId 实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _instanceId 实例ID。
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
                     * 获取源端CIDR。
                     * @return SourceCidrBlock 源端CIDR。
                     * 
                     */
                    std::string GetSourceCidrBlock() const;

                    /**
                     * 设置源端CIDR。
                     * @param _sourceCidrBlock 源端CIDR。
                     * 
                     */
                    void SetSourceCidrBlock(const std::string& _sourceCidrBlock);

                    /**
                     * 判断参数 SourceCidrBlock 是否已赋值
                     * @return SourceCidrBlock 是否已赋值
                     * 
                     */
                    bool SourceCidrBlockHasBeenSet() const;

                    /**
                     * 获取路由表ID。
                     * @return RouteTableId 路由表ID。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表ID。
                     * @param _routeTableId 路由表ID。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取路由表备注。
                     * @return Description 路由表备注。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置路由表备注。
                     * @param _description 路由表备注。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 实例类型：
私有网络: `VPC`
专线网关: `DIRECTCONNECT`
黑石私有网络: `BMVPC`
EDGE设备: `EDGE`
EDGE隧道: `EDGE_TUNNEL`
EDGE网关: `EDGE_VPNGW`
VPN网关：`VPNGW`
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 源端CIDR。
                     */
                    std::string m_sourceCidrBlock;
                    bool m_sourceCidrBlockHasBeenSet;

                    /**
                     * 路由表ID。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 路由表备注。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNROUTETABLESELECTPOLICY_H_
