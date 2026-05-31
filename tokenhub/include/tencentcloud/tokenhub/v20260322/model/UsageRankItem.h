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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGERANKITEM_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGERANKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageStats.h>
#include <tencentcloud/tokenhub/v20260322/model/UsageSeries.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 排行列表中的单个对象用量项，含对象标识、时间周期内的统计值（Stats）和时间周期内的时序点列表（Series，仅 ShowAll=false 时返回）。
                */
                class UsageRankItem : public AbstractModel
                {
                public:
                    UsageRankItem();
                    ~UsageRankItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取全局排名（从 1 起）。分页场景下仍为全量排序中的位次，非页内序号
                     * @return Rank 全局排名（从 1 起）。分页场景下仍为全量排序中的位次，非页内序号
                     * 
                     */
                    int64_t GetRank() const;

                    /**
                     * 设置全局排名（从 1 起）。分页场景下仍为全量排序中的位次，非页内序号
                     * @param _rank 全局排名（从 1 起）。分页场景下仍为全量排序中的位次，非页内序号
                     * 
                     */
                    void SetRank(const int64_t& _rank);

                    /**
                     * 判断参数 Rank 是否已赋值
                     * @return Rank 是否已赋值
                     * 
                     */
                    bool RankHasBeenSet() const;

                    /**
                     * 获取对象标识。apikey 维度为 APIKey ID；endpoint 维度为接入点；model 维度为模型名。
                     * @return Key 对象标识。apikey 维度为 APIKey ID；endpoint 维度为接入点；model 维度为模型名。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置对象标识。apikey 维度为 APIKey ID；endpoint 维度为接入点；model 维度为模型名。
                     * @param _key 对象标识。apikey 维度为 APIKey ID；endpoint 维度为接入点；model 维度为模型名。
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取对象展示名。apikey 维度返回 APIKey 名称（已删除的 APIKey 仍保留原名）；
endpoint / model 维度等于 Key。
                     * @return Name 对象展示名。apikey 维度返回 APIKey 名称（已删除的 APIKey 仍保留原名）；
endpoint / model 维度等于 Key。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置对象展示名。apikey 维度返回 APIKey 名称（已删除的 APIKey 仍保留原名）；
endpoint / model 维度等于 Key。
                     * @param _name 对象展示名。apikey 维度返回 APIKey 名称（已删除的 APIKey 仍保留原名）；
endpoint / model 维度等于 Key。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取时间周期内的统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Stats 时间周期内的统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UsageStats GetStats() const;

                    /**
                     * 设置时间周期内的统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _stats 时间周期内的统计值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStats(const UsageStats& _stats);

                    /**
                     * 判断参数 Stats 是否已赋值
                     * @return Stats 是否已赋值
                     * 
                     */
                    bool StatsHasBeenSet() const;

                    /**
                     * 获取时间周期内的时序点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Series 时间周期内的时序点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UsageSeries GetSeries() const;

                    /**
                     * 设置时间周期内的时序点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _series 时间周期内的时序点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSeries(const UsageSeries& _series);

                    /**
                     * 判断参数 Series 是否已赋值
                     * @return Series 是否已赋值
                     * 
                     */
                    bool SeriesHasBeenSet() const;

                private:

                    /**
                     * 全局排名（从 1 起）。分页场景下仍为全量排序中的位次，非页内序号
                     */
                    int64_t m_rank;
                    bool m_rankHasBeenSet;

                    /**
                     * 对象标识。apikey 维度为 APIKey ID；endpoint 维度为接入点；model 维度为模型名。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 对象展示名。apikey 维度返回 APIKey 名称（已删除的 APIKey 仍保留原名）；
endpoint / model 维度等于 Key。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 时间周期内的统计值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UsageStats m_stats;
                    bool m_statsHasBeenSet;

                    /**
                     * 时间周期内的时序点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UsageSeries m_series;
                    bool m_seriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_USAGERANKITEM_H_
