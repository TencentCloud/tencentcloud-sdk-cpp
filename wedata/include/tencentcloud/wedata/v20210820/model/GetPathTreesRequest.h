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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPATHTREESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPATHTREESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * GetPathTrees请求参数结构体
                */
                class GetPathTreesRequest : public AbstractModel
                {
                public:
                    GetPathTreesRequest();
                    ~GetPathTreesRequest() = default;
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
                     * 获取页号
                     * @return PageNumber 页号
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页号
                     * @param _pageNumber 页号
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
                     * 获取页大小
                     * @return PageSize 页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页大小
                     * @param _pageSize 页大小
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
                     * 获取关键字搜索
                     * @return Keyword 关键字搜索
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置关键字搜索
                     * @param _keyword 关键字搜索
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
                     * 获取是否为脚本 false 非脚本
true 脚本
                     * @return Script 是否为脚本 false 非脚本
true 脚本
                     * 
                     */
                    bool GetScript() const;

                    /**
                     * 设置是否为脚本 false 非脚本
true 脚本
                     * @param _script 是否为脚本 false 非脚本
true 脚本
                     * 
                     */
                    void SetScript(const bool& _script);

                    /**
                     * 判断参数 Script 是否已赋值
                     * @return Script 是否已赋值
                     * 
                     */
                    bool ScriptHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 页号
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 关键字搜索
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 是否为脚本 false 非脚本
true 脚本
                     */
                    bool m_script;
                    bool m_scriptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_GETPATHTREESREQUEST_H_
