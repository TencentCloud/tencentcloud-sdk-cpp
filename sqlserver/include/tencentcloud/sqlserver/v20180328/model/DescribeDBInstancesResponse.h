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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/DBInstance.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * DescribeDBInstances返回参数结构体
                */
                class DescribeDBInstancesResponse : public AbstractModel
                {
                public:
                    DescribeDBInstancesResponse();
                    ~DescribeDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的实例总数。分页返回的话，这个值指的是所有符合条件的实例的个数，而非当前根据Limit和Offset值返回的实例个数
                     * @return TotalCount 符合条件的实例总数。分页返回的话，这个值指的是所有符合条件的实例的个数，而非当前根据Limit和Offset值返回的实例个数
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
                     * 获取实例列表
                     * @return DBInstances 实例列表
                     * 
                     */
                    std::vector<DBInstance> GetDBInstances() const;

                    /**
                     * 判断参数 DBInstances 是否已赋值
                     * @return DBInstances 是否已赋值
                     * 
                     */
                    bool DBInstancesHasBeenSet() const;

                private:

                    /**
                     * 符合条件的实例总数。分页返回的话，这个值指的是所有符合条件的实例的个数，而非当前根据Limit和Offset值返回的实例个数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 实例列表
                     */
                    std::vector<DBInstance> m_dBInstances;
                    bool m_dBInstancesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_DESCRIBEDBINSTANCESRESPONSE_H_
