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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DRUGLISTBLOCK_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DRUGLISTBLOCK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/DosageBlock.h>


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
                class DrugListBlock : public AbstractModel
                {
                public:
                    DrugListBlock();
                    ~DrugListBlock() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取通用名称
                     * @return CommonName 通用名称
                     * 
                     */
                    std::string GetCommonName() const;

                    /**
                     * 设置通用名称
                     * @param _commonName 通用名称
                     * 
                     */
                    void SetCommonName(const std::string& _commonName);

                    /**
                     * 判断参数 CommonName 是否已赋值
                     * @return CommonName 是否已赋值
                     * 
                     */
                    bool CommonNameHasBeenSet() const;

                    /**
                     * 获取商品名称
                     * @return TradeName 商品名称
                     * 
                     */
                    std::string GetTradeName() const;

                    /**
                     * 设置商品名称
                     * @param _tradeName 商品名称
                     * 
                     */
                    void SetTradeName(const std::string& _tradeName);

                    /**
                     * 判断参数 TradeName 是否已赋值
                     * @return TradeName 是否已赋值
                     * 
                     */
                    bool TradeNameHasBeenSet() const;

                    /**
                     * 获取用法用量
                     * @return Dosage 用法用量
                     * 
                     */
                    DosageBlock GetDosage() const;

                    /**
                     * 设置用法用量
                     * @param _dosage 用法用量
                     * 
                     */
                    void SetDosage(const DosageBlock& _dosage);

                    /**
                     * 判断参数 Dosage 是否已赋值
                     * @return Dosage 是否已赋值
                     * 
                     */
                    bool DosageHasBeenSet() const;

                    /**
                     * 获取值
                     * @return Value 值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置值
                     * @param _value 值
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
                     * 通用名称
                     */
                    std::string m_commonName;
                    bool m_commonNameHasBeenSet;

                    /**
                     * 商品名称
                     */
                    std::string m_tradeName;
                    bool m_tradeNameHasBeenSet;

                    /**
                     * 用法用量
                     */
                    DosageBlock m_dosage;
                    bool m_dosageHasBeenSet;

                    /**
                     * 值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DRUGLISTBLOCK_H_
