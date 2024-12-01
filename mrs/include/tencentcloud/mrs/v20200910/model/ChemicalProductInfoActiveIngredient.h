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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFOACTIVEINGREDIENT_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFOACTIVEINGREDIENT_H_

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
                * 活性成份消息定义，如果是复方制剂，可以不列出每个活性成份的详细信息
                */
                class ChemicalProductInfoActiveIngredient : public AbstractModel
                {
                public:
                    ChemicalProductInfoActiveIngredient();
                    ~ChemicalProductInfoActiveIngredient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取文本内容
                     * @return Text 文本内容
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置文本内容
                     * @param _text 文本内容
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取活性成份的化学名称
                     * @return ChemicalName 活性成份的化学名称
                     * 
                     */
                    std::string GetChemicalName() const;

                    /**
                     * 设置活性成份的化学名称
                     * @param _chemicalName 活性成份的化学名称
                     * 
                     */
                    void SetChemicalName(const std::string& _chemicalName);

                    /**
                     * 判断参数 ChemicalName 是否已赋值
                     * @return ChemicalName 是否已赋值
                     * 
                     */
                    bool ChemicalNameHasBeenSet() const;

                    /**
                     * 获取活性成份的化学结构式
                     * @return ChemicalFormula 活性成份的化学结构式
                     * 
                     */
                    std::string GetChemicalFormula() const;

                    /**
                     * 设置活性成份的化学结构式
                     * @param _chemicalFormula 活性成份的化学结构式
                     * 
                     */
                    void SetChemicalFormula(const std::string& _chemicalFormula);

                    /**
                     * 判断参数 ChemicalFormula 是否已赋值
                     * @return ChemicalFormula 是否已赋值
                     * 
                     */
                    bool ChemicalFormulaHasBeenSet() const;

                    /**
                     * 获取活性成份的分子式
                     * @return MolecularFormula 活性成份的分子式
                     * 
                     */
                    std::string GetMolecularFormula() const;

                    /**
                     * 设置活性成份的分子式
                     * @param _molecularFormula 活性成份的分子式
                     * 
                     */
                    void SetMolecularFormula(const std::string& _molecularFormula);

                    /**
                     * 判断参数 MolecularFormula 是否已赋值
                     * @return MolecularFormula 是否已赋值
                     * 
                     */
                    bool MolecularFormulaHasBeenSet() const;

                    /**
                     * 获取活性成份的分子量
                     * @return MolecularWeight 活性成份的分子量
                     * 
                     */
                    std::string GetMolecularWeight() const;

                    /**
                     * 设置活性成份的分子量
                     * @param _molecularWeight 活性成份的分子量
                     * 
                     */
                    void SetMolecularWeight(const std::string& _molecularWeight);

                    /**
                     * 判断参数 MolecularWeight 是否已赋值
                     * @return MolecularWeight 是否已赋值
                     * 
                     */
                    bool MolecularWeightHasBeenSet() const;

                private:

                    /**
                     * 文本内容
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 活性成份的化学名称
                     */
                    std::string m_chemicalName;
                    bool m_chemicalNameHasBeenSet;

                    /**
                     * 活性成份的化学结构式
                     */
                    std::string m_chemicalFormula;
                    bool m_chemicalFormulaHasBeenSet;

                    /**
                     * 活性成份的分子式
                     */
                    std::string m_molecularFormula;
                    bool m_molecularFormulaHasBeenSet;

                    /**
                     * 活性成份的分子量
                     */
                    std::string m_molecularWeight;
                    bool m_molecularWeightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_CHEMICALPRODUCTINFOACTIVEINGREDIENT_H_
