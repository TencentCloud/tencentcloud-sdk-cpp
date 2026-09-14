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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHFILTERCONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHFILTERCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/SearchFilter.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 检索过滤配置
                */
                class SearchFilterConfig : public AbstractModel
                {
                public:
                    SearchFilterConfig();
                    ~SearchFilterConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>是否仅检索选中标签，true:仅检索带有选中标签的知识，false:同时检索带有选中标签和不带任何标签的知识</p>
                     * @return OnlyRetrievalSelectedLabel <p>是否仅检索选中标签，true:仅检索带有选中标签的知识，false:同时检索带有选中标签和不带任何标签的知识</p>
                     * 
                     */
                    bool GetOnlyRetrievalSelectedLabel() const;

                    /**
                     * 设置<p>是否仅检索选中标签，true:仅检索带有选中标签的知识，false:同时检索带有选中标签和不带任何标签的知识</p>
                     * @param _onlyRetrievalSelectedLabel <p>是否仅检索选中标签，true:仅检索带有选中标签的知识，false:同时检索带有选中标签和不带任何标签的知识</p>
                     * 
                     */
                    void SetOnlyRetrievalSelectedLabel(const bool& _onlyRetrievalSelectedLabel);

                    /**
                     * 判断参数 OnlyRetrievalSelectedLabel 是否已赋值
                     * @return OnlyRetrievalSelectedLabel 是否已赋值
                     * 
                     */
                    bool OnlyRetrievalSelectedLabelHasBeenSet() const;

                    /**
                     * 获取<p>检索过滤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SearchFilter <p>检索过滤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SearchFilter GetSearchFilter() const;

                    /**
                     * 设置<p>检索过滤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _searchFilter <p>检索过滤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSearchFilter(const SearchFilter& _searchFilter);

                    /**
                     * 判断参数 SearchFilter 是否已赋值
                     * @return SearchFilter 是否已赋值
                     * 
                     */
                    bool SearchFilterHasBeenSet() const;

                private:

                    /**
                     * <p>是否仅检索选中标签，true:仅检索带有选中标签的知识，false:同时检索带有选中标签和不带任何标签的知识</p>
                     */
                    bool m_onlyRetrievalSelectedLabel;
                    bool m_onlyRetrievalSelectedLabelHasBeenSet;

                    /**
                     * <p>检索过滤</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SearchFilter m_searchFilter;
                    bool m_searchFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SEARCHFILTERCONFIG_H_
