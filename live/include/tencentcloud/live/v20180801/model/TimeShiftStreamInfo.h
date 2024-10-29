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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSTREAMINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TimeShiftSubStream.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 时移流。
                */
                class TimeShiftStreamInfo : public AbstractModel
                {
                public:
                    TimeShiftStreamInfo();
                    ~TimeShiftStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取推流域名所属组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainGroup 推流域名所属组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainGroup() const;

                    /**
                     * 设置推流域名所属组。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainGroup 推流域名所属组。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainGroup(const std::string& _domainGroup);

                    /**
                     * 判断参数 DomainGroup 是否已赋值
                     * @return DomainGroup 是否已赋值
                     * 
                     */
                    bool DomainGroupHasBeenSet() const;

                    /**
                     * 获取推流域名。
                     * @return Domain 推流域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置推流域名。
                     * @param _domain 推流域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取推流路径。
                     * @return AppName 推流路径。
                     * 
                     */
                    std::string GetAppName() const;

                    /**
                     * 设置推流路径。
                     * @param _appName 推流路径。
                     * 
                     */
                    void SetAppName(const std::string& _appName);

                    /**
                     * 判断参数 AppName 是否已赋值
                     * @return AppName 是否已赋值
                     * 
                     */
                    bool AppNameHasBeenSet() const;

                    /**
                     * 获取流名称。
                     * @return StreamName 流名称。
                     * 
                     */
                    std::string GetStreamName() const;

                    /**
                     * 设置流名称。
                     * @param _streamName 流名称。
                     * 
                     */
                    void SetStreamName(const std::string& _streamName);

                    /**
                     * 判断参数 StreamName 是否已赋值
                     * @return StreamName 是否已赋值
                     * 
                     */
                    bool StreamNameHasBeenSet() const;

                    /**
                     * 获取流起始时间，Unix 时间戳。
                     * @return StartTime 流起始时间，Unix 时间戳。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置流起始时间，Unix 时间戳。
                     * @param _startTime 流起始时间，Unix 时间戳。
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取截止查询时流结束时间，Unix 时间戳。
                     * @return EndTime 截止查询时流结束时间，Unix 时间戳。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置截止查询时流结束时间，Unix 时间戳。
                     * @param _endTime 截止查询时流结束时间，Unix 时间戳。
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取转码模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TransCodeId 转码模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTransCodeId() const;

                    /**
                     * 设置转码模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _transCodeId 转码模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTransCodeId(const uint64_t& _transCodeId);

                    /**
                     * 判断参数 TransCodeId 是否已赋值
                     * @return TransCodeId 是否已赋值
                     * 
                     */
                    bool TransCodeIdHasBeenSet() const;

                    /**
                     * 获取流类型，取值0为原始流，1为水印流，2为转码流。
                     * @return StreamType 流类型，取值0为原始流，1为水印流，2为转码流。
                     * 
                     */
                    int64_t GetStreamType() const;

                    /**
                     * 设置流类型，取值0为原始流，1为水印流，2为转码流。
                     * @param _streamType 流类型，取值0为原始流，1为水印流，2为转码流。
                     * 
                     */
                    void SetStreamType(const int64_t& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取时移数据存储时长，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Duration 时移数据存储时长，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置时移数据存储时长，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _duration 时移数据存储时长，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDuration(const uint64_t& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取时移自适应码率子流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TimeShiftSubStreams 时移自适应码率子流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimeShiftSubStream> GetTimeShiftSubStreams() const;

                    /**
                     * 设置时移自适应码率子流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeShiftSubStreams 时移自适应码率子流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeShiftSubStreams(const std::vector<TimeShiftSubStream>& _timeShiftSubStreams);

                    /**
                     * 判断参数 TimeShiftSubStreams 是否已赋值
                     * @return TimeShiftSubStreams 是否已赋值
                     * 
                     */
                    bool TimeShiftSubStreamsHasBeenSet() const;

                private:

                    /**
                     * 推流域名所属组。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainGroup;
                    bool m_domainGroupHasBeenSet;

                    /**
                     * 推流域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 推流路径。
                     */
                    std::string m_appName;
                    bool m_appNameHasBeenSet;

                    /**
                     * 流名称。
                     */
                    std::string m_streamName;
                    bool m_streamNameHasBeenSet;

                    /**
                     * 流起始时间，Unix 时间戳。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 截止查询时流结束时间，Unix 时间戳。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 转码模板ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_transCodeId;
                    bool m_transCodeIdHasBeenSet;

                    /**
                     * 流类型，取值0为原始流，1为水印流，2为转码流。
                     */
                    int64_t m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 时移数据存储时长，单位秒。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 时移自适应码率子流列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimeShiftSubStream> m_timeShiftSubStreams;
                    bool m_timeShiftSubStreamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TIMESHIFTSTREAMINFO_H_
