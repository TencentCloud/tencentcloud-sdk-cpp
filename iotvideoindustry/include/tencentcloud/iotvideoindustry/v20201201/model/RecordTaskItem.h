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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDTASKITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDTASKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 普通设备的录像详情
                */
                class RecordTaskItem : public AbstractModel
                {
                public:
                    RecordTaskItem();
                    ~RecordTaskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>录像任务ID</p>
                     * @return RecordTaskId <p>录像任务ID</p>
                     * 
                     */
                    std::string GetRecordTaskId() const;

                    /**
                     * 设置<p>录像任务ID</p>
                     * @param _recordTaskId <p>录像任务ID</p>
                     * 
                     */
                    void SetRecordTaskId(const std::string& _recordTaskId);

                    /**
                     * 判断参数 RecordTaskId 是否已赋值
                     * @return RecordTaskId 是否已赋值
                     * 
                     */
                    bool RecordTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>录制计划ID</p>
                     * @return RecordPlanId <p>录制计划ID</p>
                     * 
                     */
                    std::string GetRecordPlanId() const;

                    /**
                     * 设置<p>录制计划ID</p>
                     * @param _recordPlanId <p>录制计划ID</p>
                     * 
                     */
                    void SetRecordPlanId(const std::string& _recordPlanId);

                    /**
                     * 判断参数 RecordPlanId 是否已赋值
                     * @return RecordPlanId 是否已赋值
                     * 
                     */
                    bool RecordPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>本录制片段开始时间</p>
                     * @return StartTime <p>本录制片段开始时间</p>
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置<p>本录制片段开始时间</p>
                     * @param _startTime <p>本录制片段开始时间</p>
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
                     * 获取<p>本录制片段结束时间</p>
                     * @return EndTime <p>本录制片段结束时间</p>
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置<p>本录制片段结束时间</p>
                     * @param _endTime <p>本录制片段结束时间</p>
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
                     * 获取<p>录制模式</p>
                     * @return EventId <p>录制模式</p>
                     * 
                     */
                    int64_t GetEventId() const;

                    /**
                     * 设置<p>录制模式</p>
                     * @param _eventId <p>录制模式</p>
                     * 
                     */
                    void SetEventId(const int64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>本录制片段对应的录制文件URL</p>
                     * @return VideoUrl <p>本录制片段对应的录制文件URL</p>
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置<p>本录制片段对应的录制文件URL</p>
                     * @param _videoUrl <p>本录制片段对应的录制文件URL</p>
                     * 
                     */
                    void SetVideoUrl(const std::string& _videoUrl);

                    /**
                     * 判断参数 VideoUrl 是否已赋值
                     * @return VideoUrl 是否已赋值
                     * 
                     */
                    bool VideoUrlHasBeenSet() const;

                    /**
                     * 获取<p>本录制片段当前的录制状态</p>
                     * @return RecordStatus <p>本录制片段当前的录制状态</p>
                     * 
                     */
                    int64_t GetRecordStatus() const;

                    /**
                     * 设置<p>本录制片段当前的录制状态</p>
                     * @param _recordStatus <p>本录制片段当前的录制状态</p>
                     * 
                     */
                    void SetRecordStatus(const int64_t& _recordStatus);

                    /**
                     * 判断参数 RecordStatus 是否已赋值
                     * @return RecordStatus 是否已赋值
                     * 
                     */
                    bool RecordStatusHasBeenSet() const;

                    /**
                     * 获取<p>场景ID</p>
                     * @return SceneId <p>场景ID</p>
                     * 
                     */
                    int64_t GetSceneId() const;

                    /**
                     * 设置<p>场景ID</p>
                     * @param _sceneId <p>场景ID</p>
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
                     * 获取<p>告警ID</p>
                     * @return WarnId <p>告警ID</p>
                     * 
                     */
                    int64_t GetWarnId() const;

                    /**
                     * 设置<p>告警ID</p>
                     * @param _warnId <p>告警ID</p>
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
                     * 获取<p>录制id，NVR下属设备有效</p>
                     * @return RecordId <p>录制id，NVR下属设备有效</p>
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置<p>录制id，NVR下属设备有效</p>
                     * @param _recordId <p>录制id，NVR下属设备有效</p>
                     * 
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取<p>视频自增ID</p>
                     * @return InitID <p>视频自增ID</p>
                     * 
                     */
                    int64_t GetInitID() const;

                    /**
                     * 设置<p>视频自增ID</p>
                     * @param _initID <p>视频自增ID</p>
                     * 
                     */
                    void SetInitID(const int64_t& _initID);

                    /**
                     * 判断参数 InitID 是否已赋值
                     * @return InitID 是否已赋值
                     * 
                     */
                    bool InitIDHasBeenSet() const;

                    /**
                     * 获取<p>过期时间</p>
                     * @return ExpectDeleteTime <p>过期时间</p>
                     * 
                     */
                    int64_t GetExpectDeleteTime() const;

                    /**
                     * 设置<p>过期时间</p>
                     * @param _expectDeleteTime <p>过期时间</p>
                     * 
                     */
                    void SetExpectDeleteTime(const int64_t& _expectDeleteTime);

                    /**
                     * 判断参数 ExpectDeleteTime 是否已赋值
                     * @return ExpectDeleteTime 是否已赋值
                     * 
                     */
                    bool ExpectDeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>录制时长</p>
                     * @return RecordTimeLen <p>录制时长</p>
                     * 
                     */
                    int64_t GetRecordTimeLen() const;

                    /**
                     * 设置<p>录制时长</p>
                     * @param _recordTimeLen <p>录制时长</p>
                     * 
                     */
                    void SetRecordTimeLen(const int64_t& _recordTimeLen);

                    /**
                     * 判断参数 RecordTimeLen 是否已赋值
                     * @return RecordTimeLen 是否已赋值
                     * 
                     */
                    bool RecordTimeLenHasBeenSet() const;

                    /**
                     * 获取<p>文件大小</p>
                     * @return FileSize <p>文件大小</p>
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置<p>文件大小</p>
                     * @param _fileSize <p>文件大小</p>
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                private:

                    /**
                     * <p>录像任务ID</p>
                     */
                    std::string m_recordTaskId;
                    bool m_recordTaskIdHasBeenSet;

                    /**
                     * <p>录制计划ID</p>
                     */
                    std::string m_recordPlanId;
                    bool m_recordPlanIdHasBeenSet;

                    /**
                     * <p>本录制片段开始时间</p>
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>本录制片段结束时间</p>
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>录制模式</p>
                     */
                    int64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>本录制片段对应的录制文件URL</p>
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * <p>本录制片段当前的录制状态</p>
                     */
                    int64_t m_recordStatus;
                    bool m_recordStatusHasBeenSet;

                    /**
                     * <p>场景ID</p>
                     */
                    int64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                    /**
                     * <p>告警ID</p>
                     */
                    int64_t m_warnId;
                    bool m_warnIdHasBeenSet;

                    /**
                     * <p>录制id，NVR下属设备有效</p>
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * <p>视频自增ID</p>
                     */
                    int64_t m_initID;
                    bool m_initIDHasBeenSet;

                    /**
                     * <p>过期时间</p>
                     */
                    int64_t m_expectDeleteTime;
                    bool m_expectDeleteTimeHasBeenSet;

                    /**
                     * <p>录制时长</p>
                     */
                    int64_t m_recordTimeLen;
                    bool m_recordTimeLenHasBeenSet;

                    /**
                     * <p>文件大小</p>
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_RECORDTASKITEM_H_
