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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEPROJECTLISTREQUEST_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEPROJECTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeProjectList请求参数结构体
                */
                class DescribeProjectListRequest : public AbstractModel
                {
                public:
                    DescribeProjectListRequest();
                    ~DescribeProjectListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页容，初版默认20，将来可能根据屏幕宽度动态变化
                     * @return PageSize 页容，初版默认20，将来可能根据屏幕宽度动态变化
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置页容，初版默认20，将来可能根据屏幕宽度动态变化
                     * @param _pageSize 页容，初版默认20，将来可能根据屏幕宽度动态变化
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
                     * 获取页标
                     * @return PageNo 页标
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置页标
                     * @param _pageNo 页标
                     * 
                     */
                    void SetPageNo(const uint64_t& _pageNo);

                    /**
                     * 判断参数 PageNo 是否已赋值
                     * @return PageNo 是否已赋值
                     * 
                     */
                    bool PageNoHasBeenSet() const;

                    /**
                     * 获取检索模糊字段
                     * @return Keyword 检索模糊字段
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置检索模糊字段
                     * @param _keyword 检索模糊字段
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
                     * 获取是否全部展示，如果是ture，则忽略分页
                     * @return AllPage 是否全部展示，如果是ture，则忽略分页
                     * 
                     */
                    bool GetAllPage() const;

                    /**
                     * 设置是否全部展示，如果是ture，则忽略分页
                     * @param _allPage 是否全部展示，如果是ture，则忽略分页
                     * 
                     */
                    void SetAllPage(const bool& _allPage);

                    /**
                     * 判断参数 AllPage 是否已赋值
                     * @return AllPage 是否已赋值
                     * 
                     */
                    bool AllPageHasBeenSet() const;

                    /**
                     * 获取角色信息
                     * @return ModuleCollection 角色信息
                     * 
                     */
                    std::string GetModuleCollection() const;

                    /**
                     * 设置角色信息
                     * @param _moduleCollection 角色信息
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
                     * 获取moduleId集合
                     * @return ModuleIdList moduleId集合
                     * 
                     */
                    std::vector<std::string> GetModuleIdList() const;

                    /**
                     * 设置moduleId集合
                     * @param _moduleIdList moduleId集合
                     * 
                     */
                    void SetModuleIdList(const std::vector<std::string>& _moduleIdList);

                    /**
                     * 判断参数 ModuleIdList 是否已赋值
                     * @return ModuleIdList 是否已赋值
                     * 
                     */
                    bool ModuleIdListHasBeenSet() const;

                private:

                    /**
                     * 页容，初版默认20，将来可能根据屏幕宽度动态变化
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页标
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 检索模糊字段
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 是否全部展示，如果是ture，则忽略分页
                     */
                    bool m_allPage;
                    bool m_allPageHasBeenSet;

                    /**
                     * 角色信息
                     */
                    std::string m_moduleCollection;
                    bool m_moduleCollectionHasBeenSet;

                    /**
                     * moduleId集合
                     */
                    std::vector<std::string> m_moduleIdList;
                    bool m_moduleIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_DESCRIBEPROJECTLISTREQUEST_H_
