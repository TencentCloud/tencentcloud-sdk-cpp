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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYJOBHISTORYREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYJOBHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * GetRayJobHistory请求参数结构体
                */
                class GetRayJobHistoryRequest : public AbstractModel
                {
                public:
                    GetRayJobHistoryRequest();
                    ~GetRayJobHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ray-jobID
                     * @return Id ray-jobID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置ray-jobID
                     * @param _id ray-jobID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取当前页码（从1开始）
                     * @return Page 当前页码（从1开始）
                     * 
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置当前页码（从1开始）
                     * @param _page 当前页码（从1开始）
                     * 
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return PageSize 页数
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页数
                     * @param _pageSize 页数
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
                     * ray-jobID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 当前页码（从1开始）
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_GETRAYJOBHISTORYREQUEST_H_
