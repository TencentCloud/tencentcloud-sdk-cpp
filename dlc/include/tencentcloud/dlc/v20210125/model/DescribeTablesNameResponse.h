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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeTablesName返回参数结构体
                */
                class DescribeTablesNameResponse : public AbstractModel
                {
                public:
                    DescribeTablesNameResponse();
                    ~DescribeTablesNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据表名称对象列表。
                     * @return TableNameList 数据表名称对象列表。
                     * 
                     */
                    std::vector<std::string> GetTableNameList() const;

                    /**
                     * 判断参数 TableNameList 是否已赋值
                     * @return TableNameList 是否已赋值
                     * 
                     */
                    bool TableNameListHasBeenSet() const;

                    /**
                     * 获取实例总数。
                     * @return TotalCount 实例总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 数据表名称对象列表。
                     */
                    std::vector<std::string> m_tableNameList;
                    bool m_tableNameListHasBeenSet;

                    /**
                     * 实例总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBETABLESNAMERESPONSE_H_
