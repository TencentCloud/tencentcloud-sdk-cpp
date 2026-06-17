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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_

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
                * CreateGrafanaNotificationChannel请求参数结构体
                */
                class CreateGrafanaNotificationChannelRequest : public AbstractModel
                {
                public:
                    CreateGrafanaNotificationChannelRequest();
                    ~CreateGrafanaNotificationChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @return InstanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     * @param _instanceId <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
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
                     * 获取<p>告警通道名称，例如：my-channel</p>
                     * @return ChannelName <p>告警通道名称，例如：my-channel</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>告警通道名称，例如：my-channel</p>
                     * @param _channelName <p>告警通道名称，例如：my-channel</p>
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
                     * 获取<p>接受告警通道 ID 数组，值为告警管理/基础配置/通知模板中的模板 ID</p>
                     * @return Receivers <p>接受告警通道 ID 数组，值为告警管理/基础配置/通知模板中的模板 ID</p>
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置<p>接受告警通道 ID 数组，值为告警管理/基础配置/通知模板中的模板 ID</p>
                     * @param _receivers <p>接受告警通道 ID 数组，值为告警管理/基础配置/通知模板中的模板 ID</p>
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
                     * 获取<p>默认为1，建议使用 OrganizationIds</p>
                     * @return OrgId <p>默认为1，建议使用 OrganizationIds</p>
                     * 
                     */
                    int64_t GetOrgId() const;

                    /**
                     * 设置<p>默认为1，建议使用 OrganizationIds</p>
                     * @param _orgId <p>默认为1，建议使用 OrganizationIds</p>
                     * 
                     */
                    void SetOrgId(const int64_t& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取<p>额外组织 ID 数组，已废弃，请使用 OrganizationIds</p>
                     * @return ExtraOrgIds <p>额外组织 ID 数组，已废弃，请使用 OrganizationIds</p>
                     * 
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置<p>额外组织 ID 数组，已废弃，请使用 OrganizationIds</p>
                     * @param _extraOrgIds <p>额外组织 ID 数组，已废弃，请使用 OrganizationIds</p>
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
                     * 获取<p>生效的所有组织 ID 数组，默认为 [&quot;1&quot;]</p>
                     * @return OrganizationIds <p>生效的所有组织 ID 数组，默认为 [&quot;1&quot;]</p>
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置<p>生效的所有组织 ID 数组，默认为 [&quot;1&quot;]</p>
                     * @param _organizationIds <p>生效的所有组织 ID 数组，默认为 [&quot;1&quot;]</p>
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
                     * <p>Grafana 实例 ID，例如：grafana-abcdefgh</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>告警通道名称，例如：my-channel</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>接受告警通道 ID 数组，值为告警管理/基础配置/通知模板中的模板 ID</p>
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * <p>默认为1，建议使用 OrganizationIds</p>
                     */
                    int64_t m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * <p>额外组织 ID 数组，已废弃，请使用 OrganizationIds</p>
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                    /**
                     * <p>生效的所有组织 ID 数组，默认为 [&quot;1&quot;]</p>
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_CREATEGRAFANANOTIFICATIONCHANNELREQUEST_H_
