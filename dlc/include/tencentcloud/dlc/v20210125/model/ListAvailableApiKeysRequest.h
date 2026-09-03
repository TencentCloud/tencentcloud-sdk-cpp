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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_LISTAVAILABLEAPIKEYSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_LISTAVAILABLEAPIKEYSREQUEST_H_

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
                * ListAvailableApiKeys请求参数结构体
                */
                class ListAvailableApiKeysRequest : public AbstractModel
                {
                public:
                    ListAvailableApiKeysRequest();
                    ~ListAvailableApiKeysRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>页数</p>
                     * @return Page <p>页数</p>
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置<p>页数</p>
                     * @param _page <p>页数</p>
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
                     * 获取<p>单页大小</p>
                     * @return PageSize <p>单页大小</p>
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置<p>单页大小</p>
                     * @param _pageSize <p>单页大小</p>
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
                     * <p>页数</p>
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * <p>单页大小</p>
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_LISTAVAILABLEAPIKEYSREQUEST_H_
