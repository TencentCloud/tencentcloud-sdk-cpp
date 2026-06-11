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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TARGETINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TARGETINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 视频语义搜索结果
                */
                class TargetInfo : public AbstractModel
                {
                public:
                    TargetInfo();
                    ~TargetInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>视频唯一ID</p>
                     * @return Id <p>视频唯一ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>视频唯一ID</p>
                     * @param _id <p>视频唯一ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>产品ID</p>
                     * @return ProductId <p>产品ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品ID</p>
                     * @param _productId <p>产品ID</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

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
                     * 获取<p>视频起始时间（毫秒级Unix时间戳）</p>
                     * @return StartTimeMs <p>视频起始时间（毫秒级Unix时间戳）</p>
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置<p>视频起始时间（毫秒级Unix时间戳）</p>
                     * @param _startTimeMs <p>视频起始时间（毫秒级Unix时间戳）</p>
                     * 
                     */
                    void SetStartTimeMs(const int64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>视频结束时间（毫秒级Unix时间戳）</p>
                     * @return EndTimeMs <p>视频结束时间（毫秒级Unix时间戳）</p>
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置<p>视频结束时间（毫秒级Unix时间戳）</p>
                     * @param _endTimeMs <p>视频结束时间（毫秒级Unix时间戳）</p>
                     * 
                     */
                    void SetEndTimeMs(const int64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取<p>用户自定义事件ID，后续扩展使用</p>
                     * @return EventId <p>用户自定义事件ID，后续扩展使用</p>
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置<p>用户自定义事件ID，后续扩展使用</p>
                     * @param _eventId <p>用户自定义事件ID，后续扩展使用</p>
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取<p>视频内容摘要</p>
                     * @return Summary <p>视频内容摘要</p>
                     * 
                     */
                    std::string GetSummary() const;

                    /**
                     * 设置<p>视频内容摘要</p>
                     * @param _summary <p>视频内容摘要</p>
                     * 
                     */
                    void SetSummary(const std::string& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>通道ID</p>
                     * @return ChannelId <p>通道ID</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道ID</p>
                     * @param _channelId <p>通道ID</p>
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>缩略图路径</p>
                     * @return Thumbnail <p>缩略图路径</p>
                     * 
                     */
                    std::string GetThumbnail() const;

                    /**
                     * 设置<p>缩略图路径</p>
                     * @param _thumbnail <p>缩略图路径</p>
                     * 
                     */
                    void SetThumbnail(const std::string& _thumbnail);

                    /**
                     * 判断参数 Thumbnail 是否已赋值
                     * @return Thumbnail 是否已赋值
                     * 
                     */
                    bool ThumbnailHasBeenSet() const;

                private:

                    /**
                     * <p>视频唯一ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>产品ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>视频起始时间（毫秒级Unix时间戳）</p>
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * <p>视频结束时间（毫秒级Unix时间戳）</p>
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * <p>用户自定义事件ID，后续扩展使用</p>
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * <p>视频内容摘要</p>
                     */
                    std::string m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>通道ID</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>缩略图路径</p>
                     */
                    std::string m_thumbnail;
                    bool m_thumbnailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TARGETINFO_H_
