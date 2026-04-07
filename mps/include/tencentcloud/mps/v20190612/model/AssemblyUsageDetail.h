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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_ASSEMBLYUSAGEDETAIL_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_ASSEMBLYUSAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 线性组装信息查询
                */
                class AssemblyUsageDetail : public AbstractModel
                {
                public:
                    AssemblyUsageDetail();
                    ~AssemblyUsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>频道id</p>
                     * @return ChannelID <p>频道id</p>
                     * 
                     */
                    std::string GetChannelID() const;

                    /**
                     * 设置<p>频道id</p>
                     * @param _channelID <p>频道id</p>
                     * 
                     */
                    void SetChannelID(const std::string& _channelID);

                    /**
                     * 判断参数 ChannelID 是否已赋值
                     * @return ChannelID 是否已赋值
                     * 
                     */
                    bool ChannelIDHasBeenSet() const;

                    /**
                     * 获取<p>日期</p>
                     * @return Date <p>日期</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>日期</p>
                     * @param _date <p>日期</p>
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取<p>查询开始时间</p>
                     * @return StartTime <p>查询开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>查询开始时间</p>
                     * @param _startTime <p>查询开始时间</p>
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
                     * 获取<p>查询结束时间</p>
                     * @return EndTime <p>查询结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>查询结束时间</p>
                     * @param _endTime <p>查询结束时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>持续时间</p>
                     * @return Duration <p>持续时间</p>
                     * 
                     */
                    int64_t GetDuration() const;

                    /**
                     * 设置<p>持续时间</p>
                     * @param _duration <p>持续时间</p>
                     * 
                     */
                    void SetDuration(const int64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>频道类型</p>
                     * @return ChannelTier <p>频道类型</p>
                     * 
                     */
                    std::string GetChannelTier() const;

                    /**
                     * 设置<p>频道类型</p>
                     * @param _channelTier <p>频道类型</p>
                     * 
                     */
                    void SetChannelTier(const std::string& _channelTier);

                    /**
                     * 判断参数 ChannelTier 是否已赋值
                     * @return ChannelTier 是否已赋值
                     * 
                     */
                    bool ChannelTierHasBeenSet() const;

                    /**
                     * 获取<p>频道名称</p>
                     * @return ChannelName <p>频道名称</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>频道名称</p>
                     * @param _channelName <p>频道名称</p>
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                private:

                    /**
                     * <p>频道id</p>
                     */
                    std::string m_channelID;
                    bool m_channelIDHasBeenSet;

                    /**
                     * <p>日期</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>查询开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>查询结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>持续时间</p>
                     */
                    int64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>频道类型</p>
                     */
                    std::string m_channelTier;
                    bool m_channelTierHasBeenSet;

                    /**
                     * <p>频道名称</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_ASSEMBLYUSAGEDETAIL_H_
