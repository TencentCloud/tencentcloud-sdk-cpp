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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * AI 通话结果具体信息
                */
                class AICallExtractResultInfo : public AbstractModel
                {
                public:
                    AICallExtractResultInfo();
                    ~AICallExtractResultInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取提取的类型是文本
                     * @return Text 提取的类型是文本
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置提取的类型是文本
                     * @param _text 提取的类型是文本
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
                     * 获取提取的内型是选项
                     * @return Chosen 提取的内型是选项
                     * 
                     */
                    std::vector<std::string> GetChosen() const;

                    /**
                     * 设置提取的内型是选项
                     * @param _chosen 提取的内型是选项
                     * 
                     */
                    void SetChosen(const std::vector<std::string>& _chosen);

                    /**
                     * 判断参数 Chosen 是否已赋值
                     * @return Chosen 是否已赋值
                     * 
                     */
                    bool ChosenHasBeenSet() const;

                    /**
                     * 获取提取类型是布尔值
                     * @return Boolean 提取类型是布尔值
                     * 
                     */
                    bool GetBoolean() const;

                    /**
                     * 设置提取类型是布尔值
                     * @param _boolean 提取类型是布尔值
                     * 
                     */
                    void SetBoolean(const bool& _boolean);

                    /**
                     * 判断参数 Boolean 是否已赋值
                     * @return Boolean 是否已赋值
                     * 
                     */
                    bool BooleanHasBeenSet() const;

                    /**
                     * 获取提取类型是数字
                     * @return Number 提取类型是数字
                     * 
                     */
                    double GetNumber() const;

                    /**
                     * 设置提取类型是数字
                     * @param _number 提取类型是数字
                     * 
                     */
                    void SetNumber(const double& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                private:

                    /**
                     * 提取的类型是文本
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 提取的内型是选项
                     */
                    std::vector<std::string> m_chosen;
                    bool m_chosenHasBeenSet;

                    /**
                     * 提取类型是布尔值
                     */
                    bool m_boolean;
                    bool m_booleanHasBeenSet;

                    /**
                     * 提取类型是数字
                     */
                    double m_number;
                    bool m_numberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_AICALLEXTRACTRESULTINFO_H_
