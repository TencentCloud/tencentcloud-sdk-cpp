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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESOURCEALERTSREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESOURCEALERTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageSourceAlerts请求参数结构体
                */
                class DescribeStreamPackageSourceAlertsRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageSourceAlertsRequest();
                    ~DescribeStreamPackageSourceAlertsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Source ID。
                     * @return SourceId Source ID。
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置Source ID。
                     * @param _sourceId Source ID。
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间，Unix时间戳，支持最近七天的查询。
                     * @return StartTime 查询开始时间，Unix时间戳，支持最近七天的查询。
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置查询开始时间，Unix时间戳，支持最近七天的查询。
                     * @param _startTime 查询开始时间，Unix时间戳，支持最近七天的查询。
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询结束时间，Unix时间戳，支持最近七天的查询。
                     * @return EndTime 查询结束时间，Unix时间戳，支持最近七天的查询。
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间，Unix时间戳，支持最近七天的查询。
                     * @param _endTime 查询结束时间，Unix时间戳，支持最近七天的查询。
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * Source ID。
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 查询开始时间，Unix时间戳，支持最近七天的查询。
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，Unix时间戳，支持最近七天的查询。
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESOURCEALERTSREQUEST_H_
