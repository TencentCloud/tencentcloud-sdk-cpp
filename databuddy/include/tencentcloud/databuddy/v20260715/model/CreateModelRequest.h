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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEMODELREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateModel请求参数结构体
                */
                class CreateModelRequest : public AbstractModel
                {
                public:
                    CreateModelRequest();
                    ~CreateModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取catalog 信息
                     * @return CatalogName catalog 信息
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置catalog 信息
                     * @param _catalogName catalog 信息
                     * 
                     */
                    void SetCatalogName(const std::string& _catalogName);

                    /**
                     * 判断参数 CatalogName 是否已赋值
                     * @return CatalogName 是否已赋值
                     * 
                     */
                    bool CatalogNameHasBeenSet() const;

                    /**
                     * 获取schema 信息
                     * @return SchemaName schema 信息
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置schema 信息
                     * @param _schemaName schema 信息
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
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取调用时所在workspace唯一id
                     * @return WorkspaceId 调用时所在workspace唯一id
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置调用时所在workspace唯一id
                     * @param _workspaceId 调用时所在workspace唯一id
                     * 
                     */
                    void SetWorkspaceId(const std::string& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Comment 描述信息
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述信息
                     * @param _comment 描述信息
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取扩展参数
                     * @return Properties 扩展参数
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置扩展参数
                     * @param _properties 扩展参数
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * catalog 信息
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * schema 信息
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 调用时所在workspace唯一id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 扩展参数
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATEMODELREQUEST_H_
