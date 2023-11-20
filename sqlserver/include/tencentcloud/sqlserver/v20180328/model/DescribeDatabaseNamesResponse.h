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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASENAMESRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASENAMESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDatabaseNames返回参数结构体
                */
                class DescribeDatabaseNamesResponse : public AbstractModel
                {
                public:
                    DescribeDatabaseNamesResponse();
                    ~DescribeDatabaseNamesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账户关联的数据库总数
                     * @return TotalCount 账户关联的数据库总数
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
                     * 获取数据库名称集合
                     * @return DatabaseNameSet 数据库名称集合
                     * 
                     */
                    std::vector<std::string> GetDatabaseNameSet() const;

                    /**
                     * 判断参数 DatabaseNameSet 是否已赋值
                     * @return DatabaseNameSet 是否已赋值
                     * 
                     */
                    bool DatabaseNameSetHasBeenSet() const;

                private:

                    /**
                     * 账户关联的数据库总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 数据库名称集合
                     */
                    std::vector<std::string> m_databaseNameSet;
                    bool m_databaseNameSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASENAMESRESPONSE_H_
