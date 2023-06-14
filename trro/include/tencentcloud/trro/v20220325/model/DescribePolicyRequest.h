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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPOLICYREQUEST_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * DescribePolicy请求参数结构体
                */
                class DescribePolicyRequest : public AbstractModel
                {
                public:
                    DescribePolicyRequest();
                    ~DescribePolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查看权限的项目ID
                     * @return ProjectId 查看权限的项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置查看权限的项目ID
                     * @param _projectId 查看权限的项目ID
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
                     * 获取查看的权限模式，black为黑名单，white为白名单，不填默认为当前项目生效的权限模式
                     * @return PolicyMode 查看的权限模式，black为黑名单，white为白名单，不填默认为当前项目生效的权限模式
                     * 
                     */
                    std::string GetPolicyMode() const;

                    /**
                     * 设置查看的权限模式，black为黑名单，white为白名单，不填默认为当前项目生效的权限模式
                     * @param _policyMode 查看的权限模式，black为黑名单，white为白名单，不填默认为当前项目生效的权限模式
                     * 
                     */
                    void SetPolicyMode(const std::string& _policyMode);

                    /**
                     * 判断参数 PolicyMode 是否已赋值
                     * @return PolicyMode 是否已赋值
                     * 
                     */
                    bool PolicyModeHasBeenSet() const;

                    /**
                     * 获取模糊匹配模式，remoteMatch为远端设备ID匹配，fieldMatch为现场ID匹配，不填默认为remoteMatch
                     * @return SearchMode 模糊匹配模式，remoteMatch为远端设备ID匹配，fieldMatch为现场ID匹配，不填默认为remoteMatch
                     * 
                     */
                    std::string GetSearchMode() const;

                    /**
                     * 设置模糊匹配模式，remoteMatch为远端设备ID匹配，fieldMatch为现场ID匹配，不填默认为remoteMatch
                     * @param _searchMode 模糊匹配模式，remoteMatch为远端设备ID匹配，fieldMatch为现场ID匹配，不填默认为remoteMatch
                     * 
                     */
                    void SetSearchMode(const std::string& _searchMode);

                    /**
                     * 判断参数 SearchMode 是否已赋值
                     * @return SearchMode 是否已赋值
                     * 
                     */
                    bool SearchModeHasBeenSet() const;

                    /**
                     * 获取模糊匹配关键字，不填默认不进行模糊匹配
                     * @return SearchWords 模糊匹配关键字，不填默认不进行模糊匹配
                     * 
                     */
                    std::string GetSearchWords() const;

                    /**
                     * 设置模糊匹配关键字，不填默认不进行模糊匹配
                     * @param _searchWords 模糊匹配关键字，不填默认不进行模糊匹配
                     * 
                     */
                    void SetSearchWords(const std::string& _searchWords);

                    /**
                     * 判断参数 SearchWords 是否已赋值
                     * @return SearchWords 是否已赋值
                     * 
                     */
                    bool SearchWordsHasBeenSet() const;

                    /**
                     * 获取每页返回的最大数量，不填默认为10
                     * @return PageSize 每页返回的最大数量，不填默认为10
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页返回的最大数量，不填默认为10
                     * @param _pageSize 每页返回的最大数量，不填默认为10
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
                     * 获取当前页码，不填默认为1（首页）
                     * @return PageNumber 当前页码，不填默认为1（首页）
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页码，不填默认为1（首页）
                     * @param _pageNumber 当前页码，不填默认为1（首页）
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 查看权限的项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 查看的权限模式，black为黑名单，white为白名单，不填默认为当前项目生效的权限模式
                     */
                    std::string m_policyMode;
                    bool m_policyModeHasBeenSet;

                    /**
                     * 模糊匹配模式，remoteMatch为远端设备ID匹配，fieldMatch为现场ID匹配，不填默认为remoteMatch
                     */
                    std::string m_searchMode;
                    bool m_searchModeHasBeenSet;

                    /**
                     * 模糊匹配关键字，不填默认不进行模糊匹配
                     */
                    std::string m_searchWords;
                    bool m_searchWordsHasBeenSet;

                    /**
                     * 每页返回的最大数量，不填默认为10
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前页码，不填默认为1（首页）
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_DESCRIBEPOLICYREQUEST_H_
