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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTDETAILINFO_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTDETAILINFO_H_

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
                * 视觉理解计划结果详情
                */
                class VLPlanResultDetailInfo : public AbstractModel
                {
                public:
                    VLPlanResultDetailInfo();
                    ~VLPlanResultDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>分析结果 ID</p>
                     * @return VLPlanResultId <p>分析结果 ID</p>
                     * 
                     */
                    std::string GetVLPlanResultId() const;

                    /**
                     * 设置<p>分析结果 ID</p>
                     * @param _vLPlanResultId <p>分析结果 ID</p>
                     * 
                     */
                    void SetVLPlanResultId(const std::string& _vLPlanResultId);

                    /**
                     * 判断参数 VLPlanResultId 是否已赋值
                     * @return VLPlanResultId 是否已赋值
                     * 
                     */
                    bool VLPlanResultIdHasBeenSet() const;

                    /**
                     * 获取<p>媒体类型，当前固定为 image</p>
                     * @return MediaType <p>媒体类型，当前固定为 image</p>
                     * 
                     */
                    std::string GetMediaType() const;

                    /**
                     * 设置<p>媒体类型，当前固定为 image</p>
                     * @param _mediaType <p>媒体类型，当前固定为 image</p>
                     * 
                     */
                    void SetMediaType(const std::string& _mediaType);

                    /**
                     * 判断参数 MediaType 是否已赋值
                     * @return MediaType 是否已赋值
                     * 
                     */
                    bool MediaTypeHasBeenSet() const;

                    /**
                     * 获取<p>所属分析计划 ID</p>
                     * @return VLPlanId <p>所属分析计划 ID</p>
                     * 
                     */
                    std::string GetVLPlanId() const;

                    /**
                     * 设置<p>所属分析计划 ID</p>
                     * @param _vLPlanId <p>所属分析计划 ID</p>
                     * 
                     */
                    void SetVLPlanId(const std::string& _vLPlanId);

                    /**
                     * 判断参数 VLPlanId 是否已赋值
                     * @return VLPlanId 是否已赋值
                     * 
                     */
                    bool VLPlanIdHasBeenSet() const;

                    /**
                     * 获取<p>计划名称</p>
                     * @return VLPlanName <p>计划名称</p>
                     * 
                     */
                    std::string GetVLPlanName() const;

                    /**
                     * 设置<p>计划名称</p>
                     * @param _vLPlanName <p>计划名称</p>
                     * 
                     */
                    void SetVLPlanName(const std::string& _vLPlanName);

                    /**
                     * 判断参数 VLPlanName 是否已赋值
                     * @return VLPlanName 是否已赋值
                     * 
                     */
                    bool VLPlanNameHasBeenSet() const;

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
                     * 获取<p>设备 ID</p>
                     * @return DeviceId <p>设备 ID</p>
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置<p>设备 ID</p>
                     * @param _deviceId <p>设备 ID</p>
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
                     * 获取<p>所属组织 ID</p>
                     * @return OrganizationId <p>所属组织 ID</p>
                     * 
                     */
                    std::string GetOrganizationId() const;

                    /**
                     * 设置<p>所属组织 ID</p>
                     * @param _organizationId <p>所属组织 ID</p>
                     * 
                     */
                    void SetOrganizationId(const std::string& _organizationId);

                    /**
                     * 判断参数 OrganizationId 是否已赋值
                     * @return OrganizationId 是否已赋值
                     * 
                     */
                    bool OrganizationIdHasBeenSet() const;

                    /**
                     * 获取<p>所属组织名称</p>
                     * @return OrganizationName <p>所属组织名称</p>
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置<p>所属组织名称</p>
                     * @param _organizationName <p>所属组织名称</p>
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取<p>分析时间戳（秒）</p>
                     * @return VLResultTimestamp <p>分析时间戳（秒）</p>
                     * 
                     */
                    int64_t GetVLResultTimestamp() const;

                    /**
                     * 设置<p>分析时间戳（秒）</p>
                     * @param _vLResultTimestamp <p>分析时间戳（秒）</p>
                     * 
                     */
                    void SetVLResultTimestamp(const int64_t& _vLResultTimestamp);

                    /**
                     * 判断参数 VLResultTimestamp 是否已赋值
                     * @return VLResultTimestamp 是否已赋值
                     * 
                     */
                    bool VLResultTimestampHasBeenSet() const;

                    /**
                     * 获取<p>图片模式截图时间戳（秒）</p>
                     * @return SnapshotTimestamp <p>图片模式截图时间戳（秒）</p>
                     * 
                     */
                    int64_t GetSnapshotTimestamp() const;

                    /**
                     * 设置<p>图片模式截图时间戳（秒）</p>
                     * @param _snapshotTimestamp <p>图片模式截图时间戳（秒）</p>
                     * 
                     */
                    void SetSnapshotTimestamp(const int64_t& _snapshotTimestamp);

                    /**
                     * 判断参数 SnapshotTimestamp 是否已赋值
                     * @return SnapshotTimestamp 是否已赋值
                     * 
                     */
                    bool SnapshotTimestampHasBeenSet() const;

                    /**
                     * 获取<p>视频片段开始时间戳（秒）</p>
                     * @return VideoStartTimestamp <p>视频片段开始时间戳（秒）</p>
                     * 
                     */
                    int64_t GetVideoStartTimestamp() const;

                    /**
                     * 设置<p>视频片段开始时间戳（秒）</p>
                     * @param _videoStartTimestamp <p>视频片段开始时间戳（秒）</p>
                     * 
                     */
                    void SetVideoStartTimestamp(const int64_t& _videoStartTimestamp);

                    /**
                     * 判断参数 VideoStartTimestamp 是否已赋值
                     * @return VideoStartTimestamp 是否已赋值
                     * 
                     */
                    bool VideoStartTimestampHasBeenSet() const;

                    /**
                     * 获取<p>视频片段结束时间戳（秒）</p>
                     * @return VideoEndTimestamp <p>视频片段结束时间戳（秒）</p>
                     * 
                     */
                    int64_t GetVideoEndTimestamp() const;

                    /**
                     * 设置<p>视频片段结束时间戳（秒）</p>
                     * @param _videoEndTimestamp <p>视频片段结束时间戳（秒）</p>
                     * 
                     */
                    void SetVideoEndTimestamp(const int64_t& _videoEndTimestamp);

                    /**
                     * 判断参数 VideoEndTimestamp 是否已赋值
                     * @return VideoEndTimestamp 是否已赋值
                     * 
                     */
                    bool VideoEndTimestampHasBeenSet() const;

                    /**
                     * 获取<p>视频模式计费帧数</p>
                     * @return BilledFrameCount <p>视频模式计费帧数</p>
                     * 
                     */
                    int64_t GetBilledFrameCount() const;

                    /**
                     * 设置<p>视频模式计费帧数</p>
                     * @param _billedFrameCount <p>视频模式计费帧数</p>
                     * 
                     */
                    void SetBilledFrameCount(const int64_t& _billedFrameCount);

                    /**
                     * 判断参数 BilledFrameCount 是否已赋值
                     * @return BilledFrameCount 是否已赋值
                     * 
                     */
                    bool BilledFrameCountHasBeenSet() const;

                    /**
                     * 获取<p>AI 分析结果内容（JSON 字符串）</p>
                     * @return Content <p>AI 分析结果内容（JSON 字符串）</p>
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置<p>AI 分析结果内容（JSON 字符串）</p>
                     * @param _content <p>AI 分析结果内容（JSON 字符串）</p>
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>截图临时下载 URL（有效期 300 秒）</p>
                     * @return ImageUrl <p>截图临时下载 URL（有效期 300 秒）</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>截图临时下载 URL（有效期 300 秒）</p>
                     * @param _imageUrl <p>截图临时下载 URL（有效期 300 秒）</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>截图 URL 有效期（秒）</p>
                     * @return ImageUrlExpire <p>截图 URL 有效期（秒）</p>
                     * 
                     */
                    int64_t GetImageUrlExpire() const;

                    /**
                     * 设置<p>截图 URL 有效期（秒）</p>
                     * @param _imageUrlExpire <p>截图 URL 有效期（秒）</p>
                     * 
                     */
                    void SetImageUrlExpire(const int64_t& _imageUrlExpire);

                    /**
                     * 判断参数 ImageUrlExpire 是否已赋值
                     * @return ImageUrlExpire 是否已赋值
                     * 
                     */
                    bool ImageUrlExpireHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，格式 2006-01-02 15:04:05</p>
                     * @return CreatedAt <p>创建时间，格式 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间，格式 2006-01-02 15:04:05</p>
                     * @param _createdAt <p>创建时间，格式 2006-01-02 15:04:05</p>
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取<p>更新时间，格式 2006-01-02 15:04:05</p>
                     * @return UpdatedAt <p>更新时间，格式 2006-01-02 15:04:05</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间，格式 2006-01-02 15:04:05</p>
                     * @param _updatedAt <p>更新时间，格式 2006-01-02 15:04:05</p>
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * <p>分析结果 ID</p>
                     */
                    std::string m_vLPlanResultId;
                    bool m_vLPlanResultIdHasBeenSet;

                    /**
                     * <p>媒体类型，当前固定为 image</p>
                     */
                    std::string m_mediaType;
                    bool m_mediaTypeHasBeenSet;

                    /**
                     * <p>所属分析计划 ID</p>
                     */
                    std::string m_vLPlanId;
                    bool m_vLPlanIdHasBeenSet;

                    /**
                     * <p>计划名称</p>
                     */
                    std::string m_vLPlanName;
                    bool m_vLPlanNameHasBeenSet;

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
                     * <p>设备 ID</p>
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>所属组织 ID</p>
                     */
                    std::string m_organizationId;
                    bool m_organizationIdHasBeenSet;

                    /**
                     * <p>所属组织名称</p>
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * <p>分析时间戳（秒）</p>
                     */
                    int64_t m_vLResultTimestamp;
                    bool m_vLResultTimestampHasBeenSet;

                    /**
                     * <p>图片模式截图时间戳（秒）</p>
                     */
                    int64_t m_snapshotTimestamp;
                    bool m_snapshotTimestampHasBeenSet;

                    /**
                     * <p>视频片段开始时间戳（秒）</p>
                     */
                    int64_t m_videoStartTimestamp;
                    bool m_videoStartTimestampHasBeenSet;

                    /**
                     * <p>视频片段结束时间戳（秒）</p>
                     */
                    int64_t m_videoEndTimestamp;
                    bool m_videoEndTimestampHasBeenSet;

                    /**
                     * <p>视频模式计费帧数</p>
                     */
                    int64_t m_billedFrameCount;
                    bool m_billedFrameCountHasBeenSet;

                    /**
                     * <p>AI 分析结果内容（JSON 字符串）</p>
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>截图临时下载 URL（有效期 300 秒）</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>截图 URL 有效期（秒）</p>
                     */
                    int64_t m_imageUrlExpire;
                    bool m_imageUrlExpireHasBeenSet;

                    /**
                     * <p>创建时间，格式 2006-01-02 15:04:05</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间，格式 2006-01-02 15:04:05</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_VLPLANRESULTDETAILINFO_H_
