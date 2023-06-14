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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABASESRESPONSE_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABASESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdb/v20170320/model/DatabasesWithCharacterLists.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeDatabases返回参数结构体
                */
                class DescribeDatabasesResponse : public AbstractModel
                {
                public:
                    DescribeDatabasesResponse();
                    ~DescribeDatabasesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合查询条件的实例总数。
                     * @return TotalCount 符合查询条件的实例总数。
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
                     * 获取返回的实例信息。
                     * @return Items 返回的实例信息。
                     * 
                     */
                    std::vector<std::string> GetItems() const;

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取数据库名以及字符集
                     * @return DatabaseList 数据库名以及字符集
                     * 
                     */
                    std::vector<DatabasesWithCharacterLists> GetDatabaseList() const;

                    /**
                     * 判断参数 DatabaseList 是否已赋值
                     * @return DatabaseList 是否已赋值
                     * 
                     */
                    bool DatabaseListHasBeenSet() const;

                private:

                    /**
                     * 符合查询条件的实例总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回的实例信息。
                     */
                    std::vector<std::string> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 数据库名以及字符集
                     */
                    std::vector<DatabasesWithCharacterLists> m_databaseList;
                    bool m_databaseListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBEDATABASESRESPONSE_H_
