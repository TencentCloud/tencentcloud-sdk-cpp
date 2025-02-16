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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDEPLOYEDRESOURCESREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDEPLOYEDRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * DescribeDeployedResources请求参数结构体
                */
                class DescribeDeployedResourcesRequest : public AbstractModel
                {
                public:
                    DescribeDeployedResourcesRequest();
                    ~DescribeDeployedResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取证书ID
                     * @return CertificateIds 证书ID
                     * 
                     */
                    std::vector<std::string> GetCertificateIds() const;

                    /**
                     * 设置证书ID
                     * @param _certificateIds 证书ID
                     * 
                     */
                    void SetCertificateIds(const std::vector<std::string>& _certificateIds);

                    /**
                     * 判断参数 CertificateIds 是否已赋值
                     * @return CertificateIds 是否已赋值
                     * 
                     */
                    bool CertificateIdsHasBeenSet() const;

                    /**
                     * 获取资源类型:clb,cdn,live,waf,antiddos,teo
                     * @return ResourceType 资源类型:clb,cdn,live,waf,antiddos,teo
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型:clb,cdn,live,waf,antiddos,teo
                     * @param _resourceType 资源类型:clb,cdn,live,waf,antiddos,teo
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 证书ID
                     */
                    std::vector<std::string> m_certificateIds;
                    bool m_certificateIdsHasBeenSet;

                    /**
                     * 资源类型:clb,cdn,live,waf,antiddos,teo
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_DESCRIBEDEPLOYEDRESOURCESREQUEST_H_
