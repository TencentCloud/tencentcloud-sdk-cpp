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

#ifndef TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCEREQUEST_H_
#define TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Anicloud
    {
        namespace V20220923
        {
            namespace Model
            {
                /**
                * QueryResource请求参数结构体
                */
                class QueryResourceRequest : public AbstractModel
                {
                public:
                    QueryResourceRequest();
                    ~QueryResourceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取0: sdk 1:material
                     * @return Type 0: sdk 1:material
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0: sdk 1:material
                     * @param _type 0: sdk 1:material
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分页起始页
                     * @return PageNumber 分页起始页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置分页起始页
                     * @param _pageNumber 分页起始页
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
                     * 获取分页大小
                     * @return PageSize 分页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置分页大小
                     * @param _pageSize 分页大小
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
                     * 0: sdk 1:material
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分页起始页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 分页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANICLOUD_V20220923_MODEL_QUERYRESOURCEREQUEST_H_
