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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeClasses请求参数结构体
                */
                class DescribeClassesRequest : public AbstractModel
                {
                public:
                    DescribeClassesRequest();
                    ~DescribeClassesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取可用区ID。可以通过接口DescribeZones获取。
                     * @return Zone 可用区ID。可以通过接口DescribeZones获取。
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID。可以通过接口DescribeZones获取。
                     * @param _zone 可用区ID。可以通过接口DescribeZones获取。
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * @return DBEngine 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * @param _dBEngine 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                    /**
                     * 获取数据库主版本号。例如12，13，可以通过接口DescribeDBVersions获取。
                     * @return DBMajorVersion 数据库主版本号。例如12，13，可以通过接口DescribeDBVersions获取。
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置数据库主版本号。例如12，13，可以通过接口DescribeDBVersions获取。
                     * @param _dBMajorVersion 数据库主版本号。例如12，13，可以通过接口DescribeDBVersions获取。
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                private:

                    /**
                     * 可用区ID。可以通过接口DescribeZones获取。
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 数据库引擎，支持：
1、postgresql（云数据库PostgreSQL）；
2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * 数据库主版本号。例如12，13，可以通过接口DescribeDBVersions获取。
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESREQUEST_H_
