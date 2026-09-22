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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CHATENDPOINT_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CHATENDPOINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * 聊天接入点。EndpointType 现在就引入枚举：当前仅返回一个 PUBLIC 元素，将来新增私网端点与 VPC 属性为纯增量。
                */
                class ChatEndpoint : public AbstractModel
                {
                public:
                    ChatEndpoint();
                    ~ChatEndpoint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取接入点类型：PUBLIC（公网）/ PRIVATE（私网，预留）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndpointType 接入点类型：PUBLIC（公网）/ PRIVATE（私网，预留）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndpointType() const;

                    /**
                     * 设置接入点类型：PUBLIC（公网）/ PRIVATE（私网，预留）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpointType 接入点类型：PUBLIC（公网）/ PRIVATE（私网，预留）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpointType(const std::string& _endpointType);

                    /**
                     * 判断参数 EndpointType 是否已赋值
                     * @return EndpointType 是否已赋值
                     * 
                     */
                    bool EndpointTypeHasBeenSet() const;

                    /**
                     * 获取接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 接入点类型：PUBLIC（公网）/ PRIVATE（私网，预留）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endpointType;
                    bool m_endpointTypeHasBeenSet;

                    /**
                     * 接入点地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_CHATENDPOINT_H_
