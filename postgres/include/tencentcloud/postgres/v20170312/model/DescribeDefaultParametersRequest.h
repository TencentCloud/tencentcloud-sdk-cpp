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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEFAULTPARAMETERSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEFAULTPARAMETERSREQUEST_H_

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
                * DescribeDefaultParameters请求参数结构体
                */
                class DescribeDefaultParametersRequest : public AbstractModel
                {
                public:
                    DescribeDefaultParametersRequest();
                    ~DescribeDefaultParametersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库版本，大版本号，例如11，12，13
                     * @return DBMajorVersion 数据库版本，大版本号，例如11，12，13
                     * 
                     */
                    std::string GetDBMajorVersion() const;

                    /**
                     * 设置数据库版本，大版本号，例如11，12，13
                     * @param _dBMajorVersion 数据库版本，大版本号，例如11，12，13
                     * 
                     */
                    void SetDBMajorVersion(const std::string& _dBMajorVersion);

                    /**
                     * 判断参数 DBMajorVersion 是否已赋值
                     * @return DBMajorVersion 是否已赋值
                     * 
                     */
                    bool DBMajorVersionHasBeenSet() const;

                    /**
                     * 获取数据库引擎，例如：postgresql,mssql_compatible
                     * @return DBEngine 数据库引擎，例如：postgresql,mssql_compatible
                     * 
                     */
                    std::string GetDBEngine() const;

                    /**
                     * 设置数据库引擎，例如：postgresql,mssql_compatible
                     * @param _dBEngine 数据库引擎，例如：postgresql,mssql_compatible
                     * 
                     */
                    void SetDBEngine(const std::string& _dBEngine);

                    /**
                     * 判断参数 DBEngine 是否已赋值
                     * @return DBEngine 是否已赋值
                     * 
                     */
                    bool DBEngineHasBeenSet() const;

                private:

                    /**
                     * 数据库版本，大版本号，例如11，12，13
                     */
                    std::string m_dBMajorVersion;
                    bool m_dBMajorVersionHasBeenSet;

                    /**
                     * 数据库引擎，例如：postgresql,mssql_compatible
                     */
                    std::string m_dBEngine;
                    bool m_dBEngineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEDEFAULTPARAMETERSREQUEST_H_
