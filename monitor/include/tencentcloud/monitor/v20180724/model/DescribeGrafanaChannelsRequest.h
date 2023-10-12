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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANACHANNELSREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANACHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * DescribeGrafanaChannels请求参数结构体
                */
                class DescribeGrafanaChannelsRequest : public AbstractModel
                {
                public:
                    DescribeGrafanaChannelsRequest();
                    ~DescribeGrafanaChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Grafana 实例 ID，例如：grafana-12345678
                     * @return InstanceId Grafana 实例 ID，例如：grafana-12345678
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Grafana 实例 ID，例如：grafana-12345678
                     * @param _instanceId Grafana 实例 ID，例如：grafana-12345678
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询数量
                     * @return Limit 查询数量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询数量
                     * @param _limit 查询数量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取告警通道名称，例如：test
                     * @return ChannelName 告警通道名称，例如：test
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置告警通道名称，例如：test
                     * @param _channelName 告警通道名称，例如：test
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
                     * 获取告警通道 ID，例如：nchannel-abcd1234
                     * @return ChannelIds 告警通道 ID，例如：nchannel-abcd1234
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置告警通道 ID，例如：nchannel-abcd1234
                     * @param _channelIds 告警通道 ID，例如：nchannel-abcd1234
                     * 
                     */
                    void SetChannelIds(const std::vector<std::string>& _channelIds);

                    /**
                     * 判断参数 ChannelIds 是否已赋值
                     * @return ChannelIds 是否已赋值
                     * 
                     */
                    bool ChannelIdsHasBeenSet() const;

                    /**
                     * 获取告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)
                     * @return ChannelState 告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)
                     * 
                     */
                    int64_t GetChannelState() const;

                    /**
                     * 设置告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)
                     * @param _channelState 告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)
                     * 
                     */
                    void SetChannelState(const int64_t& _channelState);

                    /**
                     * 判断参数 ChannelState 是否已赋值
                     * @return ChannelState 是否已赋值
                     * 
                     */
                    bool ChannelStateHasBeenSet() const;

                private:

                    /**
                     * Grafana 实例 ID，例如：grafana-12345678
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 告警通道名称，例如：test
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 告警通道 ID，例如：nchannel-abcd1234
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * 告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)
                     */
                    int64_t m_channelState;
                    bool m_channelStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANACHANNELSREQUEST_H_
