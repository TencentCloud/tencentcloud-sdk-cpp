/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETOFFLINEINSTANCELISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETOFFLINEINSTANCELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/SearchCondition.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetOfflineInstanceList请求参数结构体
                */
                class GetOfflineInstanceListRequest : public AbstractModel
                {
                public:
                    GetOfflineInstanceListRequest();
                    ~GetOfflineInstanceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取第几页
                     * @return PageIndex 第几页
                     * 
                     */
                    std::string GetPageIndex() const;

                    /**
                     * 设置第几页
                     * @param _pageIndex 第几页
                     * 
                     */
                    void SetPageIndex(const std::string& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                    /**
                     * 获取每页几条
                     * @return PageSize 每页几条
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页几条
                     * @param _pageSize 每页几条
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
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
                     * 获取无
                     * @return SearchCondition 无
                     * 
                     */
                    SearchCondition GetSearchCondition() const;

                    /**
                     * 设置无
                     * @param _searchCondition 无
                     * 
                     */
                    void SetSearchCondition(const SearchCondition& _searchCondition);

                    /**
                     * 判断参数 SearchCondition 是否已赋值
                     * @return SearchCondition 是否已赋值
                     * 
                     */
                    bool SearchConditionHasBeenSet() const;

                private:

                    /**
                     * 第几页
                     */
                    std::string m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                    /**
                     * 每页几条
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 无
                     */
                    SearchCondition m_searchCondition;
                    bool m_searchConditionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETOFFLINEINSTANCELISTREQUEST_H_
