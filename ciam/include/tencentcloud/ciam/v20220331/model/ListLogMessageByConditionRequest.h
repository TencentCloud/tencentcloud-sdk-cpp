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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTLOGMESSAGEBYCONDITIONREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTLOGMESSAGEBYCONDITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ciam/v20220331/model/Pageable.h>
#include <tencentcloud/ciam/v20220331/model/Filter.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListLogMessageByCondition请求参数结构体
                */
                class ListLogMessageByConditionRequest : public AbstractModel
                {
                public:
                    ListLogMessageByConditionRequest();
                    ~ListLogMessageByConditionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户池ID
                     * @return UserStoreId 用户池ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户池ID
                     * @param _userStoreId 用户池ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取分页数据
                     * @return Pageable 分页数据
                     * 
                     */
                    Pageable GetPageable() const;

                    /**
                     * 设置分页数据
                     * @param _pageable 分页数据
                     * 
                     */
                    void SetPageable(const Pageable& _pageable);

                    /**
                     * 判断参数 Pageable 是否已赋值
                     * @return Pageable 是否已赋值
                     * 
                     */
                    bool PageableHasBeenSet() const;

                    /**
                     * 获取开始时间，时间戳精确到毫秒
                     * @return StartTime 开始时间，时间戳精确到毫秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间，时间戳精确到毫秒
                     * @param _startTime 开始时间，时间戳精确到毫秒
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取Key可选值为events

<li> **events** </li>	Values为["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"] 中的一个或多个
                     * @return Filters Key可选值为events

<li> **events** </li>	Values为["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"] 中的一个或多个
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置Key可选值为events

<li> **events** </li>	Values为["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"] 中的一个或多个
                     * @param _filters Key可选值为events

<li> **events** </li>	Values为["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"] 中的一个或多个
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 用户池ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 分页数据
                     */
                    Pageable m_pageable;
                    bool m_pageableHasBeenSet;

                    /**
                     * 开始时间，时间戳精确到毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * Key可选值为events

<li> **events** </li>	Values为["SIGNUP", "USER_UPDATE", "USER_DELETE", "USER_CREATE", "ACCOUNT_LINKING"] 中的一个或多个
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTLOGMESSAGEBYCONDITIONREQUEST_H_
