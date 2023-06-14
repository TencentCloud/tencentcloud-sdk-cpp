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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITCHECKATTENDANCETASKPLUSREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITCHECKATTENDANCETASKPLUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitCheckAttendanceTaskPlus请求参数结构体
                */
                class SubmitCheckAttendanceTaskPlusRequest : public AbstractModel
                {
                public:
                    SubmitCheckAttendanceTaskPlusRequest();
                    ~SubmitCheckAttendanceTaskPlusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入数据
                     * @return FileContent 输入数据
                     * 
                     */
                    std::vector<std::string> GetFileContent() const;

                    /**
                     * 设置输入数据
                     * @param _fileContent 输入数据
                     * 
                     */
                    void SetFileContent(const std::vector<std::string>& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取视频流类型，vod_url表示点播URL，live_url表示直播URL，默认vod_url
                     * @return FileType 视频流类型，vod_url表示点播URL，live_url表示直播URL，默认vod_url
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置视频流类型，vod_url表示点播URL，live_url表示直播URL，默认vod_url
                     * @param _fileType 视频流类型，vod_url表示点播URL，live_url表示直播URL，默认vod_url
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取人员库 ID列表
                     * @return LibraryIds 人员库 ID列表
                     * 
                     */
                    std::vector<std::string> GetLibraryIds() const;

                    /**
                     * 设置人员库 ID列表
                     * @param _libraryIds 人员库 ID列表
                     * 
                     */
                    void SetLibraryIds(const std::vector<std::string>& _libraryIds);

                    /**
                     * 判断参数 LibraryIds 是否已赋值
                     * @return LibraryIds 是否已赋值
                     * 
                     */
                    bool LibraryIdsHasBeenSet() const;

                    /**
                     * 获取确定出勤阈值；默认为0.92
                     * @return AttendanceThreshold 确定出勤阈值；默认为0.92
                     * 
                     */
                    double GetAttendanceThreshold() const;

                    /**
                     * 设置确定出勤阈值；默认为0.92
                     * @param _attendanceThreshold 确定出勤阈值；默认为0.92
                     * 
                     */
                    void SetAttendanceThreshold(const double& _attendanceThreshold);

                    /**
                     * 判断参数 AttendanceThreshold 是否已赋值
                     * @return AttendanceThreshold 是否已赋值
                     * 
                     */
                    bool AttendanceThresholdHasBeenSet() const;

                    /**
                     * 获取是否开启陌生人模式，陌生人模式是指在任务中发现的非注册人脸库中的人脸也返回相关统计信息，默认不开启
                     * @return EnableStranger 是否开启陌生人模式，陌生人模式是指在任务中发现的非注册人脸库中的人脸也返回相关统计信息，默认不开启
                     * 
                     */
                    bool GetEnableStranger() const;

                    /**
                     * 设置是否开启陌生人模式，陌生人模式是指在任务中发现的非注册人脸库中的人脸也返回相关统计信息，默认不开启
                     * @param _enableStranger 是否开启陌生人模式，陌生人模式是指在任务中发现的非注册人脸库中的人脸也返回相关统计信息，默认不开启
                     * 
                     */
                    void SetEnableStranger(const bool& _enableStranger);

                    /**
                     * 判断参数 EnableStranger 是否已赋值
                     * @return EnableStranger 是否已赋值
                     * 
                     */
                    bool EnableStrangerHasBeenSet() const;

                    /**
                     * 获取考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间往后12小时
                     * @return EndTime 考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间往后12小时
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间往后12小时
                     * @param _endTime 考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间往后12小时
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
                     * 获取通知回调地址，要求方法为post，application/json格式
                     * @return NoticeUrl 通知回调地址，要求方法为post，application/json格式
                     * 
                     */
                    std::string GetNoticeUrl() const;

                    /**
                     * 设置通知回调地址，要求方法为post，application/json格式
                     * @param _noticeUrl 通知回调地址，要求方法为post，application/json格式
                     * 
                     */
                    void SetNoticeUrl(const std::string& _noticeUrl);

                    /**
                     * 判断参数 NoticeUrl 是否已赋值
                     * @return NoticeUrl 是否已赋值
                     * 
                     */
                    bool NoticeUrlHasBeenSet() const;

                    /**
                     * 获取考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间
                     * @return StartTime 考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间
                     * @param _startTime 考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间
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
                     * 获取识别阈值；默认为0.8
                     * @return Threshold 识别阈值；默认为0.8
                     * 
                     */
                    double GetThreshold() const;

                    /**
                     * 设置识别阈值；默认为0.8
                     * @param _threshold 识别阈值；默认为0.8
                     * 
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     * 
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * 输入数据
                     */
                    std::vector<std::string> m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 视频流类型，vod_url表示点播URL，live_url表示直播URL，默认vod_url
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 人员库 ID列表
                     */
                    std::vector<std::string> m_libraryIds;
                    bool m_libraryIdsHasBeenSet;

                    /**
                     * 确定出勤阈值；默认为0.92
                     */
                    double m_attendanceThreshold;
                    bool m_attendanceThresholdHasBeenSet;

                    /**
                     * 是否开启陌生人模式，陌生人模式是指在任务中发现的非注册人脸库中的人脸也返回相关统计信息，默认不开启
                     */
                    bool m_enableStranger;
                    bool m_enableStrangerHasBeenSet;

                    /**
                     * 考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间往后12小时
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 通知回调地址，要求方法为post，application/json格式
                     */
                    std::string m_noticeUrl;
                    bool m_noticeUrlHasBeenSet;

                    /**
                     * 考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0 
对于直播场景，使用绝对时间戳，单位秒，默认当前时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 识别阈值；默认为0.8
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITCHECKATTENDANCETASKPLUSREQUEST_H_
