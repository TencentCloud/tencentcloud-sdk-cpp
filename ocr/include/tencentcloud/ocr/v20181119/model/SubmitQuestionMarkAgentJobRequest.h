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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONMARKAGENTJOBREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONMARKAGENTJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * SubmitQuestionMarkAgentJob请求参数结构体
                */
                class SubmitQuestionMarkAgentJobRequest : public AbstractModel
                {
                public:
                    SubmitQuestionMarkAgentJobRequest();
                    ~SubmitQuestionMarkAgentJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * @return ImageBase64 <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * @param _imageBase64 <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * @return ImageUrl <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * @param _imageUrl <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * 
                     */
                    void SetImageUrl(const std::string& _imageUrl);

                    /**
                     * 判断参数 ImageUrl 是否已赋值
                     * @return ImageUrl 是否已赋值
                     * 
                     */
                    bool ImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * @return PdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * 
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * @param _pdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     * 
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * 
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>表示整张试卷批改需要先切题，默认为false</p>
                     * @return BoolSingleQuestion <p>表示整张试卷批改需要先切题，默认为false</p>
                     * @deprecated
                     */
                    bool GetBoolSingleQuestion() const;

                    /**
                     * 设置<p>表示整张试卷批改需要先切题，默认为false</p>
                     * @param _boolSingleQuestion <p>表示整张试卷批改需要先切题，默认为false</p>
                     * @deprecated
                     */
                    void SetBoolSingleQuestion(const bool& _boolSingleQuestion);

                    /**
                     * 判断参数 BoolSingleQuestion 是否已赋值
                     * @return BoolSingleQuestion 是否已赋值
                     * @deprecated
                     */
                    bool BoolSingleQuestionHasBeenSet() const;

                    /**
                     * 获取<p>默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢</p>
                     * @return EnableDeepThink <p>默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢</p>
                     * @deprecated
                     */
                    bool GetEnableDeepThink() const;

                    /**
                     * 设置<p>默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢</p>
                     * @param _enableDeepThink <p>默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢</p>
                     * @deprecated
                     */
                    void SetEnableDeepThink(const bool& _enableDeepThink);

                    /**
                     * 判断参数 EnableDeepThink 是否已赋值
                     * @return EnableDeepThink 是否已赋值
                     * @deprecated
                     */
                    bool EnableDeepThinkHasBeenSet() const;

                    /**
                     * 获取<p>题目信息输出配置，当key对应为true表示开启配置开关。</p><p>当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；<br>当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；<br>当key为StepCorrection  value为true表示启用步骤级批改；</p><p> 设置方式参考  {&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p><p>参数格式：{&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p>
                     * @return QuestionConfigMap <p>题目信息输出配置，当key对应为true表示开启配置开关。</p><p>当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；<br>当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；<br>当key为StepCorrection  value为true表示启用步骤级批改；</p><p> 设置方式参考  {&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p><p>参数格式：{&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p>
                     * 
                     */
                    std::string GetQuestionConfigMap() const;

                    /**
                     * 设置<p>题目信息输出配置，当key对应为true表示开启配置开关。</p><p>当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；<br>当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；<br>当key为StepCorrection  value为true表示启用步骤级批改；</p><p> 设置方式参考  {&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p><p>参数格式：{&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p>
                     * @param _questionConfigMap <p>题目信息输出配置，当key对应为true表示开启配置开关。</p><p>当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；<br>当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；<br>当key为StepCorrection  value为true表示启用步骤级批改；</p><p> 设置方式参考  {&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p><p>参数格式：{&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p>
                     * 
                     */
                    void SetQuestionConfigMap(const std::string& _questionConfigMap);

                    /**
                     * 判断参数 QuestionConfigMap 是否已赋值
                     * @return QuestionConfigMap 是否已赋值
                     * 
                     */
                    bool QuestionConfigMapHasBeenSet() const;

                    /**
                     * 获取<p>仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中</p>
                     * @return ReferenceAnswer <p>仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中</p>
                     * 
                     */
                    std::string GetReferenceAnswer() const;

                    /**
                     * 设置<p>仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中</p>
                     * @param _referenceAnswer <p>仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中</p>
                     * 
                     */
                    void SetReferenceAnswer(const std::string& _referenceAnswer);

                    /**
                     * 判断参数 ReferenceAnswer 是否已赋值
                     * @return ReferenceAnswer 是否已赋值
                     * 
                     */
                    bool ReferenceAnswerHasBeenSet() const;

                    /**
                     * 获取<p>图片/PDF的 Base64 列表值，最多三张。每张图片要求参考ImageBase64  1. 如果ImageBase64List或者ImageUrlList 都没值则取ImageBase64 或者ImageUrl  2.如果ImageBase64List或者ImageUrlList 有一个值，则不取ImageBase64 或者ImageUrl值，优先去list  3.如果ImageBase64List或者ImageUrlList 都有值，则取ImageUrlList</p>
                     * @return ImageBase64List <p>图片/PDF的 Base64 列表值，最多三张。每张图片要求参考ImageBase64  1. 如果ImageBase64List或者ImageUrlList 都没值则取ImageBase64 或者ImageUrl  2.如果ImageBase64List或者ImageUrlList 有一个值，则不取ImageBase64 或者ImageUrl值，优先去list  3.如果ImageBase64List或者ImageUrlList 都有值，则取ImageUrlList</p>
                     * 
                     */
                    std::vector<std::string> GetImageBase64List() const;

                    /**
                     * 设置<p>图片/PDF的 Base64 列表值，最多三张。每张图片要求参考ImageBase64  1. 如果ImageBase64List或者ImageUrlList 都没值则取ImageBase64 或者ImageUrl  2.如果ImageBase64List或者ImageUrlList 有一个值，则不取ImageBase64 或者ImageUrl值，优先去list  3.如果ImageBase64List或者ImageUrlList 都有值，则取ImageUrlList</p>
                     * @param _imageBase64List <p>图片/PDF的 Base64 列表值，最多三张。每张图片要求参考ImageBase64  1. 如果ImageBase64List或者ImageUrlList 都没值则取ImageBase64 或者ImageUrl  2.如果ImageBase64List或者ImageUrlList 有一个值，则不取ImageBase64 或者ImageUrl值，优先去list  3.如果ImageBase64List或者ImageUrlList 都有值，则取ImageUrlList</p>
                     * 
                     */
                    void SetImageBase64List(const std::vector<std::string>& _imageBase64List);

                    /**
                     * 判断参数 ImageBase64List 是否已赋值
                     * @return ImageBase64List 是否已赋值
                     * 
                     */
                    bool ImageBase64ListHasBeenSet() const;

                    /**
                     * 获取<p>图片/PDF的 Url 地址Base64 列表值，最多三张。每张图片要求参考ImageUrl。  图片生效规则同ImageBase64List</p>
                     * @return ImageUrlList <p>图片/PDF的 Url 地址Base64 列表值，最多三张。每张图片要求参考ImageUrl。  图片生效规则同ImageBase64List</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlList() const;

                    /**
                     * 设置<p>图片/PDF的 Url 地址Base64 列表值，最多三张。每张图片要求参考ImageUrl。  图片生效规则同ImageBase64List</p>
                     * @param _imageUrlList <p>图片/PDF的 Url 地址Base64 列表值，最多三张。每张图片要求参考ImageUrl。  图片生效规则同ImageBase64List</p>
                     * 
                     */
                    void SetImageUrlList(const std::vector<std::string>& _imageUrlList);

                    /**
                     * 判断参数 ImageUrlList 是否已赋值
                     * @return ImageUrlList 是否已赋值
                     * 
                     */
                    bool ImageUrlListHasBeenSet() const;

                private:

                    /**
                     * <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。</p>
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>表示整张试卷批改需要先切题，默认为false</p>
                     */
                    bool m_boolSingleQuestion;
                    bool m_boolSingleQuestionHasBeenSet;

                    /**
                     * <p>默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢</p>
                     */
                    bool m_enableDeepThink;
                    bool m_enableDeepThinkHasBeenSet;

                    /**
                     * <p>题目信息输出配置，当key对应为true表示开启配置开关。</p><p>当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；<br>当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；<br>当key为StepCorrection  value为true表示启用步骤级批改；</p><p> 设置方式参考  {&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p><p>参数格式：{&quot;KnowledgePoints&quot;:true,&quot;TrueAnswer&quot;:true}</p>
                     */
                    std::string m_questionConfigMap;
                    bool m_questionConfigMapHasBeenSet;

                    /**
                     * <p>仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中</p>
                     */
                    std::string m_referenceAnswer;
                    bool m_referenceAnswerHasBeenSet;

                    /**
                     * <p>图片/PDF的 Base64 列表值，最多三张。每张图片要求参考ImageBase64  1. 如果ImageBase64List或者ImageUrlList 都没值则取ImageBase64 或者ImageUrl  2.如果ImageBase64List或者ImageUrlList 有一个值，则不取ImageBase64 或者ImageUrl值，优先去list  3.如果ImageBase64List或者ImageUrlList 都有值，则取ImageUrlList</p>
                     */
                    std::vector<std::string> m_imageBase64List;
                    bool m_imageBase64ListHasBeenSet;

                    /**
                     * <p>图片/PDF的 Url 地址Base64 列表值，最多三张。每张图片要求参考ImageUrl。  图片生效规则同ImageBase64List</p>
                     */
                    std::vector<std::string> m_imageUrlList;
                    bool m_imageUrlListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONMARKAGENTJOBREQUEST_H_
