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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEVIDEOLISTREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEVIDEOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeVideoList请求参数结构体
                */
                class DescribeVideoListRequest : public AbstractModel
                {
                public:
                    DescribeVideoListRequest();
                    ~DescribeVideoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制
                     * @return Limit 限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制
                     * @param _limit 限制
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取开始时间戳，秒级
                     * @return StartTime 开始时间戳，秒级
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间戳，秒级
                     * @param _startTime 开始时间戳，秒级
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
                     * 获取结束时间戳，秒级
                     * @return EndTime 结束时间戳，秒级
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳，秒级
                     * @param _endTime 结束时间戳，秒级
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
                     * 获取设备Id
                     * @return DeviceId 设备Id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备Id
                     * @param _deviceId 设备Id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取开始录制范围 开始
                     * @return StartRecordTime 开始录制范围 开始
                     * 
                     */
                    int64_t GetStartRecordTime() const;

                    /**
                     * 设置开始录制范围 开始
                     * @param _startRecordTime 开始录制范围 开始
                     * 
                     */
                    void SetStartRecordTime(const int64_t& _startRecordTime);

                    /**
                     * 判断参数 StartRecordTime 是否已赋值
                     * @return StartRecordTime 是否已赋值
                     * 
                     */
                    bool StartRecordTimeHasBeenSet() const;

                    /**
                     * 获取开始录制范围 结束
                     * @return EndRecordTime 开始录制范围 结束
                     * 
                     */
                    int64_t GetEndRecordTime() const;

                    /**
                     * 设置开始录制范围 结束
                     * @param _endRecordTime 开始录制范围 结束
                     * 
                     */
                    void SetEndRecordTime(const int64_t& _endRecordTime);

                    /**
                     * 判断参数 EndRecordTime 是否已赋值
                     * @return EndRecordTime 是否已赋值
                     * 
                     */
                    bool EndRecordTimeHasBeenSet() const;

                    /**
                     * 获取过期时间范围 开始
                     * @return StartExpireTime 过期时间范围 开始
                     * 
                     */
                    int64_t GetStartExpireTime() const;

                    /**
                     * 设置过期时间范围 开始
                     * @param _startExpireTime 过期时间范围 开始
                     * 
                     */
                    void SetStartExpireTime(const int64_t& _startExpireTime);

                    /**
                     * 判断参数 StartExpireTime 是否已赋值
                     * @return StartExpireTime 是否已赋值
                     * 
                     */
                    bool StartExpireTimeHasBeenSet() const;

                    /**
                     * 获取过期时间范围 结束
                     * @return EndExpireTime 过期时间范围 结束
                     * 
                     */
                    int64_t GetEndExpireTime() const;

                    /**
                     * 设置过期时间范围 结束
                     * @param _endExpireTime 过期时间范围 结束
                     * 
                     */
                    void SetEndExpireTime(const int64_t& _endExpireTime);

                    /**
                     * 判断参数 EndExpireTime 是否已赋值
                     * @return EndExpireTime 是否已赋值
                     * 
                     */
                    bool EndExpireTimeHasBeenSet() const;

                    /**
                     * 获取文件大小范围 开始 单位byte
                     * @return StartFileSize 文件大小范围 开始 单位byte
                     * 
                     */
                    int64_t GetStartFileSize() const;

                    /**
                     * 设置文件大小范围 开始 单位byte
                     * @param _startFileSize 文件大小范围 开始 单位byte
                     * 
                     */
                    void SetStartFileSize(const int64_t& _startFileSize);

                    /**
                     * 判断参数 StartFileSize 是否已赋值
                     * @return StartFileSize 是否已赋值
                     * 
                     */
                    bool StartFileSizeHasBeenSet() const;

                    /**
                     * 获取文件大小范围 结束 单位byte
                     * @return EndFileSize 文件大小范围 结束 单位byte
                     * 
                     */
                    int64_t GetEndFileSize() const;

                    /**
                     * 设置文件大小范围 结束 单位byte
                     * @param _endFileSize 文件大小范围 结束 单位byte
                     * 
                     */
                    void SetEndFileSize(const int64_t& _endFileSize);

                    /**
                     * 判断参数 EndFileSize 是否已赋值
                     * @return EndFileSize 是否已赋值
                     * 
                     */
                    bool EndFileSizeHasBeenSet() const;

                    /**
                     * 获取录制状态 99: 录制方已经回写状态 1: 开始录制了，等待回写 2: 已经到了时间模板的停止时间，在等待录制方回写
                     * @return IsRecording 录制状态 99: 录制方已经回写状态 1: 开始录制了，等待回写 2: 已经到了时间模板的停止时间，在等待录制方回写
                     * 
                     */
                    int64_t GetIsRecording() const;

                    /**
                     * 设置录制状态 99: 录制方已经回写状态 1: 开始录制了，等待回写 2: 已经到了时间模板的停止时间，在等待录制方回写
                     * @param _isRecording 录制状态 99: 录制方已经回写状态 1: 开始录制了，等待回写 2: 已经到了时间模板的停止时间，在等待录制方回写
                     * 
                     */
                    void SetIsRecording(const int64_t& _isRecording);

                    /**
                     * 判断参数 IsRecording 是否已赋值
                     * @return IsRecording 是否已赋值
                     * 
                     */
                    bool IsRecordingHasBeenSet() const;

                    /**
                     * 获取通道ID默认必传
                     * @return ChannelId 通道ID默认必传
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID默认必传
                     * @param _channelId 通道ID默认必传
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
                     * 获取录制计划ID
                     * @return PlanId 录制计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置录制计划ID
                     * @param _planId 录制计划ID
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取场景ID
                     * @return SceneId 场景ID
                     * 
                     */
                    int64_t GetSceneId() const;

                    /**
                     * 设置场景ID
                     * @param _sceneId 场景ID
                     * 
                     */
                    void SetSceneId(const int64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                    /**
                     * 获取告警ID
                     * @return WarnId 告警ID
                     * 
                     */
                    int64_t GetWarnId() const;

                    /**
                     * 设置告警ID
                     * @param _warnId 告警ID
                     * 
                     */
                    void SetWarnId(const int64_t& _warnId);

                    /**
                     * 判断参数 WarnId 是否已赋值
                     * @return WarnId 是否已赋值
                     * 
                     */
                    bool WarnIdHasBeenSet() const;

                    /**
                     * 获取录制类型 1: 联动计划录制 2: 告警录制
                     * @return RecordType 录制类型 1: 联动计划录制 2: 告警录制
                     * 
                     */
                    std::vector<int64_t> GetRecordType() const;

                    /**
                     * 设置录制类型 1: 联动计划录制 2: 告警录制
                     * @param _recordType 录制类型 1: 联动计划录制 2: 告警录制
                     * 
                     */
                    void SetRecordType(const std::vector<int64_t>& _recordType);

                    /**
                     * 判断参数 RecordType 是否已赋值
                     * @return RecordType 是否已赋值
                     * 
                     */
                    bool RecordTypeHasBeenSet() const;

                private:

                    /**
                     * 偏移
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 开始时间戳，秒级
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间戳，秒级
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 开始录制范围 开始
                     */
                    int64_t m_startRecordTime;
                    bool m_startRecordTimeHasBeenSet;

                    /**
                     * 开始录制范围 结束
                     */
                    int64_t m_endRecordTime;
                    bool m_endRecordTimeHasBeenSet;

                    /**
                     * 过期时间范围 开始
                     */
                    int64_t m_startExpireTime;
                    bool m_startExpireTimeHasBeenSet;

                    /**
                     * 过期时间范围 结束
                     */
                    int64_t m_endExpireTime;
                    bool m_endExpireTimeHasBeenSet;

                    /**
                     * 文件大小范围 开始 单位byte
                     */
                    int64_t m_startFileSize;
                    bool m_startFileSizeHasBeenSet;

                    /**
                     * 文件大小范围 结束 单位byte
                     */
                    int64_t m_endFileSize;
                    bool m_endFileSizeHasBeenSet;

                    /**
                     * 录制状态 99: 录制方已经回写状态 1: 开始录制了，等待回写 2: 已经到了时间模板的停止时间，在等待录制方回写
                     */
                    int64_t m_isRecording;
                    bool m_isRecordingHasBeenSet;

                    /**
                     * 通道ID默认必传
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 录制计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 场景ID
                     */
                    int64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * 告警ID
                     */
                    int64_t m_warnId;
                    bool m_warnIdHasBeenSet;

                    /**
                     * 录制类型 1: 联动计划录制 2: 告警录制
                     */
                    std::vector<int64_t> m_recordType;
                    bool m_recordTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBEVIDEOLISTREQUEST_H_
