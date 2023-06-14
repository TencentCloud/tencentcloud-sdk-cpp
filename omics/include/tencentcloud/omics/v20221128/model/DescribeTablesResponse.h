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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBETABLESRESPONSE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBETABLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/Table.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * DescribeTables返回参数结构体
                */
                class DescribeTablesResponse : public AbstractModel
                {
                public:
                    DescribeTablesResponse();
                    ~DescribeTablesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果总数。
                     * @return TotalCount 结果总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取表格列表。
                     * @return Tables 表格列表。
                     * 
                     */
                    std::vector<Table> GetTables() const;

                    /**
                     * 判断参数 Tables 是否已赋值
                     * @return Tables 是否已赋值
                     * 
                     */
                    bool TablesHasBeenSet() const;

                private:

                    /**
                     * 结果总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 表格列表。
                     */
                    std::vector<Table> m_tables;
                    bool m_tablesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_DESCRIBETABLESRESPONSE_H_
