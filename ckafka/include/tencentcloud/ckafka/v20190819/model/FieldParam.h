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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_FIELDPARAM_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_FIELDPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/AnalyseParam.h>
#include <tencentcloud/ckafka/v20190819/model/SecondaryAnalyseParam.h>
#include <tencentcloud/ckafka/v20190819/model/SMTParam.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 数据处理——处理链
                */
                class FieldParam : public AbstractModel
                {
                public:
                    FieldParam();
                    ~FieldParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析
                     * @return Analyse 解析
                     * 
                     */
                    AnalyseParam GetAnalyse() const;

                    /**
                     * 设置解析
                     * @param _analyse 解析
                     * 
                     */
                    void SetAnalyse(const AnalyseParam& _analyse);

                    /**
                     * 判断参数 Analyse 是否已赋值
                     * @return Analyse 是否已赋值
                     * 
                     */
                    bool AnalyseHasBeenSet() const;

                    /**
                     * 获取二次解析
                     * @return SecondaryAnalyse 二次解析
                     * 
                     */
                    SecondaryAnalyseParam GetSecondaryAnalyse() const;

                    /**
                     * 设置二次解析
                     * @param _secondaryAnalyse 二次解析
                     * 
                     */
                    void SetSecondaryAnalyse(const SecondaryAnalyseParam& _secondaryAnalyse);

                    /**
                     * 判断参数 SecondaryAnalyse 是否已赋值
                     * @return SecondaryAnalyse 是否已赋值
                     * 
                     */
                    bool SecondaryAnalyseHasBeenSet() const;

                    /**
                     * 获取数据处理
                     * @return SMT 数据处理
                     * 
                     */
                    std::vector<SMTParam> GetSMT() const;

                    /**
                     * 设置数据处理
                     * @param _sMT 数据处理
                     * 
                     */
                    void SetSMT(const std::vector<SMTParam>& _sMT);

                    /**
                     * 判断参数 SMT 是否已赋值
                     * @return SMT 是否已赋值
                     * 
                     */
                    bool SMTHasBeenSet() const;

                    /**
                     * 获取测试结果
                     * @return Result 测试结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置测试结果
                     * @param _result 测试结果
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
                     * 获取解析结果
                     * @return AnalyseResult 解析结果
                     * 
                     */
                    std::vector<SMTParam> GetAnalyseResult() const;

                    /**
                     * 设置解析结果
                     * @param _analyseResult 解析结果
                     * 
                     */
                    void SetAnalyseResult(const std::vector<SMTParam>& _analyseResult);

                    /**
                     * 判断参数 AnalyseResult 是否已赋值
                     * @return AnalyseResult 是否已赋值
                     * 
                     */
                    bool AnalyseResultHasBeenSet() const;

                    /**
                     * 获取二次解析结果
                     * @return SecondaryAnalyseResult 二次解析结果
                     * 
                     */
                    std::vector<SMTParam> GetSecondaryAnalyseResult() const;

                    /**
                     * 设置二次解析结果
                     * @param _secondaryAnalyseResult 二次解析结果
                     * 
                     */
                    void SetSecondaryAnalyseResult(const std::vector<SMTParam>& _secondaryAnalyseResult);

                    /**
                     * 判断参数 SecondaryAnalyseResult 是否已赋值
                     * @return SecondaryAnalyseResult 是否已赋值
                     * 
                     */
                    bool SecondaryAnalyseResultHasBeenSet() const;

                    /**
                     * 获取JSON格式解析结果
                     * @return AnalyseJsonResult JSON格式解析结果
                     * 
                     */
                    std::string GetAnalyseJsonResult() const;

                    /**
                     * 设置JSON格式解析结果
                     * @param _analyseJsonResult JSON格式解析结果
                     * 
                     */
                    void SetAnalyseJsonResult(const std::string& _analyseJsonResult);

                    /**
                     * 判断参数 AnalyseJsonResult 是否已赋值
                     * @return AnalyseJsonResult 是否已赋值
                     * 
                     */
                    bool AnalyseJsonResultHasBeenSet() const;

                    /**
                     * 获取JSON格式二次解析结果
                     * @return SecondaryAnalyseJsonResult JSON格式二次解析结果
                     * 
                     */
                    std::string GetSecondaryAnalyseJsonResult() const;

                    /**
                     * 设置JSON格式二次解析结果
                     * @param _secondaryAnalyseJsonResult JSON格式二次解析结果
                     * 
                     */
                    void SetSecondaryAnalyseJsonResult(const std::string& _secondaryAnalyseJsonResult);

                    /**
                     * 判断参数 SecondaryAnalyseJsonResult 是否已赋值
                     * @return SecondaryAnalyseJsonResult 是否已赋值
                     * 
                     */
                    bool SecondaryAnalyseJsonResultHasBeenSet() const;

                private:

                    /**
                     * 解析
                     */
                    AnalyseParam m_analyse;
                    bool m_analyseHasBeenSet;

                    /**
                     * 二次解析
                     */
                    SecondaryAnalyseParam m_secondaryAnalyse;
                    bool m_secondaryAnalyseHasBeenSet;

                    /**
                     * 数据处理
                     */
                    std::vector<SMTParam> m_sMT;
                    bool m_sMTHasBeenSet;

                    /**
                     * 测试结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 解析结果
                     */
                    std::vector<SMTParam> m_analyseResult;
                    bool m_analyseResultHasBeenSet;

                    /**
                     * 二次解析结果
                     */
                    std::vector<SMTParam> m_secondaryAnalyseResult;
                    bool m_secondaryAnalyseResultHasBeenSet;

                    /**
                     * JSON格式解析结果
                     */
                    std::string m_analyseJsonResult;
                    bool m_analyseJsonResultHasBeenSet;

                    /**
                     * JSON格式二次解析结果
                     */
                    std::string m_secondaryAnalyseJsonResult;
                    bool m_secondaryAnalyseJsonResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_FIELDPARAM_H_
