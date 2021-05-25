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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 指标项
                */
                class IndicatorItem : public AbstractModel
                {
                public:
                    IndicatorItem();
                    ~IndicatorItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCode() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Code “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Scode “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetScode() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Scode “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetScode(const std::string& _scode);

                    /**
                     * 判断参数 Scode 是否已赋值
                     * @return Scode 是否已赋值
                     */
                    bool ScodeHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Sname “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSname() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Sname “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSname(const std::string& _sname);

                    /**
                     * 判断参数 Sname 是否已赋值
                     * @return Sname 是否已赋值
                     */
                    bool SnameHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResult() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Result “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Unit “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Range “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRange() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Range “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Arrow “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetArrow() const;

                    /**
                     * 设置“”
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Arrow “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetArrow(const std::string& _arrow);

                    /**
                     * 判断参数 Arrow 是否已赋值
                     * @return Arrow 是否已赋值
                     */
                    bool ArrowHasBeenSet() const;

                    /**
                     * 获取是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Normal 是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetNormal() const;

                    /**
                     * 设置是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Normal 是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetNormal(const bool& _normal);

                    /**
                     * 判断参数 Normal 是否已赋值
                     * @return Normal 是否已赋值
                     */
                    bool NormalHasBeenSet() const;

                private:

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scode;
                    bool m_scodeHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sname;
                    bool m_snameHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * “”
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_arrow;
                    bool m_arrowHasBeenSet;

                    /**
                     * 是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_normal;
                    bool m_normalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INDICATORITEM_H_
