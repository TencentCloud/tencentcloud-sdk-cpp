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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_CHECKATTENDANCEREQUEST_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_CHECKATTENDANCEREQUEST_H_

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
                * CheckAttendance请求参数结构体
                */
                class CheckAttendanceRequest : public AbstractModel
                {
                public:
                    CheckAttendanceRequest();
                    ~CheckAttendanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取输入数据
                     * @return FileContent 输入数据
                     */
                    std::string GetFileContent() const;

                    /**
                     * 设置输入数据
                     * @param FileContent 输入数据
                     */
                    void SetFileContent(const std::string& _fileContent);

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     */
                    bool FileContentHasBeenSet() const;

                    /**
                     * 获取输入类型，picture_url:图片，vod_url:视频文件
                     * @return FileType 输入类型，picture_url:图片，vod_url:视频文件
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置输入类型，picture_url:图片，vod_url:视频文件
                     * @param FileType 输入类型，picture_url:图片，vod_url:视频文件
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取人员库 ID
                     * @return LibraryId 人员库 ID
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置人员库 ID
                     * @param LibraryId 人员库 ID
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取人员 ID 列表
                     * @return PersonIdSet 人员 ID 列表
                     */
                    std::vector<std::string> GetPersonIdSet() const;

                    /**
                     * 设置人员 ID 列表
                     * @param PersonIdSet 人员 ID 列表
                     */
                    void SetPersonIdSet(const std::vector<std::string>& _personIdSet);

                    /**
                     * 判断参数 PersonIdSet 是否已赋值
                     * @return PersonIdSet 是否已赋值
                     */
                    bool PersonIdSetHasBeenSet() const;

                    /**
                     * 获取确定出勤阀值；默认为0.92
                     * @return AttendanceThreshold 确定出勤阀值；默认为0.92
                     */
                    double GetAttendanceThreshold() const;

                    /**
                     * 设置确定出勤阀值；默认为0.92
                     * @param AttendanceThreshold 确定出勤阀值；默认为0.92
                     */
                    void SetAttendanceThreshold(const double& _attendanceThreshold);

                    /**
                     * 判断参数 AttendanceThreshold 是否已赋值
                     * @return AttendanceThreshold 是否已赋值
                     */
                    bool AttendanceThresholdHasBeenSet() const;

                    /**
                     * 获取考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900
                     * @return EndTime 考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900
                     * @param EndTime 考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0
                     * @return StartTime 考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0
                     * @param StartTime 考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取识别阈值；默认为0.7
                     * @return Threshold 识别阈值；默认为0.7
                     */
                    double GetThreshold() const;

                    /**
                     * 设置识别阈值；默认为0.7
                     * @param Threshold 识别阈值；默认为0.7
                     */
                    void SetThreshold(const double& _threshold);

                    /**
                     * 判断参数 Threshold 是否已赋值
                     * @return Threshold 是否已赋值
                     */
                    bool ThresholdHasBeenSet() const;

                private:

                    /**
                     * 输入数据
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                    /**
                     * 输入类型，picture_url:图片，vod_url:视频文件
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 人员库 ID
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 人员 ID 列表
                     */
                    std::vector<std::string> m_personIdSet;
                    bool m_personIdSetHasBeenSet;

                    /**
                     * 确定出勤阀值；默认为0.92
                     */
                    double m_attendanceThreshold;
                    bool m_attendanceThresholdHasBeenSet;

                    /**
                     * 考勤结束时间（到视频的第几秒结束考勤），单位秒；默认为900
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 考勤开始时间（从视频的第几秒开始考勤），单位秒；默认为0
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 识别阈值；默认为0.7
                     */
                    double m_threshold;
                    bool m_thresholdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_CHECKATTENDANCEREQUEST_H_
