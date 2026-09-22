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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXPERTCOUNTS_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXPERTCOUNTS_H_

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
                * 全局专家计数
                */
                class ExpertCounts : public AbstractModel
                {
                public:
                    ExpertCounts();
                    ~ExpertCounts() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>内置专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Builtin <p>内置专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetBuiltin() const;

                    /**
                     * 设置<p>内置专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _builtin <p>内置专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBuiltin(const int64_t& _builtin);

                    /**
                     * 判断参数 Builtin 是否已赋值
                     * @return Builtin 是否已赋值
                     * 
                     */
                    bool BuiltinHasBeenSet() const;

                    /**
                     * 获取<p>自建专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Custom <p>自建专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCustom() const;

                    /**
                     * 设置<p>自建专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _custom <p>自建专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCustom(const int64_t& _custom);

                    /**
                     * 判断参数 Custom 是否已赋值
                     * @return Custom 是否已赋值
                     * 
                     */
                    bool CustomHasBeenSet() const;

                    /**
                     * 获取<p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Total <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _total <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>内置专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_builtin;
                    bool m_builtinHasBeenSet;

                    /**
                     * <p>自建专家数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_custom;
                    bool m_customHasBeenSet;

                    /**
                     * <p>总数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_EXPERTCOUNTS_H_
