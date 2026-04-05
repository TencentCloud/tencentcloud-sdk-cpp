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

#ifndef TENCENTCLOUD_GA2_V20250115_MODEL_PORTRANGES_H_
#define TENCENTCLOUD_GA2_V20250115_MODEL_PORTRANGES_H_

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
                * 端口范围
                */
                class PortRanges : public AbstractModel
                {
                public:
                    PortRanges();
                    ~PortRanges() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取起始端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromPort 起始端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetFromPort() const;

                    /**
                     * 设置起始端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromPort 起始端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromPort(const uint64_t& _fromPort);

                    /**
                     * 判断参数 FromPort 是否已赋值
                     * @return FromPort 是否已赋值
                     * 
                     */
                    bool FromPortHasBeenSet() const;

                    /**
                     * 获取终点端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ToPort 终点端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetToPort() const;

                    /**
                     * 设置终点端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _toPort 终点端口。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetToPort(const uint64_t& _toPort);

                    /**
                     * 判断参数 ToPort 是否已赋值
                     * @return ToPort 是否已赋值
                     * 
                     */
                    bool ToPortHasBeenSet() const;

                private:

                    /**
                     * 起始端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_fromPort;
                    bool m_fromPortHasBeenSet;

                    /**
                     * 终点端口。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_toPort;
                    bool m_toPortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GA2_V20250115_MODEL_PORTRANGES_H_
