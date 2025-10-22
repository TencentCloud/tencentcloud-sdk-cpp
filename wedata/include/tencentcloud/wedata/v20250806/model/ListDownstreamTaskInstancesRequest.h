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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDOWNSTREAMTASKINSTANCESREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDOWNSTREAMTASKINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * ListDownstreamTaskInstances请求参数结构体
                */
                class ListDownstreamTaskInstancesRequest : public AbstractModel
                {
                public:
                    ListDownstreamTaskInstancesRequest();
                    ~ListDownstreamTaskInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目Id
                     * @return ProjectId 项目Id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目Id
                     * @param _projectId 项目Id
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取**实例唯一标识**
                     * @return InstanceKey **实例唯一标识**
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置**实例唯一标识**
                     * @param _instanceKey **实例唯一标识**
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取**时区** timeZone, 默认UTC+8
                     * @return TimeZone **时区** timeZone, 默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置**时区** timeZone, 默认UTC+8
                     * @param _timeZone **时区** timeZone, 默认UTC+8
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取**页码，整型**配合pageSize使用且不能小于1， 默认值1
                     * @return PageNumber **页码，整型**配合pageSize使用且不能小于1， 默认值1
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置**页码，整型**配合pageSize使用且不能小于1， 默认值1
                     * @param _pageNumber **页码，整型**配合pageSize使用且不能小于1， 默认值1
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
                     * 获取**每页显示的条数，默认为10，最小值为1、最大值为100
                     * @return PageSize **每页显示的条数，默认为10，最小值为1、最大值为100
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置**每页显示的条数，默认为10，最小值为1、最大值为100
                     * @param _pageSize **每页显示的条数，默认为10，最小值为1、最大值为100
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
                     * 项目Id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * **实例唯一标识**
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **时区** timeZone, 默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * **页码，整型**配合pageSize使用且不能小于1， 默认值1
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * **每页显示的条数，默认为10，最小值为1、最大值为100
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTDOWNSTREAMTASKINSTANCESREQUEST_H_
