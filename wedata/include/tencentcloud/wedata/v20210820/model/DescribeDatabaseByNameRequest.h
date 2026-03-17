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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEBYNAMEREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEBYNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeDatabaseByName请求参数结构体
                */
                class DescribeDatabaseByNameRequest : public AbstractModel
                {
                public:
                    DescribeDatabaseByNameRequest();
                    ~DescribeDatabaseByNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名称
                     * @return DatabaseName 数据库名称
                     * 
                     */
                    std::string GetDatabaseName() const;

                    /**
                     * 设置数据库名称
                     * @param _databaseName 数据库名称
                     * 
                     */
                    void SetDatabaseName(const std::string& _databaseName);

                    /**
                     * 判断参数 DatabaseName 是否已赋值
                     * @return DatabaseName 是否已赋值
                     * 
                     */
                    bool DatabaseNameHasBeenSet() const;

                    /**
                     * 获取数据源id
                     * @return DatasourceId 数据源id
                     * 
                     */
                    uint64_t GetDatasourceId() const;

                    /**
                     * 设置数据源id
                     * @param _datasourceId 数据源id
                     * 
                     */
                    void SetDatasourceId(const uint64_t& _datasourceId);

                    /**
                     * 判断参数 DatasourceId 是否已赋值
                     * @return DatasourceId 是否已赋值
                     * 
                     */
                    bool DatasourceIdHasBeenSet() const;

                    /**
                     * 获取schema名称
                     * @return SchemaName schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema名称
                     * @param _schemaName schema名称
                     * 
                     */
                    void SetSchemaName(const std::string& _schemaName);

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_databaseName;
                    bool m_databaseNameHasBeenSet;

                    /**
                     * 数据源id
                     */
                    uint64_t m_datasourceId;
                    bool m_datasourceIdHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEDATABASEBYNAMEREQUEST_H_
