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

#ifndef TENCENTCLOUD_TCM_V20210413_MODEL_GRAFANAINFO_H_
#define TENCENTCLOUD_TCM_V20210413_MODEL_GRAFANAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcm
    {
        namespace V20210413
        {
            namespace Model
            {
                /**
                * Grafana信息
                */
                class GrafanaInfo : public AbstractModel
                {
                public:
                    GrafanaInfo();
                    ~GrafanaInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否开启
                     * @return Enabled 是否开启
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否开启
                     * @param _enabled 是否开启
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取内网地址
                     * @return InternalURL 内网地址
                     * 
                     */
                    std::string GetInternalURL() const;

                    /**
                     * 设置内网地址
                     * @param _internalURL 内网地址
                     * 
                     */
                    void SetInternalURL(const std::string& _internalURL);

                    /**
                     * 判断参数 InternalURL 是否已赋值
                     * @return InternalURL 是否已赋值
                     * 
                     */
                    bool InternalURLHasBeenSet() const;

                    /**
                     * 获取公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicURL 公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicURL() const;

                    /**
                     * 设置公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicURL 公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicURL(const std::string& _publicURL);

                    /**
                     * 判断参数 PublicURL 是否已赋值
                     * @return PublicURL 是否已赋值
                     * 
                     */
                    bool PublicURLHasBeenSet() const;

                    /**
                     * 获取公网失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicFailedReason 公网失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicFailedReason() const;

                    /**
                     * 设置公网失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicFailedReason 公网失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicFailedReason(const std::string& _publicFailedReason);

                    /**
                     * 判断参数 PublicFailedReason 是否已赋值
                     * @return PublicFailedReason 是否已赋值
                     * 
                     */
                    bool PublicFailedReasonHasBeenSet() const;

                    /**
                     * 获取公网失败详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicFailedMessage 公网失败详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPublicFailedMessage() const;

                    /**
                     * 设置公网失败详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _publicFailedMessage 公网失败详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPublicFailedMessage(const std::string& _publicFailedMessage);

                    /**
                     * 判断参数 PublicFailedMessage 是否已赋值
                     * @return PublicFailedMessage 是否已赋值
                     * 
                     */
                    bool PublicFailedMessageHasBeenSet() const;

                private:

                    /**
                     * 是否开启
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 内网地址
                     */
                    std::string m_internalURL;
                    bool m_internalURLHasBeenSet;

                    /**
                     * 公网地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicURL;
                    bool m_publicURLHasBeenSet;

                    /**
                     * 公网失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicFailedReason;
                    bool m_publicFailedReasonHasBeenSet;

                    /**
                     * 公网失败详细信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicFailedMessage;
                    bool m_publicFailedMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCM_V20210413_MODEL_GRAFANAINFO_H_
