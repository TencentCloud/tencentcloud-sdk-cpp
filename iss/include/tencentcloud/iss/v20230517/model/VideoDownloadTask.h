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
                     * 获取<p>下载任务 ID</p>
                     * @return DownloadTaskId <p>下载任务 ID</p>
                     * 
                     */
                    std::string GetDownloadTaskId() const;

                    /**
                     * 设置<p>下载任务 ID</p>
                     * @param _downloadTaskId <p>下载任务 ID</p>
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
                     * 获取<p>通道 ID</p>
                     * @return ChannelId <p>通道 ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>通道 ID</p>
                     * @param _channelId <p>通道 ID</p>
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
                     * 获取<p>通道名称</p>
                     * @return ChannelName <p>通道名称</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>通道名称</p>
                     * @param _channelName <p>通道名称</p>
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
                     * 获取<p>通道编码</p>
                     * @return ChannelCode <p>通道编码</p>
                     * 
                     */
                    std::string GetChannelCode() const;

                    /**
                     * 设置<p>通道编码</p>
                     * @param _channelCode <p>通道编码</p>
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
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
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
                     * 获取<p>设备编码</p>
                     * @return DeviceCode <p>设备编码</p>
                     * 
                     */
                    std::string GetDeviceCode() const;

                    /**
                     * 设置<p>设备编码</p>
                     * @param _deviceCode <p>设备编码</p>
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
                     * 获取<p>任务状态（0：未执行；1：执行中；2 任务完成；<br>3：任务失败）</p>
                     * @return Status <p>任务状态（0：未执行；1：执行中；2 任务完成；<br>3：任务失败）</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>任务状态（0：未执行；1：执行中；2 任务完成；<br>3：任务失败）</p>
                     * @param _status <p>任务状态（0：未执行；1：执行中；2 任务完成；<br>3：任务失败）</p>
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
                     * 获取<p>下载录像时间段</p>
                     * @return VideoTimeSection <p>下载录像时间段</p>
                     * 
                     */
                    std::string GetVideoTimeSection() const;

                    /**
                     * 设置<p>下载录像时间段</p>
                     * @param _videoTimeSection <p>下载录像时间段</p>
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
                     * 获取<p>倍速</p>
                     * @return Scale <p>倍速</p>
                     * 
                     */
                    int64_t GetScale() const;

                    /**
                     * 设置<p>倍速</p>
                     * @param _scale <p>倍速</p>
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
                     * 获取<p>下载时长</p><p>单位：秒</p>
                     * @return DownloadTime <p>下载时长</p><p>单位：秒</p>
                     * 
                     */
                    int64_t GetDownloadTime() const;

                    /**
                     * 设置<p>下载时长</p><p>单位：秒</p>
                     * @param _downloadTime <p>下载时长</p><p>单位：秒</p>
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
                     * 获取<p>录像大小</p><p>单位：字节（Byte）</p>
                     * @return VideoSize <p>录像大小</p><p>单位：字节（Byte）</p>
                     * 
                     */
                    int64_t GetVideoSize() const;

                    /**
                     * 设置<p>录像大小</p><p>单位：字节（Byte）</p>
                     * @param _videoSize <p>录像大小</p><p>单位：字节（Byte）</p>
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
                     * 获取<p>任务开始时间</p>
                     * @return StartTime <p>任务开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>任务开始时间</p>
                     * @param _startTime <p>任务开始时间</p>
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
                     * 获取<p>任务结束时间</p>
                     * @return EndTime <p>任务结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>任务结束时间</p>
                     * @param _endTime <p>任务结束时间</p>
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
                     * 获取<p>文件下载地址</p>
                     * @return FileDownloadUrl <p>文件下载地址</p>
                     * 
                     */
                    std::string GetFileDownloadUrl() const;

                    /**
                     * 设置<p>文件下载地址</p>
                     * @param _fileDownloadUrl <p>文件下载地址</p>
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
                     * 获取<p>失败原因</p>
                     * @return FailedReason <p>失败原因</p>
                     * 
                     */
                    std::string GetFailedReason() const;

                    /**
                     * 设置<p>失败原因</p>
                     * @param _failedReason <p>失败原因</p>
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
                     * 获取<p>生命周期规则，热存天数</p>
                     * @return Expire <p>生命周期规则，热存天数</p>
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置<p>生命周期规则，热存天数</p>
                     * @param _expire <p>生命周期规则，热存天数</p>
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
                     * 获取<p>mp4预览地址</p>
                     * @return PreviewUrl <p>mp4预览地址</p>
                     * 
                     */
                    std::string GetPreviewUrl() const;

                    /**
                     * 设置<p>mp4预览地址</p>
                     * @param _previewUrl <p>mp4预览地址</p>
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
                     * <p>下载任务 ID</p>
                     */
                    std::string m_downloadTaskId;
                    bool m_downloadTaskIdHasBeenSet;

                    /**
                     * <p>通道 ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>通道名称</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>通道编码</p>
                     */
                    std::string m_channelCode;
                    bool m_channelCodeHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>设备编码</p>
                     */
                    std::string m_deviceCode;
                    bool m_deviceCodeHasBeenSet;

                    /**
                     * <p>任务状态（0：未执行；1：执行中；2 任务完成；<br>3：任务失败）</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>下载录像时间段</p>
                     */
                    std::string m_videoTimeSection;
                    bool m_videoTimeSectionHasBeenSet;

                    /**
                     * <p>倍速</p>
                     */
                    int64_t m_scale;
                    bool m_scaleHasBeenSet;

                    /**
                     * <p>下载时长</p><p>单位：秒</p>
                     */
                    int64_t m_downloadTime;
                    bool m_downloadTimeHasBeenSet;

                    /**
                     * <p>录像大小</p><p>单位：字节（Byte）</p>
                     */
                    int64_t m_videoSize;
                    bool m_videoSizeHasBeenSet;

                    /**
                     * <p>任务开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>任务结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>文件下载地址</p>
                     */
                    std::string m_fileDownloadUrl;
                    bool m_fileDownloadUrlHasBeenSet;

                    /**
                     * <p>失败原因</p>
                     */
                    std::string m_failedReason;
                    bool m_failedReasonHasBeenSet;

                    /**
                     * <p>生命周期规则，热存天数</p>
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                    /**
                     * <p>mp4预览地址</p>
                     */
                    std::string m_previewUrl;
                    bool m_previewUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VIDEODOWNLOADTASK_H_
