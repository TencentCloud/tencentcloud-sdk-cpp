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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITMARKESSAYAGENTJOBREQUEST_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITMARKESSAYAGENTJOBREQUEST_H_

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
                * SubmitMarkEssayAgentJob请求参数结构体
                */
                class SubmitMarkEssayAgentJobRequest : public AbstractModel
                {
                public:
                    SubmitMarkEssayAgentJobRequest();
                    ~SubmitMarkEssayAgentJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * @return ImageBase64List <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * 
                     */
                    std::vector<std::string> GetImageBase64List() const;

                    /**
                     * 设置<p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     * @param _imageBase64List <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
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
                     * 获取<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * @return ImageUrlList <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * 
                     */
                    std::vector<std::string> GetImageUrlList() const;

                    /**
                     * 设置<p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * @param _imageUrlList <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     * 
                     */
                    void SetImageUrlList(const std::vector<std::string>& _imageUrlList);

                    /**
                     * 判断参数 ImageUrlList 是否已赋值
                     * @return ImageUrlList 是否已赋值
                     * 
                     */
                    bool ImageUrlListHasBeenSet() const;

                    /**
                     * 获取<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。 示例值：1</p>
                     * @return PdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。 示例值：1</p>
                     * @deprecated
                     */
                    int64_t GetPdfPageNumber() const;

                    /**
                     * 设置<p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。 示例值：1</p>
                     * @param _pdfPageNumber <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。 示例值：1</p>
                     * @deprecated
                     */
                    void SetPdfPageNumber(const int64_t& _pdfPageNumber);

                    /**
                     * 判断参数 PdfPageNumber 是否已赋值
                     * @return PdfPageNumber 是否已赋值
                     * @deprecated
                     */
                    bool PdfPageNumberHasBeenSet() const;

                    /**
                     * 获取<p>批改信息输出配置，当key对应为1表示开启配置开关。  当key为StructureAndContent  value为1 表示SentenceSuggest返回篇章结构和内容信息，默认只返回词汇、语句</p>
                     * @return QuestionConfigMap <p>批改信息输出配置，当key对应为1表示开启配置开关。  当key为StructureAndContent  value为1 表示SentenceSuggest返回篇章结构和内容信息，默认只返回词汇、语句</p>
                     * 
                     */
                    std::string GetQuestionConfigMap() const;

                    /**
                     * 设置<p>批改信息输出配置，当key对应为1表示开启配置开关。  当key为StructureAndContent  value为1 表示SentenceSuggest返回篇章结构和内容信息，默认只返回词汇、语句</p>
                     * @param _questionConfigMap <p>批改信息输出配置，当key对应为1表示开启配置开关。  当key为StructureAndContent  value为1 表示SentenceSuggest返回篇章结构和内容信息，默认只返回词汇、语句</p>
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
                     * 获取<p>agent支持的类型枚举,不同类型输出结果不一样，默认为0</p><p>0:表示中英文作文批改Agent</p><p>1:表示教辅试卷题库拆录Agent(支持拆录含解析与答案的教辅（解析、答案可与正文分置首尾，或与试题混排）、多页成套标准答案试卷及带有手写批注痕迹的试题)</p>
                     * @return AgentType <p>agent支持的类型枚举,不同类型输出结果不一样，默认为0</p><p>0:表示中英文作文批改Agent</p><p>1:表示教辅试卷题库拆录Agent(支持拆录含解析与答案的教辅（解析、答案可与正文分置首尾，或与试题混排）、多页成套标准答案试卷及带有手写批注痕迹的试题)</p>
                     * 
                     */
                    int64_t GetAgentType() const;

                    /**
                     * 设置<p>agent支持的类型枚举,不同类型输出结果不一样，默认为0</p><p>0:表示中英文作文批改Agent</p><p>1:表示教辅试卷题库拆录Agent(支持拆录含解析与答案的教辅（解析、答案可与正文分置首尾，或与试题混排）、多页成套标准答案试卷及带有手写批注痕迹的试题)</p>
                     * @param _agentType <p>agent支持的类型枚举,不同类型输出结果不一样，默认为0</p><p>0:表示中英文作文批改Agent</p><p>1:表示教辅试卷题库拆录Agent(支持拆录含解析与答案的教辅（解析、答案可与正文分置首尾，或与试题混排）、多页成套标准答案试卷及带有手写批注痕迹的试题)</p>
                     * 
                     */
                    void SetAgentType(const int64_t& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取<p>需要识别的页码范围（目前只有AgentType=1支持），单次调用最多支持100页。  参数格式：1-10   示例值：1-2</p>
                     * @return PageRange <p>需要识别的页码范围（目前只有AgentType=1支持），单次调用最多支持100页。  参数格式：1-10   示例值：1-2</p>
                     * 
                     */
                    std::string GetPageRange() const;

                    /**
                     * 设置<p>需要识别的页码范围（目前只有AgentType=1支持），单次调用最多支持100页。  参数格式：1-10   示例值：1-2</p>
                     * @param _pageRange <p>需要识别的页码范围（目前只有AgentType=1支持），单次调用最多支持100页。  参数格式：1-10   示例值：1-2</p>
                     * 
                     */
                    void SetPageRange(const std::string& _pageRange);

                    /**
                     * 判断参数 PageRange 是否已赋值
                     * @return PageRange 是否已赋值
                     * 
                     */
                    bool PageRangeHasBeenSet() const;

                private:

                    /**
                     * <p>图片/PDF的 Base64 值。要求Base64不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片的 ImageUrl、ImageBase64 必须提供一个，如果都提供，只使用 ImageUrl。  示例值：/9j/4AAQSkZJRg.....s97n//2Q==</p>
                     */
                    std::vector<std::string> m_imageBase64List;
                    bool m_imageBase64ListHasBeenSet;

                    /**
                     * <p>图片/PDF的 Url 地址。要求图片经Base64编码后不超过10M，分辨率建议600*800以上，支持PNG、JPG、JPEG、BMP、PDF格式。图片下载时间不超过 3 秒。图片存储于腾讯云的 Url 可保障更高的下载速度和稳定性，建议图片存储于腾讯云。非腾讯云存储的 Url 速度和稳定性可能受一定影响。  示例值：https://ocr-demo-1254418846.cos.ap-guangzhou.myqcloud.com/general/GeneralAccurateOCR/GeneralAccurateOCR1.jpg</p>
                     */
                    std::vector<std::string> m_imageUrlList;
                    bool m_imageUrlListHasBeenSet;

                    /**
                     * <p>需要识别的PDF页面的对应页码，仅支持PDF单页识别，默认值为1。 示例值：1</p>
                     */
                    int64_t m_pdfPageNumber;
                    bool m_pdfPageNumberHasBeenSet;

                    /**
                     * <p>批改信息输出配置，当key对应为1表示开启配置开关。  当key为StructureAndContent  value为1 表示SentenceSuggest返回篇章结构和内容信息，默认只返回词汇、语句</p>
                     */
                    std::string m_questionConfigMap;
                    bool m_questionConfigMapHasBeenSet;

                    /**
                     * <p>agent支持的类型枚举,不同类型输出结果不一样，默认为0</p><p>0:表示中英文作文批改Agent</p><p>1:表示教辅试卷题库拆录Agent(支持拆录含解析与答案的教辅（解析、答案可与正文分置首尾，或与试题混排）、多页成套标准答案试卷及带有手写批注痕迹的试题)</p>
                     */
                    int64_t m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * <p>需要识别的页码范围（目前只有AgentType=1支持），单次调用最多支持100页。  参数格式：1-10   示例值：1-2</p>
                     */
                    std::string m_pageRange;
                    bool m_pageRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITMARKESSAYAGENTJOBREQUEST_H_
