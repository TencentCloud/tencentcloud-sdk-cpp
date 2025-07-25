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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DRUGHISTORYBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DRUGHISTORYBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/DrugListBlock.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 药物史
                */
                class DrugHistoryBlock : public AbstractModel
                {
                public:
                    DrugHistoryBlock();
                    ~DrugHistoryBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品名称
                     * @return Name 药品名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置药品名称
                     * @param _name 药品名称
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
                     * 获取原文
                     * @return Src 原文
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置原文
                     * @param _src 原文
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取药物列表
                     * @return DrugList 药物列表
                     * 
                     */
                    std::vector<DrugListBlock> GetDrugList() const;

                    /**
                     * 设置药物列表
                     * @param _drugList 药物列表
                     * 
                     */
                    void SetDrugList(const std::vector<DrugListBlock>& _drugList);

                    /**
                     * 判断参数 DrugList 是否已赋值
                     * @return DrugList 是否已赋值
                     * 
                     */
                    bool DrugListHasBeenSet() const;

                    /**
                     * 获取归一化值
                     * @return Value 归一化值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置归一化值
                     * @param _value 归一化值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 药品名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 原文
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 药物列表
                     */
                    std::vector<DrugListBlock> m_drugList;
                    bool m_drugListHasBeenSet;

                    /**
                     * 归一化值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DRUGHISTORYBLOCK_H_
