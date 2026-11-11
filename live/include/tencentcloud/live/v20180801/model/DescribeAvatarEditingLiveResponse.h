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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAVATAREDITINGLIVERESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAVATAREDITINGLIVERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAvatarEditingLive返回参数结构体
                */
                class DescribeAvatarEditingLiveResponse : public AbstractModel
                {
                public:
                    DescribeAvatarEditingLiveResponse();
                    ~DescribeAvatarEditingLiveResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道ID，通常是待编辑的直播流的源ID</p>
                     * @return ChannelId <p>通道ID，通常是待编辑的直播流的源ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>实时编辑会话ID</p>
                     * @return LiveId <p>实时编辑会话ID</p>
                     * 
                     */
                    std::string GetLiveId() const;

                    /**
                     * 判断参数 LiveId 是否已赋值
                     * @return LiveId 是否已赋值
                     * 
                     */
                    bool LiveIdHasBeenSet() const;

                    /**
                     * 获取<p>实时编辑会话的状态</p><p>枚举值：</p><ul><li>waiting： 等待中</li><li>on_live： 直播中</li><li>ending： 结束中</li><li>ended： 已结束</li><li>prepared： 准备中</li><li>not_exist： 不存在</li></ul>
                     * @return Status <p>实时编辑会话的状态</p><p>枚举值：</p><ul><li>waiting： 等待中</li><li>on_live： 直播中</li><li>ending： 结束中</li><li>ended： 已结束</li><li>prepared： 准备中</li><li>not_exist： 不存在</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>内部模块会话状态</p>
                     * @return Phase <p>内部模块会话状态</p>
                     * 
                     */
                    std::string GetPhase() const;

                    /**
                     * 判断参数 Phase 是否已赋值
                     * @return Phase 是否已赋值
                     * 
                     */
                    bool PhaseHasBeenSet() const;

                    /**
                     * 获取<p>输出Mode</p>
                     * @return CallMode <p>输出Mode</p>
                     * 
                     */
                    std::string GetCallMode() const;

                    /**
                     * 判断参数 CallMode 是否已赋值
                     * @return CallMode 是否已赋值
                     * 
                     */
                    bool CallModeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>开播时刻</p>
                     * @return StartTime <p>开播时刻</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间，如果还没结束则该值为0</p>
                     * @return EndTime <p>结束时间，如果还没结束则该值为0</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>跟踪ID，用于查日志</p>
                     * @return TraceId <p>跟踪ID，用于查日志</p>
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                private:

                    /**
                     * <p>通道ID，通常是待编辑的直播流的源ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>实时编辑会话ID</p>
                     */
                    std::string m_liveId;
                    bool m_liveIdHasBeenSet;

                    /**
                     * <p>实时编辑会话的状态</p><p>枚举值：</p><ul><li>waiting： 等待中</li><li>on_live： 直播中</li><li>ending： 结束中</li><li>ended： 已结束</li><li>prepared： 准备中</li><li>not_exist： 不存在</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>内部模块会话状态</p>
                     */
                    std::string m_phase;
                    bool m_phaseHasBeenSet;

                    /**
                     * <p>输出Mode</p>
                     */
                    std::string m_callMode;
                    bool m_callModeHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>开播时刻</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间，如果还没结束则该值为0</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>跟踪ID，用于查日志</p>
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAVATAREDITINGLIVERESPONSE_H_
