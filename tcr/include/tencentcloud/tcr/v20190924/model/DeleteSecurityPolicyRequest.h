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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DELETESECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DELETESECURITYPOLICYREQUEST_H_

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
                * DeleteSecurityPolicy请求参数结构体
                */
                class DeleteSecurityPolicyRequest : public AbstractModel
                {
                public:
                    DeleteSecurityPolicyRequest();
                    ~DeleteSecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例Id
                     * @return RegistryId 实例Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例Id
                     * @param _registryId 实例Id
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
                     * 获取白名单Id
                     * @return PolicyIndex 白名单Id
                     * 
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置白名单Id
                     * @param _policyIndex 白名单Id
                     * 
                     */
                    void SetPolicyIndex(const int64_t& _policyIndex);

                    /**
                     * 判断参数 PolicyIndex 是否已赋值
                     * @return PolicyIndex 是否已赋值
                     * 
                     */
                    bool PolicyIndexHasBeenSet() const;

                    /**
                     * 获取白名单版本
                     * @return PolicyVersion 白名单版本
                     * 
                     */
                    std::string GetPolicyVersion() const;

                    /**
                     * 设置白名单版本
                     * @param _policyVersion 白名单版本
                     * 
                     */
                    void SetPolicyVersion(const std::string& _policyVersion);

                    /**
                     * 判断参数 PolicyVersion 是否已赋值
                     * @return PolicyVersion 是否已赋值
                     * 
                     */
                    bool PolicyVersionHasBeenSet() const;

                    /**
                     * 获取网段或IP(互斥)
                     * @return CidrBlock 网段或IP(互斥)
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置网段或IP(互斥)
                     * @param _cidrBlock 网段或IP(互斥)
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                private:

                    /**
                     * 实例Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 白名单Id
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     * 白名单版本
                     */
                    std::string m_policyVersion;
                    bool m_policyVersionHasBeenSet;

                    /**
                     * 网段或IP(互斥)
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DELETESECURITYPOLICYREQUEST_H_
