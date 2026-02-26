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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_LISTGLOSSARYREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_LISTGLOSSARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * ListGlossary请求参数结构体
                */
                class ListGlossaryRequest : public AbstractModel
                {
                public:
                    ListGlossaryRequest();
                    ~ListGlossaryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，默认 1
                     * @return Page 页码，默认 1
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码，默认 1
                     * @param _page 页码，默认 1
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页数量，默认 10，最大 100
                     * @return PageSize 每页数量，默认 10，最大 100
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数量，默认 10，最大 100
                     * @param _pageSize 每页数量，默认 10，最大 100
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
                     * 页码，默认 1
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数量，默认 10，最大 100
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_LISTGLOSSARYREQUEST_H_
