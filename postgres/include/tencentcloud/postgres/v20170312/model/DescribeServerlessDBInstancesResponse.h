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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/postgres/v20170312/model/ServerlessDBInstance.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeServerlessDBInstances返回参数结构体
                */
                class DescribeServerlessDBInstancesResponse : public AbstractModel
                {
                public:
                    DescribeServerlessDBInstancesResponse();
                    ~DescribeServerlessDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询结果数
                     * @return TotalCount 查询结果数
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
                     * 获取查询结果
                     * @return DBInstanceSet 查询结果
                     * 
                     */
                    std::vector<ServerlessDBInstance> GetDBInstanceSet() const;

                    /**
                     * 判断参数 DBInstanceSet 是否已赋值
                     * @return DBInstanceSet 是否已赋值
                     * 
                     */
                    bool DBInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 查询结果数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询结果
                     */
                    std::vector<ServerlessDBInstance> m_dBInstanceSet;
                    bool m_dBInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBESERVERLESSDBINSTANCESRESPONSE_H_
