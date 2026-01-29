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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_INDEXACCESSES_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_INDEXACCESSES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 索引命中信息
                */
                class IndexAccesses : public AbstractModel
                {
                public:
                    IndexAccesses();
                    ~IndexAccesses() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ops 索引命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOps() const;

                    /**
                     * 设置索引命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ops 索引命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOps(const int64_t& _ops);

                    /**
                     * 判断参数 Ops 是否已赋值
                     * @return Ops 是否已赋值
                     * 
                     */
                    bool OpsHasBeenSet() const;

                    /**
                     * 获取命中次数从何时开始计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Since 命中次数从何时开始计数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSince() const;

                    /**
                     * 设置命中次数从何时开始计数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _since 命中次数从何时开始计数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSince(const std::string& _since);

                    /**
                     * 判断参数 Since 是否已赋值
                     * @return Since 是否已赋值
                     * 
                     */
                    bool SinceHasBeenSet() const;

                private:

                    /**
                     * 索引命中次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_ops;
                    bool m_opsHasBeenSet;

                    /**
                     * 命中次数从何时开始计数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_since;
                    bool m_sinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_INDEXACCESSES_H_
