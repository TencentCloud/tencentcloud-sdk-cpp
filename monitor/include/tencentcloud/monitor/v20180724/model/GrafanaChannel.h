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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANACHANNEL_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANACHANNEL_H_

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
                class GrafanaChannel : public AbstractModel
                {
                public:
                    GrafanaChannel();
                    ~GrafanaChannel() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>渠道 ID</p>
                     * @return ChannelId <p>渠道 ID</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>渠道 ID</p>
                     * @param _channelId <p>渠道 ID</p>
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
                     * 获取<p>渠道名</p>
                     * @return ChannelName <p>渠道名</p>
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置<p>渠道名</p>
                     * @param _channelName <p>渠道名</p>
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
                     * 获取<p>告警通道模板 ID 数组</p>
                     * @return Receivers <p>告警通道模板 ID 数组</p>
                     * 
                     */
                    std::vector<std::string> GetReceivers() const;

                    /**
                     * 设置<p>告警通道模板 ID 数组</p>
                     * @param _receivers <p>告警通道模板 ID 数组</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedAt <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdAt <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdatedAt <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updatedAt <p>更新时间</p>
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
                     * 获取<p>告警渠道的所有生效组织</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationIds <p>告警渠道的所有生效组织</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOrganizationIds() const;

                    /**
                     * 设置<p>告警渠道的所有生效组织</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _organizationIds <p>告警渠道的所有生效组织</p>
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
                     * <p>渠道 ID</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>渠道名</p>
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * <p>告警通道模板 ID 数组</p>
                     */
                    std::vector<std::string> m_receivers;
                    bool m_receiversHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * <p>告警渠道的所有生效组织</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_organizationIds;
                    bool m_organizationIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_GRAFANACHANNEL_H_
