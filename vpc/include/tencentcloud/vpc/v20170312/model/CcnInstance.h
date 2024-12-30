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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CCNINSTANCE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CCNINSTANCE_H_

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
                * 云联网（CCN）关联实例（Instance）对象。
                */
                class CcnInstance : public AbstractModel
                {
                public:
                    CcnInstance();
                    ~CcnInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关联实例ID。
                     * @return InstanceId 关联实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置关联实例ID。
                     * @param _instanceId 关联实例ID。
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
                     * 获取关联实例ID所属大区，例如：ap-guangzhou。
                     * @return InstanceRegion 关联实例ID所属大区，例如：ap-guangzhou。
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置关联实例ID所属大区，例如：ap-guangzhou。
                     * @param _instanceRegion 关联实例ID所属大区，例如：ap-guangzhou。
                     * 
                     */
                    void SetInstanceRegion(const std::string& _instanceRegion);

                    /**
                     * 判断参数 InstanceRegion 是否已赋值
                     * @return InstanceRegion 是否已赋值
                     * 
                     */
                    bool InstanceRegionHasBeenSet() const;

                    /**
                     * 获取关联实例类型，可选值：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
<li>`VPNGW`：VPNGW类型</li>
                     * @return InstanceType 关联实例类型，可选值：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
<li>`VPNGW`：VPNGW类型</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置关联实例类型，可选值：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
<li>`VPNGW`：VPNGW类型</li>
                     * @param _instanceType 关联实例类型，可选值：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
<li>`VPNGW`：VPNGW类型</li>
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
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取实例关联的路由表ID。
                     * @return RouteTableId 实例关联的路由表ID。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置实例关联的路由表ID。
                     * @param _routeTableId 实例关联的路由表ID。
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
                     * 获取实例付费方式
                     * @return OrderType 实例付费方式
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置实例付费方式
                     * @param _orderType 实例付费方式
                     * 
                     */
                    void SetOrderType(const std::string& _orderType);

                    /**
                     * 判断参数 OrderType 是否已赋值
                     * @return OrderType 是否已赋值
                     * 
                     */
                    bool OrderTypeHasBeenSet() const;

                private:

                    /**
                     * 关联实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 关联实例ID所属大区，例如：ap-guangzhou。
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * 关联实例类型，可选值：
<li>`VPC`：私有网络</li>
<li>`DIRECTCONNECT`：专线网关</li>
<li>`BMVPC`：黑石私有网络</li>
<li>`VPNGW`：VPNGW类型</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 实例关联的路由表ID。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 实例付费方式
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNINSTANCE_H_
