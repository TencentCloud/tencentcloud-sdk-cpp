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

#ifndef TENCENTCLOUD_CHDFS_V20201112_MODEL_SUMMARY_H_
#define TENCENTCLOUD_CHDFS_V20201112_MODEL_SUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chdfs
    {
        namespace V20201112
        {
            namespace Model
            {
                /**
                * 生命周期规则当前路径具体存储量信息
                */
                class Summary : public AbstractModel
                {
                public:
                    Summary();
                    ~Summary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CapacityUsed 总存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCapacityUsed() const;

                    /**
                     * 设置总存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CapacityUsed 总存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCapacityUsed(const uint64_t& _capacityUsed);

                    /**
                     * 判断参数 CapacityUsed 是否已赋值
                     * @return CapacityUsed 是否已赋值
                     */
                    bool CapacityUsedHasBeenSet() const;

                    /**
                     * 获取标准存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StandardCapacityUsed 标准存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStandardCapacityUsed() const;

                    /**
                     * 设置标准存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StandardCapacityUsed 标准存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStandardCapacityUsed(const uint64_t& _standardCapacityUsed);

                    /**
                     * 判断参数 StandardCapacityUsed 是否已赋值
                     * @return StandardCapacityUsed 是否已赋值
                     */
                    bool StandardCapacityUsedHasBeenSet() const;

                    /**
                     * 获取低频存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DegradeCapacityUsed 低频存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDegradeCapacityUsed() const;

                    /**
                     * 设置低频存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DegradeCapacityUsed 低频存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDegradeCapacityUsed(const uint64_t& _degradeCapacityUsed);

                    /**
                     * 判断参数 DegradeCapacityUsed 是否已赋值
                     * @return DegradeCapacityUsed 是否已赋值
                     */
                    bool DegradeCapacityUsedHasBeenSet() const;

                    /**
                     * 获取归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ArchiveCapacityUsed 归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetArchiveCapacityUsed() const;

                    /**
                     * 设置归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ArchiveCapacityUsed 归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetArchiveCapacityUsed(const uint64_t& _archiveCapacityUsed);

                    /**
                     * 判断参数 ArchiveCapacityUsed 是否已赋值
                     * @return ArchiveCapacityUsed 是否已赋值
                     */
                    bool ArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取深度归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeepArchiveCapacityUsed 深度归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetDeepArchiveCapacityUsed() const;

                    /**
                     * 设置深度归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param DeepArchiveCapacityUsed 深度归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeepArchiveCapacityUsed(const uint64_t& _deepArchiveCapacityUsed);

                    /**
                     * 判断参数 DeepArchiveCapacityUsed 是否已赋值
                     * @return DeepArchiveCapacityUsed 是否已赋值
                     */
                    bool DeepArchiveCapacityUsedHasBeenSet() const;

                    /**
                     * 获取智能分层存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IntelligentCapacityUsed 智能分层存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIntelligentCapacityUsed() const;

                    /**
                     * 设置智能分层存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IntelligentCapacityUsed 智能分层存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIntelligentCapacityUsed(const uint64_t& _intelligentCapacityUsed);

                    /**
                     * 判断参数 IntelligentCapacityUsed 是否已赋值
                     * @return IntelligentCapacityUsed 是否已赋值
                     */
                    bool IntelligentCapacityUsedHasBeenSet() const;

                private:

                    /**
                     * 总存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_capacityUsed;
                    bool m_capacityUsedHasBeenSet;

                    /**
                     * 标准存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_standardCapacityUsed;
                    bool m_standardCapacityUsedHasBeenSet;

                    /**
                     * 低频存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_degradeCapacityUsed;
                    bool m_degradeCapacityUsedHasBeenSet;

                    /**
                     * 归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_archiveCapacityUsed;
                    bool m_archiveCapacityUsedHasBeenSet;

                    /**
                     * 深度归档存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_deepArchiveCapacityUsed;
                    bool m_deepArchiveCapacityUsedHasBeenSet;

                    /**
                     * 智能分层存储量（单位byte）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_intelligentCapacityUsed;
                    bool m_intelligentCapacityUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHDFS_V20201112_MODEL_SUMMARY_H_
