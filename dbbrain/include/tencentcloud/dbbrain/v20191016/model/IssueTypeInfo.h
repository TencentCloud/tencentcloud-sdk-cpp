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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_ISSUETYPEINFO_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_ISSUETYPEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20191016/model/EventInfo.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * 指标信息。
                */
                class IssueTypeInfo : public AbstractModel
                {
                public:
                    IssueTypeInfo();
                    ~IssueTypeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标分类：AVAILABILITY：可用性，MAINTAINABILITY：可维护性，PERFORMANCE，性能，RELIABILITY可靠性。
                     * @return IssueType 指标分类：AVAILABILITY：可用性，MAINTAINABILITY：可维护性，PERFORMANCE，性能，RELIABILITY可靠性。
                     * 
                     */
                    std::string GetIssueType() const;

                    /**
                     * 设置指标分类：AVAILABILITY：可用性，MAINTAINABILITY：可维护性，PERFORMANCE，性能，RELIABILITY可靠性。
                     * @param _issueType 指标分类：AVAILABILITY：可用性，MAINTAINABILITY：可维护性，PERFORMANCE，性能，RELIABILITY可靠性。
                     * 
                     */
                    void SetIssueType(const std::string& _issueType);

                    /**
                     * 判断参数 IssueType 是否已赋值
                     * @return IssueType 是否已赋值
                     * 
                     */
                    bool IssueTypeHasBeenSet() const;

                    /**
                     * 获取异常事件。
                     * @return Events 异常事件。
                     * 
                     */
                    std::vector<EventInfo> GetEvents() const;

                    /**
                     * 设置异常事件。
                     * @param _events 异常事件。
                     * 
                     */
                    void SetEvents(const std::vector<EventInfo>& _events);

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取异常事件总数。
                     * @return TotalCount 异常事件总数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置异常事件总数。
                     * @param _totalCount 异常事件总数。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 指标分类：AVAILABILITY：可用性，MAINTAINABILITY：可维护性，PERFORMANCE，性能，RELIABILITY可靠性。
                     */
                    std::string m_issueType;
                    bool m_issueTypeHasBeenSet;

                    /**
                     * 异常事件。
                     */
                    std::vector<EventInfo> m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 异常事件总数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_ISSUETYPEINFO_H_
