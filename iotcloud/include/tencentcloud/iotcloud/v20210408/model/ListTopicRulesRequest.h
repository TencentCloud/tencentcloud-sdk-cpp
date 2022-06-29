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

#ifndef TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTTOPICRULESREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTTOPICRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * ListTopicRules请求参数结构体
                */
                class ListTopicRulesRequest : public AbstractModel
                {
                public:
                    ListTopicRulesRequest();
                    ~ListTopicRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取请求的页数
                     * @return PageNum 请求的页数
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置请求的页数
                     * @param PageNum 请求的页数
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取分页的大小
                     * @return PageSize 分页的大小
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置分页的大小
                     * @param PageSize 分页的大小
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                private:

                    /**
                     * 请求的页数
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 分页的大小
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20210408_MODEL_LISTTOPICRULESREQUEST_H_
