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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_CONCERNINFO_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_CONCERNINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 关注点类型
                */
                class ConcernInfo : public AbstractModel
                {
                public:
                    ConcernInfo();
                    ~ConcernInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConcernType 关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetConcernType() const;

                    /**
                     * 设置关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ConcernType 关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConcernType(const int64_t& _concernType);

                    /**
                     * 判断参数 ConcernType 是否已赋值
                     * @return ConcernType 是否已赋值
                     */
                    bool ConcernTypeHasBeenSet() const;

                    /**
                     * 获取实体类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EntityType 实体类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetEntityType() const;

                    /**
                     * 设置实体类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EntityType 实体类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEntityType(const int64_t& _entityType);

                    /**
                     * 判断参数 EntityType 是否已赋值
                     * @return EntityType 是否已赋值
                     */
                    bool EntityTypeHasBeenSet() const;

                    /**
                     * 获取关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Concern 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetConcern() const;

                    /**
                     * 设置关注点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Concern 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetConcern(const std::string& _concern);

                    /**
                     * 判断参数 Concern 是否已赋值
                     * @return Concern 是否已赋值
                     */
                    bool ConcernHasBeenSet() const;

                    /**
                     * 获取最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatisticsCount 最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetStatisticsCount() const;

                    /**
                     * 设置最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StatisticsCount 最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatisticsCount(const int64_t& _statisticsCount);

                    /**
                     * 判断参数 StatisticsCount 是否已赋值
                     * @return StatisticsCount 是否已赋值
                     */
                    bool StatisticsCountHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchData 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSearchData() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SearchData 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSearchData(const std::string& _searchData);

                    /**
                     * 判断参数 SearchData 是否已赋值
                     * @return SearchData 是否已赋值
                     */
                    bool SearchDataHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpCountryIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIpCountryIso() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpCountryIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpCountryIso(const std::string& _ipCountryIso);

                    /**
                     * 判断参数 IpCountryIso 是否已赋值
                     * @return IpCountryIso 是否已赋值
                     */
                    bool IpCountryIsoHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpProvinceIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIpProvinceIso() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpProvinceIso 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpProvinceIso(const std::string& _ipProvinceIso);

                    /**
                     * 判断参数 IpProvinceIso 是否已赋值
                     * @return IpProvinceIso 是否已赋值
                     */
                    bool IpProvinceIsoHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IpCity 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIpCity() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IpCity 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIpCity(const std::string& _ipCity);

                    /**
                     * 判断参数 IpCity 是否已赋值
                     * @return IpCity 是否已赋值
                     */
                    bool IpCityHasBeenSet() const;

                    /**
                     * 获取可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventSubType 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEventSubType() const;

                    /**
                     * 设置可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventSubType 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventSubType(const std::string& _eventSubType);

                    /**
                     * 判断参数 EventSubType 是否已赋值
                     * @return EventSubType 是否已赋值
                     */
                    bool EventSubTypeHasBeenSet() const;

                private:

                    /**
                     * 关注点类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_concernType;
                    bool m_concernTypeHasBeenSet;

                    /**
                     * 实体类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_entityType;
                    bool m_entityTypeHasBeenSet;

                    /**
                     * 关注点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_concern;
                    bool m_concernHasBeenSet;

                    /**
                     * 最近数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_statisticsCount;
                    bool m_statisticsCountHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_searchData;
                    bool m_searchDataHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipCountryIso;
                    bool m_ipCountryIsoHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipProvinceIso;
                    bool m_ipProvinceIsoHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ipCity;
                    bool m_ipCityHasBeenSet;

                    /**
                     * 可疑关注点字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventSubType;
                    bool m_eventSubTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_CONCERNINFO_H_
