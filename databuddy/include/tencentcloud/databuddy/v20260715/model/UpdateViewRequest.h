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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEVIEWREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEVIEWREQUEST_H_

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
                * UpdateView请求参数结构体
                */
                class UpdateViewRequest : public AbstractModel
                {
                public:
                    UpdateViewRequest();
                    ~UpdateViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据目录名称，必填
                     * @return CatalogName 数据目录名称，必填
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置数据目录名称，必填
                     * @param _catalogName 数据目录名称，必填
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
                     * 获取数据库名称，必填
                     * @return SchemaName 数据库名称，必填
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置数据库名称，必填
                     * @param _schemaName 数据库名称，必填
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
                     * 获取View名，必填
                     * @return ViewName View名，必填
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置View名，必填
                     * @param _viewName View名，必填
                     * 
                     */
                    void SetViewName(const std::string& _viewName);

                    /**
                     * 判断参数 ViewName 是否已赋值
                     * @return ViewName 是否已赋值
                     * 
                     */
                    bool ViewNameHasBeenSet() const;

                    /**
                     * 获取调用时所在workspace唯一id，必填
                     * @return WorkspaceId 调用时所在workspace唯一id，必填
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置调用时所在workspace唯一id，必填
                     * @param _workspaceId 调用时所在workspace唯一id，必填
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
                     * 获取新名称，可选，为空表示不修改名称
                     * @return NewName 新名称，可选，为空表示不修改名称
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置新名称，可选，为空表示不修改名称
                     * @param _newName 新名称，可选，为空表示不修改名称
                     * 
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                    /**
                     * 获取新描述，可选，为空表示不修改注释
                     * @return NewComment 新描述，可选，为空表示不修改注释
                     * 
                     */
                    std::string GetNewComment() const;

                    /**
                     * 设置新描述，可选，为空表示不修改注释
                     * @param _newComment 新描述，可选，为空表示不修改注释
                     * 
                     */
                    void SetNewComment(const std::string& _newComment);

                    /**
                     * 判断参数 NewComment 是否已赋值
                     * @return NewComment 是否已赋值
                     * 
                     */
                    bool NewCommentHasBeenSet() const;

                private:

                    /**
                     * 数据目录名称，必填
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * 数据库名称，必填
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * View名，必填
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * 调用时所在workspace唯一id，必填
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 新名称，可选，为空表示不修改名称
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                    /**
                     * 新描述，可选，为空表示不修改注释
                     */
                    std::string m_newComment;
                    bool m_newCommentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_UPDATEVIEWREQUEST_H_
