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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_TASKSTATUSINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_TASKSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 直播拉流任务状态信息。
                */
                class TaskStatusInfo : public AbstractModel
                {
                public:
                    TaskStatusInfo();
                    ~TaskStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取当前使用的源 URL。
                     * @return FileUrl 当前使用的源 URL。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 设置当前使用的源 URL。
                     * @param _fileUrl 当前使用的源 URL。
                     * 
                     */
                    void SetFileUrl(const std::string& _fileUrl);

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                    /**
                     * 获取点播源任务的轮播次数。
                     * @return LoopedTimes 点播源任务的轮播次数。
                     * 
                     */
                    int64_t GetLoopedTimes() const;

                    /**
                     * 设置点播源任务的轮播次数。
                     * @param _loopedTimes 点播源任务的轮播次数。
                     * 
                     */
                    void SetLoopedTimes(const int64_t& _loopedTimes);

                    /**
                     * 判断参数 LoopedTimes 是否已赋值
                     * @return LoopedTimes 是否已赋值
                     * 
                     */
                    bool LoopedTimesHasBeenSet() const;

                    /**
                     * 获取点播源的播放偏移，单位：秒。
                     * @return OffsetTime 点播源的播放偏移，单位：秒。
                     * 
                     */
                    int64_t GetOffsetTime() const;

                    /**
                     * 设置点播源的播放偏移，单位：秒。
                     * @param _offsetTime 点播源的播放偏移，单位：秒。
                     * 
                     */
                    void SetOffsetTime(const int64_t& _offsetTime);

                    /**
                     * 判断参数 OffsetTime 是否已赋值
                     * @return OffsetTime 是否已赋值
                     * 
                     */
                    bool OffsetTimeHasBeenSet() const;

                    /**
                     * 获取最新心跳上报时间。UTC时间，例如：
2022-02-11T10:00:00Z。
注意：UTC时间与北京时间相差八小时。
                     * @return ReportTime 最新心跳上报时间。UTC时间，例如：
2022-02-11T10:00:00Z。
注意：UTC时间与北京时间相差八小时。
                     * 
                     */
                    std::string GetReportTime() const;

                    /**
                     * 设置最新心跳上报时间。UTC时间，例如：
2022-02-11T10:00:00Z。
注意：UTC时间与北京时间相差八小时。
                     * @param _reportTime 最新心跳上报时间。UTC时间，例如：
2022-02-11T10:00:00Z。
注意：UTC时间与北京时间相差八小时。
                     * 
                     */
                    void SetReportTime(const std::string& _reportTime);

                    /**
                     * 判断参数 ReportTime 是否已赋值
                     * @return ReportTime 是否已赋值
                     * 
                     */
                    bool ReportTimeHasBeenSet() const;

                    /**
                     * 获取实际运行状态：
active - 活跃，
inactive - 不活跃。
                     * @return RunStatus 实际运行状态：
active - 活跃，
inactive - 不活跃。
                     * 
                     */
                    std::string GetRunStatus() const;

                    /**
                     * 设置实际运行状态：
active - 活跃，
inactive - 不活跃。
                     * @param _runStatus 实际运行状态：
active - 活跃，
inactive - 不活跃。
                     * 
                     */
                    void SetRunStatus(const std::string& _runStatus);

                    /**
                     * 判断参数 RunStatus 是否已赋值
                     * @return RunStatus 是否已赋值
                     * 
                     */
                    bool RunStatusHasBeenSet() const;

                    /**
                     * 获取点播源的文件时长，单位：秒。
                     * @return FileDuration 点播源的文件时长，单位：秒。
                     * 
                     */
                    int64_t GetFileDuration() const;

                    /**
                     * 设置点播源的文件时长，单位：秒。
                     * @param _fileDuration 点播源的文件时长，单位：秒。
                     * 
                     */
                    void SetFileDuration(const int64_t& _fileDuration);

                    /**
                     * 判断参数 FileDuration 是否已赋值
                     * @return FileDuration 是否已赋值
                     * 
                     */
                    bool FileDurationHasBeenSet() const;

                    /**
                     * 获取下一进度点播文件 URL。
                     * @return NextFileUrl 下一进度点播文件 URL。
                     * 
                     */
                    std::string GetNextFileUrl() const;

                    /**
                     * 设置下一进度点播文件 URL。
                     * @param _nextFileUrl 下一进度点播文件 URL。
                     * 
                     */
                    void SetNextFileUrl(const std::string& _nextFileUrl);

                    /**
                     * 判断参数 NextFileUrl 是否已赋值
                     * @return NextFileUrl 是否已赋值
                     * 
                     */
                    bool NextFileUrlHasBeenSet() const;

                private:

                    /**
                     * 当前使用的源 URL。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                    /**
                     * 点播源任务的轮播次数。
                     */
                    int64_t m_loopedTimes;
                    bool m_loopedTimesHasBeenSet;

                    /**
                     * 点播源的播放偏移，单位：秒。
                     */
                    int64_t m_offsetTime;
                    bool m_offsetTimeHasBeenSet;

                    /**
                     * 最新心跳上报时间。UTC时间，例如：
2022-02-11T10:00:00Z。
注意：UTC时间与北京时间相差八小时。
                     */
                    std::string m_reportTime;
                    bool m_reportTimeHasBeenSet;

                    /**
                     * 实际运行状态：
active - 活跃，
inactive - 不活跃。
                     */
                    std::string m_runStatus;
                    bool m_runStatusHasBeenSet;

                    /**
                     * 点播源的文件时长，单位：秒。
                     */
                    int64_t m_fileDuration;
                    bool m_fileDurationHasBeenSet;

                    /**
                     * 下一进度点播文件 URL。
                     */
                    std::string m_nextFileUrl;
                    bool m_nextFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_TASKSTATUSINFO_H_
