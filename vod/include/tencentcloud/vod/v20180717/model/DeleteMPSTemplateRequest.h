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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMPSTEMPLATEREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMPSTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DeleteMPSTemplate请求参数结构体
                */
                class DeleteMPSTemplateRequest : public AbstractModel
                {
                public:
                    DeleteMPSTemplateRequest();
                    ~DeleteMPSTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
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
                     * 获取<p>需要删除的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * @return TemplateType <p>需要删除的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * 
                     */
                    std::string GetTemplateType() const;

                    /**
                     * 设置<p>需要删除的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * @param _templateType <p>需要删除的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     * 
                     */
                    void SetTemplateType(const std::string& _templateType);

                    /**
                     * 判断参数 TemplateType 是否已赋值
                     * @return TemplateType 是否已赋值
                     * 
                     */
                    bool TemplateTypeHasBeenSet() const;

                    /**
                     * 获取<p>MPS 任务模板唯一标识。</p>
                     * @return Definition <p>MPS 任务模板唯一标识。</p>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>MPS 任务模板唯一标识。</p>
                     * @param _definition <p>MPS 任务模板唯一标识。</p>
                     * 
                     */
                    void SetDefinition(const int64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                private:

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>需要删除的 MPS 模板的类型。取值：</p><li>AIAnalysis: 创建智能分析模板。</li><li>SmartSubtitle: 创建智能字幕模板。</li><li>SmartErase: 创建智能擦除模板。</li><li>EmbedSubtitle: 字幕压制模板。</li>
                     */
                    std::string m_templateType;
                    bool m_templateTypeHasBeenSet;

                    /**
                     * <p>MPS 任务模板唯一标识。</p>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DELETEMPSTEMPLATEREQUEST_H_
