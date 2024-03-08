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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDBANDWIDTHPACKAGERESOURCESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDBANDWIDTHPACKAGERESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * AddBandwidthPackageResources请求参数结构体
                */
                class AddBandwidthPackageResourcesRequest : public AbstractModel
                {
                public:
                    AddBandwidthPackageResourcesRequest();
                    ~AddBandwidthPackageResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源唯一ID，当前支持EIP资源和LB资源，形如'eip-xxxx', 'lb-xxxx'
                     * @return ResourceIds 资源唯一ID，当前支持EIP资源和LB资源，形如'eip-xxxx', 'lb-xxxx'
                     * 
                     */
                    std::vector<std::string> GetResourceIds() const;

                    /**
                     * 设置资源唯一ID，当前支持EIP资源和LB资源，形如'eip-xxxx', 'lb-xxxx'
                     * @param _resourceIds 资源唯一ID，当前支持EIP资源和LB资源，形如'eip-xxxx', 'lb-xxxx'
                     * 
                     */
                    void SetResourceIds(const std::vector<std::string>& _resourceIds);

                    /**
                     * 判断参数 ResourceIds 是否已赋值
                     * @return ResourceIds 是否已赋值
                     * 
                     */
                    bool ResourceIdsHasBeenSet() const;

                    /**
                     * 获取带宽包唯一标识ID，形如'bwp-xxxx'
                     * @return BandwidthPackageId 带宽包唯一标识ID，形如'bwp-xxxx'
                     * 
                     */
                    std::string GetBandwidthPackageId() const;

                    /**
                     * 设置带宽包唯一标识ID，形如'bwp-xxxx'
                     * @param _bandwidthPackageId 带宽包唯一标识ID，形如'bwp-xxxx'
                     * 
                     */
                    void SetBandwidthPackageId(const std::string& _bandwidthPackageId);

                    /**
                     * 判断参数 BandwidthPackageId 是否已赋值
                     * @return BandwidthPackageId 是否已赋值
                     * 
                     */
                    bool BandwidthPackageIdHasBeenSet() const;

                    /**
                     * 获取带宽包类型，当前支持'BGP'、'HIGH_QUALITY_BGP'、'ANYCAST'、'SINGLEISP_CUCC'、'SINGLEISP_CMCC'、'SINGLEISP_CTCC'等类型。
                     * @return NetworkType 带宽包类型，当前支持'BGP'、'HIGH_QUALITY_BGP'、'ANYCAST'、'SINGLEISP_CUCC'、'SINGLEISP_CMCC'、'SINGLEISP_CTCC'等类型。
                     * 
                     */
                    std::string GetNetworkType() const;

                    /**
                     * 设置带宽包类型，当前支持'BGP'、'HIGH_QUALITY_BGP'、'ANYCAST'、'SINGLEISP_CUCC'、'SINGLEISP_CMCC'、'SINGLEISP_CTCC'等类型。
                     * @param _networkType 带宽包类型，当前支持'BGP'、'HIGH_QUALITY_BGP'、'ANYCAST'、'SINGLEISP_CUCC'、'SINGLEISP_CMCC'、'SINGLEISP_CTCC'等类型。
                     * 
                     */
                    void SetNetworkType(const std::string& _networkType);

                    /**
                     * 判断参数 NetworkType 是否已赋值
                     * @return NetworkType 是否已赋值
                     * 
                     */
                    bool NetworkTypeHasBeenSet() const;

                    /**
                     * 获取资源类型，包括'Address', 'LoadBalance'
                     * @return ResourceType 资源类型，包括'Address', 'LoadBalance'
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型，包括'Address', 'LoadBalance'
                     * @param _resourceType 资源类型，包括'Address', 'LoadBalance'
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取带宽包协议类型。当前支持'ipv4'和'ipv6'协议类型。
                     * @return Protocol 带宽包协议类型。当前支持'ipv4'和'ipv6'协议类型。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置带宽包协议类型。当前支持'ipv4'和'ipv6'协议类型。
                     * @param _protocol 带宽包协议类型。当前支持'ipv4'和'ipv6'协议类型。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                private:

                    /**
                     * 资源唯一ID，当前支持EIP资源和LB资源，形如'eip-xxxx', 'lb-xxxx'
                     */
                    std::vector<std::string> m_resourceIds;
                    bool m_resourceIdsHasBeenSet;

                    /**
                     * 带宽包唯一标识ID，形如'bwp-xxxx'
                     */
                    std::string m_bandwidthPackageId;
                    bool m_bandwidthPackageIdHasBeenSet;

                    /**
                     * 带宽包类型，当前支持'BGP'、'HIGH_QUALITY_BGP'、'ANYCAST'、'SINGLEISP_CUCC'、'SINGLEISP_CMCC'、'SINGLEISP_CTCC'等类型。
                     */
                    std::string m_networkType;
                    bool m_networkTypeHasBeenSet;

                    /**
                     * 资源类型，包括'Address', 'LoadBalance'
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 带宽包协议类型。当前支持'ipv4'和'ipv6'协议类型。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDBANDWIDTHPACKAGERESOURCESREQUEST_H_
