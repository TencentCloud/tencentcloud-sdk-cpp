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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSDATABASEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSDATABASEREQUEST_H_

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
                * AlterDMSDatabase请求参数结构体
                */
                class AlterDMSDatabaseRequest : public AbstractModel
                {
                public:
                    AlterDMSDatabaseRequest();
                    ~AlterDMSDatabaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取当前名称
                     * @return CurrentName 当前名称
                     * 
                     */
                    std::string GetCurrentName() const;

                    /**
                     * 设置当前名称
                     * @param _currentName 当前名称
                     * 
                     */
                    void SetCurrentName(const std::string& _currentName);

                    /**
                     * 判断参数 CurrentName 是否已赋值
                     * @return CurrentName 是否已赋值
                     * 
                     */
                    bool CurrentNameHasBeenSet() const;

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
                     * 获取路径
                     * @return Location 路径
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置路径
                     * @param _location 路径
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
                     * 获取基础对象
                     * @return Asset 基础对象
                     * 
                     */
                    Asset GetAsset() const;

                    /**
                     * 设置基础对象
                     * @param _asset 基础对象
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
                     * 当前名称
                     */
                    std::string m_currentName;
                    bool m_currentNameHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 路径
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 基础对象
                     */
                    Asset m_asset;
                    bool m_assetHasBeenSet;

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

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_ALTERDMSDATABASEREQUEST_H_
