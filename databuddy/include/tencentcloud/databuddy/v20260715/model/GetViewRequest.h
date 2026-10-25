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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETVIEWREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETVIEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FetchOption.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * GetView请求参数结构体
                */
                class GetViewRequest : public AbstractModel
                {
                public:
                    GetViewRequest();
                    ~GetViewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>数据目录名</p>
                     * @return CatalogName <p>数据目录名</p>
                     * 
                     */
                    std::string GetCatalogName() const;

                    /**
                     * 设置<p>数据目录名</p>
                     * @param _catalogName <p>数据目录名</p>
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
                     * 获取<p>数据库名</p>
                     * @return SchemaName <p>数据库名</p>
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 设置<p>数据库名</p>
                     * @param _schemaName <p>数据库名</p>
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
                     * 获取<p>View名称</p>
                     * @return ViewName <p>View名称</p>
                     * 
                     */
                    std::string GetViewName() const;

                    /**
                     * 设置<p>View名称</p>
                     * @param _viewName <p>View名称</p>
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
                     * 获取<p>调用时所在workspace唯一id</p>
                     * @return WorkspaceId <p>调用时所在workspace唯一id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>调用时所在workspace唯一id</p>
                     * @param _workspaceId <p>调用时所在workspace唯一id</p>
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
                     * 获取<p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * @return FetchOption <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * 
                     */
                    FetchOption GetFetchOption() const;

                    /**
                     * 设置<p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * @param _fetchOption <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     * 
                     */
                    void SetFetchOption(const FetchOption& _fetchOption);

                    /**
                     * 判断参数 FetchOption 是否已赋值
                     * @return FetchOption 是否已赋值
                     * 
                     */
                    bool FetchOptionHasBeenSet() const;

                private:

                    /**
                     * <p>数据目录名</p>
                     */
                    std::string m_catalogName;
                    bool m_catalogNameHasBeenSet;

                    /**
                     * <p>数据库名</p>
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * <p>View名称</p>
                     */
                    std::string m_viewName;
                    bool m_viewNameHasBeenSet;

                    /**
                     * <p>调用时所在workspace唯一id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>数据获取选项，可选，控制是否返回权限信息及按权限过滤</p>
                     */
                    FetchOption m_fetchOption;
                    bool m_fetchOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETVIEWREQUEST_H_
