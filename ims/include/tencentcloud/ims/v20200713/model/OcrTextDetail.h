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

#ifndef TENCENTCLOUD_IMS_V20200713_MODEL_OCRTEXTDETAIL_H_
#define TENCENTCLOUD_IMS_V20200713_MODEL_OCRTEXTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20200713/model/Location.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            namespace Model
            {
                /**
                * OCR文本结果详情
                */
                class OcrTextDetail : public AbstractModel
                {
                public:
                    OcrTextDetail();
                    ~OcrTextDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取OCR文本内容
                     * @return Text OCR文本内容
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置OCR文本内容
                     * @param _text OCR文本内容
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
                     * 获取恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     * @return Label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     * @param _label 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取仅当Label为Custom自定义关键词时有效，表示自定义库id
                     * @return LibId 仅当Label为Custom自定义关键词时有效，表示自定义库id
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置仅当Label为Custom自定义关键词时有效，表示自定义库id
                     * @param _libId 仅当Label为Custom自定义关键词时有效，表示自定义库id
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取仅当Label为Custom自定义关键词时有效，表示自定义库名称
                     * @return LibName 仅当Label为Custom自定义关键词时有效，表示自定义库名称
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置仅当Label为Custom自定义关键词时有效，表示自定义库名称
                     * @param _libName 仅当Label为Custom自定义关键词时有效，表示自定义库名称
                     * 
                     */
                    void SetLibName(const std::string& _libName);

                    /**
                     * 判断参数 LibName 是否已赋值
                     * @return LibName 是否已赋值
                     * 
                     */
                    bool LibNameHasBeenSet() const;

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
                     * 获取OCR位置
                     * @return Location OCR位置
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置OCR位置
                     * @param _location OCR位置
                     * 
                     */
                    void SetLocation(const Location& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取OCR文本识别置信度
                     * @return Rate OCR文本识别置信度
                     * 
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置OCR文本识别置信度
                     * @param _rate OCR文本识别置信度
                     * 
                     */
                    void SetRate(const uint64_t& _rate);

                    /**
                     * 判断参数 Rate 是否已赋值
                     * @return Rate 是否已赋值
                     * 
                     */
                    bool RateHasBeenSet() const;

                    /**
                     * 获取OCR文本命中的二级标签
                     * @return SubLabel OCR文本命中的二级标签
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置OCR文本命中的二级标签
                     * @param _subLabel OCR文本命中的二级标签
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                private:

                    /**
                     * OCR文本内容
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 恶意标签，Normal：正常，Porn：色情，Abuse：谩骂，Ad：广告，Custom：自定义词库。
以及令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 仅当Label为Custom自定义关键词时有效，表示自定义库id
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 仅当Label为Custom自定义关键词时有效，表示自定义库名称
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 该标签下命中的关键词
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 该标签模型命中的分值
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * OCR位置
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * OCR文本识别置信度
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * OCR文本命中的二级标签
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_MODEL_OCRTEXTDETAIL_H_
