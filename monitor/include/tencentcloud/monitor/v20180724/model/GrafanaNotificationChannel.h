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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANANOTIFICATIONCHANNEL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANANOTIFICATIONCHANNEL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * Grafana 告警渠道
                */
                class GrafanaNotificationChannel : public AbstractModel
                {
                public:
                    GrafanaNotificationChannel();
                    ~GrafanaNotificationChannel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道 ID
                     * @return ChannelId 渠道 ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置渠道 ID
                     * @param _channelId 渠道 ID
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
                     * 获取渠道名
                     * @return ChannelName 渠道名
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名
                     * @param _channelName 渠道名
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
                     * 获取告警通道模板 ID 数组
                     * @return Receivers 告警通道模板 ID 数组
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置告警通道模板 ID 数组
                     * @param _receivers 告警通道模板 ID 数组
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
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
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
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取默认生效组织，已废弃，请使用 OrganizationIds
                     * @return OrgId 默认生效组织，已废弃，请使用 OrganizationIds
                     * 
                     */
                    std::string GetOrgId() const;

                    /**
                     * 设置默认生效组织，已废弃，请使用 OrganizationIds
                     * @param _orgId 默认生效组织，已废弃，请使用 OrganizationIds
                     * 
                     */
                    void SetOrgId(const std::string& _orgId);

                    /**
                     * 判断参数 OrgId 是否已赋值
                     * @return OrgId 是否已赋值
                     * 
                     */
                    bool OrgIdHasBeenSet() const;

                    /**
                     * 获取额外生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtraOrgIds 额外生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetExtraOrgIds() const;

                    /**
                     * 设置额外生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _extraOrgIds 额外生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrgIds 生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOrgIds() const;

                    /**
                     * 设置生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orgIds 生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrgIds(const std::vector<std::string>& _orgIds);

                    /**
                     * 判断参数 OrgIds 是否已赋值
                     * @return OrgIds 是否已赋值
                     * 
                     */
                    bool OrgIdsHasBeenSet() const;

                    /**
                     * 获取告警渠道的所有生效组织
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationIds 告警渠道的所有生效组织
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置告警渠道的所有生效组织
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationIds 告警渠道的所有生效组织
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 渠道 ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 渠道名
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 告警通道模板 ID 数组
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 默认生效组织，已废弃，请使用 OrganizationIds
                     */
                    std::string m_orgId;
                    bool m_orgIdHasBeenSet;

                    /**
                     * 额外生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_extraOrgIds;
                    bool m_extraOrgIdsHasBeenSet;

                    /**
                     * 生效组织，已废弃，请使用 OrganizationIds
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_orgIds;
                    bool m_orgIdsHasBeenSet;

                    /**
                     * 告警渠道的所有生效组织
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANANOTIFICATIONCHANNEL_H_
