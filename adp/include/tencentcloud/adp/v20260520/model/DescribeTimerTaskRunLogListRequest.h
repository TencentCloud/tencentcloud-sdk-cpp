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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBETIMERTASKRUNLOGLISTREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBETIMERTASKRUNLOGLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/Filter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * DescribeTimerTaskRunLogList请求参数结构体
                */
                class DescribeTimerTaskRunLogListRequest : public AbstractModel
                {
                public:
                    DescribeTimerTaskRunLogListRequest();
                    ~DescribeTimerTaskRunLogListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取工作空间ID
                     * @return SpaceId 工作空间ID
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置工作空间ID
                     * @param _spaceId 工作空间ID
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取定时任务ID，必须按任务维度查询
                     * @return TimerId 定时任务ID，必须按任务维度查询
                     * 
                     */
                    std::string GetTimerId() const;

                    /**
                     * 设置定时任务ID，必须按任务维度查询
                     * @param _timerId 定时任务ID，必须按任务维度查询
                     * 
                     */
                    void SetTimerId(const std::string& _timerId);

                    /**
                     * 判断参数 TimerId 是否已赋值
                     * @return TimerId 是否已赋值
                     * 
                     */
                    bool TimerIdHasBeenSet() const;

                    /**
                     * 获取过滤条件，支持: Status(执行状态，值为枚举int); Unread(仅未读，值为"true"/"false")
                     * @return FilterList 过滤条件，支持: Status(执行状态，值为枚举int); Unread(仅未读，值为"true"/"false")
                     * 
                     */
                    std::vector<Filter> GetFilterList() const;

                    /**
                     * 设置过滤条件，支持: Status(执行状态，值为枚举int); Unread(仅未读，值为"true"/"false")
                     * @param _filterList 过滤条件，支持: Status(执行状态，值为枚举int); Unread(仅未读，值为"true"/"false")
                     * 
                     */
                    void SetFilterList(const std::vector<Filter>& _filterList);

                    /**
                     * 判断参数 FilterList 是否已赋值
                     * @return FilterList 是否已赋值
                     * 
                     */
                    bool FilterListHasBeenSet() const;

                    /**
                     * 获取<p>子用户Uin</p>
                     * @return LoginSubAccountUin <p>子用户Uin</p>
                     * 
                     */
                    std::string GetLoginSubAccountUin() const;

                    /**
                     * 设置<p>子用户Uin</p>
                     * @param _loginSubAccountUin <p>子用户Uin</p>
                     * 
                     */
                    void SetLoginSubAccountUin(const std::string& _loginSubAccountUin);

                    /**
                     * 判断参数 LoginSubAccountUin 是否已赋值
                     * @return LoginSubAccountUin 是否已赋值
                     * 
                     */
                    bool LoginSubAccountUinHasBeenSet() const;

                    /**
                     * 获取<p>主用户Uin</p>
                     * @return LoginUin <p>主用户Uin</p>
                     * 
                     */
                    std::string GetLoginUin() const;

                    /**
                     * 设置<p>主用户Uin</p>
                     * @param _loginUin <p>主用户Uin</p>
                     * 
                     */
                    void SetLoginUin(const std::string& _loginUin);

                    /**
                     * 判断参数 LoginUin 是否已赋值
                     * @return LoginUin 是否已赋值
                     * 
                     */
                    bool LoginUinHasBeenSet() const;

                    /**
                     * 获取页码，从0开始
                     * @return PageNumber 页码，从0开始
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置页码，从0开始
                     * @param _pageNumber 页码，从0开始
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
                     * 获取每页数目，最大100
                     * @return PageSize 每页数目，最大100
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页数目，最大100
                     * @param _pageSize 每页数目，最大100
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
                     * 工作空间ID
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * 定时任务ID，必须按任务维度查询
                     */
                    std::string m_timerId;
                    bool m_timerIdHasBeenSet;

                    /**
                     * 过滤条件，支持: Status(执行状态，值为枚举int); Unread(仅未读，值为"true"/"false")
                     */
                    std::vector<Filter> m_filterList;
                    bool m_filterListHasBeenSet;

                    /**
                     * <p>子用户Uin</p>
                     */
                    std::string m_loginSubAccountUin;
                    bool m_loginSubAccountUinHasBeenSet;

                    /**
                     * <p>主用户Uin</p>
                     */
                    std::string m_loginUin;
                    bool m_loginUinHasBeenSet;

                    /**
                     * 页码，从0开始
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页数目，最大100
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_DESCRIBETIMERTASKRUNLOGLISTREQUEST_H_
