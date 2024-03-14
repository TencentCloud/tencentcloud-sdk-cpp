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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/LineItem.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名解析记录线路信息
                */
                class LineItem : public AbstractModel
                {
                public:
                    LineItem();
                    ~LineItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析线路名称。
                     * @return LineName 解析线路名称。
                     * 
                     */
                    std::string GetLineName() const;

                    /**
                     * 设置解析线路名称。
                     * @param _lineName 解析线路名称。
                     * 
                     */
                    void SetLineName(const std::string& _lineName);

                    /**
                     * 判断参数 LineName 是否已赋值
                     * @return LineName 是否已赋值
                     * 
                     */
                    bool LineNameHasBeenSet() const;

                    /**
                     * 获取解析线路 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LineId 解析线路 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLineId() const;

                    /**
                     * 设置解析线路 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lineId 解析线路 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLineId(const std::string& _lineId);

                    /**
                     * 判断参数 LineId 是否已赋值
                     * @return LineId 是否已赋值
                     * 
                     */
                    bool LineIdHasBeenSet() const;

                    /**
                     * 获取当前线路在当前域名下是否可用。
                     * @return Useful 当前线路在当前域名下是否可用。
                     * 
                     */
                    bool GetUseful() const;

                    /**
                     * 设置当前线路在当前域名下是否可用。
                     * @param _useful 当前线路在当前域名下是否可用。
                     * 
                     */
                    void SetUseful(const bool& _useful);

                    /**
                     * 判断参数 Useful 是否已赋值
                     * @return Useful 是否已赋值
                     * 
                     */
                    bool UsefulHasBeenSet() const;

                    /**
                     * 获取当前线路最低套餐等级要求。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Grade 当前线路最低套餐等级要求。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGrade() const;

                    /**
                     * 设置当前线路最低套餐等级要求。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _grade 当前线路最低套餐等级要求。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGrade(const std::string& _grade);

                    /**
                     * 判断参数 Grade 是否已赋值
                     * @return Grade 是否已赋值
                     * 
                     */
                    bool GradeHasBeenSet() const;

                    /**
                     * 获取当前线路分类下的子线路列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubGroup 当前线路分类下的子线路列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LineItem> GetSubGroup() const;

                    /**
                     * 设置当前线路分类下的子线路列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subGroup 当前线路分类下的子线路列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubGroup(const std::vector<LineItem>& _subGroup);

                    /**
                     * 判断参数 SubGroup 是否已赋值
                     * @return SubGroup 是否已赋值
                     * 
                     */
                    bool SubGroupHasBeenSet() const;

                    /**
                     * 获取自定义线路分组内包含的线路。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Lines 自定义线路分组内包含的线路。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLines() const;

                    /**
                     * 设置自定义线路分组内包含的线路。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lines 自定义线路分组内包含的线路。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLines(const std::vector<std::string>& _lines);

                    /**
                     * 判断参数 Lines 是否已赋值
                     * @return Lines 是否已赋值
                     * 
                     */
                    bool LinesHasBeenSet() const;

                private:

                    /**
                     * 解析线路名称。
                     */
                    std::string m_lineName;
                    bool m_lineNameHasBeenSet;

                    /**
                     * 解析线路 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lineId;
                    bool m_lineIdHasBeenSet;

                    /**
                     * 当前线路在当前域名下是否可用。
                     */
                    bool m_useful;
                    bool m_usefulHasBeenSet;

                    /**
                     * 当前线路最低套餐等级要求。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_grade;
                    bool m_gradeHasBeenSet;

                    /**
                     * 当前线路分类下的子线路列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LineItem> m_subGroup;
                    bool m_subGroupHasBeenSet;

                    /**
                     * 自定义线路分组内包含的线路。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_lines;
                    bool m_linesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_LINEITEM_H_
