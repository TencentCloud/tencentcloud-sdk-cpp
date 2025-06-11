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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTSHAREDKNOWLEDGEREQUEST_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTSHAREDKNOWLEDGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListSharedKnowledge请求参数结构体
                */
                class ListSharedKnowledgeRequest : public AbstractModel
                {
                public:
                    ListSharedKnowledgeRequest();
                    ~ListSharedKnowledgeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页序号，编码从1开始
                     * @return PageNumber 分页序号，编码从1开始
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页序号，编码从1开始
                     * @param _pageNumber 分页序号，编码从1开始
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
                     * 获取分页大小，有效范围为[1,200]
                     * @return PageSize 分页大小，有效范围为[1,200]
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页大小，有效范围为[1,200]
                     * @param _pageSize 分页大小，有效范围为[1,200]
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
                     * 获取搜索关键字
                     * @return Keyword 搜索关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyword 搜索关键字
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
                     * 分页序号，编码从1开始
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小，有效范围为[1,200]
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTSHAREDKNOWLEDGEREQUEST_H_
