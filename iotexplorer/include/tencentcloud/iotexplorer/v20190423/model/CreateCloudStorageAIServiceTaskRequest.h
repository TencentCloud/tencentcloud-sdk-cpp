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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATECLOUDSTORAGEAISERVICETASKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATECLOUDSTORAGEAISERVICETASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateCloudStorageAIServiceTask请求参数结构体
                */
                class CreateCloudStorageAIServiceTaskRequest : public AbstractModel
                {
                public:
                    CreateCloudStorageAIServiceTaskRequest();
                    ~CreateCloudStorageAIServiceTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID
                     * @param _productId 产品 ID
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
                     * 获取云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * @return ServiceType 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * @param _serviceType 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取待分析云存的起始时间
                     * @return StartTime 待分析云存的起始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置待分析云存的起始时间
                     * @param _startTime 待分析云存的起始时间
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
                     * 获取待分析云存的结束时间
                     * @return EndTime 待分析云存的结束时间
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置待分析云存的结束时间
                     * @param _endTime 待分析云存的结束时间
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取通道 ID
                     * @return ChannelId 通道 ID
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道 ID
                     * @param _channelId 通道 ID
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
                     * 获取视频分析配置参数
                     * @return Config 视频分析配置参数
                     * 
                     */
                    std::string GetConfig() const;

                    /**
                     * 设置视频分析配置参数
                     * @param _config 视频分析配置参数
                     * 
                     */
                    void SetConfig(const std::string& _config);

                    /**
                     * 判断参数 Config 是否已赋值
                     * @return Config 是否已赋值
                     * 
                     */
                    bool ConfigHasBeenSet() const;

                    /**
                     * 获取视频分析识别区域
                     * @return ROI 视频分析识别区域
                     * 
                     */
                    std::string GetROI() const;

                    /**
                     * 设置视频分析识别区域
                     * @param _rOI 视频分析识别区域
                     * 
                     */
                    void SetROI(const std::string& _rOI);

                    /**
                     * 判断参数 ROI 是否已赋值
                     * @return ROI 是否已赋值
                     * 
                     */
                    bool ROIHasBeenSet() const;

                    /**
                     * 获取分析外部传入的视频 URL 列表，支持 HLS 点播（m3u8）及常见视频格式（mp4 等）
                     * @return VideoURLs 分析外部传入的视频 URL 列表，支持 HLS 点播（m3u8）及常见视频格式（mp4 等）
                     * 
                     */
                    std::vector<std::string> GetVideoURLs() const;

                    /**
                     * 设置分析外部传入的视频 URL 列表，支持 HLS 点播（m3u8）及常见视频格式（mp4 等）
                     * @param _videoURLs 分析外部传入的视频 URL 列表，支持 HLS 点播（m3u8）及常见视频格式（mp4 等）
                     * 
                     */
                    void SetVideoURLs(const std::vector<std::string>& _videoURLs);

                    /**
                     * 判断参数 VideoURLs 是否已赋值
                     * @return VideoURLs 是否已赋值
                     * 
                     */
                    bool VideoURLsHasBeenSet() const;

                    /**
                     * 获取自定义任务 ID
                     * @return CustomId 自定义任务 ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置自定义任务 ID
                     * @param _customId 自定义任务 ID
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                private:

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 待分析云存的起始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 待分析云存的结束时间
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 通道 ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 视频分析配置参数
                     */
                    std::string m_config;
                    bool m_configHasBeenSet;

                    /**
                     * 视频分析识别区域
                     */
                    std::string m_rOI;
                    bool m_rOIHasBeenSet;

                    /**
                     * 分析外部传入的视频 URL 列表，支持 HLS 点播（m3u8）及常见视频格式（mp4 等）
                     */
                    std::vector<std::string> m_videoURLs;
                    bool m_videoURLsHasBeenSet;

                    /**
                     * 自定义任务 ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CREATECLOUDSTORAGEAISERVICETASKREQUEST_H_
