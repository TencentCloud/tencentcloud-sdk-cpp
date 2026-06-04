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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_NATCLUSTERREGIONSTATUSQUERY_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_NATCLUSTERREGIONSTATUSQUERY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * NAT集群防火墙地域部署状态查询
                */
                class NatClusterRegionStatusQuery : public AbstractModel
                {
                public:
                    NatClusterRegionStatusQuery();
                    ~NatClusterRegionStatusQuery() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取<p>NAT网关ID</p>
                     * @return NatInsId <p>NAT网关ID</p>
                     * 
                     */
                    std::string GetNatInsId() const;

                    /**
                     * 设置<p>NAT网关ID</p>
                     * @param _natInsId <p>NAT网关ID</p>
                     * 
                     */
                    void SetNatInsId(const std::string& _natInsId);

                    /**
                     * 判断参数 NatInsId 是否已赋值
                     * @return NatInsId 是否已赋值
                     * 
                     */
                    bool NatInsIdHasBeenSet() const;

                    /**
                     * 获取<p>资产类型，取值：nat_ccn-CCN+NAT场景，nat-独立NAT场景</p>
                     * @return AssetType <p>资产类型，取值：nat_ccn-CCN+NAT场景，nat-独立NAT场景</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型，取值：nat_ccn-CCN+NAT场景，nat-独立NAT场景</p>
                     * @param _assetType <p>资产类型，取值：nat_ccn-CCN+NAT场景，nat-独立NAT场景</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                    /**
                     * 获取<p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * @return RoutingMode <p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * 
                     */
                    int64_t GetRoutingMode() const;

                    /**
                     * 设置<p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * @param _routingMode <p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     * 
                     */
                    void SetRoutingMode(const int64_t& _routingMode);

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
                     * <p>NAT网关ID</p>
                     */
                    std::string m_natInsId;
                    bool m_natInsIdHasBeenSet;

                    /**
                     * <p>资产类型，取值：nat_ccn-CCN+NAT场景，nat-独立NAT场景</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>引流路由方法，0-多路由表模式，1-策略路由模式</p>
                     */
                    int64_t m_routingMode;
                    bool m_routingModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_NATCLUSTERREGIONSTATUSQUERY_H_
