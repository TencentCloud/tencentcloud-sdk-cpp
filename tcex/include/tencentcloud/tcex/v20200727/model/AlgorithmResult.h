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

#ifndef TENCENTCLOUD_TCEX_V20200727_MODEL_ALGORITHMRESULT_H_
#define TENCENTCLOUD_TCEX_V20200727_MODEL_ALGORITHMRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcex
    {
        namespace V20200727
        {
            namespace Model
            {
                /**
                * 每个算法的返回结果
                */
                class AlgorithmResult : public AbstractModel
                {
                public:
                    AlgorithmResult();
                    ~AlgorithmResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取算法ID
                     * @return AlgoId 算法ID
                     * 
                     */
                    std::string GetAlgoId() const;

                    /**
                     * 设置算法ID
                     * @param _algoId 算法ID
                     * 
                     */
                    void SetAlgoId(const std::string& _algoId);

                    /**
                     * 判断参数 AlgoId 是否已赋值
                     * @return AlgoId 是否已赋值
                     * 
                     */
                    bool AlgoIdHasBeenSet() const;

                    /**
                     * 获取算法名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgoName 算法名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlgoName() const;

                    /**
                     * 设置算法名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algoName 算法名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlgoName(const std::string& _algoName);

                    /**
                     * 判断参数 AlgoName 是否已赋值
                     * @return AlgoName 是否已赋值
                     * 
                     */
                    bool AlgoNameHasBeenSet() const;

                    /**
                     * 获取算法返回的结果。
- 当算法类型为“OCR（1）”时，结果为文本字符串
- 当算法类型为“文本分类（2）”时，结果字符串为json对象数组：
  Class：分类结果
  Confidence：置信度
- 算法类型为“情感分析（3）”时，结果字符串为json对象：
  Positive：正面情感概率
  Negative：负面情感概率
  Neutral：中性情感概率
- 当算法类型为“合同要素抽取（4）”时，结果字符串为json对象数组：
  NodeName：一级要素名称
  ItemName：二级要素名称
  Content：要素文本内容
- 当算法类型为“实体识别（5）”时，结果字符串为json对象数组：
  - Entity：实体类型
  - Content：实体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 算法返回的结果。
- 当算法类型为“OCR（1）”时，结果为文本字符串
- 当算法类型为“文本分类（2）”时，结果字符串为json对象数组：
  Class：分类结果
  Confidence：置信度
- 算法类型为“情感分析（3）”时，结果字符串为json对象：
  Positive：正面情感概率
  Negative：负面情感概率
  Neutral：中性情感概率
- 当算法类型为“合同要素抽取（4）”时，结果字符串为json对象数组：
  NodeName：一级要素名称
  ItemName：二级要素名称
  Content：要素文本内容
- 当算法类型为“实体识别（5）”时，结果字符串为json对象数组：
  - Entity：实体类型
  - Content：实体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置算法返回的结果。
- 当算法类型为“OCR（1）”时，结果为文本字符串
- 当算法类型为“文本分类（2）”时，结果字符串为json对象数组：
  Class：分类结果
  Confidence：置信度
- 算法类型为“情感分析（3）”时，结果字符串为json对象：
  Positive：正面情感概率
  Negative：负面情感概率
  Neutral：中性情感概率
- 当算法类型为“合同要素抽取（4）”时，结果字符串为json对象数组：
  NodeName：一级要素名称
  ItemName：二级要素名称
  Content：要素文本内容
- 当算法类型为“实体识别（5）”时，结果字符串为json对象数组：
  - Entity：实体类型
  - Content：实体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _result 算法返回的结果。
- 当算法类型为“OCR（1）”时，结果为文本字符串
- 当算法类型为“文本分类（2）”时，结果字符串为json对象数组：
  Class：分类结果
  Confidence：置信度
- 算法类型为“情感分析（3）”时，结果字符串为json对象：
  Positive：正面情感概率
  Negative：负面情感概率
  Neutral：中性情感概率
- 当算法类型为“合同要素抽取（4）”时，结果字符串为json对象数组：
  NodeName：一级要素名称
  ItemName：二级要素名称
  Content：要素文本内容
- 当算法类型为“实体识别（5）”时，结果字符串为json对象数组：
  - Entity：实体类型
  - Content：实体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取算法调用错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Error 算法调用错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetError() const;

                    /**
                     * 设置算法调用错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _error 算法调用错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetError(const std::string& _error);

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * 
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取算法类型：
1：OCR算法
2：文本分类算法
3：情感分析算法
4：合同要素抽取算法
5、实体识别算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlgoType 算法类型：
1：OCR算法
2：文本分类算法
3：情感分析算法
4：合同要素抽取算法
5、实体识别算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAlgoType() const;

                    /**
                     * 设置算法类型：
1：OCR算法
2：文本分类算法
3：情感分析算法
4：合同要素抽取算法
5、实体识别算法
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _algoType 算法类型：
1：OCR算法
2：文本分类算法
3：情感分析算法
4：合同要素抽取算法
5、实体识别算法
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlgoType(const int64_t& _algoType);

                    /**
                     * 判断参数 AlgoType 是否已赋值
                     * @return AlgoType 是否已赋值
                     * 
                     */
                    bool AlgoTypeHasBeenSet() const;

                private:

                    /**
                     * 算法ID
                     */
                    std::string m_algoId;
                    bool m_algoIdHasBeenSet;

                    /**
                     * 算法名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_algoName;
                    bool m_algoNameHasBeenSet;

                    /**
                     * 算法返回的结果。
- 当算法类型为“OCR（1）”时，结果为文本字符串
- 当算法类型为“文本分类（2）”时，结果字符串为json对象数组：
  Class：分类结果
  Confidence：置信度
- 算法类型为“情感分析（3）”时，结果字符串为json对象：
  Positive：正面情感概率
  Negative：负面情感概率
  Neutral：中性情感概率
- 当算法类型为“合同要素抽取（4）”时，结果字符串为json对象数组：
  NodeName：一级要素名称
  ItemName：二级要素名称
  Content：要素文本内容
- 当算法类型为“实体识别（5）”时，结果字符串为json对象数组：
  - Entity：实体类型
  - Content：实体文本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 算法调用错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * 算法类型：
1：OCR算法
2：文本分类算法
3：情感分析算法
4：合同要素抽取算法
5、实体识别算法
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_algoType;
                    bool m_algoTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCEX_V20200727_MODEL_ALGORITHMRESULT_H_
