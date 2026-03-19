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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSUBTITLEEMBEDTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSUBTITLEEMBEDTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/SubtitleEmbedConfig.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifySubtitleEmbedTemplate请求参数结构体
                */
                class ModifySubtitleEmbedTemplateRequest : public AbstractModel
                {
                public:
                    ModifySubtitleEmbedTemplateRequest();
                    ~ModifySubtitleEmbedTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>字幕压制模板唯一标识</p>
                     * @return Definition <p>字幕压制模板唯一标识</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>字幕压制模板唯一标识</p>
                     * @param _definition <p>字幕压制模板唯一标识</p>
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
                     * 获取<p>字幕压制名称<br>长度限制：64 个字符。</p>
                     * @return Name <p>字幕压制名称<br>长度限制：64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>字幕压制名称<br>长度限制：64 个字符。</p>
                     * @param _name <p>字幕压制名称<br>长度限制：64 个字符。</p>
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
                     * 获取<p>字幕压制模板描述信息<br>长度限制：256 个字符。</p>
                     * @return Comment <p>字幕压制模板描述信息<br>长度限制：256 个字符。</p>
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置<p>字幕压制模板描述信息<br>长度限制：256 个字符。</p>
                     * @param _comment <p>字幕压制模板描述信息<br>长度限制：256 个字符。</p>
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
                     * 获取<p>字幕压制相关配置</p>
                     * @return SubtitleEmbedConfig <p>字幕压制相关配置</p>
                     * 
                     */
                    SubtitleEmbedConfig GetSubtitleEmbedConfig() const;

                    /**
                     * 设置<p>字幕压制相关配置</p>
                     * @param _subtitleEmbedConfig <p>字幕压制相关配置</p>
                     * 
                     */
                    void SetSubtitleEmbedConfig(const SubtitleEmbedConfig& _subtitleEmbedConfig);

                    /**
                     * 判断参数 SubtitleEmbedConfig 是否已赋值
                     * @return SubtitleEmbedConfig 是否已赋值
                     * 
                     */
                    bool SubtitleEmbedConfigHasBeenSet() const;

                private:

                    /**
                     * <p>字幕压制模板唯一标识</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>字幕压制名称<br>长度限制：64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>字幕压制模板描述信息<br>长度限制：256 个字符。</p>
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * <p>字幕压制相关配置</p>
                     */
                    SubtitleEmbedConfig m_subtitleEmbedConfig;
                    bool m_subtitleEmbedConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSUBTITLEEMBEDTEMPLATEREQUEST_H_
