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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_TABLESCHEMAITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_TABLESCHEMAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 表格schema信息
                */
                class TableSchemaItem : public AbstractModel
                {
                public:
                    TableSchemaItem();
                    ~TableSchemaItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列标识
                     * @return Name 列标识
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置列标识
                     * @param _name 列标识
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
                     * 获取是否可按该列排序
                     * @return Sortable 是否可按该列排序
                     * 
                     */
                    bool GetSortable() const;

                    /**
                     * 设置是否可按该列排序
                     * @param _sortable 是否可按该列排序
                     * 
                     */
                    void SetSortable(const bool& _sortable);

                    /**
                     * 判断参数 Sortable 是否已赋值
                     * @return Sortable 是否已赋值
                     * 
                     */
                    bool SortableHasBeenSet() const;

                    /**
                     * 获取是否可筛选
                     * @return WithFilter 是否可筛选
                     * 
                     */
                    bool GetWithFilter() const;

                    /**
                     * 设置是否可筛选
                     * @param _withFilter 是否可筛选
                     * 
                     */
                    void SetWithFilter(const bool& _withFilter);

                    /**
                     * 判断参数 WithFilter 是否已赋值
                     * @return WithFilter 是否已赋值
                     * 
                     */
                    bool WithFilterHasBeenSet() const;

                    /**
                     * 获取筛选的候选集
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Candidates 筛选的候选集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetCandidates() const;

                    /**
                     * 设置筛选的候选集
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _candidates 筛选的候选集
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCandidates(const std::vector<std::string>& _candidates);

                    /**
                     * 判断参数 Candidates 是否已赋值
                     * @return Candidates 是否已赋值
                     * 
                     */
                    bool CandidatesHasBeenSet() const;

                    /**
                     * 获取是否可点击
                     * @return Clickable 是否可点击
                     * 
                     */
                    bool GetClickable() const;

                    /**
                     * 设置是否可点击
                     * @param _clickable 是否可点击
                     * 
                     */
                    void SetClickable(const bool& _clickable);

                    /**
                     * 判断参数 Clickable 是否已赋值
                     * @return Clickable 是否已赋值
                     * 
                     */
                    bool ClickableHasBeenSet() const;

                    /**
                     * 获取展示的名字
                     * @return Title 展示的名字
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置展示的名字
                     * @param _title 展示的名字
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                private:

                    /**
                     * 列标识
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 是否可按该列排序
                     */
                    bool m_sortable;
                    bool m_sortableHasBeenSet;

                    /**
                     * 是否可筛选
                     */
                    bool m_withFilter;
                    bool m_withFilterHasBeenSet;

                    /**
                     * 筛选的候选集
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_candidates;
                    bool m_candidatesHasBeenSet;

                    /**
                     * 是否可点击
                     */
                    bool m_clickable;
                    bool m_clickableHasBeenSet;

                    /**
                     * 展示的名字
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_TABLESCHEMAITEM_H_
