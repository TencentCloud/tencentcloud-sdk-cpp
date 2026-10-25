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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEBREADCRUMBSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEBREADCRUMBSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeIssueBreadcrumbs请求参数结构体
                */
                class DescribeIssueBreadcrumbsRequest : public AbstractModel
                {
                public:
                    DescribeIssueBreadcrumbsRequest();
                    ~DescribeIssueBreadcrumbsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用 ID</p>
                     * @return AppId <p>应用 ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用 ID</p>
                     * @param _appId <p>应用 ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>Issue ID</p>
                     * @return IssueId <p>Issue ID</p>
                     * 
                     */
                    std::string GetIssueId() const;

                    /**
                     * 设置<p>Issue ID</p>
                     * @param _issueId <p>Issue ID</p>
                     * 
                     */
                    void SetIssueId(const std::string& _issueId);

                    /**
                     * 判断参数 IssueId 是否已赋值
                     * @return IssueId 是否已赋值
                     * 
                     */
                    bool IssueIdHasBeenSet() const;

                    /**
                     * 获取<p>事件 ID；为空时默认回退到最新事件</p>
                     * @return EventId <p>事件 ID；为空时默认回退到最新事件</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>事件 ID；为空时默认回退到最新事件</p>
                     * @param _eventId <p>事件 ID；为空时默认回退到最新事件</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>向前回溯秒数，默认 60，最大 300</p>
                     * @return Before <p>向前回溯秒数，默认 60，最大 300</p>
                     * 
                     */
                    int64_t GetBefore() const;

                    /**
                     * 设置<p>向前回溯秒数，默认 60，最大 300</p>
                     * @param _before <p>向前回溯秒数，默认 60，最大 300</p>
                     * 
                     */
                    void SetBefore(const int64_t& _before);

                    /**
                     * 判断参数 Before 是否已赋值
                     * @return Before 是否已赋值
                     * 
                     */
                    bool BeforeHasBeenSet() const;

                    /**
                     * 获取<p>返回条数上限，默认 50，最大 100</p>
                     * @return Limit <p>返回条数上限，默认 50，最大 100</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回条数上限，默认 50，最大 100</p>
                     * @param _limit <p>返回条数上限，默认 50，最大 100</p>
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>应用 ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>Issue ID</p>
                     */
                    std::string m_issueId;
                    bool m_issueIdHasBeenSet;

                    /**
                     * <p>事件 ID；为空时默认回退到最新事件</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>向前回溯秒数，默认 60，最大 300</p>
                     */
                    int64_t m_before;
                    bool m_beforeHasBeenSet;

                    /**
                     * <p>返回条数上限，默认 50，最大 100</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEBREADCRUMBSREQUEST_H_
