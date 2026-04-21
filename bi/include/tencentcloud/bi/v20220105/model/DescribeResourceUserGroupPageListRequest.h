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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBERESOURCEUSERGROUPPAGELISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBERESOURCEUSERGROUPPAGELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bi/v20220105/model/ResourceTagValue.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeResourceUserGroupPageList请求参数结构体
                */
                class DescribeResourceUserGroupPageListRequest : public AbstractModel
                {
                public:
                    DescribeResourceUserGroupPageListRequest();
                    ~DescribeResourceUserGroupPageListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    int64_t GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const int64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取页面Id
                     * @return PageId 页面Id
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置页面Id
                     * @param _pageId 页面Id
                     * 
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取是否分页
                     * @return AllPage 是否分页
                     * 
                     */
                    int64_t GetAllPage() const;

                    /**
                     * 设置是否分页
                     * @param _allPage 是否分页
                     * 
                     */
                    void SetAllPage(const int64_t& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                    /**
                     * 获取模糊搜索关键字
                     * @return Keyword 模糊搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置模糊搜索关键字
                     * @param _keyword 模糊搜索关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNo 页码
                     * 
                     */
                    int64_t GetPageNo() const;

                    /**
                     * 设置页码
                     * @param _pageNo 页码
                     * 
                     */
                    void SetPageNo(const int64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取每页条数
                     * @return PageSize 每页条数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页条数
                     * @param _pageSize 每页条数
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
                     * 获取标签过滤条件
                     * @return TagValueList 标签过滤条件
                     * 
                     */
                    std::vector<ResourceTagValue> GetTagValueList() const;

                    /**
                     * 设置标签过滤条件
                     * @param _tagValueList 标签过滤条件
                     * 
                     */
                    void SetTagValueList(const std::vector<ResourceTagValue>& _tagValueList);

                    /**
                     * 判断参数 TagValueList 是否已赋值
                     * @return TagValueList 是否已赋值
                     * 
                     */
                    bool TagValueListHasBeenSet() const;

                    /**
                     * 获取角色
                     * @return ModuleCollection 角色
                     * 
                     */
                    std::string GetModuleCollection() const;

                    /**
                     * 设置角色
                     * @param _moduleCollection 角色
                     * 
                     */
                    void SetModuleCollection(const std::string& _moduleCollection);

                    /**
                     * 判断参数 ModuleCollection 是否已赋值
                     * @return ModuleCollection 是否已赋值
                     * 
                     */
                    bool ModuleCollectionHasBeenSet() const;

                    /**
                     * 获取是否授权
                     * @return ResourceValue 是否授权
                     * 
                     */
                    std::string GetResourceValue() const;

                    /**
                     * 设置是否授权
                     * @param _resourceValue 是否授权
                     * 
                     */
                    void SetResourceValue(const std::string& _resourceValue);

                    /**
                     * 判断参数 ResourceValue 是否已赋值
                     * @return ResourceValue 是否已赋值
                     * 
                     */
                    bool ResourceValueHasBeenSet() const;

                    /**
                     * 获取权限类型
                     * @return ResourceName 权限类型
                     * 
                     */
                    std::string GetResourceName() const;

                    /**
                     * 设置权限类型
                     * @param _resourceName 权限类型
                     * 
                     */
                    void SetResourceName(const std::string& _resourceName);

                    /**
                     * 判断参数 ResourceName 是否已赋值
                     * @return ResourceName 是否已赋值
                     * 
                     */
                    bool ResourceNameHasBeenSet() const;

                    /**
                     * 获取父id
                     * @return ParentId 父id
                     * 
                     */
                    int64_t GetParentId() const;

                    /**
                     * 设置父id
                     * @param _parentId 父id
                     * 
                     */
                    void SetParentId(const int64_t& _parentId);

                    /**
                     * 判断参数 ParentId 是否已赋值
                     * @return ParentId 是否已赋值
                     * 
                     */
                    bool ParentIdHasBeenSet() const;

                    /**
                     * 获取资源id
                     * @return EntityId 资源id
                     * 
                     */
                    int64_t GetEntityId() const;

                    /**
                     * 设置资源id
                     * @param _entityId 资源id
                     * 
                     */
                    void SetEntityId(const int64_t& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                private:

                    /**
                     * 项目Id
                     */
                    int64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页面Id
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 是否分页
                     */
                    int64_t m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 模糊搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 每页条数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 标签过滤条件
                     */
                    std::vector<ResourceTagValue> m_tagValueList;
                    bool m_tagValueListHasBeenSet;

                    /**
                     * 角色
                     */
                    std::string m_moduleCollection;
                    bool m_moduleCollectionHasBeenSet;

                    /**
                     * 是否授权
                     */
                    std::string m_resourceValue;
                    bool m_resourceValueHasBeenSet;

                    /**
                     * 权限类型
                     */
                    std::string m_resourceName;
                    bool m_resourceNameHasBeenSet;

                    /**
                     * 父id
                     */
                    int64_t m_parentId;
                    bool m_parentIdHasBeenSet;

                    /**
                     * 资源id
                     */
                    int64_t m_entityId;
                    bool m_entityIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBERESOURCEUSERGROUPPAGELISTREQUEST_H_
