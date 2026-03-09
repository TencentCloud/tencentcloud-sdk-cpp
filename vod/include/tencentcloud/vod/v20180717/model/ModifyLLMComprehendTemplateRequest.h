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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYLLMCOMPREHENDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYLLMCOMPREHENDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendSummaryForUpdate.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendAsrForUpdate.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendFaceRecognitionForUpdate.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyLLMComprehendTemplate请求参数结构体
                */
                class ModifyLLMComprehendTemplateRequest : public AbstractModel
                {
                public:
                    ModifyLLMComprehendTemplateRequest();
                    ~ModifyLLMComprehendTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>大模型理解模板的唯一标识</p>
                     * @return Definition <p>大模型理解模板的唯一标识</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>大模型理解模板的唯一标识</p>
                     * @param _definition <p>大模型理解模板的唯一标识</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取<p>大模型解析模板名称，长度限制：64 个字符。</p>
                     * @return Name <p>大模型解析模板名称，长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>大模型解析模板名称，长度限制：64 个字符。</p>
                     * @param _name <p>大模型解析模板名称，长度限制：64 个字符。</p>
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
                     * 获取<p>大模型解析模板描述信息，长度限制：256 个字符。</p>
                     * @return Comment <p>大模型解析模板描述信息，长度限制：256 个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>大模型解析模板描述信息，长度限制：256 个字符。</p>
                     * @param _comment <p>大模型解析模板描述信息，长度限制：256 个字符。</p>
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
                     * 获取<p>解析模型，可选值为：</p><ul><li>Basic: 基础模型</li><li>Pro: 优化模型</li></ul>
                     * @return Model <p>解析模型，可选值为：</p><ul><li>Basic: 基础模型</li><li>Pro: 优化模型</li></ul>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>解析模型，可选值为：</p><ul><li>Basic: 基础模型</li><li>Pro: 优化模型</li></ul>
                     * @param _model <p>解析模型，可选值为：</p><ul><li>Basic: 基础模型</li><li>Pro: 优化模型</li></ul>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>分段摘要解析配置</p>
                     * @return Summary <p>分段摘要解析配置</p>
                     * 
                     */
                    LLMComprehendSummaryForUpdate GetSummary() const;

                    /**
                     * 设置<p>分段摘要解析配置</p>
                     * @param _summary <p>分段摘要解析配置</p>
                     * 
                     */
                    void SetSummary(const LLMComprehendSummaryForUpdate& _summary);

                    /**
                     * 判断参数 Summary 是否已赋值
                     * @return Summary 是否已赋值
                     * 
                     */
                    bool SummaryHasBeenSet() const;

                    /**
                     * 获取<p>文本转录解析配置</p>
                     * @return Asr <p>文本转录解析配置</p>
                     * 
                     */
                    LLMComprehendAsrForUpdate GetAsr() const;

                    /**
                     * 设置<p>文本转录解析配置</p>
                     * @param _asr <p>文本转录解析配置</p>
                     * 
                     */
                    void SetAsr(const LLMComprehendAsrForUpdate& _asr);

                    /**
                     * 判断参数 Asr 是否已赋值
                     * @return Asr 是否已赋值
                     * 
                     */
                    bool AsrHasBeenSet() const;

                    /**
                     * 获取<p>人脸识别配置</p>
                     * @return FaceRecognition <p>人脸识别配置</p>
                     * 
                     */
                    LLMComprehendFaceRecognitionForUpdate GetFaceRecognition() const;

                    /**
                     * 设置<p>人脸识别配置</p>
                     * @param _faceRecognition <p>人脸识别配置</p>
                     * 
                     */
                    void SetFaceRecognition(const LLMComprehendFaceRecognitionForUpdate& _faceRecognition);

                    /**
                     * 判断参数 FaceRecognition 是否已赋值
                     * @return FaceRecognition 是否已赋值
                     * 
                     */
                    bool FaceRecognitionHasBeenSet() const;

                private:

                    /**
                     * <p>大模型理解模板的唯一标识</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>大模型解析模板名称，长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>大模型解析模板描述信息，长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>解析模型，可选值为：</p><ul><li>Basic: 基础模型</li><li>Pro: 优化模型</li></ul>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>分段摘要解析配置</p>
                     */
                    LLMComprehendSummaryForUpdate m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>文本转录解析配置</p>
                     */
                    LLMComprehendAsrForUpdate m_asr;
                    bool m_asrHasBeenSet;

                    /**
                     * <p>人脸识别配置</p>
                     */
                    LLMComprehendFaceRecognitionForUpdate m_faceRecognition;
                    bool m_faceRecognitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYLLMCOMPREHENDTEMPLATEREQUEST_H_
