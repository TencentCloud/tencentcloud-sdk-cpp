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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCEREQUEST_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCEREQUEST_H_

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
                * UploadUpdateCertificateInstance请求参数结构体
                */
                class UploadUpdateCertificateInstanceRequest : public AbstractModel
                {
                public:
                    UploadUpdateCertificateInstanceRequest();
                    ~UploadUpdateCertificateInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * @return OldCertificateId 一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * 
                     */
                    std::string GetOldCertificateId() const;

                    /**
                     * 设置一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * @param _oldCertificateId 一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     * 
                     */
                    void SetOldCertificateId(const std::string& _oldCertificateId);

                    /**
                     * 判断参数 OldCertificateId 是否已赋值
                     * @return OldCertificateId 是否已赋值
                     * 
                     */
                    bool OldCertificateIdHasBeenSet() const;

                    /**
                     * 获取需要部署的资源类型，参数值可选（小写）：clb
                     * @return ResourceTypes 需要部署的资源类型，参数值可选（小写）：clb
                     * 
                     */
                    std::vector<std::string> GetResourceTypes() const;

                    /**
                     * 设置需要部署的资源类型，参数值可选（小写）：clb
                     * @param _resourceTypes 需要部署的资源类型，参数值可选（小写）：clb
                     * 
                     */
                    void SetResourceTypes(const std::vector<std::string>& _resourceTypes);

                    /**
                     * 判断参数 ResourceTypes 是否已赋值
                     * @return ResourceTypes 是否已赋值
                     * 
                     */
                    bool ResourceTypesHasBeenSet() const;

                    /**
                     * 获取公钥证书
                     * @return CertificatePublicKey 公钥证书
                     * 
                     */
                    std::string GetCertificatePublicKey() const;

                    /**
                     * 设置公钥证书
                     * @param _certificatePublicKey 公钥证书
                     * 
                     */
                    void SetCertificatePublicKey(const std::string& _certificatePublicKey);

                    /**
                     * 判断参数 CertificatePublicKey 是否已赋值
                     * @return CertificatePublicKey 是否已赋值
                     * 
                     */
                    bool CertificatePublicKeyHasBeenSet() const;

                    /**
                     * 获取私钥证书
                     * @return CertificatePrivateKey 私钥证书
                     * 
                     */
                    std::string GetCertificatePrivateKey() const;

                    /**
                     * 设置私钥证书
                     * @param _certificatePrivateKey 私钥证书
                     * 
                     */
                    void SetCertificatePrivateKey(const std::string& _certificatePrivateKey);

                    /**
                     * 判断参数 CertificatePrivateKey 是否已赋值
                     * @return CertificatePrivateKey 是否已赋值
                     * 
                     */
                    bool CertificatePrivateKeyHasBeenSet() const;

                    /**
                     * 获取云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb
                     * @return ResourceTypesRegions 云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb
                     * 
                     */
                    std::vector<ResourceTypeRegions> GetResourceTypesRegions() const;

                    /**
                     * 设置云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb
                     * @param _resourceTypesRegions 云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb
                     * 
                     */
                    void SetResourceTypesRegions(const std::vector<ResourceTypeRegions>& _resourceTypesRegions);

                    /**
                     * 判断参数 ResourceTypesRegions 是否已赋值
                     * @return ResourceTypesRegions 是否已赋值
                     * 
                     */
                    bool ResourceTypesRegionsHasBeenSet() const;

                private:

                    /**
                     * 一键更新的旧证书ID。 通过查询该证书ID绑定的云资源，然后使用新证书对这些云资源进行更新
                     */
                    std::string m_oldCertificateId;
                    bool m_oldCertificateIdHasBeenSet;

                    /**
                     * 需要部署的资源类型，参数值可选（小写）：clb
                     */
                    std::vector<std::string> m_resourceTypes;
                    bool m_resourceTypesHasBeenSet;

                    /**
                     * 公钥证书
                     */
                    std::string m_certificatePublicKey;
                    bool m_certificatePublicKeyHasBeenSet;

                    /**
                     * 私钥证书
                     */
                    std::string m_certificatePrivateKey;
                    bool m_certificatePrivateKeyHasBeenSet;

                    /**
                     * 云资源需要部署的地域列表，支持地域的云资源类型必传，取值：clb
                     */
                    std::vector<ResourceTypeRegions> m_resourceTypesRegions;
                    bool m_resourceTypesRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_UPLOADUPDATECERTIFICATEINSTANCEREQUEST_H_
