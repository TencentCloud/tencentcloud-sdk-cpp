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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDMSDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDMSDATABASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Asset.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * CreateDMSDatabase请求参数结构体
                */
                class CreateDMSDatabaseRequest : public AbstractModel
                {
                public:
                    CreateDMSDatabaseRequest();
                    ~CreateDMSDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取基础元数据对象
                     * @return Asset 基础元数据对象
                     * 
                     */
                    Asset GetAsset() const;

                    /**
                     * 设置基础元数据对象
                     * @param _asset 基础元数据对象
                     * 
                     */
                    void SetAsset(const Asset& _asset);

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                    /**
                     * 获取Schema目录
                     * @return SchemaName Schema目录
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置Schema目录
                     * @param _schemaName Schema目录
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
                     * 获取Db存储路径
                     * @return Location Db存储路径
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置Db存储路径
                     * @param _location Db存储路径
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取数据库名称
                     * @return Name 数据库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置数据库名称
                     * @param _name 数据库名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取数据源连接名
                     * @return DatasourceConnectionName 数据源连接名
                     * 
                     */
                    std::string GetDatasourceConnectionName() const;

                    /**
                     * 设置数据源连接名
                     * @param _datasourceConnectionName 数据源连接名
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
                     * 基础元数据对象
                     */
                    Asset m_asset;
                    bool m_assetHasBeenSet;

                    /**
                     * Schema目录
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * Db存储路径
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 数据库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 数据源连接名
                     */
                    std::string m_datasourceConnectionName;
                    bool m_datasourceConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_CREATEDMSDATABASEREQUEST_H_
