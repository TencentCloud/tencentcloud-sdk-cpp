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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CREATEBYOKNETWORKREQUEST_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CREATEBYOKNETWORKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/TagInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * CreateBYOKNetwork请求参数结构体
                */
                class CreateBYOKNetworkRequest : public AbstractModel
                {
                public:
                    CreateBYOKNetworkRequest();
                    ~CreateBYOKNetworkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>子网 ID</p><p>参数格式：subnet-xxxxxxxx</p>
                     * @return SubnetId <p>子网 ID</p><p>参数格式：subnet-xxxxxxxx</p>
                     * 
                     */
                    std::string GetSubnetId() const;

                    /**
                     * 设置<p>子网 ID</p><p>参数格式：subnet-xxxxxxxx</p>
                     * @param _subnetId <p>子网 ID</p><p>参数格式：subnet-xxxxxxxx</p>
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
                     * 获取<p>VPC 实例 ID</p><p>参数格式：vpc-xxxxxxxx</p>
                     * @return VpcId <p>VPC 实例 ID</p><p>参数格式：vpc-xxxxxxxx</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>VPC 实例 ID</p><p>参数格式：vpc-xxxxxxxx</p>
                     * @param _vpcId <p>VPC 实例 ID</p><p>参数格式：vpc-xxxxxxxx</p>
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
                     * 获取<p>BYOK 的自定义名字</p><p>入参限制：1～256个字符，可选</p>
                     * @return ServiceProviderName <p>BYOK 的自定义名字</p><p>入参限制：1～256个字符，可选</p>
                     * 
                     */
                    std::string GetServiceProviderName() const;

                    /**
                     * 设置<p>BYOK 的自定义名字</p><p>入参限制：1～256个字符，可选</p>
                     * @param _serviceProviderName <p>BYOK 的自定义名字</p><p>入参限制：1～256个字符，可选</p>
                     * 
                     */
                    void SetServiceProviderName(const std::string& _serviceProviderName);

                    /**
                     * 判断参数 ServiceProviderName 是否已赋值
                     * @return ServiceProviderName 是否已赋值
                     * 
                     */
                    bool ServiceProviderNameHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<TagInfo> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<TagInfo>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>子网 ID</p><p>参数格式：subnet-xxxxxxxx</p>
                     */
                    std::string m_subnetId;
                    bool m_subnetIdHasBeenSet;

                    /**
                     * <p>VPC 实例 ID</p><p>参数格式：vpc-xxxxxxxx</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>BYOK 的自定义名字</p><p>入参限制：1～256个字符，可选</p>
                     */
                    std::string m_serviceProviderName;
                    bool m_serviceProviderNameHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<TagInfo> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CREATEBYOKNETWORKREQUEST_H_
