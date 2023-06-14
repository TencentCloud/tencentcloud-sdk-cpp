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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEDNSACCOUNTREQUEST_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEDNSACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/privatedns/v20201028/model/PrivateDNSAccount.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * DeletePrivateDNSAccount请求参数结构体
                */
                class DeletePrivateDNSAccountRequest : public AbstractModel
                {
                public:
                    DeletePrivateDNSAccountRequest();
                    ~DeletePrivateDNSAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取私有域解析账号
                     * @return Account 私有域解析账号
                     * 
                     */
                    PrivateDNSAccount GetAccount() const;

                    /**
                     * 设置私有域解析账号
                     * @param _account 私有域解析账号
                     * 
                     */
                    void SetAccount(const PrivateDNSAccount& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                private:

                    /**
                     * 私有域解析账号
                     */
                    PrivateDNSAccount m_account;
                    bool m_accountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_DELETEPRIVATEDNSACCOUNTREQUEST_H_
