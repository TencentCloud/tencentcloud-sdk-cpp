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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_ENABLEINTRANETACCESSREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_ENABLEINTRANETACCESSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/ParamInitResourceSubnet.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * EnableIntranetAccess请求参数结构体
                */
                class EnableIntranetAccessRequest : public AbstractModel
                {
                public:
                    EnableIntranetAccessRequest();
                    ~EnableIntranetAccessRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>堡垒机实例id</p>
                     * @return ResourceId <p>堡垒机实例id</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>堡垒机实例id</p>
                     * @param _resourceId <p>堡垒机实例id</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问的vpc id</p>
                     * @return VpcId <p>开通内网访问的vpc id</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>开通内网访问的vpc id</p>
                     * @param _vpcId <p>开通内网访问的vpc id</p>
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
                     * 获取<p>vpc名称</p>
                     * @return VpcName <p>vpc名称</p>
                     * 
                     */
                    std::string GetVpcName() const;

                    /**
                     * 设置<p>vpc名称</p>
                     * @param _vpcName <p>vpc名称</p>
                     * 
                     */
                    void SetVpcName(const std::string& _vpcName);

                    /**
                     * 判断参数 VpcName 是否已赋值
                     * @return VpcName 是否已赋值
                     * 
                     */
                    bool VpcNameHasBeenSet() const;

                    /**
                     * 获取<p>vpc地域</p>
                     * @return VpcRegion <p>vpc地域</p>
                     * 
                     */
                    std::string GetVpcRegion() const;

                    /**
                     * 设置<p>vpc地域</p>
                     * @param _vpcRegion <p>vpc地域</p>
                     * 
                     */
                    void SetVpcRegion(const std::string& _vpcRegion);

                    /**
                     * 判断参数 VpcRegion 是否已赋值
                     * @return VpcRegion 是否已赋值
                     * 
                     */
                    bool VpcRegionHasBeenSet() const;

                    /**
                     * 获取<p>vpc的网段</p>
                     * @return VpcCidrBlock <p>vpc的网段</p>
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置<p>vpc的网段</p>
                     * @param _vpcCidrBlock <p>vpc的网段</p>
                     * 
                     */
                    void SetVpcCidrBlock(const std::string& _vpcCidrBlock);

                    /**
                     * 判断参数 VpcCidrBlock 是否已赋值
                     * @return VpcCidrBlock 是否已赋值
                     * 
                     */
                    bool VpcCidrBlockHasBeenSet() const;

                    /**
                     * 获取<p>开通内网访问的subnet id</p>
                     * @return SubnetId <p>开通内网访问的subnet id</p>
                     * @deprecated
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>开通内网访问的subnet id</p>
                     * @param _subnetId <p>开通内网访问的subnet id</p>
                     * @deprecated
                     */
                    void SetSubnetId(const std::string& _subnetId);

                    /**
                     * 判断参数 SubnetId 是否已赋值
                     * @return SubnetId 是否已赋值
                     * @deprecated
                     */
                    bool SubnetIdHasBeenSet() const;

                    /**
                     * 获取<p>内网ip的自定义域名，可为空</p>
                     * @return DomainName <p>内网ip的自定义域名，可为空</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>内网ip的自定义域名，可为空</p>
                     * @param _domainName <p>内网ip的自定义域名，可为空</p>
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取<p>开通内网的子网信息</p>
                     * @return IntranetSubnets <p>开通内网的子网信息</p>
                     * 
                     */
                    std::vector<ParamInitResourceSubnet> GetIntranetSubnets() const;

                    /**
                     * 设置<p>开通内网的子网信息</p>
                     * @param _intranetSubnets <p>开通内网的子网信息</p>
                     * 
                     */
                    void SetIntranetSubnets(const std::vector<ParamInitResourceSubnet>& _intranetSubnets);

                    /**
                     * 判断参数 IntranetSubnets 是否已赋值
                     * @return IntranetSubnets 是否已赋值
                     * 
                     */
                    bool IntranetSubnetsHasBeenSet() const;

                private:

                    /**
                     * <p>堡垒机实例id</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>开通内网访问的vpc id</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>vpc名称</p>
                     */
                    std::string m_vpcName;
                    bool m_vpcNameHasBeenSet;

                    /**
                     * <p>vpc地域</p>
                     */
                    std::string m_vpcRegion;
                    bool m_vpcRegionHasBeenSet;

                    /**
                     * <p>vpc的网段</p>
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * <p>开通内网访问的subnet id</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>内网ip的自定义域名，可为空</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>开通内网的子网信息</p>
                     */
                    std::vector<ParamInitResourceSubnet> m_intranetSubnets;
                    bool m_intranetSubnetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ENABLEINTRANETACCESSREQUEST_H_
