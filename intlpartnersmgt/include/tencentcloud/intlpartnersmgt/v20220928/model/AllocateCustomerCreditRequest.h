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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECUSTOMERCREDITREQUEST_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECUSTOMERCREDITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * AllocateCustomerCredit请求参数结构体
                */
                class AllocateCustomerCreditRequest : public AbstractModel
                {
                public:
                    AllocateCustomerCreditRequest();
                    ~AllocateCustomerCreditRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分配客户信用的具体值
                     * @return AddedCredit 分配客户信用的具体值
                     */
                    double GetAddedCredit() const;

                    /**
                     * 设置分配客户信用的具体值
                     * @param AddedCredit 分配客户信用的具体值
                     */
                    void SetAddedCredit(const double& _addedCredit);

                    /**
                     * 判断参数 AddedCredit 是否已赋值
                     * @return AddedCredit 是否已赋值
                     */
                    bool AddedCreditHasBeenSet() const;

                    /**
                     * 获取客户uin
                     * @return ClientUin 客户uin
                     */
                    uint64_t GetClientUin() const;

                    /**
                     * 设置客户uin
                     * @param ClientUin 客户uin
                     */
                    void SetClientUin(const uint64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     */
                    bool ClientUinHasBeenSet() const;

                private:

                    /**
                     * 分配客户信用的具体值
                     */
                    double m_addedCredit;
                    bool m_addedCreditHasBeenSet;

                    /**
                     * 客户uin
                     */
                    uint64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_ALLOCATECUSTOMERCREDITREQUEST_H_
