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

#ifndef TENCENTCLOUD_HCM_V20181106_MODEL_ITEM_H_
#define TENCENTCLOUD_HCM_V20181106_MODEL_ITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hcm/v20181106/model/ItemCoord.h>


namespace TencentCloud
{
    namespace Hcm
    {
        namespace V20181106
        {
            namespace Model
            {
                /**
                * 识别出的算术式信息及评估结果
                */
                class Item : public AbstractModel
                {
                public:
                    Item();
                    ~Item() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取识别的算式是否正确
                     * @return Item 识别的算式是否正确
                     */
                    std::string GetItem() const;

                    /**
                     * 设置识别的算式是否正确
                     * @param Item 识别的算式是否正确
                     */
                    void SetItem(const std::string& _item);

                    /**
                     * 判断参数 Item 是否已赋值
                     * @return Item 是否已赋值
                     */
                    bool ItemHasBeenSet() const;

                    /**
                     * 获取识别的算式
                     * @return ItemString 识别的算式
                     */
                    std::string GetItemString() const;

                    /**
                     * 设置识别的算式
                     * @param ItemString 识别的算式
                     */
                    void SetItemString(const std::string& _itemString);

                    /**
                     * 判断参数 ItemString 是否已赋值
                     * @return ItemString 是否已赋值
                     */
                    bool ItemStringHasBeenSet() const;

                    /**
                     * 获取识别的算式在图片上的位置信息
                     * @return ItemCoord 识别的算式在图片上的位置信息
                     */
                    ItemCoord GetItemCoord() const;

                    /**
                     * 设置识别的算式在图片上的位置信息
                     * @param ItemCoord 识别的算式在图片上的位置信息
                     */
                    void SetItemCoord(const ItemCoord& _itemCoord);

                    /**
                     * 判断参数 ItemCoord 是否已赋值
                     * @return ItemCoord 是否已赋值
                     */
                    bool ItemCoordHasBeenSet() const;

                    /**
                     * 获取推荐的答案，暂不支持多个关系运算符、无关系运算符、单位换算错题的推荐答案返回。
                     * @return Answer 推荐的答案，暂不支持多个关系运算符、无关系运算符、单位换算错题的推荐答案返回。
                     */
                    std::string GetAnswer() const;

                    /**
                     * 设置推荐的答案，暂不支持多个关系运算符、无关系运算符、单位换算错题的推荐答案返回。
                     * @param Answer 推荐的答案，暂不支持多个关系运算符、无关系运算符、单位换算错题的推荐答案返回。
                     */
                    void SetAnswer(const std::string& _answer);

                    /**
                     * 判断参数 Answer 是否已赋值
                     * @return Answer 是否已赋值
                     */
                    bool AnswerHasBeenSet() const;

                    /**
                     * 获取算式题型编号，如加减乘除四则题型，具体题型及编号如下：1 加减乘除四则 2 加减乘除已知结果求运算因子3 判断大小 4 约等于估算 5 带余数除法 6 分数四则运算 7 单位换算 8 竖式加减法 9 竖式乘除法 10 脱式计算 11 解方程
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExpressionType 算式题型编号，如加减乘除四则题型，具体题型及编号如下：1 加减乘除四则 2 加减乘除已知结果求运算因子3 判断大小 4 约等于估算 5 带余数除法 6 分数四则运算 7 单位换算 8 竖式加减法 9 竖式乘除法 10 脱式计算 11 解方程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExpressionType() const;

                    /**
                     * 设置算式题型编号，如加减乘除四则题型，具体题型及编号如下：1 加减乘除四则 2 加减乘除已知结果求运算因子3 判断大小 4 约等于估算 5 带余数除法 6 分数四则运算 7 单位换算 8 竖式加减法 9 竖式乘除法 10 脱式计算 11 解方程
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExpressionType 算式题型编号，如加减乘除四则题型，具体题型及编号如下：1 加减乘除四则 2 加减乘除已知结果求运算因子3 判断大小 4 约等于估算 5 带余数除法 6 分数四则运算 7 单位换算 8 竖式加减法 9 竖式乘除法 10 脱式计算 11 解方程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExpressionType(const std::string& _expressionType);

                    /**
                     * 判断参数 ExpressionType 是否已赋值
                     * @return ExpressionType 是否已赋值
                     */
                    bool ExpressionTypeHasBeenSet() const;

                    /**
                     * 获取文本行置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ItemConf 文本行置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetItemConf() const;

                    /**
                     * 设置文本行置信度
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ItemConf 文本行置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetItemConf(const double& _itemConf);

                    /**
                     * 判断参数 ItemConf 是否已赋值
                     * @return ItemConf 是否已赋值
                     */
                    bool ItemConfHasBeenSet() const;

                private:

                    /**
                     * 识别的算式是否正确
                     */
                    std::string m_item;
                    bool m_itemHasBeenSet;

                    /**
                     * 识别的算式
                     */
                    std::string m_itemString;
                    bool m_itemStringHasBeenSet;

                    /**
                     * 识别的算式在图片上的位置信息
                     */
                    ItemCoord m_itemCoord;
                    bool m_itemCoordHasBeenSet;

                    /**
                     * 推荐的答案，暂不支持多个关系运算符、无关系运算符、单位换算错题的推荐答案返回。
                     */
                    std::string m_answer;
                    bool m_answerHasBeenSet;

                    /**
                     * 算式题型编号，如加减乘除四则题型，具体题型及编号如下：1 加减乘除四则 2 加减乘除已知结果求运算因子3 判断大小 4 约等于估算 5 带余数除法 6 分数四则运算 7 单位换算 8 竖式加减法 9 竖式乘除法 10 脱式计算 11 解方程
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_expressionType;
                    bool m_expressionTypeHasBeenSet;

                    /**
                     * 文本行置信度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_itemConf;
                    bool m_itemConfHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HCM_V20181106_MODEL_ITEM_H_
