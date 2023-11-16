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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESNORMALRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESNORMALRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DbNormalDetail.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDatabasesNormal返回参数结构体
                */
                class DescribeDatabasesNormalResponse : public AbstractModel
                {
                public:
                    DescribeDatabasesNormalResponse();
                    ~DescribeDatabasesNormalResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取表示当前实例下的数据库总个数
                     * @return TotalCount 表示当前实例下的数据库总个数
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
                     * 获取返回数据库的详细配置信息，例如：数据库是否开启CDC、CT等
                     * @return DBList 返回数据库的详细配置信息，例如：数据库是否开启CDC、CT等
                     * 
                     */
                    std::vector<DbNormalDetail> GetDBList() const;

                    /**
                     * 判断参数 DBList 是否已赋值
                     * @return DBList 是否已赋值
                     * 
                     */
                    bool DBListHasBeenSet() const;

                private:

                    /**
                     * 表示当前实例下的数据库总个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回数据库的详细配置信息，例如：数据库是否开启CDC、CT等
                     */
                    std::vector<DbNormalDetail> m_dBList;
                    bool m_dBListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDATABASESNORMALRESPONSE_H_
