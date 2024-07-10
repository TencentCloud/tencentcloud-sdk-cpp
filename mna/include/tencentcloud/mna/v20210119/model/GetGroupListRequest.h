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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPLISTREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetGroupList请求参数结构体
                */
                class GetGroupListRequest : public AbstractModel
                {
                public:
                    GetGroupListRequest();
                    ~GetGroupListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     * @return PageSize 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     * @param _pageSize 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
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
                     * 获取当前查看页码，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     * @return PageNumber 当前查看页码，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前查看页码，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     * @param _pageNumber 当前查看页码，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
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
                     * 获取搜索分组的关键字，为空时匹配所有分组
                     * @return Keyword 搜索分组的关键字，为空时匹配所有分组
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索分组的关键字，为空时匹配所有分组
                     * @param _keyword 搜索分组的关键字，为空时匹配所有分组
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 当前查看页码，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 搜索分组的关键字，为空时匹配所有分组
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPLISTREQUEST_H_
