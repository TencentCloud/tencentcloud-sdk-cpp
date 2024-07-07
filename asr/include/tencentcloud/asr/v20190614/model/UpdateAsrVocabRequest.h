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

#ifndef TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRVOCABREQUEST_H_
#define TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRVOCABREQUEST_H_

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
                * UpdateAsrVocab请求参数结构体
                */
                class UpdateAsrVocabRequest : public AbstractModel
                {
                public:
                    UpdateAsrVocabRequest();
                    ~UpdateAsrVocabRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取热词表ID
                     * @return VocabId 热词表ID
                     * 
                     */
                    std::string GetVocabId() const;

                    /**
                     * 设置热词表ID
                     * @param _vocabId 热词表ID
                     * 
                     */
                    void SetVocabId(const std::string& _vocabId);

                    /**
                     * 判断参数 VocabId 是否已赋值
                     * @return VocabId 是否已赋值
                     * 
                     */
                    bool VocabIdHasBeenSet() const;

                    /**
                     * 获取热词表名称，长度在1-255之间
                     * @return Name 热词表名称，长度在1-255之间
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置热词表名称，长度在1-255之间
                     * @param _name 热词表名称，长度在1-255之间
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
                     * 获取词权重数组，包含全部的热词和对应的权重。每个热词的长度不大于10个汉字或30个英文字符，权重为[1,11]之间整数或100，数组长度不大于1000 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * @return WordWeights 词权重数组，包含全部的热词和对应的权重。每个热词的长度不大于10个汉字或30个英文字符，权重为[1,11]之间整数或100，数组长度不大于1000 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * 
                     */
                    std::vector<HotWord> GetWordWeights() const;

                    /**
                     * 设置词权重数组，包含全部的热词和对应的权重。每个热词的长度不大于10个汉字或30个英文字符，权重为[1,11]之间整数或100，数组长度不大于1000 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * @param _wordWeights 词权重数组，包含全部的热词和对应的权重。每个热词的长度不大于10个汉字或30个英文字符，权重为[1,11]之间整数或100，数组长度不大于1000 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * 
                     */
                    void SetWordWeights(const std::vector<HotWord>& _wordWeights);

                    /**
                     * 判断参数 WordWeights 是否已赋值
                     * @return WordWeights 是否已赋值
                     * 
                     */
                    bool WordWeightsHasBeenSet() const;

                    /**
                     * 获取词权重文件（纯文本文件）的二进制base64编码，以行分隔，每行的格式为word|weight，即以英文符号|为分割，左边为词，右边为权重，如：你好|5。
当用户传此参数（参数长度大于0），即以此参数解析词权重，WordWeights会被忽略
 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * @return WordWeightStr 词权重文件（纯文本文件）的二进制base64编码，以行分隔，每行的格式为word|weight，即以英文符号|为分割，左边为词，右边为权重，如：你好|5。
当用户传此参数（参数长度大于0），即以此参数解析词权重，WordWeights会被忽略
 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * 
                     */
                    std::string GetWordWeightStr() const;

                    /**
                     * 设置词权重文件（纯文本文件）的二进制base64编码，以行分隔，每行的格式为word|weight，即以英文符号|为分割，左边为词，右边为权重，如：你好|5。
当用户传此参数（参数长度大于0），即以此参数解析词权重，WordWeights会被忽略
 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * @param _wordWeightStr 词权重文件（纯文本文件）的二进制base64编码，以行分隔，每行的格式为word|weight，即以英文符号|为分割，左边为词，右边为权重，如：你好|5。
当用户传此参数（参数长度大于0），即以此参数解析词权重，WordWeights会被忽略
 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     * 
                     */
                    void SetWordWeightStr(const std::string& _wordWeightStr);

                    /**
                     * 判断参数 WordWeightStr 是否已赋值
                     * @return WordWeightStr 是否已赋值
                     * 
                     */
                    bool WordWeightStrHasBeenSet() const;

                    /**
                     * 获取热词表描述，长度在0-1000之间
                     * @return Description 热词表描述，长度在0-1000之间
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置热词表描述，长度在0-1000之间
                     * @param _description 热词表描述，长度在0-1000之间
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 热词表ID
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                    /**
                     * 热词表名称，长度在1-255之间
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 词权重数组，包含全部的热词和对应的权重。每个热词的长度不大于10个汉字或30个英文字符，权重为[1,11]之间整数或100，数组长度不大于1000 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     */
                    std::vector<HotWord> m_wordWeights;
                    bool m_wordWeightsHasBeenSet;

                    /**
                     * 词权重文件（纯文本文件）的二进制base64编码，以行分隔，每行的格式为word|weight，即以英文符号|为分割，左边为词，右边为权重，如：你好|5。
当用户传此参数（参数长度大于0），即以此参数解析词权重，WordWeights会被忽略
 (注意：如果仅更新热词表名称或者描述字段，请求不用带本参数）
                     */
                    std::string m_wordWeightStr;
                    bool m_wordWeightStrHasBeenSet;

                    /**
                     * 热词表描述，长度在0-1000之间
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_MODEL_UPDATEASRVOCABREQUEST_H_
