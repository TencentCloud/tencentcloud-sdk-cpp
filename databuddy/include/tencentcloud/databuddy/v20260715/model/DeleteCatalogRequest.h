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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETECATALOGREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETECATALOGREQUEST_H_

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
                * DeleteCatalog请求参数结构体
                */
                class DeleteCatalogRequest : public AbstractModel
                {
                public:
                    DeleteCatalogRequest();
                    ~DeleteCatalogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数据目录名
                     * @return CatalogName 数据目录名
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置数据目录名
                     * @param _catalogName 数据目录名
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
                     * 获取数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径
                     * @return ConnectionId 数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径
                     * 
                     */
                    std::string GetConnectionId() const;

                    /**
                     * 设置数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径
                     * @param _connectionId 数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径
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
                     * 数据目录名
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * 调用时所在workspace唯一id
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 数据源连接ID，可选（融合版新增字段）。非空→走分析版路径，空/缺省→走专业版TcLake路径
                     */
                    std::string m_connectionId;
                    bool m_connectionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_DELETECATALOGREQUEST_H_
