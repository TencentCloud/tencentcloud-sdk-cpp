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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECUSTOMFUNCTIONREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECUSTOMFUNCTIONREQUEST_H_

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
                * CreateCustomFunction请求参数结构体
                */
                class CreateCustomFunctionRequest : public AbstractModel
                {
                public:
                    CreateCustomFunctionRequest();
                    ~CreateCustomFunctionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取类型：HIVE、SPARK
                     * @return Type 类型：HIVE、SPARK
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型：HIVE、SPARK
                     * @param Type 类型：HIVE、SPARK
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分类：窗口函数、聚合函数、日期函数......
                     * @return Kind 分类：窗口函数、聚合函数、日期函数......
                     */
                    std::string GetKind() const;

                    /**
                     * 设置分类：窗口函数、聚合函数、日期函数......
                     * @param Kind 分类：窗口函数、聚合函数、日期函数......
                     */
                    void SetKind(const std::string& _kind);

                    /**
                     * 判断参数 Kind 是否已赋值
                     * @return Kind 是否已赋值
                     */
                    bool KindHasBeenSet() const;

                    /**
                     * 获取函数名称
                     * @return Name 函数名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置函数名称
                     * @param Name 函数名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取集群实例引擎 ID
                     * @return ClusterIdentifier 集群实例引擎 ID
                     */
                    std::string GetClusterIdentifier() const;

                    /**
                     * 设置集群实例引擎 ID
                     * @param ClusterIdentifier 集群实例引擎 ID
                     */
                    void SetClusterIdentifier(const std::string& _clusterIdentifier);

                    /**
                     * 判断参数 ClusterIdentifier 是否已赋值
                     * @return ClusterIdentifier 是否已赋值
                     */
                    bool ClusterIdentifierHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return DbName 数据库名称
                     */
                    std::string GetDbName() const;

                    /**
                     * 设置数据库名称
                     * @param DbName 数据库名称
                     */
                    void SetDbName(const std::string& _dbName);

                    /**
                     * 判断参数 DbName 是否已赋值
                     * @return DbName 是否已赋值
                     */
                    bool DbNameHasBeenSet() const;

                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param ProjectId 项目ID
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                private:

                    /**
                     * 类型：HIVE、SPARK
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分类：窗口函数、聚合函数、日期函数......
                     */
                    std::string m_kind;
                    bool m_kindHasBeenSet;

                    /**
                     * 函数名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 集群实例引擎 ID
                     */
                    std::string m_clusterIdentifier;
                    bool m_clusterIdentifierHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_dbName;
                    bool m_dbNameHasBeenSet;

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_CREATECUSTOMFUNCTIONREQUEST_H_
