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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLRECORDTIMELINEREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLRECORDTIMELINEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ControlRecordTimeline请求参数结构体
                */
                class ControlRecordTimelineRequest : public AbstractModel
                {
                public:
                    ControlRecordTimelineRequest();
                    ~ControlRecordTimelineRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @return ChannelId 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @param _channelId 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return Start 起始时间
                     * 
                     */
                    int64_t GetStart() const;

                    /**
                     * 设置起始时间
                     * @param _start 起始时间
                     * 
                     */
                    void SetStart(const int64_t& _start);

                    /**
                     * 判断参数 Start 是否已赋值
                     * @return Start 是否已赋值
                     * 
                     */
                    bool StartHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return End 结束时间
                     * 
                     */
                    int64_t GetEnd() const;

                    /**
                     * 设置结束时间
                     * @param _end 结束时间
                     * 
                     */
                    void SetEnd(const int64_t& _end);

                    /**
                     * 判断参数 End 是否已赋值
                     * @return End 是否已赋值
                     * 
                     */
                    bool EndHasBeenSet() const;

                private:

                    /**
                     * 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 起始时间
                     */
                    int64_t m_start;
                    bool m_startHasBeenSet;

                    /**
                     * 结束时间
                     */
                    int64_t m_end;
                    bool m_endHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLRECORDTIMELINEREQUEST_H_
