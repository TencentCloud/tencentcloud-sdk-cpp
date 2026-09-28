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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESREQUEST_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FolderLocator.h>
#include <tencentcloud/databuddy/v20260715/model/OrderBy.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * ListFiles请求参数结构体
                */
                class ListFilesRequest : public AbstractModel
                {
                public:
                    ListFilesRequest();
                    ~ListFilesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>工作空间id</p>
                     * @return WorkspaceId <p>工作空间id</p>
                     * 
                     */
                    std::string GetWorkspaceId() const;

                    /**
                     * 设置<p>工作空间id</p>
                     * @param _workspaceId <p>工作空间id</p>
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
                     * 获取<p>父目录，不填默认查询根节点</p>
                     * @return Parent <p>父目录，不填默认查询根节点</p>
                     * 
                     */
                    FolderLocator GetParent() const;

                    /**
                     * 设置<p>父目录，不填默认查询根节点</p>
                     * @param _parent <p>父目录，不填默认查询根节点</p>
                     * 
                     */
                    void SetParent(const FolderLocator& _parent);

                    /**
                     * 判断参数 Parent 是否已赋值
                     * @return Parent 是否已赋值
                     * 
                     */
                    bool ParentHasBeenSet() const;

                    /**
                     * 获取<p>按文件类型过滤</p>
                     * @return FileTypes <p>按文件类型过滤</p>
                     * 
                     */
                    std::vector<std::string> GetFileTypes() const;

                    /**
                     * 设置<p>按文件类型过滤</p>
                     * @param _fileTypes <p>按文件类型过滤</p>
                     * 
                     */
                    void SetFileTypes(const std::vector<std::string>& _fileTypes);

                    /**
                     * 判断参数 FileTypes 是否已赋值
                     * @return FileTypes 是否已赋值
                     * 
                     */
                    bool FileTypesHasBeenSet() const;

                    /**
                     * 获取<p>文件名模糊匹配</p>
                     * @return NameKeyword <p>文件名模糊匹配</p>
                     * 
                     */
                    std::string GetNameKeyword() const;

                    /**
                     * 设置<p>文件名模糊匹配</p>
                     * @param _nameKeyword <p>文件名模糊匹配</p>
                     * 
                     */
                    void SetNameKeyword(const std::string& _nameKeyword);

                    /**
                     * 判断参数 NameKeyword 是否已赋值
                     * @return NameKeyword 是否已赋值
                     * 
                     */
                    bool NameKeywordHasBeenSet() const;

                    /**
                     * 获取<p>按所有者UIN过滤，多值为或关系</p>
                     * @return OwnerUserUins <p>按所有者UIN过滤，多值为或关系</p>
                     * 
                     */
                    std::vector<std::string> GetOwnerUserUins() const;

                    /**
                     * 设置<p>按所有者UIN过滤，多值为或关系</p>
                     * @param _ownerUserUins <p>按所有者UIN过滤，多值为或关系</p>
                     * 
                     */
                    void SetOwnerUserUins(const std::vector<std::string>& _ownerUserUins);

                    /**
                     * 判断参数 OwnerUserUins 是否已赋值
                     * @return OwnerUserUins 是否已赋值
                     * 
                     */
                    bool OwnerUserUinsHasBeenSet() const;

                    /**
                     * 获取<p>是否只列出文件夹，默认 false</p>
                     * @return OnlyFolder <p>是否只列出文件夹，默认 false</p>
                     * 
                     */
                    bool GetOnlyFolder() const;

                    /**
                     * 设置<p>是否只列出文件夹，默认 false</p>
                     * @param _onlyFolder <p>是否只列出文件夹，默认 false</p>
                     * 
                     */
                    void SetOnlyFolder(const bool& _onlyFolder);

                    /**
                     * 判断参数 OnlyFolder 是否已赋值
                     * @return OnlyFolder 是否已赋值
                     * 
                     */
                    bool OnlyFolderHasBeenSet() const;

                    /**
                     * 获取<p>排序字段列表，如创建时间 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}]，文件名称 [{Name: &#39;Name&#39;, Direction: &#39;ASC&#39;}]</p>
                     * @return OrderBys <p>排序字段列表，如创建时间 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}]，文件名称 [{Name: &#39;Name&#39;, Direction: &#39;ASC&#39;}]</p>
                     * 
                     */
                    std::vector<OrderBy> GetOrderBys() const;

                    /**
                     * 设置<p>排序字段列表，如创建时间 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}]，文件名称 [{Name: &#39;Name&#39;, Direction: &#39;ASC&#39;}]</p>
                     * @param _orderBys <p>排序字段列表，如创建时间 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}]，文件名称 [{Name: &#39;Name&#39;, Direction: &#39;ASC&#39;}]</p>
                     * 
                     */
                    void SetOrderBys(const std::vector<OrderBy>& _orderBys);

                    /**
                     * 判断参数 OrderBys 是否已赋值
                     * @return OrderBys 是否已赋值
                     * 
                     */
                    bool OrderBysHasBeenSet() const;

                    /**
                     * 获取<p>页码，默认1，最小值1</p>
                     * @return PageNumber <p>页码，默认1，最小值1</p>
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置<p>页码，默认1，最小值1</p>
                     * @param _pageNumber <p>页码，默认1，最小值1</p>
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
                     * 获取<p>每页条数，默认10，最小值10，最大值100</p><p>取值范围：[10, 100]</p>
                     * @return PageSize <p>每页条数，默认10，最小值10，最大值100</p><p>取值范围：[10, 100]</p>
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置<p>每页条数，默认10，最小值10，最大值100</p><p>取值范围：[10, 100]</p>
                     * @param _pageSize <p>每页条数，默认10，最小值10，最大值100</p><p>取值范围：[10, 100]</p>
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * <p>工作空间id</p>
                     */
                    std::string m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * <p>父目录，不填默认查询根节点</p>
                     */
                    FolderLocator m_parent;
                    bool m_parentHasBeenSet;

                    /**
                     * <p>按文件类型过滤</p>
                     */
                    std::vector<std::string> m_fileTypes;
                    bool m_fileTypesHasBeenSet;

                    /**
                     * <p>文件名模糊匹配</p>
                     */
                    std::string m_nameKeyword;
                    bool m_nameKeywordHasBeenSet;

                    /**
                     * <p>按所有者UIN过滤，多值为或关系</p>
                     */
                    std::vector<std::string> m_ownerUserUins;
                    bool m_ownerUserUinsHasBeenSet;

                    /**
                     * <p>是否只列出文件夹，默认 false</p>
                     */
                    bool m_onlyFolder;
                    bool m_onlyFolderHasBeenSet;

                    /**
                     * <p>排序字段列表，如创建时间 [{Name: &#39;CreateTime&#39;, Direction: &#39;DESC&#39;}]，文件名称 [{Name: &#39;Name&#39;, Direction: &#39;ASC&#39;}]</p>
                     */
                    std::vector<OrderBy> m_orderBys;
                    bool m_orderBysHasBeenSet;

                    /**
                     * <p>页码，默认1，最小值1</p>
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * <p>每页条数，默认10，最小值10，最大值100</p><p>取值范围：[10, 100]</p>
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTFILESREQUEST_H_
