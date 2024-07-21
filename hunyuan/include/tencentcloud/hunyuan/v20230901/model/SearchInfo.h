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

                private:

                    /**
                     * 搜索引文信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchResult> m_searchResults;
                    bool m_searchResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_SEARCHINFO_H_
