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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/DatabaseInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDatabase请求参数结构体
                */
                class CreateDatabaseRequest : public AbstractModel
                {
                public:
                    CreateDatabaseRequest();
                    ~CreateDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库基础信息
                     * @return DatabaseInfo 数据库基础信息
                     * 
                     */
                    DatabaseInfo GetDatabaseInfo() const;

                    /**
                     * 设置数据库基础信息
                     * @param _databaseInfo 数据库基础信息
                     * 
                     */
                    void SetDatabaseInfo(const DatabaseInfo& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     * 
                     */
                    bool DatabaseInfoHasBeenSet() const;

                    /**
                     * 获取数据源名称，默认为DataLakeCatalog
                     * @return DatasourceConnectionName 数据源名称，默认为DataLakeCatalog
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源名称，默认为DataLakeCatalog
                     * @param _datasourceConnectionName 数据源名称，默认为DataLakeCatalog
                     * 
                     */
                    void SetDatasourceConnectionName(const std::string& _datasourceConnectionName);

                    /**
                     * 判断参数 DatasourceConnectionName 是否已赋值
                     * @return DatasourceConnectionName 是否已赋值
                     * 
                     */
                    bool DatasourceConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 数据库基础信息
                     */
                    DatabaseInfo m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                    /**
                     * 数据源名称，默认为DataLakeCatalog
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDATABASEREQUEST_H_
