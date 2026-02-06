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
                     * 获取图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     * @return ImageBase64 图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     * @param _imageBase64 图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==
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
                     * 获取图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg
                     * @return ImageUrl 图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg
                     * 
                     */
                    std::string GetImageUrl() const;

                    /**
                     * 设置图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg
                     * @param _imageUrl 图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg
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
                     * 获取需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     * @return PdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     * 
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     * @param _pdfPageNumber 需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
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
                     * 获取表示整张试卷批改需要先切题，默认为false
                     * @return BoolSingleQuestion 表示整张试卷批改需要先切题，默认为false
                     * @deprecated
                     */
                    bool GetBoolSingleQuestion() const;

                    /**
                     * 设置表示整张试卷批改需要先切题，默认为false
                     * @param _boolSingleQuestion 表示整张试卷批改需要先切题，默认为false
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
                     * 获取默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢
                     * @return EnableDeepThink 默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢
                     * @deprecated
                     */
                    bool GetEnableDeepThink() const;

                    /**
                     * 设置默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢
                     * @param _enableDeepThink 默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢
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
                     * 获取题目信息输出配置，当key对应为true表示开启配置开关。     当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；当key为ReturnAnswerPosition  value为false表示不输出手写答案坐标（降低处理耗时，按需输出）； 设置方式参考  {"KnowledgePoints":true,"TrueAnswer":true}
                     * @return QuestionConfigMap 题目信息输出配置，当key对应为true表示开启配置开关。     当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；当key为ReturnAnswerPosition  value为false表示不输出手写答案坐标（降低处理耗时，按需输出）； 设置方式参考  {"KnowledgePoints":true,"TrueAnswer":true}
                     * 
                     */
                    std::string GetQuestionConfigMap() const;

                    /**
                     * 设置题目信息输出配置，当key对应为true表示开启配置开关。     当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；当key为ReturnAnswerPosition  value为false表示不输出手写答案坐标（降低处理耗时，按需输出）； 设置方式参考  {"KnowledgePoints":true,"TrueAnswer":true}
                     * @param _questionConfigMap 题目信息输出配置，当key对应为true表示开启配置开关。     当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；当key为ReturnAnswerPosition  value为false表示不输出手写答案坐标（降低处理耗时，按需输出）； 设置方式参考  {"KnowledgePoints":true,"TrueAnswer":true}
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
                     * 获取仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中
                     * @return ReferenceAnswer 仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中
                     * 
                     */
                    std::string GetReferenceAnswer() const;

                    /**
                     * 设置仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中
                     * @param _referenceAnswer 仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中
                     * 
                     */
                    void SetReferenceAnswer(const std::string& _referenceAnswer);

                    /**
                     * 判断参数 ReferenceAnswer 是否已赋值
                     * @return ReferenceAnswer 是否已赋值
                     * 
                     */
                    bool ReferenceAnswerHasBeenSet() const;

                private:

                    /**
                     * 图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * 图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg
                     */
                    std::string m_imageUrl;
                    bool m_imageUrlHasBeenSet;

                    /**
                     * 需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * 表示整张试卷批改需要先切题，默认为false
                     */
                    bool m_boolSingleQuestion;
                    bool m_boolSingleQuestionHasBeenSet;

                    /**
                     * 默认false 表示关闭深度思考  true 表示打开深度思考，更深层次推理分析，速度更慢
                     */
                    bool m_enableDeepThink;
                    bool m_enableDeepThinkHasBeenSet;

                    /**
                     * 题目信息输出配置，当key对应为true表示开启配置开关。     当key为KnowledgePoints value为true 表示输出每道题结构信息中输出知识点内容；当key为TrueAnswer  value为true 表示输出每道题的正确答案 ；当key为ReturnAnswerPosition  value为false表示不输出手写答案坐标（降低处理耗时，按需输出）； 设置方式参考  {"KnowledgePoints":true,"TrueAnswer":true}
                     */
                    std::string m_questionConfigMap;
                    bool m_questionConfigMapHasBeenSet;

                    /**
                     * 仅有单题有效，如果切题有多题则不生效，单题批改的时候作为参考答案输入到批改模型中
                     */
                    std::string m_referenceAnswer;
                    bool m_referenceAnswerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONMARKAGENTJOBREQUEST_H_
