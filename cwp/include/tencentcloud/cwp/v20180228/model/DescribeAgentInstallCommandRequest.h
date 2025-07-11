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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeAgentInstallCommand请求参数结构体
                */
                class DescribeAgentInstallCommandRequest : public AbstractModel
                {
                public:
                    DescribeAgentInstallCommandRequest();
                    ~DescribeAgentInstallCommandRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取是否腾讯云
                     * @return IsCloud 是否腾讯云
                     * 
                     */
                    bool GetIsCloud() const;

                    /**
                     * 设置是否腾讯云
                     * @param _isCloud 是否腾讯云
                     * 
                     */
                    void SetIsCloud(const bool& _isCloud);

                    /**
                     * 判断参数 IsCloud 是否已赋值
                     * @return IsCloud 是否已赋值
                     * 
                     */
                    bool IsCloudHasBeenSet() const;

                    /**
                     * 获取网络类型：basic-基础网络，private-VPC, public-公网，direct-专线
                     * @return NetType 网络类型：basic-基础网络，private-VPC, public-公网，direct-专线
                     * 
                     */
                    std::string GetNetType() const;

                    /**
                     * 设置网络类型：basic-基础网络，private-VPC, public-公网，direct-专线
                     * @param _netType 网络类型：basic-基础网络，private-VPC, public-公网，direct-专线
                     * 
                     */
                    void SetNetType(const std::string& _netType);

                    /**
                     * 判断参数 NetType 是否已赋值
                     * @return NetType 是否已赋值
                     * 
                     */
                    bool NetTypeHasBeenSet() const;

                    /**
                     * 获取地域标示, NetType=direct时必填
                     * @return RegionCode 地域标示, NetType=direct时必填
                     * 
                     */
                    std::string GetRegionCode() const;

                    /**
                     * 设置地域标示, NetType=direct时必填
                     * @param _regionCode 地域标示, NetType=direct时必填
                     * 
                     */
                    void SetRegionCode(const std::string& _regionCode);

                    /**
                     * 判断参数 RegionCode 是否已赋值
                     * @return RegionCode 是否已赋值
                     * 
                     */
                    bool RegionCodeHasBeenSet() const;

                    /**
                     * 获取VpcId, NetType=direct时必填
                     * @return VpcId VpcId, NetType=direct时必填
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VpcId, NetType=direct时必填
                     * @param _vpcId VpcId, NetType=direct时必填
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
                     * 获取标签ID列表，IsCloud=false时才会生效
                     * @return TagIds 标签ID列表，IsCloud=false时才会生效
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置标签ID列表，IsCloud=false时才会生效
                     * @param _tagIds 标签ID列表，IsCloud=false时才会生效
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                    /**
                     * 获取命令有效期，非腾讯云时必填（已废弃，命令永久生效）
                     * @return ExpireDate 命令有效期，非腾讯云时必填（已废弃，命令永久生效）
                     * 
                     */
                    std::string GetExpireDate() const;

                    /**
                     * 设置命令有效期，非腾讯云时必填（已废弃，命令永久生效）
                     * @param _expireDate 命令有效期，非腾讯云时必填（已废弃，命令永久生效）
                     * 
                     */
                    void SetExpireDate(const std::string& _expireDate);

                    /**
                     * 判断参数 ExpireDate 是否已赋值
                     * @return ExpireDate 是否已赋值
                     * 
                     */
                    bool ExpireDateHasBeenSet() const;

                    /**
                     * 获取代理方式接入的vip
                     * @return Vip 代理方式接入的vip
                     * 
                     */
                    std::string GetVip() const;

                    /**
                     * 设置代理方式接入的vip
                     * @param _vip 代理方式接入的vip
                     * 
                     */
                    void SetVip(const std::string& _vip);

                    /**
                     * 判断参数 Vip 是否已赋值
                     * @return Vip 是否已赋值
                     * 
                     */
                    bool VipHasBeenSet() const;

                private:

                    /**
                     * 是否腾讯云
                     */
                    bool m_isCloud;
                    bool m_isCloudHasBeenSet;

                    /**
                     * 网络类型：basic-基础网络，private-VPC, public-公网，direct-专线
                     */
                    std::string m_netType;
                    bool m_netTypeHasBeenSet;

                    /**
                     * 地域标示, NetType=direct时必填
                     */
                    std::string m_regionCode;
                    bool m_regionCodeHasBeenSet;

                    /**
                     * VpcId, NetType=direct时必填
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 标签ID列表，IsCloud=false时才会生效
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                    /**
                     * 命令有效期，非腾讯云时必填（已废弃，命令永久生效）
                     */
                    std::string m_expireDate;
                    bool m_expireDateHasBeenSet;

                    /**
                     * 代理方式接入的vip
                     */
                    std::string m_vip;
                    bool m_vipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEAGENTINSTALLCOMMANDREQUEST_H_
