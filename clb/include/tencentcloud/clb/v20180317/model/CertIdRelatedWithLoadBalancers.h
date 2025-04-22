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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_CERTIDRELATEDWITHLOADBALANCERS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_CERTIDRELATEDWITHLOADBALANCERS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/LoadBalancer.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 证书ID，以及与该证书ID关联的负载均衡实例列表
                */
                class CertIdRelatedWithLoadBalancers : public AbstractModel
                {
                public:
                    CertIdRelatedWithLoadBalancers();
                    ~CertIdRelatedWithLoadBalancers() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书ID
                     * @return CertId 证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID
                     * @param _certId 证书ID
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取与证书关联的负载均衡实例列表
                     * @return LoadBalancers 与证书关联的负载均衡实例列表
                     * 
                     */
                    std::vector<LoadBalancer> GetLoadBalancers() const;

                    /**
                     * 设置与证书关联的负载均衡实例列表
                     * @param _loadBalancers 与证书关联的负载均衡实例列表
                     * 
                     */
                    void SetLoadBalancers(const std::vector<LoadBalancer>& _loadBalancers);

                    /**
                     * 判断参数 LoadBalancers 是否已赋值
                     * @return LoadBalancers 是否已赋值
                     * 
                     */
                    bool LoadBalancersHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 与证书关联的负载均衡实例列表
                     */
                    std::vector<LoadBalancer> m_loadBalancers;
                    bool m_loadBalancersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_CERTIDRELATEDWITHLOADBALANCERS_H_
