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

#ifndef TENCENTCLOUD_IMS_V20201229_MODEL_OCRTEXTDETAIL_H_
#define TENCENTCLOUD_IMS_V20201229_MODEL_OCRTEXTDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ims/v20201229/model/Location.h>
#include <tencentcloud/ims/v20201229/model/OcrHitInfo.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20201229
        {
            namespace Model
            {
                /**
                * 用于返回OCR文本结果详情，图片中的文本越多，可能导致接口返回时间增加。
                */
                class OcrTextDetail : public AbstractModel
                {
                public:
                    OcrTextDetail();
                    ~OcrTextDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该字段用于返回OCR识别出的文本内容。<br>备注：OCR文本识别上限在**5000字节内**。
                     * @return Text 该字段用于返回OCR识别出的文本内容。<br>备注：OCR文本识别上限在**5000字节内**。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置该字段用于返回OCR识别出的文本内容。<br>备注：OCR文本识别上限在**5000字节内**。
                     * @param _text 该字段用于返回OCR识别出的文本内容。<br>备注：OCR文本识别上限在**5000字节内**。
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
                     * 获取该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * @return Label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     * @param _label 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
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
                     * 获取该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     * @return LibId 该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     * @param _libId 该字段用于返回自定义库的ID，以方便自定义库管理和配置。
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
                     * 获取该字段用于返回自定义库的名称，以方便自定义库管理和配置。
                     * @return LibName 该字段用于返回自定义库的名称，以方便自定义库管理和配置。
                     * 
                     */
                    std::string GetLibName() const;

                    /**
                     * 设置该字段用于返回自定义库的名称，以方便自定义库管理和配置。
                     * @param _libName 该字段用于返回自定义库的名称，以方便自定义库管理和配置。
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
                     * 获取该参数用于返回在当前label下命中的关键词。
                     * @return Keywords 该参数用于返回在当前label下命中的关键词。
                     * 
                     */
                    std::vector<std::string> GetKeywords() const;

                    /**
                     * 设置该参数用于返回在当前label下命中的关键词。
                     * @param _keywords 该参数用于返回在当前label下命中的关键词。
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
                     * 获取该参数用于返回在当前恶意标签下模型命中的分值，取值为**0-100**；分数越高，代表当前场景越符合该恶意标签所对应的场景。
                     * @return Score 该参数用于返回在当前恶意标签下模型命中的分值，取值为**0-100**；分数越高，代表当前场景越符合该恶意标签所对应的场景。
                     * 
                     */
                    uint64_t GetScore() const;

                    /**
                     * 设置该参数用于返回在当前恶意标签下模型命中的分值，取值为**0-100**；分数越高，代表当前场景越符合该恶意标签所对应的场景。
                     * @param _score 该参数用于返回在当前恶意标签下模型命中的分值，取值为**0-100**；分数越高，代表当前场景越符合该恶意标签所对应的场景。
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
                     * 获取该参数用于返回OCR检测框在图片中的位置（左上角xy坐标、长宽、旋转角度），以方便快速定位识别文字的相关信息。
                     * @return Location 该参数用于返回OCR检测框在图片中的位置（左上角xy坐标、长宽、旋转角度），以方便快速定位识别文字的相关信息。
                     * 
                     */
                    Location GetLocation() const;

                    /**
                     * 设置该参数用于返回OCR检测框在图片中的位置（左上角xy坐标、长宽、旋转角度），以方便快速定位识别文字的相关信息。
                     * @param _location 该参数用于返回OCR检测框在图片中的位置（左上角xy坐标、长宽、旋转角度），以方便快速定位识别文字的相关信息。
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
                     * 获取该参数用于返回OCR文本识别结果的置信度，取值在**0**（**置信度最低**）-**100**（**置信度最高**），越高代表对应图像越有可能是识别出的文字；如：*你好 99*，则表明OCR识别框内的文字大概率是”你好“。
                     * @return Rate 该参数用于返回OCR文本识别结果的置信度，取值在**0**（**置信度最低**）-**100**（**置信度最高**），越高代表对应图像越有可能是识别出的文字；如：*你好 99*，则表明OCR识别框内的文字大概率是”你好“。
                     * 
                     */
                    uint64_t GetRate() const;

                    /**
                     * 设置该参数用于返回OCR文本识别结果的置信度，取值在**0**（**置信度最低**）-**100**（**置信度最高**），越高代表对应图像越有可能是识别出的文字；如：*你好 99*，则表明OCR识别框内的文字大概率是”你好“。
                     * @param _rate 该参数用于返回OCR文本识别结果的置信度，取值在**0**（**置信度最低**）-**100**（**置信度最高**），越高代表对应图像越有可能是识别出的文字；如：*你好 99*，则表明OCR识别框内的文字大概率是”你好“。
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
                     * 获取该字段用于返回检测结果所对应的恶意二级标签。
                     * @return SubLabel 该字段用于返回检测结果所对应的恶意二级标签。
                     * 
                     */
                    std::string GetSubLabel() const;

                    /**
                     * 设置该字段用于返回检测结果所对应的恶意二级标签。
                     * @param _subLabel 该字段用于返回检测结果所对应的恶意二级标签。
                     * 
                     */
                    void SetSubLabel(const std::string& _subLabel);

                    /**
                     * 判断参数 SubLabel 是否已赋值
                     * @return SubLabel 是否已赋值
                     * 
                     */
                    bool SubLabelHasBeenSet() const;

                    /**
                     * 获取关键词命中位置信息
                     * @return HitInfos 关键词命中位置信息
                     * 
                     */
                    std::vector<OcrHitInfo> GetHitInfos() const;

                    /**
                     * 设置关键词命中位置信息
                     * @param _hitInfos 关键词命中位置信息
                     * 
                     */
                    void SetHitInfos(const std::vector<OcrHitInfo>& _hitInfos);

                    /**
                     * 判断参数 HitInfos 是否已赋值
                     * @return HitInfos 是否已赋值
                     * 
                     */
                    bool HitInfosHasBeenSet() const;

                private:

                    /**
                     * 该字段用于返回OCR识别出的文本内容。<br>备注：OCR文本识别上限在**5000字节内**。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 该字段用于返回检测结果所对应的恶意标签。<br>返回值：**Normal**：正常，**Porn**：色情，**Abuse**：谩骂，**Ad**：广告；以及其他令人反感、不安全或不适宜的内容类型。
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 该字段用于返回自定义库的ID，以方便自定义库管理和配置。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 该字段用于返回自定义库的名称，以方便自定义库管理和配置。
                     */
                    std::string m_libName;
                    bool m_libNameHasBeenSet;

                    /**
                     * 该参数用于返回在当前label下命中的关键词。
                     */
                    std::vector<std::string> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 该参数用于返回在当前恶意标签下模型命中的分值，取值为**0-100**；分数越高，代表当前场景越符合该恶意标签所对应的场景。
                     */
                    uint64_t m_score;
                    bool m_scoreHasBeenSet;

                    /**
                     * 该参数用于返回OCR检测框在图片中的位置（左上角xy坐标、长宽、旋转角度），以方便快速定位识别文字的相关信息。
                     */
                    Location m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 该参数用于返回OCR文本识别结果的置信度，取值在**0**（**置信度最低**）-**100**（**置信度最高**），越高代表对应图像越有可能是识别出的文字；如：*你好 99*，则表明OCR识别框内的文字大概率是”你好“。
                     */
                    uint64_t m_rate;
                    bool m_rateHasBeenSet;

                    /**
                     * 该字段用于返回检测结果所对应的恶意二级标签。
                     */
                    std::string m_subLabel;
                    bool m_subLabelHasBeenSet;

                    /**
                     * 关键词命中位置信息
                     */
                    std::vector<OcrHitInfo> m_hitInfos;
                    bool m_hitInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20201229_MODEL_OCRTEXTDETAIL_H_
