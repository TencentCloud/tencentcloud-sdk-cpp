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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBECNAMEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBECNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * DescribeCNAME请求参数结构体
                */
                class DescribeCNAMERequest : public AbstractModel
                {
                public:
                    DescribeCNAMERequest();
                    ~DescribeCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务节点 ID（从查询域名可绑定服务节点接口DescribeDomainRegion中获取）
                     * @return ClusterId 服务节点 ID（从查询域名可绑定服务节点接口DescribeDomainRegion中获取）
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置服务节点 ID（从查询域名可绑定服务节点接口DescribeDomainRegion中获取）
                     * @param _clusterId 服务节点 ID（从查询域名可绑定服务节点接口DescribeDomainRegion中获取）
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取域名类型，0:拉流域名 1:推流域名
                     * @return DomainType 域名类型，0:拉流域名 1:推流域名
                     * 
                     */
                    int64_t GetDomainType() const;

                    /**
                     * 设置域名类型，0:拉流域名 1:推流域名
                     * @param _domainType 域名类型，0:拉流域名 1:推流域名
                     * 
                     */
                    void SetDomainType(const int64_t& _domainType);

                    /**
                     * 判断参数 DomainType 是否已赋值
                     * @return DomainType 是否已赋值
                     * 
                     */
                    bool DomainTypeHasBeenSet() const;

                private:

                    /**
                     * 服务节点 ID（从查询域名可绑定服务节点接口DescribeDomainRegion中获取）
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 域名类型，0:拉流域名 1:推流域名
                     */
                    int64_t m_domainType;
                    bool m_domainTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBECNAMEREQUEST_H_
