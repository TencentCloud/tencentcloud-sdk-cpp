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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATELLMCOMPREHENDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATELLMCOMPREHENDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateLLMComprehendTemplate请求参数结构体
                */
                class CreateLLMComprehendTemplateRequest : public AbstractModel
                {
                public:
                    CreateLLMComprehendTemplateRequest();
                    ~CreateLLMComprehendTemplateRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
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
                     * 获取大模型解析模板名称，长度限制：64 个字符。
                     * @return Name 大模型解析模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置大模型解析模板名称，长度限制：64 个字符。
                     * @param _name 大模型解析模板名称，长度限制：64 个字符。
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
                     * 获取大模型解析模板描述信息，长度限制：256 个字符。
                     * @return Comment 大模型解析模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置大模型解析模板描述信息，长度限制：256 个字符。
                     * @param _comment 大模型解析模板描述信息，长度限制：256 个字符。
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

                private:

                    /**
                     * 解析级别，可选值为：
- Audio: 音频级解析
- Video: 视频级解析
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 大模型解析模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 大模型解析模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATELLMCOMPREHENDTEMPLATEREQUEST_H_
