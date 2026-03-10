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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEALIASREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEALIASREQUEST_H_

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
                * UpdateAlias请求参数结构体
                */
                class UpdateAliasRequest : public AbstractModel
                {
                public:
                    UpdateAliasRequest();
                    ~UpdateAliasRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取新的别名，1-60个字符或数字的组合
                     * @return Alias 新的别名，1-60个字符或数字的组合
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置新的别名，1-60个字符或数字的组合
                     * @param _alias 新的别名，1-60个字符或数字的组合
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取CMK的全局唯一标识符
                     * @return KeyId CMK的全局唯一标识符
                     * 
                     */
                    std::string GetKeyId() const;

                    /**
                     * 设置CMK的全局唯一标识符
                     * @param _keyId CMK的全局唯一标识符
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
                     * 获取可信服务成员账号信息,当前账号时管理员或者委派管理员时有效。
                     * @return MemberAccount 可信服务成员账号信息,当前账号时管理员或者委派管理员时有效。
                     * 
                     */
                    MemberAccount GetMemberAccount() const;

                    /**
                     * 设置可信服务成员账号信息,当前账号时管理员或者委派管理员时有效。
                     * @param _memberAccount 可信服务成员账号信息,当前账号时管理员或者委派管理员时有效。
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
                     * 新的别名，1-60个字符或数字的组合
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * CMK的全局唯一标识符
                     */
                    std::string m_keyId;
                    bool m_keyIdHasBeenSet;

                    /**
                     * 可信服务成员账号信息,当前账号时管理员或者委派管理员时有效。
                     */
                    MemberAccount m_memberAccount;
                    bool m_memberAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEALIASREQUEST_H_
