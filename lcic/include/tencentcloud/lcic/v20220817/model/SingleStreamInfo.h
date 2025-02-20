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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_SINGLESTREAMINFO_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_SINGLESTREAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * 录制流信息
                */
                class SingleStreamInfo : public AbstractModel
                {
                public:
                    SingleStreamInfo();
                    ~SingleStreamInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户ID
                     * @return UserId 用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID
                     * @param _userId 用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
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
                     * 获取结束时间
                     * @return StopTime 结束时间
                     * 
                     */
                    uint64_t GetStopTime() const;

                    /**
                     * 设置结束时间
                     * @param _stopTime 结束时间
                     * 
                     */
                    void SetStopTime(const uint64_t& _stopTime);

                    /**
                     * 判断参数 StopTime 是否已赋值
                     * @return StopTime 是否已赋值
                     * 
                     */
                    bool StopTimeHasBeenSet() const;

                    /**
                     * 获取总时长
                     * @return Duration 总时长
                     * 
                     */
                    uint64_t GetDuration() const;

                    /**
                     * 设置总时长
                     * @param _duration 总时长
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
                     * 获取文件格式
                     * @return FileFormat 文件格式
                     * 
                     */
                    std::string GetFileFormat() const;

                    /**
                     * 设置文件格式
                     * @param _fileFormat 文件格式
                     * 
                     */
                    void SetFileFormat(const std::string& _fileFormat);

                    /**
                     * 判断参数 FileFormat 是否已赋值
                     * @return FileFormat 是否已赋值
                     * 
                     */
                    bool FileFormatHasBeenSet() const;

                    /**
                     * 获取流url
                     * @return RecordUrl 流url
                     * 
                     */
                    std::string GetRecordUrl() const;

                    /**
                     * 设置流url
                     * @param _recordUrl 流url
                     * 
                     */
                    void SetRecordUrl(const std::string& _recordUrl);

                    /**
                     * 判断参数 RecordUrl 是否已赋值
                     * @return RecordUrl 是否已赋值
                     * 
                     */
                    bool RecordUrlHasBeenSet() const;

                    /**
                     * 获取流大小
                     * @return RecordSize 流大小
                     * 
                     */
                    uint64_t GetRecordSize() const;

                    /**
                     * 设置流大小
                     * @param _recordSize 流大小
                     * 
                     */
                    void SetRecordSize(const uint64_t& _recordSize);

                    /**
                     * 判断参数 RecordSize 是否已赋值
                     * @return RecordSize 是否已赋值
                     * 
                     */
                    bool RecordSizeHasBeenSet() const;

                    /**
                     * 获取流ID
                     * @return VideoId 流ID
                     * 
                     */
                    std::string GetVideoId() const;

                    /**
                     * 设置流ID
                     * @param _videoId 流ID
                     * 
                     */
                    void SetVideoId(const std::string& _videoId);

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     * 
                     */
                    bool VideoIdHasBeenSet() const;

                    /**
                     * 获取流类型
                     * @return Role 流类型
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置流类型
                     * @param _role 流类型
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                private:

                    /**
                     * 用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    uint64_t m_stopTime;
                    bool m_stopTimeHasBeenSet;

                    /**
                     * 总时长
                     */
                    uint64_t m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 文件格式
                     */
                    std::string m_fileFormat;
                    bool m_fileFormatHasBeenSet;

                    /**
                     * 流url
                     */
                    std::string m_recordUrl;
                    bool m_recordUrlHasBeenSet;

                    /**
                     * 流大小
                     */
                    uint64_t m_recordSize;
                    bool m_recordSizeHasBeenSet;

                    /**
                     * 流ID
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                    /**
                     * 流类型
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_SINGLESTREAMINFO_H_
