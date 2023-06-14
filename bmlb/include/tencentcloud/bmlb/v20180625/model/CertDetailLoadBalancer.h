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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_CERTDETAILLOADBALANCER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_CERTDETAILLOADBALANCER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取证书信息时返回的所用在的负载均衡信息。
                */
                class CertDetailLoadBalancer : public AbstractModel
                {
                public:
                    CertDetailLoadBalancer();
                    ~CertDetailLoadBalancer() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取黑石负载均衡实例ID。
                     * @return LoadBalancerId 黑石负载均衡实例ID。
                     * 
                     */
                    std::string GetLoadBalancerId() const;

                    /**
                     * 设置黑石负载均衡实例ID。
                     * @param _loadBalancerId 黑石负载均衡实例ID。
                     * 
                     */
                    void SetLoadBalancerId(const std::string& _loadBalancerId);

                    /**
                     * 判断参数 LoadBalancerId 是否已赋值
                     * @return LoadBalancerId 是否已赋值
                     * 
                     */
                    bool LoadBalancerIdHasBeenSet() const;

                    /**
                     * 获取黑石负载均衡实例名称。
                     * @return LoadBalancerName 黑石负载均衡实例名称。
                     * 
                     */
                    std::string GetLoadBalancerName() const;

                    /**
                     * 设置黑石负载均衡实例名称。
                     * @param _loadBalancerName 黑石负载均衡实例名称。
                     * 
                     */
                    void SetLoadBalancerName(const std::string& _loadBalancerName);

                    /**
                     * 判断参数 LoadBalancerName 是否已赋值
                     * @return LoadBalancerName 是否已赋值
                     * 
                     */
                    bool LoadBalancerNameHasBeenSet() const;

                    /**
                     * 获取该黑石负载均衡所在的VpcId。
                     * @return VpcId 该黑石负载均衡所在的VpcId。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置该黑石负载均衡所在的VpcId。
                     * @param _vpcId 该黑石负载均衡所在的VpcId。
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
                     * 获取该黑石负载均衡所在的regionId。
                     * @return RegionId 该黑石负载均衡所在的regionId。
                     * 
                     */
                    int64_t GetRegionId() const;

                    /**
                     * 设置该黑石负载均衡所在的regionId。
                     * @param _regionId 该黑石负载均衡所在的regionId。
                     * 
                     */
                    void SetRegionId(const int64_t& _regionId);

                    /**
                     * 判断参数 RegionId 是否已赋值
                     * @return RegionId 是否已赋值
                     * 
                     */
                    bool RegionIdHasBeenSet() const;

                private:

                    /**
                     * 黑石负载均衡实例ID。
                     */
                    std::string m_loadBalancerId;
                    bool m_loadBalancerIdHasBeenSet;

                    /**
                     * 黑石负载均衡实例名称。
                     */
                    std::string m_loadBalancerName;
                    bool m_loadBalancerNameHasBeenSet;

                    /**
                     * 该黑石负载均衡所在的VpcId。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 该黑石负载均衡所在的regionId。
                     */
                    int64_t m_regionId;
                    bool m_regionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_CERTDETAILLOADBALANCER_H_
