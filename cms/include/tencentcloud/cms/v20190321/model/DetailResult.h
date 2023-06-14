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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_DETAILRESULT_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_DETAILRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * 文本返回的详细结果
                */
                class DetailResult : public AbstractModel
                {
                public:
                    DetailResult();
                    ~DetailResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该标签下命中的关键词
                     * @return Keywords 该标签下命中的关键词
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置该标签下命中的关键词
                     * @param _keywords 该标签下命中的关键词
                     * 
                     */
                    void SetKeywords(const std::vector<std::string>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     * @return EvilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     * 
                     */
                    uint64_t GetEvilType() const;

                    /**
                     * 设置恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     * @param _evilType 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     * 
                     */
                    void SetEvilType(const uint64_t& _evilType);

                    /**
                     * 判断参数 EvilType 是否已赋值
                     * @return EvilType 是否已赋值
                     * 
                     */
                    bool EvilTypeHasBeenSet() const;

                    /**
                     * 获取该标签模型命中的分值
                     * @return Score 该标签模型命中的分值
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置该标签模型命中的分值
                     * @param _score 该标签模型命中的分值
                     * 
                     */
                    void SetScore(const uint64_t& _score);

                    /**
                     * 判断参数 Score 是否已赋值
                     * @return Score 是否已赋值
                     * 
                     */
                    bool ScoreHasBeenSet() const;

                    /**
                     * 获取恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     * @return EvilLabel 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     * 
                     */
                    std::string GetEvilLabel() const;

                    /**
                     * 设置恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     * @param _evilLabel 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     * 
                     */
                    void SetEvilLabel(const std::string& _evilLabel);

                    /**
                     * 判断参数 EvilLabel 是否已赋值
                     * @return EvilLabel 是否已赋值
                     * 
                     */
                    bool EvilLabelHasBeenSet() const;

                private:

                    /**
                     * 该标签下命中的关键词
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 恶意类型
100：正常
20001：政治
20002：色情 
20006：涉毒违法
20007：谩骂
20105：广告引流 
24001：暴恐
                     */
                    uint64_t m_evilType;
                    bool m_evilTypeHasBeenSet;

                    /**
                     * 该标签模型命中的分值
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Polity：涉政，Porn：色情，Illegal：违法，Abuse：谩骂，Terror：暴恐，Ad：广告，Custom：自定义关键词
                     */
                    std::string m_evilLabel;
                    bool m_evilLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_DETAILRESULT_H_
