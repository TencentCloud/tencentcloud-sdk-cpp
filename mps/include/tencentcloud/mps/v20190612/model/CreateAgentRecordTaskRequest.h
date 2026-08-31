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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAGENTRECORDTASKREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAGENTRECORDTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AgentStoreCosParam.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAgentRecordTask请求参数结构体
                */
                class CreateAgentRecordTaskRequest : public AbstractModel
                {
                public:
                    CreateAgentRecordTaskRequest();
                    ~CreateAgentRecordTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>直播间URL</p>
                     * @return LiveRoomUrl <p>直播间URL</p>
                     * 
                     */
                    std::string GetLiveRoomUrl() const;

                    /**
                     * 设置<p>直播间URL</p>
                     * @param _liveRoomUrl <p>直播间URL</p>
                     * 
                     */
                    void SetLiveRoomUrl(const std::string& _liveRoomUrl);

                    /**
                     * 判断参数 LiveRoomUrl 是否已赋值
                     * @return LiveRoomUrl 是否已赋值
                     * 
                     */
                    bool LiveRoomUrlHasBeenSet() const;

                    /**
                     * 获取<p>最长录制时长</p><p>单位：分</p><p>最长支持720分</p>
                     * @return MaxDurationMinutes <p>最长录制时长</p><p>单位：分</p><p>最长支持720分</p>
                     * 
                     */
                    int64_t GetMaxDurationMinutes() const;

                    /**
                     * 设置<p>最长录制时长</p><p>单位：分</p><p>最长支持720分</p>
                     * @param _maxDurationMinutes <p>最长录制时长</p><p>单位：分</p><p>最长支持720分</p>
                     * 
                     */
                    void SetMaxDurationMinutes(const int64_t& _maxDurationMinutes);

                    /**
                     * 判断参数 MaxDurationMinutes 是否已赋值
                     * @return MaxDurationMinutes 是否已赋值
                     * 
                     */
                    bool MaxDurationMinutesHasBeenSet() const;

                    /**
                     * 获取<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @return StoreCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    AgentStoreCosParam GetStoreCosParam() const;

                    /**
                     * 设置<p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * @param _storeCosParam <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     * 
                     */
                    void SetStoreCosParam(const AgentStoreCosParam& _storeCosParam);

                    /**
                     * 判断参数 StoreCosParam 是否已赋值
                     * @return StoreCosParam 是否已赋值
                     * 
                     */
                    bool StoreCosParamHasBeenSet() const;

                    /**
                     * 获取<p>定时录制开始时刻</p><p>参数格式：2026-07-01T15:31:32+08:00</p><p>空表示提交后立即开始录制；非空表示从该时刻开始录制</p>
                     * @return StartTime <p>定时录制开始时刻</p><p>参数格式：2026-07-01T15:31:32+08:00</p><p>空表示提交后立即开始录制；非空表示从该时刻开始录制</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>定时录制开始时刻</p><p>参数格式：2026-07-01T15:31:32+08:00</p><p>空表示提交后立即开始录制；非空表示从该时刻开始录制</p>
                     * @param _startTime <p>定时录制开始时刻</p><p>参数格式：2026-07-01T15:31:32+08:00</p><p>空表示提交后立即开始录制；非空表示从该时刻开始录制</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>中断策略</p><p>枚举值：</p><ul><li>STOP_ON_INTERRUPT： 直播流中断后立即结束录制</li><li>CONTINUE_UNTIL_END： 直播流中断时忽略中断，继续录制直到任务结束时间</li></ul><p>默认值：STOP_ON_INTERRUPT</p>
                     * @return InterruptPolicy <p>中断策略</p><p>枚举值：</p><ul><li>STOP_ON_INTERRUPT： 直播流中断后立即结束录制</li><li>CONTINUE_UNTIL_END： 直播流中断时忽略中断，继续录制直到任务结束时间</li></ul><p>默认值：STOP_ON_INTERRUPT</p>
                     * 
                     */
                    std::string GetInterruptPolicy() const;

                    /**
                     * 设置<p>中断策略</p><p>枚举值：</p><ul><li>STOP_ON_INTERRUPT： 直播流中断后立即结束录制</li><li>CONTINUE_UNTIL_END： 直播流中断时忽略中断，继续录制直到任务结束时间</li></ul><p>默认值：STOP_ON_INTERRUPT</p>
                     * @param _interruptPolicy <p>中断策略</p><p>枚举值：</p><ul><li>STOP_ON_INTERRUPT： 直播流中断后立即结束录制</li><li>CONTINUE_UNTIL_END： 直播流中断时忽略中断，继续录制直到任务结束时间</li></ul><p>默认值：STOP_ON_INTERRUPT</p>
                     * 
                     */
                    void SetInterruptPolicy(const std::string& _interruptPolicy);

                    /**
                     * 判断参数 InterruptPolicy 是否已赋值
                     * @return InterruptPolicy 是否已赋值
                     * 
                     */
                    bool InterruptPolicyHasBeenSet() const;

                private:

                    /**
                     * <p>直播间URL</p>
                     */
                    std::string m_liveRoomUrl;
                    bool m_liveRoomUrlHasBeenSet;

                    /**
                     * <p>最长录制时长</p><p>单位：分</p><p>最长支持720分</p>
                     */
                    int64_t m_maxDurationMinutes;
                    bool m_maxDurationMinutesHasBeenSet;

                    /**
                     * <p>文件结果指定存储Cos桶信息。 注意：需开通Cos，创建并授权MPS_QcsRole角色。</p>
                     */
                    AgentStoreCosParam m_storeCosParam;
                    bool m_storeCosParamHasBeenSet;

                    /**
                     * <p>定时录制开始时刻</p><p>参数格式：2026-07-01T15:31:32+08:00</p><p>空表示提交后立即开始录制；非空表示从该时刻开始录制</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>中断策略</p><p>枚举值：</p><ul><li>STOP_ON_INTERRUPT： 直播流中断后立即结束录制</li><li>CONTINUE_UNTIL_END： 直播流中断时忽略中断，继续录制直到任务结束时间</li></ul><p>默认值：STOP_ON_INTERRUPT</p>
                     */
                    std::string m_interruptPolicy;
                    bool m_interruptPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAGENTRECORDTASKREQUEST_H_
