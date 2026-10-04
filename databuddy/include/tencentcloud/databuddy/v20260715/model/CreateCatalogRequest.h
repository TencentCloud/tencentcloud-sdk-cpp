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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_

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
                * CreateCatalog请求参数结构体
                */
                class CreateCatalogRequest : public AbstractModel
                {
                public:
                    CreateCatalogRequest();
                    ~CreateCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取catalog名称
                     * @return Name catalog名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置catalog名称
                     * @param _name catalog名称
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
                     * 获取catalog类型, 可选值TABLE、MODEL、VOLUME
                     * @return Type catalog类型, 可选值TABLE、MODEL、VOLUME
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置catalog类型, 可选值TABLE、MODEL、VOLUME
                     * @param _type catalog类型, 可选值TABLE、MODEL、VOLUME
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取工作空间唯一id
                     * @return WorkspaceId 工作空间唯一id
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置工作空间唯一id
                     * @param _workspaceId 工作空间唯一id
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
                     * 获取connection 的 ID
                     * @return ConnectionId connection 的 ID
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置connection 的 ID
                     * @param _connectionId connection 的 ID
                     * 
                     */
                    void SetConnectionId(const std::string& _connectionId);

                    /**
                     * 判断参数 ConnectionId 是否已赋值
                     * @return ConnectionId 是否已赋值
                     * 
                     */
                    bool ConnectionIdHasBeenSet() const;

                    /**
                     * 获取数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理
                     * @return CatalogSource 数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理
                     * 
                     */
                    std::string GetCatalogSource() const;

                    /**
                     * 设置数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理
                     * @param _catalogSource 数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理
                     * 
                     */
                    void SetCatalogSource(const std::string& _catalogSource);

                    /**
                     * 判断参数 CatalogSource 是否已赋值
                     * @return CatalogSource 是否已赋值
                     * 
                     */
                    bool CatalogSourceHasBeenSet() const;

                private:

                    /**
                     * catalog名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * catalog类型, 可选值TABLE、MODEL、VOLUME
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 工作空间唯一id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * connection 的 ID
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                    /**
                     * 数据目录来源，可选（融合版新增字段），取值参考 CatalogSourceEnum：METALAKE（专业版）/ CONNECTION（分析版），不传时默认按 METALAKE 处理
                     */
                    std::string m_catalogSource;
                    bool m_catalogSourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_CREATECATALOGREQUEST_H_
