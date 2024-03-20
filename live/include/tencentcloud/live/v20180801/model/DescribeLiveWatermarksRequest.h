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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeLiveWatermarks请求参数结构体
                */
                class DescribeLiveWatermarksRequest : public AbstractModel
                {
                public:
                    DescribeLiveWatermarksRequest();
                    ~DescribeLiveWatermarksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取水印名称
                     * @return Name 水印名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置水印名称
                     * @param _name 水印名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分页的索引参数，从1开始
                     * @return PageNo 分页的索引参数，从1开始
                     * 
                     */
                    uint64_t GetPageNo() const;

                    /**
                     * 设置分页的索引参数，从1开始
                     * @param _pageNo 分页的索引参数，从1开始
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
                     * 获取分页的大小参数，默认值500
                     * @return PageSize 分页的大小参数，默认值500
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页的大小参数，默认值500
                     * @param _pageSize 分页的大小参数，默认值500
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
                     * 水印名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分页的索引参数，从1开始
                     */
                    uint64_t m_pageNo;
                    bool m_pageNoHasBeenSet;

                    /**
                     * 分页的大小参数，默认值500
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBELIVEWATERMARKSREQUEST_H_
