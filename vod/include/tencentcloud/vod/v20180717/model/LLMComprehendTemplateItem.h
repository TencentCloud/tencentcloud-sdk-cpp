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
                     * 获取图片异步处理模板唯一标识。
                     * @return Definition 图片异步处理模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置图片异步处理模板唯一标识。
                     * @param _definition 图片异步处理模板唯一标识。
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
                     * 获取图片异步处理模板名称。
                     * @return Name 图片异步处理模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置图片异步处理模板名称。
                     * @param _name 图片异步处理模板名称。
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
                     * 获取图片异步处理模板描述信息。
                     * @return Comment 图片异步处理模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置图片异步处理模板描述信息。
                     * @param _comment 图片异步处理模板描述信息。
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
                     * 获取解析级别，可选值为：
- Audio: 音频级解析
- Video: 视频级解析
                     * @return Level 解析级别，可选值为：
- Audio: 音频级解析
- Video: 视频级解析
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置解析级别，可选值为：
- Audio: 音频级解析
- Video: 视频级解析
                     * @param _level 解析级别，可选值为：
- Audio: 音频级解析
- Video: 视频级解析
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
                     * 获取分段摘要解析配置
                     * @return Summary 分段摘要解析配置
                     * 
                     */
                    LLMComprehendSummary GetSummary() const;

                    /**
                     * 设置分段摘要解析配置
                     * @param _summary 分段摘要解析配置
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
                     * 获取文本转录解析配置
                     * @return Asr 文本转录解析配置
                     * 
                     */
                    LLMComprehendAsr GetAsr() const;

                    /**
                     * 设置文本转录解析配置
                     * @param _asr 文本转录解析配置
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
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
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
                     * 图片异步处理模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 图片异步处理模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 图片异步处理模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 解析级别，可选值为：
- Audio: 音频级解析
- Video: 视频级解析
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 分段摘要解析配置
                     */
                    LLMComprehendSummary m_summary;
                    bool m_summaryHasBeenSet;

                    /**
                     * 文本转录解析配置
                     */
                    LLMComprehendAsr m_asr;
                    bool m_asrHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDTEMPLATEITEM_H_
