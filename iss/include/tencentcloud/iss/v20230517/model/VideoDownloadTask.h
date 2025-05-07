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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASK_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 本地录像下载任务
                */
                class VideoDownloadTask : public AbstractModel
                {
                public:
                    VideoDownloadTask();
                    ~VideoDownloadTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取下载任务 ID
                     * @return DownloadTaskId 下载任务 ID
                     * 
                     */
                    std::string GetDownloadTaskId() const;

                    /**
                     * 设置下载任务 ID
                     * @param _downloadTaskId 下载任务 ID
                     * 
                     */
                    void SetDownloadTaskId(const std::string& _downloadTaskId);

                    /**
                     * 判断参数 DownloadTaskId 是否已赋值
                     * @return DownloadTaskId 是否已赋值
                     * 
                     */
                    bool DownloadTaskIdHasBeenSet() const;

                    /**
                     * 获取通道 ID
                     * @return ChannelId 通道 ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道 ID
                     * @param _channelId 通道 ID
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
                     * 获取通道名称
                     * @return ChannelName 通道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置通道名称
                     * @param _channelName 通道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取通道编码
                     * @return ChannelCode 通道编码
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 设置通道编码
                     * @param _channelCode 通道编码
                     * 
                     */
                    void SetChannelCode(const std::string& _channelCode);

                    /**
                     * 判断参数 ChannelCode 是否已赋值
                     * @return ChannelCode 是否已赋值
                     * 
                     */
                    bool ChannelCodeHasBeenSet() const;

                    /**
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取设备编码
                     * @return DeviceCode 设备编码
                     * 
                     */
                    std::string GetDeviceCode() const;

                    /**
                     * 设置设备编码
                     * @param _deviceCode 设备编码
                     * 
                     */
                    void SetDeviceCode(const std::string& _deviceCode);

                    /**
                     * 判断参数 DeviceCode 是否已赋值
                     * @return DeviceCode 是否已赋值
                     * 
                     */
                    bool DeviceCodeHasBeenSet() const;

                    /**
                     * 获取任务状态（0：未执行；1：执行中；2 任务完成；
3：任务失败）
                     * @return Status 任务状态（0：未执行；1：执行中；2 任务完成；
3：任务失败）
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态（0：未执行；1：执行中；2 任务完成；
3：任务失败）
                     * @param _status 任务状态（0：未执行；1：执行中；2 任务完成；
3：任务失败）
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取下载录像时间段
                     * @return VideoTimeSection 下载录像时间段
                     * 
                     */
                    std::string GetVideoTimeSection() const;

                    /**
                     * 设置下载录像时间段
                     * @param _videoTimeSection 下载录像时间段
                     * 
                     */
                    void SetVideoTimeSection(const std::string& _videoTimeSection);

                    /**
                     * 判断参数 VideoTimeSection 是否已赋值
                     * @return VideoTimeSection 是否已赋值
                     * 
                     */
                    bool VideoTimeSectionHasBeenSet() const;

                    /**
                     * 获取倍速
                     * @return Scale 倍速
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置倍速
                     * @param _scale 倍速
                     * 
                     */
                    void SetScale(const int64_t& _scale);

                    /**
                     * 判断参数 Scale 是否已赋值
                     * @return Scale 是否已赋值
                     * 
                     */
                    bool ScaleHasBeenSet() const;

                    /**
                     * 获取下载时长
                     * @return DownloadTime 下载时长
                     * 
                     */
                    int64_t GetDownloadTime() const;

                    /**
                     * 设置下载时长
                     * @param _downloadTime 下载时长
                     * 
                     */
                    void SetDownloadTime(const int64_t& _downloadTime);

                    /**
                     * 判断参数 DownloadTime 是否已赋值
                     * @return DownloadTime 是否已赋值
                     * 
                     */
                    bool DownloadTimeHasBeenSet() const;

                    /**
                     * 获取录像大小
                     * @return VideoSize 录像大小
                     * 
                     */
                    int64_t GetVideoSize() const;

                    /**
                     * 设置录像大小
                     * @param _videoSize 录像大小
                     * 
                     */
                    void SetVideoSize(const int64_t& _videoSize);

                    /**
                     * 判断参数 VideoSize 是否已赋值
                     * @return VideoSize 是否已赋值
                     * 
                     */
                    bool VideoSizeHasBeenSet() const;

                    /**
                     * 获取任务开始时间
                     * @return StartTime 任务开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置任务开始时间
                     * @param _startTime 任务开始时间
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
                     * 获取任务结束时间
                     * @return EndTime 任务结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置任务结束时间
                     * @param _endTime 任务结束时间
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
                     * 获取文件下载地址
                     * @return FileDownloadUrl 文件下载地址
                     * 
                     */
                    std::string GetFileDownloadUrl() const;

                    /**
                     * 设置文件下载地址
                     * @param _fileDownloadUrl 文件下载地址
                     * 
                     */
                    void SetFileDownloadUrl(const std::string& _fileDownloadUrl);

                    /**
                     * 判断参数 FileDownloadUrl 是否已赋值
                     * @return FileDownloadUrl 是否已赋值
                     * 
                     */
                    bool FileDownloadUrlHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return FailedReason 失败原因
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置失败原因
                     * @param _failedReason 失败原因
                     * 
                     */
                    void SetFailedReason(const std::string& _failedReason);

                    /**
                     * 判断参数 FailedReason 是否已赋值
                     * @return FailedReason 是否已赋值
                     * 
                     */
                    bool FailedReasonHasBeenSet() const;

                    /**
                     * 获取生命周期规则，热存天数
                     * @return Expire 生命周期规则，热存天数
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置生命周期规则，热存天数
                     * @param _expire 生命周期规则，热存天数
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                    /**
                     * 获取mp4预览地址
                     * @return PreviewUrl mp4预览地址
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置mp4预览地址
                     * @param _previewUrl mp4预览地址
                     * 
                     */
                    void SetPreviewUrl(const std::string& _previewUrl);

                    /**
                     * 判断参数 PreviewUrl 是否已赋值
                     * @return PreviewUrl 是否已赋值
                     * 
                     */
                    bool PreviewUrlHasBeenSet() const;

                private:

                    /**
                     * 下载任务 ID
                     */
                    std::string m_downloadTaskId;
                    bool m_downloadTaskIdHasBeenSet;

                    /**
                     * 通道 ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 通道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 通道编码
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 设备编码
                     */
                    std::string m_deviceCode;
                    bool m_deviceCodeHasBeenSet;

                    /**
                     * 任务状态（0：未执行；1：执行中；2 任务完成；
3：任务失败）
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 下载录像时间段
                     */
                    std::string m_videoTimeSection;
                    bool m_videoTimeSectionHasBeenSet;

                    /**
                     * 倍速
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * 下载时长
                     */
                    int64_t m_downloadTime;
                    bool m_downloadTimeHasBeenSet;

                    /**
                     * 录像大小
                     */
                    int64_t m_videoSize;
                    bool m_videoSizeHasBeenSet;

                    /**
                     * 任务开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 任务结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 文件下载地址
                     */
                    std::string m_fileDownloadUrl;
                    bool m_fileDownloadUrlHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * 生命周期规则，热存天数
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * mp4预览地址
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASK_H_
