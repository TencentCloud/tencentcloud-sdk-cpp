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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/AccountInfo.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeAccounts返回参数结构体
                */
                class DescribeAccountsResponse : public AbstractModel
                {
                public:
                    DescribeAccountsResponse();
                    ~DescribeAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合查询条件的账号数量。
                     * @return TotalCount 符合查询条件的账号数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取符合查询条件的账号详细信息。
                     * @return Items 符合查询条件的账号详细信息。
                     * 
                     */
                    std::vector<AccountInfo> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取用户可设置实例最大连接数。
                     * @return MaxUserConnections 用户可设置实例最大连接数。
                     * 
                     */
                    int64_t GetMaxUserConnections() const;

                    /**
                     * 判断参数 MaxUserConnections 是否已赋值
                     * @return MaxUserConnections 是否已赋值
                     * 
                     */
                    bool MaxUserConnectionsHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的账号数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 符合查询条件的账号详细信息。
                     */
                    std::vector<AccountInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 用户可设置实例最大连接数。
                     */
                    int64_t m_maxUserConnections;
                    bool m_maxUserConnectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEACCOUNTSRESPONSE_H_
