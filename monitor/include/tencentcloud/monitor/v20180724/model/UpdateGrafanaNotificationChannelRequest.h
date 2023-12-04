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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANANOTIFICATIONCHANNELREQUEST_H_

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
                * UpdateGrafanaNotificationChannel请求参数结构体
                */
                class UpdateGrafanaNotificationChannelRequest : public AbstractModel
                {
                public:
                    UpdateGrafanaNotificationChannelRequest();
                    ~UpdateGrafanaNotificationChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道 ID，例如：nchannel-abcd1234
                     * @return ChannelId 通道 ID，例如：nchannel-abcd1234
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道 ID，例如：nchannel-abcd1234
                     * @param _channelId 通道 ID，例如：nchannel-abcd1234
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
                     * 获取接受告警通道 ID 数组
                     * @return Receivers 接受告警通道 ID 数组
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置接受告警通道 ID 数组
                     * @param _receivers 接受告警通道 ID 数组
                     * 
                     */
                    void SetReceivers(const std::vector<std::string>& _receivers);

                    /**
                     * 判断参数 Receivers 是否已赋值
                     * @return Receivers 是否已赋值
                     * 
                     */
                    bool ReceiversHasBeenSet() const;

                    /**
                     * 获取告警通道名称，已废弃，名称不可修改。
                     * @return ChannelName 告警通道名称，已废弃，名称不可修改。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置告警通道名称，已废弃，名称不可修改。
                     * @param _channelName 告警通道名称，已废弃，名称不可修改。
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
                     * 获取已废弃，请使用 OrganizationIds
                     * @return ExtraOrgIds 已废弃，请使用 OrganizationIds
                     * 
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置已废弃，请使用 OrganizationIds
                     * @param _extraOrgIds 已废弃，请使用 OrganizationIds
                     * 
                     */
                    void SetExtraOrgIds(const std::vector<std::string>& _extraOrgIds);

                    /**
                     * 判断参数 ExtraOrgIds 是否已赋值
                     * @return ExtraOrgIds 是否已赋值
                     * 
                     */
                    bool ExtraOrgIdsHasBeenSet() const;

                    /**
                     * 获取生效的组织 ID 数组
                     * @return OrganizationIds 生效的组织 ID 数组
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置生效的组织 ID 数组
                     * @param _organizationIds 生效的组织 ID 数组
                     * 
                     */
                    void SetOrganizationIds(const std::vector<std::string>& _organizationIds);

                    /**
                     * 判断参数 OrganizationIds 是否已赋值
                     * @return OrganizationIds 是否已赋值
                     * 
                     */
                    bool OrganizationIdsHasBeenSet() const;

                private:

                    /**
                     * 通道 ID，例如：nchannel-abcd1234
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * Grafana 实例 ID，例如：grafana-12345678
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 接受告警通道 ID 数组
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 告警通道名称，已废弃，名称不可修改。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 已废弃，请使用 OrganizationIds
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                    /**
                     * 生效的组织 ID 数组
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_UPDATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
