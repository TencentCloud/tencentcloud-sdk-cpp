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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREPOLICYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * CreateSignaturePolicy请求参数结构体
                */
                class CreateSignaturePolicyRequest : public AbstractModel
                {
                public:
                    CreateSignaturePolicyRequest();
                    ~CreateSignaturePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 Id
                     * @return RegistryId 实例 Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例 Id
                     * @param _registryId 实例 Id
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取策略名称
                     * @return Name 策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置策略名称
                     * @param _name 策略名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取命名空间名称
                     * @return NamespaceName 命名空间名称
                     * 
                     */
                    std::string GetNamespaceName() const;

                    /**
                     * 设置命名空间名称
                     * @param _namespaceName 命名空间名称
                     * 
                     */
                    void SetNamespaceName(const std::string& _namespaceName);

                    /**
                     * 判断参数 NamespaceName 是否已赋值
                     * @return NamespaceName 是否已赋值
                     * 
                     */
                    bool NamespaceNameHasBeenSet() const;

                    /**
                     * 获取KMS 密钥
                     * @return KmsId KMS 密钥
                     * 
                     */
                    std::string GetKmsId() const;

                    /**
                     * 设置KMS 密钥
                     * @param _kmsId KMS 密钥
                     * 
                     */
                    void SetKmsId(const std::string& _kmsId);

                    /**
                     * 判断参数 KmsId 是否已赋值
                     * @return KmsId 是否已赋值
                     * 
                     */
                    bool KmsIdHasBeenSet() const;

                    /**
                     * 获取KMS 密钥所属地域
                     * @return KmsRegion KMS 密钥所属地域
                     * 
                     */
                    std::string GetKmsRegion() const;

                    /**
                     * 设置KMS 密钥所属地域
                     * @param _kmsRegion KMS 密钥所属地域
                     * 
                     */
                    void SetKmsRegion(const std::string& _kmsRegion);

                    /**
                     * 判断参数 KmsRegion 是否已赋值
                     * @return KmsRegion 是否已赋值
                     * 
                     */
                    bool KmsRegionHasBeenSet() const;

                    /**
                     * 获取用户自定义域名，为空时使用 TCR 实例默认域名生成签名
                     * @return Domain 用户自定义域名，为空时使用 TCR 实例默认域名生成签名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置用户自定义域名，为空时使用 TCR 实例默认域名生成签名
                     * @param _domain 用户自定义域名，为空时使用 TCR 实例默认域名生成签名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取禁用加签策略，默认为 false
                     * @return Disabled 禁用加签策略，默认为 false
                     * 
                     */
                    bool GetDisabled() const;

                    /**
                     * 设置禁用加签策略，默认为 false
                     * @param _disabled 禁用加签策略，默认为 false
                     * 
                     */
                    void SetDisabled(const bool& _disabled);

                    /**
                     * 判断参数 Disabled 是否已赋值
                     * @return Disabled 是否已赋值
                     * 
                     */
                    bool DisabledHasBeenSet() const;

                private:

                    /**
                     * 实例 Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 命名空间名称
                     */
                    std::string m_namespaceName;
                    bool m_namespaceNameHasBeenSet;

                    /**
                     * KMS 密钥
                     */
                    std::string m_kmsId;
                    bool m_kmsIdHasBeenSet;

                    /**
                     * KMS 密钥所属地域
                     */
                    std::string m_kmsRegion;
                    bool m_kmsRegionHasBeenSet;

                    /**
                     * 用户自定义域名，为空时使用 TCR 实例默认域名生成签名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 禁用加签策略，默认为 false
                     */
                    bool m_disabled;
                    bool m_disabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_CREATESIGNATUREPOLICYREQUEST_H_
