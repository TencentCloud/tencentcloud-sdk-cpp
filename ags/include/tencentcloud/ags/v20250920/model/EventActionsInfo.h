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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_EVENTACTIONSINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_EVENTACTIONSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * Agent 状态切换事件信息
                */
                class EventActionsInfo : public AbstractModel
                {
                public:
                    EventActionsInfo();
                    ~EventActionsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态增量，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StateDelta 状态增量，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStateDelta() const;

                    /**
                     * 设置状态增量，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stateDelta 状态增量，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStateDelta(const std::string& _stateDelta);

                    /**
                     * 判断参数 StateDelta 是否已赋值
                     * @return StateDelta 是否已赋值
                     * 
                     */
                    bool StateDeltaHasBeenSet() const;

                private:

                    /**
                     * 状态增量，JSON 字符串，最大长度 8192 字符。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_stateDelta;
                    bool m_stateDeltaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_EVENTACTIONSINFO_H_
