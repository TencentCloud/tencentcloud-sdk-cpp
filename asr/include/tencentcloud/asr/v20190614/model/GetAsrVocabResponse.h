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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABRESPONSE_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/asr/v20190614/model/HotWord.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            namespace Model
            {
                /**
                * GetAsrVocab返回参数结构体
                */
                class GetAsrVocabResponse : public AbstractModel
                {
                public:
                    GetAsrVocabResponse();
                    ~GetAsrVocabResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取热词表名称
                     * @return Name 热词表名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取热词表描述
                     * @return Description 热词表描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取热词表ID
                     * @return VocabId 热词表ID
                     * 
                     */
                    std::string GetVocabId() const;

                    /**
                     * 判断参数 VocabId 是否已赋值
                     * @return VocabId 是否已赋值
                     * 
                     */
                    bool VocabIdHasBeenSet() const;

                    /**
                     * 获取词权重列表
                     * @return WordWeights 词权重列表
                     * 
                     */
                    std::vector<HotWord> GetWordWeights() const;

                    /**
                     * 判断参数 WordWeights 是否已赋值
                     * @return WordWeights 是否已赋值
                     * 
                     */
                    bool WordWeightsHasBeenSet() const;

                    /**
                     * 获取词表创建时间
                     * @return CreateTime 词表创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取词表更新时间
                     * @return UpdateTime 词表更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态
                     * @return State 热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态
                     * 
                     */
                    int64_t GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 热词表名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 热词表描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 热词表ID
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                    /**
                     * 词权重列表
                     */
                    std::vector<HotWord> m_wordWeights;
                    bool m_wordWeightsHasBeenSet;

                    /**
                     * 词表创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 词表更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 热词表状态，1为默认状态即在识别时默认加载该热词表进行识别，0为初始状态
                     */
                    int64_t m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_GETASRVOCABRESPONSE_H_
