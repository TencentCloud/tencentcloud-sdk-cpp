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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/ResourceTypeRegions.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * UpdateCertificateInstance请求参数结构体
                */
                class UpdateCertificateInstanceRequest : public AbstractModel
                {
                public:
                    UpdateCertificateInstanceRequest();
                    ~UpdateCertificateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一键更新新证书ID
                     * @return CertificateId 一键更新新证书ID
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置一键更新新证书ID
                     * @param CertificateId 一键更新新证书ID
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取一键更新原证书ID
                     * @return OldCertificateId 一键更新原证书ID
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置一键更新原证书ID
                     * @param OldCertificateId 一键更新原证书ID
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取需要部署的资源类型
                     * @return ResourceTypes 需要部署的资源类型
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置需要部署的资源类型
                     * @param ResourceTypes 需要部署的资源类型
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取需要部署的地域列表（废弃）
                     * @return Regions 需要部署的地域列表（废弃）
                     */
                    std::vector<std::string> GetRegions() const;

                    /**
                     * 设置需要部署的地域列表（废弃）
                     * @param Regions 需要部署的地域列表（废弃）
                     */
                    void SetRegions(const std::vector<std::string>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取云资源需要部署的地域列表
                     * @return ResourceTypesRegions 云资源需要部署的地域列表
                     */
                    std::vector<ResourceTypeRegions> GetResourceTypesRegions() const;

                    /**
                     * 设置云资源需要部署的地域列表
                     * @param ResourceTypesRegions 云资源需要部署的地域列表
                     */
                    void SetResourceTypesRegions(const std::vector<ResourceTypeRegions>& _resourceTypesRegions);

                    /**
                     * 判断参数 ResourceTypesRegions 是否已赋值
                     * @return ResourceTypesRegions 是否已赋值
                     */
                    bool ResourceTypesRegionsHasBeenSet() const;

                private:

                    /**
                     * 一键更新新证书ID
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 一键更新原证书ID
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 需要部署的资源类型
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * 需要部署的地域列表（废弃）
                     */
                    std::vector<std::string> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * 云资源需要部署的地域列表
                     */
                    std::vector<ResourceTypeRegions> m_resourceTypesRegions;
                    bool m_resourceTypesRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPDATECERTIFICATEINSTANCEREQUEST_H_
