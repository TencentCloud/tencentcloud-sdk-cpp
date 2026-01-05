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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListWorkflowPermissions请求参数结构体
                */
                class ListWorkflowPermissionsRequest : public AbstractModel
                {
                public:
                    ListWorkflowPermissionsRequest();
                    ~ListWorkflowPermissionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取授权实体ID
                     * @return EntityId 授权实体ID
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置授权实体ID
                     * @param _entityId 授权实体ID
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取授权实体类型,folder/workflow
                     * @return EntityType 授权实体类型,folder/workflow
                     * 
                     */
                    std::string GetEntityType() const;

                    /**
                     * 设置授权实体类型,folder/workflow
                     * @param _entityType 授权实体类型,folder/workflow
                     * 
                     */
                    void SetEntityType(const std::string& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     * 
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取请求的数据页数。默认值为1，取值大于等于1
                     * @return PageNumber 请求的数据页数。默认值为1，取值大于等于1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置请求的数据页数。默认值为1，取值大于等于1
                     * @param _pageNumber 请求的数据页数。默认值为1，取值大于等于1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。
                     * @return PageSize 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。
                     * @param _pageSize 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 授权实体ID
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 授权实体类型,folder/workflow
                     */
                    std::string m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 请求的数据页数。默认值为1，取值大于等于1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页显示的数据条数。默认值为10 ，最小值为10，最大值为200。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTWORKFLOWPERMISSIONSREQUEST_H_
