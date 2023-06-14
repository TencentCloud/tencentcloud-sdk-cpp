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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/FaceConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/OcrFullTextConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/OcrWordsConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/AsrFullTextConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/AsrWordsConfigureInfo.h>
#include <tencentcloud/mps/v20190612/model/TranslateConfigureInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreateAIRecognitionTemplate请求参数结构体
                */
                class CreateAIRecognitionTemplateRequest : public AbstractModel
                {
                public:
                    CreateAIRecognitionTemplateRequest();
                    ~CreateAIRecognitionTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频内容识别模板名称，长度限制：64 个字符。
                     * @return Name 视频内容识别模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置视频内容识别模板名称，长度限制：64 个字符。
                     * @param _name 视频内容识别模板名称，长度限制：64 个字符。
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
                     * 获取视频内容识别模板描述信息，长度限制：256 个字符。
                     * @return Comment 视频内容识别模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置视频内容识别模板描述信息，长度限制：256 个字符。
                     * @param _comment 视频内容识别模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    void SetComment(const std::string& _comment);

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取人脸识别控制参数。
                     * @return FaceConfigure 人脸识别控制参数。
                     * 
                     */
                    FaceConfigureInfo GetFaceConfigure() const;

                    /**
                     * 设置人脸识别控制参数。
                     * @param _faceConfigure 人脸识别控制参数。
                     * 
                     */
                    void SetFaceConfigure(const FaceConfigureInfo& _faceConfigure);

                    /**
                     * 判断参数 FaceConfigure 是否已赋值
                     * @return FaceConfigure 是否已赋值
                     * 
                     */
                    bool FaceConfigureHasBeenSet() const;

                    /**
                     * 获取文本全文识别控制参数。
                     * @return OcrFullTextConfigure 文本全文识别控制参数。
                     * 
                     */
                    OcrFullTextConfigureInfo GetOcrFullTextConfigure() const;

                    /**
                     * 设置文本全文识别控制参数。
                     * @param _ocrFullTextConfigure 文本全文识别控制参数。
                     * 
                     */
                    void SetOcrFullTextConfigure(const OcrFullTextConfigureInfo& _ocrFullTextConfigure);

                    /**
                     * 判断参数 OcrFullTextConfigure 是否已赋值
                     * @return OcrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool OcrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取文本关键词识别控制参数。
                     * @return OcrWordsConfigure 文本关键词识别控制参数。
                     * 
                     */
                    OcrWordsConfigureInfo GetOcrWordsConfigure() const;

                    /**
                     * 设置文本关键词识别控制参数。
                     * @param _ocrWordsConfigure 文本关键词识别控制参数。
                     * 
                     */
                    void SetOcrWordsConfigure(const OcrWordsConfigureInfo& _ocrWordsConfigure);

                    /**
                     * 判断参数 OcrWordsConfigure 是否已赋值
                     * @return OcrWordsConfigure 是否已赋值
                     * 
                     */
                    bool OcrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取语音全文识别控制参数。
                     * @return AsrFullTextConfigure 语音全文识别控制参数。
                     * 
                     */
                    AsrFullTextConfigureInfo GetAsrFullTextConfigure() const;

                    /**
                     * 设置语音全文识别控制参数。
                     * @param _asrFullTextConfigure 语音全文识别控制参数。
                     * 
                     */
                    void SetAsrFullTextConfigure(const AsrFullTextConfigureInfo& _asrFullTextConfigure);

                    /**
                     * 判断参数 AsrFullTextConfigure 是否已赋值
                     * @return AsrFullTextConfigure 是否已赋值
                     * 
                     */
                    bool AsrFullTextConfigureHasBeenSet() const;

                    /**
                     * 获取语音关键词识别控制参数。
                     * @return AsrWordsConfigure 语音关键词识别控制参数。
                     * 
                     */
                    AsrWordsConfigureInfo GetAsrWordsConfigure() const;

                    /**
                     * 设置语音关键词识别控制参数。
                     * @param _asrWordsConfigure 语音关键词识别控制参数。
                     * 
                     */
                    void SetAsrWordsConfigure(const AsrWordsConfigureInfo& _asrWordsConfigure);

                    /**
                     * 判断参数 AsrWordsConfigure 是否已赋值
                     * @return AsrWordsConfigure 是否已赋值
                     * 
                     */
                    bool AsrWordsConfigureHasBeenSet() const;

                    /**
                     * 获取语音翻译控制参数。
                     * @return TranslateConfigure 语音翻译控制参数。
                     * 
                     */
                    TranslateConfigureInfo GetTranslateConfigure() const;

                    /**
                     * 设置语音翻译控制参数。
                     * @param _translateConfigure 语音翻译控制参数。
                     * 
                     */
                    void SetTranslateConfigure(const TranslateConfigureInfo& _translateConfigure);

                    /**
                     * 判断参数 TranslateConfigure 是否已赋值
                     * @return TranslateConfigure 是否已赋值
                     * 
                     */
                    bool TranslateConfigureHasBeenSet() const;

                private:

                    /**
                     * 视频内容识别模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 视频内容识别模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 人脸识别控制参数。
                     */
                    FaceConfigureInfo m_faceConfigure;
                    bool m_faceConfigureHasBeenSet;

                    /**
                     * 文本全文识别控制参数。
                     */
                    OcrFullTextConfigureInfo m_ocrFullTextConfigure;
                    bool m_ocrFullTextConfigureHasBeenSet;

                    /**
                     * 文本关键词识别控制参数。
                     */
                    OcrWordsConfigureInfo m_ocrWordsConfigure;
                    bool m_ocrWordsConfigureHasBeenSet;

                    /**
                     * 语音全文识别控制参数。
                     */
                    AsrFullTextConfigureInfo m_asrFullTextConfigure;
                    bool m_asrFullTextConfigureHasBeenSet;

                    /**
                     * 语音关键词识别控制参数。
                     */
                    AsrWordsConfigureInfo m_asrWordsConfigure;
                    bool m_asrWordsConfigureHasBeenSet;

                    /**
                     * 语音翻译控制参数。
                     */
                    TranslateConfigureInfo m_translateConfigure;
                    bool m_translateConfigureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEAIRECOGNITIONTEMPLATEREQUEST_H_
