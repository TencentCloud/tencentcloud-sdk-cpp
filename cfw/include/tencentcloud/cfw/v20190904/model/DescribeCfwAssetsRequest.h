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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWASSETSREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWASSETSREQUEST_H_

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
                * DescribeCfwAssets请求参数结构体
                */
                class DescribeCfwAssetsRequest : public AbstractModel
                {
                public:
                    DescribeCfwAssetsRequest();
                    ~DescribeCfwAssetsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>资产类型。可选，默认 host；枚举 host 主机资产、vpc VPC 网络、subnet 子网。</p>
                     * @return AssetType <p>资产类型。可选，默认 host；枚举 host 主机资产、vpc VPC 网络、subnet 子网。</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>资产类型。可选，默认 host；枚举 host 主机资产、vpc VPC 网络、subnet 子网。</p>
                     * @param _assetType <p>资产类型。可选，默认 host；枚举 host 主机资产、vpc VPC 网络、subnet 子网。</p>
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
                     * 获取<p>IP 地址过滤。可选，支持部分匹配；适用于 host。</p>
                     * @return Ip <p>IP 地址过滤。可选，支持部分匹配；适用于 host。</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>IP 地址过滤。可选，支持部分匹配；适用于 host。</p>
                     * @param _ip <p>IP 地址过滤。可选，支持部分匹配；适用于 host。</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取<p>实例 ID 过滤。可选，适用于 host。</p>
                     * @return InstanceId <p>实例 ID 过滤。可选，适用于 host。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID 过滤。可选，适用于 host。</p>
                     * @param _instanceId <p>实例 ID 过滤。可选，适用于 host。</p>
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
                     * 获取<p>VPC ID 过滤。可选，适用于 host、vpc、subnet。</p>
                     * @return VpcId <p>VPC ID 过滤。可选，适用于 host、vpc、subnet。</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC ID 过滤。可选，适用于 host、vpc、subnet。</p>
                     * @param _vpcId <p>VPC ID 过滤。可选，适用于 host、vpc、subnet。</p>
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取<p>子网 ID 过滤。可选，适用于 host、subnet。</p>
                     * @return SubnetId <p>子网 ID 过滤。可选，适用于 host、subnet。</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID 过滤。可选，适用于 host、subnet。</p>
                     * @param _subnetId <p>子网 ID 过滤。可选，适用于 host、subnet。</p>
                     * 
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * 
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>实例类型过滤。可选，适用于 host；常见值包括 CVM、CLB、ENI、POD、MYSQL、REDIS、MARIADB、NAT、VPN、HAVIP、NATFW、GAAP、DC。</p>
                     * @return InstanceType <p>实例类型过滤。可选，适用于 host；常见值包括 CVM、CLB、ENI、POD、MYSQL、REDIS、MARIADB、NAT、VPN、HAVIP、NATFW、GAAP、DC。</p>
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置<p>实例类型过滤。可选，适用于 host；常见值包括 CVM、CLB、ENI、POD、MYSQL、REDIS、MARIADB、NAT、VPN、HAVIP、NATFW、GAAP、DC。</p>
                     * @param _instanceType <p>实例类型过滤。可选，适用于 host；常见值包括 CVM、CLB、ENI、POD、MYSQL、REDIS、MARIADB、NAT、VPN、HAVIP、NATFW、GAAP、DC。</p>
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
                     * 获取<p>最大返回资产数。可选，默认 100，最大 1000。</p>
                     * @return Limit <p>最大返回资产数。可选，默认 100，最大 1000。</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>最大返回资产数。可选，默认 100，最大 1000。</p>
                     * @param _limit <p>最大返回资产数。可选，默认 100，最大 1000。</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取<p>上一页 Response.Data 返回的不透明资产或指纹续查 token。首次查询不传；续查时只传 NextToken，不能同时传 AssetType、过滤条件或 Limit。调用方无需区分 token 类型；无效、篡改或租户不匹配会被拒绝。</p>
                     * @return NextToken <p>上一页 Response.Data 返回的不透明资产或指纹续查 token。首次查询不传；续查时只传 NextToken，不能同时传 AssetType、过滤条件或 Limit。调用方无需区分 token 类型；无效、篡改或租户不匹配会被拒绝。</p>
                     * 
                     */
                    std::string GetNextToken() const;

                    /**
                     * 设置<p>上一页 Response.Data 返回的不透明资产或指纹续查 token。首次查询不传；续查时只传 NextToken，不能同时传 AssetType、过滤条件或 Limit。调用方无需区分 token 类型；无效、篡改或租户不匹配会被拒绝。</p>
                     * @param _nextToken <p>上一页 Response.Data 返回的不透明资产或指纹续查 token。首次查询不传；续查时只传 NextToken，不能同时传 AssetType、过滤条件或 Limit。调用方无需区分 token 类型；无效、篡改或租户不匹配会被拒绝。</p>
                     * 
                     */
                    void SetNextToken(const std::string& _nextToken);

                    /**
                     * 判断参数 NextToken 是否已赋值
                     * @return NextToken 是否已赋值
                     * 
                     */
                    bool NextTokenHasBeenSet() const;

                private:

                    /**
                     * <p>资产类型。可选，默认 host；枚举 host 主机资产、vpc VPC 网络、subnet 子网。</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                    /**
                     * <p>IP 地址过滤。可选，支持部分匹配；适用于 host。</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>实例 ID 过滤。可选，适用于 host。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>VPC ID 过滤。可选，适用于 host、vpc、subnet。</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网 ID 过滤。可选，适用于 host、subnet。</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>实例类型过滤。可选，适用于 host；常见值包括 CVM、CLB、ENI、POD、MYSQL、REDIS、MARIADB、NAT、VPN、HAVIP、NATFW、GAAP、DC。</p>
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * <p>最大返回资产数。可选，默认 100，最大 1000。</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>上一页 Response.Data 返回的不透明资产或指纹续查 token。首次查询不传；续查时只传 NextToken，不能同时传 AssetType、过滤条件或 Limit。调用方无需区分 token 类型；无效、篡改或租户不匹配会被拒绝。</p>
                     */
                    std::string m_nextToken;
                    bool m_nextTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECFWASSETSREQUEST_H_
