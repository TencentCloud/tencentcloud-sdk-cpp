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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEAPPACCOUNTREQUEST_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEAPPACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * DeleteAppAccount请求参数结构体
                */
                class DeleteAppAccountRequest : public AbstractModel
                {
                public:
                    DeleteAppAccountRequest();
                    ~DeleteAppAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取账号ID数组。
                     * @return AccountIdList 账号ID数组。
                     * 
                     */
                    std::vector<std::string> GetAccountIdList() const;

                    /**
                     * 设置账号ID数组。
                     * @param _accountIdList 账号ID数组。
                     * 
                     */
                    void SetAccountIdList(const std::vector<std::string>& _accountIdList);

                    /**
                     * 判断参数 AccountIdList 是否已赋值
                     * @return AccountIdList 是否已赋值
                     * 
                     */
                    bool AccountIdListHasBeenSet() const;

                private:

                    /**
                     * 账号ID数组。
                     */
                    std::vector<std::string> m_accountIdList;
                    bool m_accountIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_DELETEAPPACCOUNTREQUEST_H_
