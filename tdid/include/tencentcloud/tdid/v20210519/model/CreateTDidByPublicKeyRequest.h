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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPUBLICKEYREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPUBLICKEYREQUEST_H_

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
                * CreateTDidByPublicKey请求参数结构体
                */
                class CreateTDidByPublicKeyRequest : public AbstractModel
                {
                public:
                    CreateTDidByPublicKeyRequest();
                    ~CreateTDidByPublicKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络ID
                     * @return ClusterId 网络ID
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置网络ID
                     * @param ClusterId 网络ID
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取群组ID
                     * @return GroupId 群组ID
                     */
                    uint64_t GetGroupId() const;

                    /**
                     * 设置群组ID
                     * @param GroupId 群组ID
                     */
                    void SetGroupId(const uint64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取身份公钥
                     * @return PublicKey 身份公钥
                     */
                    std::string GetPublicKey() const;

                    /**
                     * 设置身份公钥
                     * @param PublicKey 身份公钥
                     */
                    void SetPublicKey(const std::string& _publicKey);

                    /**
                     * 判断参数 PublicKey 是否已赋值
                     * @return PublicKey 是否已赋值
                     */
                    bool PublicKeyHasBeenSet() const;

                    /**
                     * 获取加密公钥
                     * @return EncryptPubKey 加密公钥
                     */
                    std::string GetEncryptPubKey() const;

                    /**
                     * 设置加密公钥
                     * @param EncryptPubKey 加密公钥
                     */
                    void SetEncryptPubKey(const std::string& _encryptPubKey);

                    /**
                     * 判断参数 EncryptPubKey 是否已赋值
                     * @return EncryptPubKey 是否已赋值
                     */
                    bool EncryptPubKeyHasBeenSet() const;

                private:

                    /**
                     * 网络ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 群组ID
                     */
                    uint64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 身份公钥
                     */
                    std::string m_publicKey;
                    bool m_publicKeyHasBeenSet;

                    /**
                     * 加密公钥
                     */
                    std::string m_encryptPubKey;
                    bool m_encryptPubKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_CREATETDIDBYPUBLICKEYREQUEST_H_
