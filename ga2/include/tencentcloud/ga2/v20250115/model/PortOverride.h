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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_PORTOVERRIDE_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_PORTOVERRIDE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ga2
    {
        namespace V20250115
        {
            namespace Model
            {
                /**
                * 端口映射
                */
                class PortOverride : public AbstractModel
                {
                public:
                    PortOverride();
                    ~PortOverride() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ListenerPort 监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetListenerPort() const;

                    /**
                     * 设置监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _listenerPort 监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetListenerPort(const uint64_t& _listenerPort);

                    /**
                     * 判断参数 ListenerPort 是否已赋值
                     * @return ListenerPort 是否已赋值
                     * 
                     */
                    bool ListenerPortHasBeenSet() const;

                    /**
                     * 获取映射端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndpointPort 映射端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetEndpointPort() const;

                    /**
                     * 设置映射端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpointPort 映射端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpointPort(const uint64_t& _endpointPort);

                    /**
                     * 判断参数 EndpointPort 是否已赋值
                     * @return EndpointPort 是否已赋值
                     * 
                     */
                    bool EndpointPortHasBeenSet() const;

                private:

                    /**
                     * 监听端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_listenerPort;
                    bool m_listenerPortHasBeenSet;

                    /**
                     * 映射端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_endpointPort;
                    bool m_endpointPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_PORTOVERRIDE_H_
