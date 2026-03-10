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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEDATAKEYDESCRIPTIONREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEDATAKEYDESCRIPTIONREQUEST_H_

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
                * UpdateDataKeyDescription请求参数结构体
                */
                class UpdateDataKeyDescriptionRequest : public AbstractModel
                {
                public:
                    UpdateDataKeyDescriptionRequest();
                    ~UpdateDataKeyDescriptionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据密钥的唯一标志符
                     * @return DataKeyId 数据密钥的唯一标志符
                     * 
                     */
                    std::string GetDataKeyId() const;

                    /**
                     * 设置数据密钥的唯一标志符
                     * @param _dataKeyId 数据密钥的唯一标志符
                     * 
                     */
                    void SetDataKeyId(const std::string& _dataKeyId);

                    /**
                     * 判断参数 DataKeyId 是否已赋值
                     * @return DataKeyId 是否已赋值
                     * 
                     */
                    bool DataKeyIdHasBeenSet() const;

                    /**
                     * 获取数据密钥 的描述，最大100字节
                     * @return Description 数据密钥 的描述，最大100字节
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置数据密钥 的描述，最大100字节
                     * @param _description 数据密钥 的描述，最大100字节
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

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
                     * 数据密钥的唯一标志符
                     */
                    std::string m_dataKeyId;
                    bool m_dataKeyIdHasBeenSet;

                    /**
                     * 数据密钥 的描述，最大100字节
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

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

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_UPDATEDATAKEYDESCRIPTIONREQUEST_H_
