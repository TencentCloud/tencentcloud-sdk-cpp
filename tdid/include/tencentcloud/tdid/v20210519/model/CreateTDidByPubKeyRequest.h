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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPUBKEYREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPUBKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * CreateTDidByPubKey请求参数结构体
                */
                class CreateTDidByPubKeyRequest : public AbstractModel
                {
                public:
                    CreateTDidByPubKeyRequest();
                    ~CreateTDidByPubKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取DID应用id
                     * @return DAPId DID应用id
                     * 
                     */
                    uint64_t GetDAPId() const;

                    /**
                     * 设置DID应用id
                     * @param _dAPId DID应用id
                     * 
                     */
                    void SetDAPId(const uint64_t& _dAPId);

                    /**
                     * 判断参数 DAPId 是否已赋值
                     * @return DAPId 是否已赋值
                     * 
                     */
                    bool DAPIdHasBeenSet() const;

                    /**
                     * 获取pem格式的认证公钥
                     * @return PublicKey pem格式的认证公钥
                     * 
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置pem格式的认证公钥
                     * @param _publicKey pem格式的认证公钥
                     * 
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     * 
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取自定义DID初始化属性json字符串
                     * @return CustomAttribute 自定义DID初始化属性json字符串
                     * 
                     */
                    std::string GetCustomAttribute() const;

                    /**
                     * 设置自定义DID初始化属性json字符串
                     * @param _customAttribute 自定义DID初始化属性json字符串
                     * 
                     */
                    void SetCustomAttribute(const std::string& _customAttribute);

                    /**
                     * 判断参数 CustomAttribute 是否已赋值
                     * @return CustomAttribute 是否已赋值
                     * 
                     */
                    bool CustomAttributeHasBeenSet() const;

                    /**
                     * 获取0:did存在返回错误，1:did存在返回该did，默认:0
                     * @return IgnoreExisted 0:did存在返回错误，1:did存在返回该did，默认:0
                     * 
                     */
                    uint64_t GetIgnoreExisted() const;

                    /**
                     * 设置0:did存在返回错误，1:did存在返回该did，默认:0
                     * @param _ignoreExisted 0:did存在返回错误，1:did存在返回该did，默认:0
                     * 
                     */
                    void SetIgnoreExisted(const uint64_t& _ignoreExisted);

                    /**
                     * 判断参数 IgnoreExisted 是否已赋值
                     * @return IgnoreExisted 是否已赋值
                     * 
                     */
                    bool IgnoreExistedHasBeenSet() const;

                private:

                    /**
                     * DID应用id
                     */
                    uint64_t m_dAPId;
                    bool m_dAPIdHasBeenSet;

                    /**
                     * pem格式的认证公钥
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 自定义DID初始化属性json字符串
                     */
                    std::string m_customAttribute;
                    bool m_customAttributeHasBeenSet;

                    /**
                     * 0:did存在返回错误，1:did存在返回该did，默认:0
                     */
                    uint64_t m_ignoreExisted;
                    bool m_ignoreExistedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPUBKEYREQUEST_H_
