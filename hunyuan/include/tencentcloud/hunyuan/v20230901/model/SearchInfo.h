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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SEARCHINFO_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SEARCHINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/SearchResult.h>
#include <tencentcloud/hunyuan/v20230901/model/Mindmap.h>
#include <tencentcloud/hunyuan/v20230901/model/RelevantEvent.h>
#include <tencentcloud/hunyuan/v20230901/model/RelevantEntity.h>
#include <tencentcloud/hunyuan/v20230901/model/Timeline.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * 搜索结果信息
                */
                class SearchInfo : public AbstractModel
                {
                public:
                    SearchInfo();
                    ~SearchInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取搜索引文信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchResults 搜索引文信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchResult> GetSearchResults() const;

                    /**
                     * 设置搜索引文信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchResults 搜索引文信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchResults(const std::vector<SearchResult>& _searchResults);

                    /**
                     * 判断参数 SearchResults 是否已赋值
                     * @return SearchResults 是否已赋值
                     * 
                     */
                    bool SearchResultsHasBeenSet() const;

                    /**
                     * 获取脑图（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mindmap 脑图（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Mindmap GetMindmap() const;

                    /**
                     * 设置脑图（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mindmap 脑图（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMindmap(const Mindmap& _mindmap);

                    /**
                     * 判断参数 Mindmap 是否已赋值
                     * @return Mindmap 是否已赋值
                     * 
                     */
                    bool MindmapHasBeenSet() const;

                    /**
                     * 获取相关事件（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelevantEvents 相关事件（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RelevantEvent> GetRelevantEvents() const;

                    /**
                     * 设置相关事件（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relevantEvents 相关事件（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelevantEvents(const std::vector<RelevantEvent>& _relevantEvents);

                    /**
                     * 判断参数 RelevantEvents 是否已赋值
                     * @return RelevantEvents 是否已赋值
                     * 
                     */
                    bool RelevantEventsHasBeenSet() const;

                    /**
                     * 获取相关组织及人物（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RelevantEntities 相关组织及人物（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<RelevantEntity> GetRelevantEntities() const;

                    /**
                     * 设置相关组织及人物（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _relevantEntities 相关组织及人物（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRelevantEntities(const std::vector<RelevantEntity>& _relevantEntities);

                    /**
                     * 判断参数 RelevantEntities 是否已赋值
                     * @return RelevantEntities 是否已赋值
                     * 
                     */
                    bool RelevantEntitiesHasBeenSet() const;

                    /**
                     * 获取时间线（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Timeline 时间线（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Timeline> GetTimeline() const;

                    /**
                     * 设置时间线（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _timeline 时间线（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTimeline(const std::vector<Timeline>& _timeline);

                    /**
                     * 判断参数 Timeline 是否已赋值
                     * @return Timeline 是否已赋值
                     * 
                     */
                    bool TimelineHasBeenSet() const;

                    /**
                     * 获取是否命中搜索深度模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SupportDeepSearch 是否命中搜索深度模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetSupportDeepSearch() const;

                    /**
                     * 设置是否命中搜索深度模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supportDeepSearch 是否命中搜索深度模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupportDeepSearch(const bool& _supportDeepSearch);

                    /**
                     * 判断参数 SupportDeepSearch 是否已赋值
                     * @return SupportDeepSearch 是否已赋值
                     * 
                     */
                    bool SupportDeepSearchHasBeenSet() const;

                    /**
                     * 获取搜索回复大纲（深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Outline 搜索回复大纲（深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOutline() const;

                    /**
                     * 设置搜索回复大纲（深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outline 搜索回复大纲（深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutline(const std::vector<std::string>& _outline);

                    /**
                     * 判断参数 Outline 是否已赋值
                     * @return Outline 是否已赋值
                     * 
                     */
                    bool OutlineHasBeenSet() const;

                private:

                    /**
                     * 搜索引文信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchResult> m_searchResults;
                    bool m_searchResultsHasBeenSet;

                    /**
                     * 脑图（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Mindmap m_mindmap;
                    bool m_mindmapHasBeenSet;

                    /**
                     * 相关事件（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RelevantEvent> m_relevantEvents;
                    bool m_relevantEventsHasBeenSet;

                    /**
                     * 相关组织及人物（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<RelevantEntity> m_relevantEntities;
                    bool m_relevantEntitiesHasBeenSet;

                    /**
                     * 时间线（回复中不一定存在，流式协议中，仅在最后一条流式数据中返回，深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Timeline> m_timeline;
                    bool m_timelineHasBeenSet;

                    /**
                     * 是否命中搜索深度模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_supportDeepSearch;
                    bool m_supportDeepSearchHasBeenSet;

                    /**
                     * 搜索回复大纲（深度模式下返回）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_outline;
                    bool m_outlineHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SEARCHINFO_H_
