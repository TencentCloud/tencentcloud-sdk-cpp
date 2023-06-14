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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_LANERULETAG_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_LANERULETAG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 泳道规则标签
                */
                class LaneRuleTag : public AbstractModel
                {
                public:
                    LaneRuleTag();
                    ~LaneRuleTag() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagId 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagName 标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagName 标签名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取标签操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagOperator 标签操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagOperator() const;

                    /**
                     * 设置标签操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagOperator 标签操作符
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagOperator(const std::string& _tagOperator);

                    /**
                     * 判断参数 TagOperator 是否已赋值
                     * @return TagOperator 是否已赋值
                     * 
                     */
                    bool TagOperatorHasBeenSet() const;

                    /**
                     * 获取标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TagValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tagValue 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LaneRuleId 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLaneRuleId() const;

                    /**
                     * 设置泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _laneRuleId 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLaneRuleId(const std::string& _laneRuleId);

                    /**
                     * 判断参数 LaneRuleId 是否已赋值
                     * @return LaneRuleId 是否已赋值
                     * 
                     */
                    bool LaneRuleIdHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 标签ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * 标签名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 标签操作符
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagOperator;
                    bool m_tagOperatorHasBeenSet;

                    /**
                     * 标签值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 泳道规则ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_laneRuleId;
                    bool m_laneRuleIdHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_LANERULETAG_H_
