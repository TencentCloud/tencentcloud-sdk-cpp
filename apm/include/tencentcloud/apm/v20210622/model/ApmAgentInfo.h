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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * apm Agent信息
                */
                class ApmAgentInfo : public AbstractModel
                {
                public:
                    ApmAgentInfo();
                    ~ApmAgentInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AgentDownloadURL Agent下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAgentDownloadURL() const;

                    /**
                     * 设置Agent下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AgentDownloadURL Agent下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAgentDownloadURL(const std::string& _agentDownloadURL);

                    /**
                     * 判断参数 AgentDownloadURL 是否已赋值
                     * @return AgentDownloadURL 是否已赋值
                     */
                    bool AgentDownloadURLHasBeenSet() const;

                    /**
                     * 获取Collector上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CollectorURL Collector上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCollectorURL() const;

                    /**
                     * 设置Collector上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CollectorURL Collector上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCollectorURL(const std::string& _collectorURL);

                    /**
                     * 判断参数 CollectorURL 是否已赋值
                     * @return CollectorURL 是否已赋值
                     */
                    bool CollectorURLHasBeenSet() const;

                    /**
                     * 获取Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Token Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetToken() const;

                    /**
                     * 设置Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Token Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取外网上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicCollectorURL 外网上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPublicCollectorURL() const;

                    /**
                     * 设置外网上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PublicCollectorURL 外网上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublicCollectorURL(const std::string& _publicCollectorURL);

                    /**
                     * 判断参数 PublicCollectorURL 是否已赋值
                     * @return PublicCollectorURL 是否已赋值
                     */
                    bool PublicCollectorURLHasBeenSet() const;

                    /**
                     * 获取自研VPC上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InnerCollectorURL 自研VPC上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInnerCollectorURL() const;

                    /**
                     * 设置自研VPC上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InnerCollectorURL 自研VPC上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInnerCollectorURL(const std::string& _innerCollectorURL);

                    /**
                     * 判断参数 InnerCollectorURL 是否已赋值
                     * @return InnerCollectorURL 是否已赋值
                     */
                    bool InnerCollectorURLHasBeenSet() const;

                    /**
                     * 获取内网上报地址(Private Link上报地址)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateLinkCollectorURL 内网上报地址(Private Link上报地址)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPrivateLinkCollectorURL() const;

                    /**
                     * 设置内网上报地址(Private Link上报地址)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PrivateLinkCollectorURL 内网上报地址(Private Link上报地址)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrivateLinkCollectorURL(const std::string& _privateLinkCollectorURL);

                    /**
                     * 判断参数 PrivateLinkCollectorURL 是否已赋值
                     * @return PrivateLinkCollectorURL 是否已赋值
                     */
                    bool PrivateLinkCollectorURLHasBeenSet() const;

                private:

                    /**
                     * Agent下载地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_agentDownloadURL;
                    bool m_agentDownloadURLHasBeenSet;

                    /**
                     * Collector上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_collectorURL;
                    bool m_collectorURLHasBeenSet;

                    /**
                     * Token信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * 外网上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicCollectorURL;
                    bool m_publicCollectorURLHasBeenSet;

                    /**
                     * 自研VPC上报地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_innerCollectorURL;
                    bool m_innerCollectorURLHasBeenSet;

                    /**
                     * 内网上报地址(Private Link上报地址)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_privateLinkCollectorURL;
                    bool m_privateLinkCollectorURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_APMAGENTINFO_H_
