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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_ZHTONEWORDSINFO_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_ZHTONEWORDSINFO_H_

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
                * 承接语气词
                */
                class ZHToneWordsInfo : public AbstractModel
                {
                public:
                    ZHToneWordsInfo();
                    ~ZHToneWordsInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取中性词列表
                     * @return Neutral 中性词列表
                     * 
                     */
                    std::vector<std::string> GetNeutral() const;

                    /**
                     * 设置中性词列表
                     * @param _neutral 中性词列表
                     * 
                     */
                    void SetNeutral(const std::vector<std::string>& _neutral);

                    /**
                     * 判断参数 Neutral 是否已赋值
                     * @return Neutral 是否已赋值
                     * 
                     */
                    bool NeutralHasBeenSet() const;

                    /**
                     * 获取正面词列表
                     * @return Positive 正面词列表
                     * 
                     */
                    std::vector<std::string> GetPositive() const;

                    /**
                     * 设置正面词列表
                     * @param _positive 正面词列表
                     * 
                     */
                    void SetPositive(const std::vector<std::string>& _positive);

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     * 
                     */
                    bool PositiveHasBeenSet() const;

                    /**
                     * 获取负面词列表
                     * @return Negative 负面词列表
                     * 
                     */
                    std::vector<std::string> GetNegative() const;

                    /**
                     * 设置负面词列表
                     * @param _negative 负面词列表
                     * 
                     */
                    void SetNegative(const std::vector<std::string>& _negative);

                    /**
                     * 判断参数 Negative 是否已赋值
                     * @return Negative 是否已赋值
                     * 
                     */
                    bool NegativeHasBeenSet() const;

                private:

                    /**
                     * 中性词列表
                     */
                    std::vector<std::string> m_neutral;
                    bool m_neutralHasBeenSet;

                    /**
                     * 正面词列表
                     */
                    std::vector<std::string> m_positive;
                    bool m_positiveHasBeenSet;

                    /**
                     * 负面词列表
                     */
                    std::vector<std::string> m_negative;
                    bool m_negativeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_ZHTONEWORDSINFO_H_
