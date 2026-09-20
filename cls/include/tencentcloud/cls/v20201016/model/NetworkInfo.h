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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/PrivateDomainNames.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 网络打通信息
                */
                class NetworkInfo : public AbstractModel
                {
                public:
                    NetworkInfo();
                    ~NetworkInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网络类型。 0：公网，1：内网</p>
                     * @return NetworkType <p>网络类型。 0：公网，1：内网</p>
                     * 
                     */
                    uint64_t GetNetworkType() const;

                    /**
                     * 设置<p>网络类型。 0：公网，1：内网</p>
                     * @param _networkType <p>网络类型。 0：公网，1：内网</p>
                     * 
                     */
                    void SetNetworkType(const uint64_t& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取<p>私有网络id</p>
                     * @return VpcID <p>私有网络id</p>
                     * 
                     */
                    std::string GetVpcID() const;

                    /**
                     * 设置<p>私有网络id</p>
                     * @param _vpcID <p>私有网络id</p>
                     * 
                     */
                    void SetVpcID(const std::string& _vpcID);

                    /**
                     * 判断参数 VpcID 是否已赋值
                     * @return VpcID 是否已赋值
                     * 
                     */
                    bool VpcIDHasBeenSet() const;

                    /**
                     * 获取<p>私有网络所属用户app id</p>
                     * @return AppID <p>私有网络所属用户app id</p>
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置<p>私有网络所属用户app id</p>
                     * @param _appID <p>私有网络所属用户app id</p>
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                    /**
                     * 获取<p>网络服务类型。0：CVM，3：专线网关，11：云联网，1025：CLB</p>
                     * @return VirtualGatewayType <p>网络服务类型。0：CVM，3：专线网关，11：云联网，1025：CLB</p>
                     * 
                     */
                    uint64_t GetVirtualGatewayType() const;

                    /**
                     * 设置<p>网络服务类型。0：CVM，3：专线网关，11：云联网，1025：CLB</p>
                     * @param _virtualGatewayType <p>网络服务类型。0：CVM，3：专线网关，11：云联网，1025：CLB</p>
                     * 
                     */
                    void SetVirtualGatewayType(const uint64_t& _virtualGatewayType);

                    /**
                     * 判断参数 VirtualGatewayType 是否已赋值
                     * @return VirtualGatewayType 是否已赋值
                     * 
                     */
                    bool VirtualGatewayTypeHasBeenSet() const;

                    /**
                     * 获取<p>专线网关id或者云联网id</p>
                     * @return VpcGatewayIndex <p>专线网关id或者云联网id</p>
                     * 
                     */
                    std::string GetVpcGatewayIndex() const;

                    /**
                     * 设置<p>专线网关id或者云联网id</p>
                     * @param _vpcGatewayIndex <p>专线网关id或者云联网id</p>
                     * 
                     */
                    void SetVpcGatewayIndex(const std::string& _vpcGatewayIndex);

                    /**
                     * 判断参数 VpcGatewayIndex 是否已赋值
                     * @return VpcGatewayIndex 是否已赋值
                     * 
                     */
                    bool VpcGatewayIndexHasBeenSet() const;

                    /**
                     * 获取<p>私有域名映射地址</p>
                     * @return PrivateDomainNames <p>私有域名映射地址</p>
                     * 
                     */
                    std::vector<PrivateDomainNames> GetPrivateDomainNames() const;

                    /**
                     * 设置<p>私有域名映射地址</p>
                     * @param _privateDomainNames <p>私有域名映射地址</p>
                     * 
                     */
                    void SetPrivateDomainNames(const std::vector<PrivateDomainNames>& _privateDomainNames);

                    /**
                     * 判断参数 PrivateDomainNames 是否已赋值
                     * @return PrivateDomainNames 是否已赋值
                     * 
                     */
                    bool PrivateDomainNamesHasBeenSet() const;

                private:

                    /**
                     * <p>网络类型。 0：公网，1：内网</p>
                     */
                    uint64_t m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * <p>私有网络id</p>
                     */
                    std::string m_vpcID;
                    bool m_vpcIDHasBeenSet;

                    /**
                     * <p>私有网络所属用户app id</p>
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                    /**
                     * <p>网络服务类型。0：CVM，3：专线网关，11：云联网，1025：CLB</p>
                     */
                    uint64_t m_virtualGatewayType;
                    bool m_virtualGatewayTypeHasBeenSet;

                    /**
                     * <p>专线网关id或者云联网id</p>
                     */
                    std::string m_vpcGatewayIndex;
                    bool m_vpcGatewayIndexHasBeenSet;

                    /**
                     * <p>私有域名映射地址</p>
                     */
                    std::vector<PrivateDomainNames> m_privateDomainNames;
                    bool m_privateDomainNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_NETWORKINFO_H_
