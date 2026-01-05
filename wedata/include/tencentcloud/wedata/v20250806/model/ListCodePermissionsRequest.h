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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEPERMISSIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEPERMISSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ExploreFileResource.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListCodePermissions请求参数结构体
                */
                class ListCodePermissionsRequest : public AbstractModel
                {
                public:
                    ListCodePermissionsRequest();
                    ~ListCodePermissionsRequest() = default;
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
                     * 获取页码，默认1
                     * @return PageNumber 页码，默认1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，默认1
                     * @param _pageNumber 页码，默认1
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取返回数量，默认为20，最大值为100。要求500、1000或者更大
                     * @return PageSize 返回数量，默认为20，最大值为100。要求500、1000或者更大
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。要求500、1000或者更大
                     * @param _pageSize 返回数量，默认为20，最大值为100。要求500、1000或者更大
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取授权资源
                     * @return Resource 授权资源
                     * 
                     */
                    ExploreFileResource GetResource() const;

                    /**
                     * 设置授权资源
                     * @param _resource 授权资源
                     * 
                     */
                    void SetResource(const ExploreFileResource& _resource);

                    /**
                     * 判断参数 Resource 是否已赋值
                     * @return Resource 是否已赋值
                     * 
                     */
                    bool ResourceHasBeenSet() const;

                    /**
                     * 获取用户筛选条件
                     * @return Users 用户筛选条件
                     * 
                     */
                    std::vector<std::string> GetUsers() const;

                    /**
                     * 设置用户筛选条件
                     * @param _users 用户筛选条件
                     * 
                     */
                    void SetUsers(const std::vector<std::string>& _users);

                    /**
                     * 判断参数 Users 是否已赋值
                     * @return Users 是否已赋值
                     * 
                     */
                    bool UsersHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页码，默认1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。要求500、1000或者更大
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 授权资源
                     */
                    ExploreFileResource m_resource;
                    bool m_resourceHasBeenSet;

                    /**
                     * 用户筛选条件
                     */
                    std::vector<std::string> m_users;
                    bool m_usersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTCODEPERMISSIONSREQUEST_H_
