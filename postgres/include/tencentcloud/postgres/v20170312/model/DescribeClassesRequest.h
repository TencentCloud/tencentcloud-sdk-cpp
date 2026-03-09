/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>可用区名称。可以通过接口<a href="https://cloud.tencent.com/document/product/409/16769">DescribeZones</a>获取。</p>
                     * @return Zone <p>可用区名称。可以通过接口<a href="https://cloud.tencent.com/document/product/409/16769">DescribeZones</a>获取。</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区名称。可以通过接口<a href="https://cloud.tencent.com/document/product/409/16769">DescribeZones</a>获取。</p>
                     * @param _zone <p>可用区名称。可以通过接口<a href="https://cloud.tencent.com/document/product/409/16769">DescribeZones</a>获取。</p>
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
                     * 获取<p>数据库引擎，支持：<br>1、postgresql（云数据库PostgreSQL）；<br>2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；</p>
                     * @return DBEngine <p>数据库引擎，支持：<br>1、postgresql（云数据库PostgreSQL）；<br>2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；</p>
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置<p>数据库引擎，支持：<br>1、postgresql（云数据库PostgreSQL）；<br>2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；</p>
                     * @param _dBEngine <p>数据库引擎，支持：<br>1、postgresql（云数据库PostgreSQL）；<br>2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；</p>
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
                     * 获取<p>数据库主版本号。例如12，13，可以通过接口<a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取。</p>
                     * @return DBMajorVersion <p>数据库主版本号。例如12，13，可以通过接口<a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取。</p>
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置<p>数据库主版本号。例如12，13，可以通过接口<a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取。</p>
                     * @param _dBMajorVersion <p>数据库主版本号。例如12，13，可以通过接口<a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取。</p>
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
                     * <p>可用区名称。可以通过接口<a href="https://cloud.tencent.com/document/product/409/16769">DescribeZones</a>获取。</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>数据库引擎，支持：<br>1、postgresql（云数据库PostgreSQL）；<br>2、mssql_compatible（MSSQL兼容-云数据库PostgreSQL）；</p>
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                    /**
                     * <p>数据库主版本号。例如12，13，可以通过接口<a href="https://cloud.tencent.com/document/product/409/89018">DescribeDBVersions</a>获取。</p>
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBECLASSESREQUEST_H_
