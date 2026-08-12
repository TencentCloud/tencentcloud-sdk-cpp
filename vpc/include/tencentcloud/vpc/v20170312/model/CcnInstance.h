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
                     * 获取<p>关联实例ID。</p>
                     * @return InstanceId <p>关联实例ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>关联实例ID。</p>
                     * @param _instanceId <p>关联实例ID。</p>
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
                     * 获取<p>关联实例ID所属大区，例如：ap-guangzhou。</p>
                     * @return InstanceRegion <p>关联实例ID所属大区，例如：ap-guangzhou。</p>
                     * 
                     */
                    std::string GetInstanceRegion() const;

                    /**
                     * 设置<p>关联实例ID所属大区，例如：ap-guangzhou。</p>
                     * @param _instanceRegion <p>关联实例ID所属大区，例如：ap-guangzhou。</p>
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
                     * 获取<p>关联实例类型，可选值：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li><li><code>VPNGW</code>：VPNGW类型</li>
                     * @return InstanceType <p>关联实例类型，可选值：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li><li><code>VPNGW</code>：VPNGW类型</li>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>关联实例类型，可选值：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li><li><code>VPNGW</code>：VPNGW类型</li>
                     * @param _instanceType <p>关联实例类型，可选值：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li><li><code>VPNGW</code>：VPNGW类型</li>
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
                     * 获取<p>备注</p>
                     * @return Description <p>备注</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _description <p>备注</p>
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
                     * 获取<p>实例关联的路由表ID。</p>
                     * @return RouteTableId <p>实例关联的路由表ID。</p>
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置<p>实例关联的路由表ID。</p>
                     * @param _routeTableId <p>实例关联的路由表ID。</p>
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
                     * 获取<p>实例付费方式</p><p>枚举值：</p><ul><li>PayByCcnOwner： CCN所在账号付费</li><li>PayByInstanceOwner： 关联实例所在账号付费</li></ul>
                     * @return OrderType <p>实例付费方式</p><p>枚举值：</p><ul><li>PayByCcnOwner： CCN所在账号付费</li><li>PayByInstanceOwner： 关联实例所在账号付费</li></ul>
                     * 
                     */
                    std::string GetOrderType() const;

                    /**
                     * 设置<p>实例付费方式</p><p>枚举值：</p><ul><li>PayByCcnOwner： CCN所在账号付费</li><li>PayByInstanceOwner： 关联实例所在账号付费</li></ul>
                     * @param _orderType <p>实例付费方式</p><p>枚举值：</p><ul><li>PayByCcnOwner： CCN所在账号付费</li><li>PayByInstanceOwner： 关联实例所在账号付费</li></ul>
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
                     * <p>关联实例ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>关联实例ID所属大区，例如：ap-guangzhou。</p>
                     */
                    std::string m_instanceRegion;
                    bool m_instanceRegionHasBeenSet;

                    /**
                     * <p>关联实例类型，可选值：</p><li><code>VPC</code>：私有网络</li><li><code>DIRECTCONNECT</code>：专线网关</li><li><code>BMVPC</code>：黑石私有网络</li><li><code>VPNGW</code>：VPNGW类型</li>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>实例关联的路由表ID。</p>
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * <p>实例付费方式</p><p>枚举值：</p><ul><li>PayByCcnOwner： CCN所在账号付费</li><li>PayByInstanceOwner： 关联实例所在账号付费</li></ul>
                     */
                    std::string m_orderType;
                    bool m_orderTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CCNINSTANCE_H_
