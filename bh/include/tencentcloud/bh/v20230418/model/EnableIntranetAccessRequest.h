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
                     * 获取堡垒机实例id
                     * @return ResourceId 堡垒机实例id
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置堡垒机实例id
                     * @param _resourceId 堡垒机实例id
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
                     * 获取开通内网访问的vpc id
                     * @return VpcId 开通内网访问的vpc id
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置开通内网访问的vpc id
                     * @param _vpcId 开通内网访问的vpc id
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
                     * 获取vpc的网段
                     * @return VpcCidrBlock vpc的网段
                     * 
                     */
                    std::string GetVpcCidrBlock() const;

                    /**
                     * 设置vpc的网段
                     * @param _vpcCidrBlock vpc的网段
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
                     * 获取开通内网访问的subnet id
                     * @return SubnetId 开通内网访问的subnet id
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置开通内网访问的subnet id
                     * @param _subnetId 开通内网访问的subnet id
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
                     * 获取内网ip的自定义域名，可为空
                     * @return DomainName 内网ip的自定义域名，可为空
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置内网ip的自定义域名，可为空
                     * @param _domainName 内网ip的自定义域名，可为空
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                private:

                    /**
                     * 堡垒机实例id
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * 开通内网访问的vpc id
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * vpc的网段
                     */
                    std::string m_vpcCidrBlock;
                    bool m_vpcCidrBlockHasBeenSet;

                    /**
                     * 开通内网访问的subnet id
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * 内网ip的自定义域名，可为空
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_ENABLEINTRANETACCESSREQUEST_H_
