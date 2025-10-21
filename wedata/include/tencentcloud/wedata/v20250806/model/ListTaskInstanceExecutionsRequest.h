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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCEEXECUTIONSREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCEEXECUTIONSREQUEST_H_

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
                * ListTaskInstanceExecutions请求参数结构体
                */
                class ListTaskInstanceExecutionsRequest : public AbstractModel
                {
                public:
                    ListTaskInstanceExecutionsRequest();
                    ~ListTaskInstanceExecutionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取所属项目id
                     * @return ProjectId 所属项目id
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置所属项目id
                     * @param _projectId 所属项目id
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
                     * 获取实例唯一标识，可以通过ListInstances获取
                     * @return InstanceKey 实例唯一标识，可以通过ListInstances获取
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置实例唯一标识，可以通过ListInstances获取
                     * @param _instanceKey 实例唯一标识，可以通过ListInstances获取
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
                     * 获取**时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * @return TimeZone **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置**时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     * @param _timeZone **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
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
                     * 获取每页大小，默认10, 最大200
                     * @return PageSize 每页大小，默认10, 最大200
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页大小，默认10, 最大200
                     * @param _pageSize 每页大小，默认10, 最大200
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取分页页码，默认1
                     * @return PageNumber 分页页码，默认1
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置分页页码，默认1
                     * @param _pageNumber 分页页码，默认1
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 所属项目id
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 实例唯一标识，可以通过ListInstances获取
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * **时区**timeZone, 传入的时间字符串的所在时区，默认UTC+8
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * 每页大小，默认10, 最大200
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 分页页码，默认1
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_LISTTASKINSTANCEEXECUTIONSREQUEST_H_
