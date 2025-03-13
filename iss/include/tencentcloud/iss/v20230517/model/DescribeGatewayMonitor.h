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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYMONITOR_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYMONITOR_H_

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
                * 查询网关监控信息返回结果
                */
                class DescribeGatewayMonitor : public AbstractModel
                {
                public:
                    DescribeGatewayMonitor();
                    ~DescribeGatewayMonitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备接入总数
                     * @return DeviceTotal 设备接入总数
                     * 
                     */
                    int64_t GetDeviceTotal() const;

                    /**
                     * 设置设备接入总数
                     * @param _deviceTotal 设备接入总数
                     * 
                     */
                    void SetDeviceTotal(const int64_t& _deviceTotal);

                    /**
                     * 判断参数 DeviceTotal 是否已赋值
                     * @return DeviceTotal 是否已赋值
                     * 
                     */
                    bool DeviceTotalHasBeenSet() const;

                    /**
                     * 获取设备在线数
                     * @return DeviceOnline 设备在线数
                     * 
                     */
                    int64_t GetDeviceOnline() const;

                    /**
                     * 设置设备在线数
                     * @param _deviceOnline 设备在线数
                     * 
                     */
                    void SetDeviceOnline(const int64_t& _deviceOnline);

                    /**
                     * 判断参数 DeviceOnline 是否已赋值
                     * @return DeviceOnline 是否已赋值
                     * 
                     */
                    bool DeviceOnlineHasBeenSet() const;

                    /**
                     * 获取设备离线数
                     * @return DeviceOffline 设备离线数
                     * 
                     */
                    int64_t GetDeviceOffline() const;

                    /**
                     * 设置设备离线数
                     * @param _deviceOffline 设备离线数
                     * 
                     */
                    void SetDeviceOffline(const int64_t& _deviceOffline);

                    /**
                     * 判断参数 DeviceOffline 是否已赋值
                     * @return DeviceOffline 是否已赋值
                     * 
                     */
                    bool DeviceOfflineHasBeenSet() const;

                    /**
                     * 获取视频通道总数
                     * @return ChannelTotal 视频通道总数
                     * 
                     */
                    int64_t GetChannelTotal() const;

                    /**
                     * 设置视频通道总数
                     * @param _channelTotal 视频通道总数
                     * 
                     */
                    void SetChannelTotal(const int64_t& _channelTotal);

                    /**
                     * 判断参数 ChannelTotal 是否已赋值
                     * @return ChannelTotal 是否已赋值
                     * 
                     */
                    bool ChannelTotalHasBeenSet() const;

                    /**
                     * 获取视频通道在线数
                     * @return ChannelOnline 视频通道在线数
                     * 
                     */
                    int64_t GetChannelOnline() const;

                    /**
                     * 设置视频通道在线数
                     * @param _channelOnline 视频通道在线数
                     * 
                     */
                    void SetChannelOnline(const int64_t& _channelOnline);

                    /**
                     * 判断参数 ChannelOnline 是否已赋值
                     * @return ChannelOnline 是否已赋值
                     * 
                     */
                    bool ChannelOnlineHasBeenSet() const;

                    /**
                     * 获取视频通道离线数
                     * @return ChannelOffline 视频通道离线数
                     * 
                     */
                    int64_t GetChannelOffline() const;

                    /**
                     * 设置视频通道离线数
                     * @param _channelOffline 视频通道离线数
                     * 
                     */
                    void SetChannelOffline(const int64_t& _channelOffline);

                    /**
                     * 判断参数 ChannelOffline 是否已赋值
                     * @return ChannelOffline 是否已赋值
                     * 
                     */
                    bool ChannelOfflineHasBeenSet() const;

                    /**
                     * 获取网关上行流量,单位kbps
                     * @return UpFlow 网关上行流量,单位kbps
                     * 
                     */
                    int64_t GetUpFlow() const;

                    /**
                     * 设置网关上行流量,单位kbps
                     * @param _upFlow 网关上行流量,单位kbps
                     * 
                     */
                    void SetUpFlow(const int64_t& _upFlow);

                    /**
                     * 判断参数 UpFlow 是否已赋值
                     * @return UpFlow 是否已赋值
                     * 
                     */
                    bool UpFlowHasBeenSet() const;

                    /**
                     * 获取流在传输中的通道数
                     * @return ChannelPull 流在传输中的通道数
                     * 
                     */
                    int64_t GetChannelPull() const;

                    /**
                     * 设置流在传输中的通道数
                     * @param _channelPull 流在传输中的通道数
                     * 
                     */
                    void SetChannelPull(const int64_t& _channelPull);

                    /**
                     * 判断参数 ChannelPull 是否已赋值
                     * @return ChannelPull 是否已赋值
                     * 
                     */
                    bool ChannelPullHasBeenSet() const;

                    /**
                     * 获取流未传输中的通道数
                     * @return ChannelUnPull 流未传输中的通道数
                     * 
                     */
                    int64_t GetChannelUnPull() const;

                    /**
                     * 设置流未传输中的通道数
                     * @param _channelUnPull 流未传输中的通道数
                     * 
                     */
                    void SetChannelUnPull(const int64_t& _channelUnPull);

                    /**
                     * 判断参数 ChannelUnPull 是否已赋值
                     * @return ChannelUnPull 是否已赋值
                     * 
                     */
                    bool ChannelUnPullHasBeenSet() const;

                private:

                    /**
                     * 设备接入总数
                     */
                    int64_t m_deviceTotal;
                    bool m_deviceTotalHasBeenSet;

                    /**
                     * 设备在线数
                     */
                    int64_t m_deviceOnline;
                    bool m_deviceOnlineHasBeenSet;

                    /**
                     * 设备离线数
                     */
                    int64_t m_deviceOffline;
                    bool m_deviceOfflineHasBeenSet;

                    /**
                     * 视频通道总数
                     */
                    int64_t m_channelTotal;
                    bool m_channelTotalHasBeenSet;

                    /**
                     * 视频通道在线数
                     */
                    int64_t m_channelOnline;
                    bool m_channelOnlineHasBeenSet;

                    /**
                     * 视频通道离线数
                     */
                    int64_t m_channelOffline;
                    bool m_channelOfflineHasBeenSet;

                    /**
                     * 网关上行流量,单位kbps
                     */
                    int64_t m_upFlow;
                    bool m_upFlowHasBeenSet;

                    /**
                     * 流在传输中的通道数
                     */
                    int64_t m_channelPull;
                    bool m_channelPullHasBeenSet;

                    /**
                     * 流未传输中的通道数
                     */
                    int64_t m_channelUnPull;
                    bool m_channelUnPullHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEGATEWAYMONITOR_H_
