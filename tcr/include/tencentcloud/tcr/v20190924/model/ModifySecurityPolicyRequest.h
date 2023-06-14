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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSECURITYPOLICYREQUEST_H_

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
                * ModifySecurityPolicy请求参数结构体
                */
                class ModifySecurityPolicyRequest : public AbstractModel
                {
                public:
                    ModifySecurityPolicyRequest();
                    ~ModifySecurityPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例的Id
                     * @return RegistryId 实例的Id
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置实例的Id
                     * @param _registryId 实例的Id
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
                     * 获取PolicyId
                     * @return PolicyIndex PolicyId
                     * 
                     */
                    int64_t GetPolicyIndex() const;

                    /**
                     * 设置PolicyId
                     * @param _policyIndex PolicyId
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
                     * 获取192.168.0.0/24 白名单Ip
                     * @return CidrBlock 192.168.0.0/24 白名单Ip
                     * 
                     */
                    std::string GetCidrBlock() const;

                    /**
                     * 设置192.168.0.0/24 白名单Ip
                     * @param _cidrBlock 192.168.0.0/24 白名单Ip
                     * 
                     */
                    void SetCidrBlock(const std::string& _cidrBlock);

                    /**
                     * 判断参数 CidrBlock 是否已赋值
                     * @return CidrBlock 是否已赋值
                     * 
                     */
                    bool CidrBlockHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 实例的Id
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * PolicyId
                     */
                    int64_t m_policyIndex;
                    bool m_policyIndexHasBeenSet;

                    /**
                     * 192.168.0.0/24 白名单Ip
                     */
                    std::string m_cidrBlock;
                    bool m_cidrBlockHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_MODIFYSECURITYPOLICYREQUEST_H_
