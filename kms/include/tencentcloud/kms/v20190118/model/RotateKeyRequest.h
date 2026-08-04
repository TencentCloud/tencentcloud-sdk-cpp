/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ROTATEKEYREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ROTATEKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/MemberAccount.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * RotateKey请求参数结构体
                */
                class RotateKeyRequest : public AbstractModel
                {
                public:
                    RotateKeyRequest();
                    ~RotateKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>CMK的全局唯一标识符</p>
                     * @return KeyId <p>CMK的全局唯一标识符</p>
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置<p>CMK的全局唯一标识符</p>
                     * @param _keyId <p>CMK的全局唯一标识符</p>
                     * 
                     */
                    void SetKeyId(const std::string& _keyId);

                    /**
                     * 判断参数 KeyId 是否已赋值
                     * @return KeyId 是否已赋值
                     * 
                     */
                    bool KeyIdHasBeenSet() const;

                    /**
                     * 获取<p>成员账号信息，用于多账号场景</p>
                     * @return MemberAccount <p>成员账号信息，用于多账号场景</p>
                     * 
                     */
                    MemberAccount GetMemberAccount() const;

                    /**
                     * 设置<p>成员账号信息，用于多账号场景</p>
                     * @param _memberAccount <p>成员账号信息，用于多账号场景</p>
                     * 
                     */
                    void SetMemberAccount(const MemberAccount& _memberAccount);

                    /**
                     * 判断参数 MemberAccount 是否已赋值
                     * @return MemberAccount 是否已赋值
                     * 
                     */
                    bool MemberAccountHasBeenSet() const;

                private:

                    /**
                     * <p>CMK的全局唯一标识符</p>
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * <p>成员账号信息，用于多账号场景</p>
                     */
                    MemberAccount m_memberAccount;
                    bool m_memberAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ROTATEKEYREQUEST_H_
