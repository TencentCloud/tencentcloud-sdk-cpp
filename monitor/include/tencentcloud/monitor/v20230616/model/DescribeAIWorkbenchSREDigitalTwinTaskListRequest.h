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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINTASKLISTREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINTASKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * DescribeAIWorkbenchSREDigitalTwinTaskList请求参数结构体
                */
                class DescribeAIWorkbenchSREDigitalTwinTaskListRequest : public AbstractModel
                {
                public:
                    DescribeAIWorkbenchSREDigitalTwinTaskListRequest();
                    ~DescribeAIWorkbenchSREDigitalTwinTaskListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取数字分身ID
                     * @return TwinID 数字分身ID
                     * 
                     */
                    uint64_t GetTwinID() const;

                    /**
                     * 设置数字分身ID
                     * @param _twinID 数字分身ID
                     * 
                     */
                    void SetTwinID(const uint64_t& _twinID);

                    /**
                     * 判断参数 TwinID 是否已赋值
                     * @return TwinID 是否已赋值
                     * 
                     */
                    bool TwinIDHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取数量限制
                     * @return Limit 数量限制
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置数量限制
                     * @param _limit 数量限制
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 数字分身ID
                     */
                    uint64_t m_twinID;
                    bool m_twinIDHasBeenSet;

                    /**
                     * 偏移量
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 数量限制
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_DESCRIBEAIWORKBENCHSREDIGITALTWINTASKLISTREQUEST_H_
