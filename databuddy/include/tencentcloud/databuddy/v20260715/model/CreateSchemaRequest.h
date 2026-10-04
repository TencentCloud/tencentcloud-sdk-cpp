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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATESCHEMAREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATESCHEMAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * CreateSchema请求参数结构体
                */
                class CreateSchemaRequest : public AbstractModel
                {
                public:
                    CreateSchemaRequest();
                    ~CreateSchemaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取catalog名称
                     * @return CatalogName catalog名称
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置catalog名称
                     * @param _catalogName catalog名称
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
                     * 获取schema名称
                     * @return Name schema名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置schema名称
                     * @param _name schema名称
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
                     * 获取描述
                     * @return Comment 描述
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置描述
                     * @param _comment 描述
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
                     * 获取数据源连接ID，可选（融合版新增字段）。分析版catalog不支持创建schema，传入非空时服务端返回ANA_CATALOG_NOT_SUPPORTED错误
                     * @return ConnectionId 数据源连接ID，可选（融合版新增字段）。分析版catalog不支持创建schema，传入非空时服务端返回ANA_CATALOG_NOT_SUPPORTED错误
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置数据源连接ID，可选（融合版新增字段）。分析版catalog不支持创建schema，传入非空时服务端返回ANA_CATALOG_NOT_SUPPORTED错误
                     * @param _connectionId 数据源连接ID，可选（融合版新增字段）。分析版catalog不支持创建schema，传入非空时服务端返回ANA_CATALOG_NOT_SUPPORTED错误
                     * 
                     */
                    void SetConnectionId(const std::string& _connectionId);

                    /**
                     * 判断参数 ConnectionId 是否已赋值
                     * @return ConnectionId 是否已赋值
                     * 
                     */
                    bool ConnectionIdHasBeenSet() const;

                private:

                    /**
                     * catalog名称
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 调用时所在workspace唯一id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 数据源连接ID，可选（融合版新增字段）。分析版catalog不支持创建schema，传入非空时服务端返回ANA_CATALOG_NOT_SUPPORTED错误
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATESCHEMAREQUEST_H_
