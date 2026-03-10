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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYSREQUEST_H_

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
                * DescribeDataKeys请求参数结构体
                */
                class DescribeDataKeysRequest : public AbstractModel
                {
                public:
                    DescribeDataKeysRequest();
                    ~DescribeDataKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询DataKey的ID列表，批量查询一次最多支持100个DataKeyId
                     * @return DataKeyIds 查询DataKey的ID列表，批量查询一次最多支持100个DataKeyId
                     * 
                     */
                    std::vector<std::string> GetDataKeyIds() const;

                    /**
                     * 设置查询DataKey的ID列表，批量查询一次最多支持100个DataKeyId
                     * @param _dataKeyIds 查询DataKey的ID列表，批量查询一次最多支持100个DataKeyId
                     * 
                     */
                    void SetDataKeyIds(const std::vector<std::string>& _dataKeyIds);

                    /**
                     * 判断参数 DataKeyIds 是否已赋值
                     * @return DataKeyIds 是否已赋值
                     * 
                     */
                    bool DataKeyIdsHasBeenSet() const;

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
                     * 查询DataKey的ID列表，批量查询一次最多支持100个DataKeyId
                     */
                    std::vector<std::string> m_dataKeyIds;
                    bool m_dataKeyIdsHasBeenSet;

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

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEDATAKEYSREQUEST_H_
