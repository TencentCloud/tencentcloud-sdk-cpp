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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_LIVERECORDITEM_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_LIVERECORDITEM_H_

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
                * 直播录制详情item
                */
                class LiveRecordItem : public AbstractModel
                {
                public:
                    LiveRecordItem();
                    ~LiveRecordItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取录制文件自增ID
                     * @return IntID 录制文件自增ID
                     * 
                     */
                    int64_t GetIntID() const;

                    /**
                     * 设置录制文件自增ID
                     * @param _intID 录制文件自增ID
                     * 
                     */
                    void SetIntID(const int64_t& _intID);

                    /**
                     * 判断参数 IntID 是否已赋值
                     * @return IntID 是否已赋值
                     * 
                     */
                    bool IntIDHasBeenSet() const;

                    /**
                     * 获取直播频道ID
                     * @return LiveChannelId 直播频道ID
                     * 
                     */
                    std::string GetLiveChannelId() const;

                    /**
                     * 设置直播频道ID
                     * @param _liveChannelId 直播频道ID
                     * 
                     */
                    void SetLiveChannelId(const std::string& _liveChannelId);

                    /**
                     * 判断参数 LiveChannelId 是否已赋值
                     * @return LiveChannelId 是否已赋值
                     * 
                     */
                    bool LiveChannelIdHasBeenSet() const;

                    /**
                     * 获取过期时间
                     * @return ExpectDeleteTime 过期时间
                     * 
                     */
                    int64_t GetExpectDeleteTime() const;

                    /**
                     * 设置过期时间
                     * @param _expectDeleteTime 过期时间
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
                     * 获取录制时长
                     * @return RecordTimeLen 录制时长
                     * 
                     */
                    int64_t GetRecordTimeLen() const;

                    /**
                     * 设置录制时长
                     * @param _recordTimeLen 录制时长
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
                     * 获取文件大小
                     * @return FileSize 文件大小
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置文件大小
                     * @param _fileSize 文件大小
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取录制文件url
                     * @return VideoUrl 录制文件url
                     * 
                     */
                    std::string GetVideoUrl() const;

                    /**
                     * 设置录制文件url
                     * @param _videoUrl 录制文件url
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
                     * 获取录制计划ID
                     * @return RecordPlanId 录制计划ID
                     * 
                     */
                    std::string GetRecordPlanId() const;

                    /**
                     * 设置录制计划ID
                     * @param _recordPlanId 录制计划ID
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
                     * 获取录制开始时间
                     * @return StartTime 录制开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置录制开始时间
                     * @param _startTime 录制开始时间
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
                     * 获取录制结束时间
                     * @return EndTime 录制结束时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置录制结束时间
                     * @param _endTime 录制结束时间
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 录制文件自增ID
                     */
                    int64_t m_intID;
                    bool m_intIDHasBeenSet;

                    /**
                     * 直播频道ID
                     */
                    std::string m_liveChannelId;
                    bool m_liveChannelIdHasBeenSet;

                    /**
                     * 过期时间
                     */
                    int64_t m_expectDeleteTime;
                    bool m_expectDeleteTimeHasBeenSet;

                    /**
                     * 录制时长
                     */
                    int64_t m_recordTimeLen;
                    bool m_recordTimeLenHasBeenSet;

                    /**
                     * 文件大小
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 录制文件url
                     */
                    std::string m_videoUrl;
                    bool m_videoUrlHasBeenSet;

                    /**
                     * 录制计划ID
                     */
                    std::string m_recordPlanId;
                    bool m_recordPlanIdHasBeenSet;

                    /**
                     * 录制开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 录制结束时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_LIVERECORDITEM_H_
