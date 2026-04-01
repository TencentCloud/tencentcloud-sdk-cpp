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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendSummary.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendAsr.h>
#include <tencentcloud/vod/v20180717/model/LLMComprehendFaceRecognition.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 大模型解析模板详情。
                */
                class LLMComprehendTemplateItem : public AbstractModel
                {
                public:
                    LLMComprehendTemplateItem();
                    ~LLMComprehendTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片异步处理模板唯一标识。</p>
                     * @return Definition <p>图片异步处理模板唯一标识。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>图片异步处理模板唯一标识。</p>
                     * @param _definition <p>图片异步处理模板唯一标识。</p>
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
                     * 获取<p>图片异步处理模板名称。</p>
                     * @return Name <p>图片异步处理模板名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>图片异步处理模板名称。</p>
                     * @param _name <p>图片异步处理模板名称。</p>
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
                     * 获取<p>图片异步处理模板描述信息。</p>
                     * @return Comment <p>图片异步处理模板描述信息。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>图片异步处理模板描述信息。</p>
                     * @param _comment <p>图片异步处理模板描述信息。</p>
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
                     * 获取<p>解析级别，可选值为：</p><ul><li>Audio: 音频级解析</li><li>Video: 视频级解析</li></ul>
                     * @return Level <p>解析级别，可选值为：</p><ul><li>Audio: 音频级解析</li><li>Video: 视频级解析</li></ul>
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置<p>解析级别，可选值为：</p><ul><li>Audio: 音频级解析</li><li>Video: 视频级解析</li></ul>
                     * @param _level <p>解析级别，可选值为：</p><ul><li>Audio: 音频级解析</li><li>Video: 视频级解析</li></ul>
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>分段摘要解析配置</p>
                     * @return Summary <p>分段摘要解析配置</p>
                     * 
                     */
                    LLMComprehendSummary GetSummary() const;

                    /**
                     * 设置<p>分段摘要解析配置</p>
                     * @param _summary <p>分段摘要解析配置</p>
                     * 
                     */
                    void SetSummary(const LLMComprehendSummary& _summary);

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
                    LLMComprehendAsr GetAsr() const;

                    /**
                     * 设置<p>文本转录解析配置</p>
                     * @param _asr <p>文本转录解析配置</p>
                     * 
                     */
                    void SetAsr(const LLMComprehendAsr& _asr);

                    /**
                     * 判断参数 Asr 是否已赋值
                     * @return Asr 是否已赋值
                     * 
                     */
                    bool AsrHasBeenSet() const;

                    /**
                     * 获取<p>人脸识别解析配置</p>
                     * @return FaceRecognition <p>人脸识别解析配置</p>
                     * 
                     */
                    LLMComprehendFaceRecognition GetFaceRecognition() const;

                    /**
                     * 设置<p>人脸识别解析配置</p>
                     * @param _faceRecognition <p>人脸识别解析配置</p>
                     * 
                     */
                    void SetFaceRecognition(const LLMComprehendFaceRecognition& _faceRecognition);

                    /**
                     * 判断参数 FaceRecognition 是否已赋值
                     * @return FaceRecognition 是否已赋值
                     * 
                     */
                    bool FaceRecognitionHasBeenSet() const;

                    /**
                     * 获取<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return CreateTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _createTime <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @return UpdateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * @param _updateTime <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>图片异步处理模板唯一标识。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>图片异步处理模板名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>图片异步处理模板描述信息。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>解析级别，可选值为：</p><ul><li>Audio: 音频级解析</li><li>Video: 视频级解析</li></ul>
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>分段摘要解析配置</p>
                     */
                    LLMComprehendSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * <p>文本转录解析配置</p>
                     */
                    LLMComprehendAsr m_asr;
                    bool m_asrHasBeenSet;

                    /**
                     * <p>人脸识别解析配置</p>
                     */
                    LLMComprehendFaceRecognition m_faceRecognition;
                    bool m_faceRecognitionHasBeenSet;

                    /**
                     * <p>模板创建时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>模板最后修改时间，使用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_
