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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXPAYEEACCOUNTINFOREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXPAYEEACCOUNTINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryFlexPayeeAccountInfo请求参数结构体
                */
                class QueryFlexPayeeAccountInfoRequest : public AbstractModel
                {
                public:
                    QueryFlexPayeeAccountInfoRequest();
                    ~QueryFlexPayeeAccountInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取收款用户ID
                     * @return PayeeId 收款用户ID
                     */
                    std::string GetPayeeId() const;

                    /**
                     * 设置收款用户ID
                     * @param PayeeId 收款用户ID
                     */
                    void SetPayeeId(const std::string& _payeeId);

                    /**
                     * 判断参数 PayeeId 是否已赋值
                     * @return PayeeId 是否已赋值
                     */
                    bool PayeeIdHasBeenSet() const;

                    /**
                     * 获取外部用户ID
                     * @return OutUserId 外部用户ID
                     */
                    std::string GetOutUserId() const;

                    /**
                     * 设置外部用户ID
                     * @param OutUserId 外部用户ID
                     */
                    void SetOutUserId(const std::string& _outUserId);

                    /**
                     * 判断参数 OutUserId 是否已赋值
                     * @return OutUserId 是否已赋值
                     */
                    bool OutUserIdHasBeenSet() const;

                private:

                    /**
                     * 收款用户ID
                     */
                    std::string m_payeeId;
                    bool m_payeeIdHasBeenSet;

                    /**
                     * 外部用户ID
                     */
                    std::string m_outUserId;
                    bool m_outUserIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYFLEXPAYEEACCOUNTINFOREQUEST_H_
