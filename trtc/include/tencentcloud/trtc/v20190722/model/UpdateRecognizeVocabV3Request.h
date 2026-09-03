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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATERECOGNIZEVOCABV3REQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATERECOGNIZEVOCABV3REQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/HotWord.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * UpdateRecognizeVocabV3请求参数结构体
                */
                class UpdateRecognizeVocabV3Request : public AbstractModel
                {
                public:
                    UpdateRecognizeVocabV3Request();
                    ~UpdateRecognizeVocabV3Request() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>词表 id</p>
                     * @return VocabId <p>词表 id</p>
                     * 
                     */
                    std::string GetVocabId() const;

                    /**
                     * 设置<p>词表 id</p>
                     * @param _vocabId <p>词表 id</p>
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
                     * 获取<p>客户维度唯一标识</p>
                     * @return SdkAppId <p>客户维度唯一标识</p>
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置<p>客户维度唯一标识</p>
                     * @param _sdkAppId <p>客户维度唯一标识</p>
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取<p>词表名称</p>
                     * @return Name <p>词表名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>词表名称</p>
                     * @param _name <p>词表名称</p>
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
                     * 获取<p>词表描述</p>
                     * @return Description <p>词表描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>词表描述</p>
                     * @param _description <p>词表描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>热词数组</p>
                     * @return WordWeights <p>热词数组</p>
                     * 
                     */
                    std::vector<HotWord> GetWordWeights() const;

                    /**
                     * 设置<p>热词数组</p>
                     * @param _wordWeights <p>热词数组</p>
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
                     * 获取<p>base64 编码的词表文本</p>
                     * @return WordWeightStr <p>base64 编码的词表文本</p>
                     * 
                     */
                    std::string GetWordWeightStr() const;

                    /**
                     * 设置<p>base64 编码的词表文本</p>
                     * @param _wordWeightStr <p>base64 编码的词表文本</p>
                     * 
                     */
                    void SetWordWeightStr(const std::string& _wordWeightStr);

                    /**
                     * 判断参数 WordWeightStr 是否已赋值
                     * @return WordWeightStr 是否已赋值
                     * 
                     */
                    bool WordWeightStrHasBeenSet() const;

                private:

                    /**
                     * <p>词表 id</p>
                     */
                    std::string m_vocabId;
                    bool m_vocabIdHasBeenSet;

                    /**
                     * <p>客户维度唯一标识</p>
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * <p>词表名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>词表描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>热词数组</p>
                     */
                    std::vector<HotWord> m_wordWeights;
                    bool m_wordWeightsHasBeenSet;

                    /**
                     * <p>base64 编码的词表文本</p>
                     */
                    std::string m_wordWeightStr;
                    bool m_wordWeightStrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATERECOGNIZEVOCABV3REQUEST_H_
