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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetAuthoritiesList请求参数结构体
                */
                class GetAuthoritiesListRequest : public AbstractModel
                {
                public:
                    GetAuthoritiesListRequest();
                    ~GetAuthoritiesListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页码，从1开始
                     * @return PageNumber 页码，从1开始
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置页码，从1开始
                     * @param PageNumber 页码，从1开始
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取每页大小
                     * @return PageSize 每页大小
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小
                     * @param PageSize 每页大小
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Did信息
                     * @return Did Did信息
                     */
                    std::string GetDid() const;

                    /**
                     * 设置Did信息
                     * @param Did Did信息
                     */
                    void SetDid(const std::string& _did);

                    /**
                     * 判断参数 Did 是否已赋值
                     * @return Did 是否已赋值
                     */
                    bool DidHasBeenSet() const;

                    /**
                     * 获取权威认证 1:已认证，2:未认证
                     * @return Status 权威认证 1:已认证，2:未认证
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置权威认证 1:已认证，2:未认证
                     * @param Status 权威认证 1:已认证，2:未认证
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 页码，从1开始
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Did信息
                     */
                    std::string m_did;
                    bool m_didHasBeenSet;

                    /**
                     * 权威认证 1:已认证，2:未认证
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETAUTHORITIESLISTREQUEST_H_
