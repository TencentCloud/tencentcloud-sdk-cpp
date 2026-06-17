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
                     * 获取<p>Grafana 实例 ID，例如：grafana-12345678</p>
                     * @return InstanceId <p>Grafana 实例 ID，例如：grafana-12345678</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Grafana 实例 ID，例如：grafana-12345678</p>
                     * @param _instanceId <p>Grafana 实例 ID，例如：grafana-12345678</p>
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
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>查询数量</p>
                     * @return Limit <p>查询数量</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>查询数量</p>
                     * @param _limit <p>查询数量</p>
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
                     * 获取<p>告警通道名称，例如：test</p>
                     * @return ChannelName <p>告警通道名称，例如：test</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>告警通道名称，例如：test</p>
                     * @param _channelName <p>告警通道名称，例如：test</p>
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
                     * 获取<p>告警通道 ID，例如：nchannel-abcd1234</p>
                     * @return ChannelIds <p>告警通道 ID，例如：nchannel-abcd1234</p>
                     * 
                     */
                    std::vector<std::string> GetChannelIds() const;

                    /**
                     * 设置<p>告警通道 ID，例如：nchannel-abcd1234</p>
                     * @param _channelIds <p>告警通道 ID，例如：nchannel-abcd1234</p>
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
                     * 获取<p>告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)</p>
                     * @return ChannelState <p>告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)</p>
                     * 
                     */
                    int64_t GetChannelState() const;

                    /**
                     * 设置<p>告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)</p>
                     * @param _channelState <p>告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)</p>
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
                     * <p>Grafana 实例 ID，例如：grafana-12345678</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>查询数量</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>告警通道名称，例如：test</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>告警通道 ID，例如：nchannel-abcd1234</p>
                     */
                    std::vector<std::string> m_channelIds;
                    bool m_channelIdsHasBeenSet;

                    /**
                     * <p>告警通道状态(不用填写，目前只有可用和删除状态，默认只能查询可用的告警通道)</p>
                     */
                    int64_t m_channelState;
                    bool m_channelStateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_DESCRIBEGRAFANACHANNELSREQUEST_H_
