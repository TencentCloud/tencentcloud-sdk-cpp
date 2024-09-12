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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_ATTACHMEDIASUBTITLESREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_ATTACHMEDIASUBTITLESREQUEST_H_

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
                * AttachMediaSubtitles请求参数结构体
                */
                class AttachMediaSubtitlesRequest : public AbstractModel
                {
                public:
                    AttachMediaSubtitlesRequest();
                    ~AttachMediaSubtitlesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取媒体文件唯一标识。
                     * @return FileId 媒体文件唯一标识。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件唯一标识。
                     * @param _fileId 媒体文件唯一标识。
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

                    /**
                     * 获取操作。取值如下：
<li>Attach：关联字幕。</li>
<li>Detach：解除关联字幕。</li>
                     * @return Operation 操作。取值如下：
<li>Attach：关联字幕。</li>
<li>Detach：解除关联字幕。</li>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作。取值如下：
<li>Attach：关联字幕。</li>
<li>Detach：解除关联字幕。</li>
                     * @param _operation 操作。取值如下：
<li>Attach：关联字幕。</li>
<li>Detach：解除关联字幕。</li>
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取[转自适应码流模板号](https://cloud.tencent.com/document/product/266/34071#zsy)。
                     * @return AdaptiveDynamicStreamingDefinition [转自适应码流模板号](https://cloud.tencent.com/document/product/266/34071#zsy)。
                     * 
                     */
                    uint64_t GetAdaptiveDynamicStreamingDefinition() const;

                    /**
                     * 设置[转自适应码流模板号](https://cloud.tencent.com/document/product/266/34071#zsy)。
                     * @param _adaptiveDynamicStreamingDefinition [转自适应码流模板号](https://cloud.tencent.com/document/product/266/34071#zsy)。
                     * 
                     */
                    void SetAdaptiveDynamicStreamingDefinition(const uint64_t& _adaptiveDynamicStreamingDefinition);

                    /**
                     * 判断参数 AdaptiveDynamicStreamingDefinition 是否已赋值
                     * @return AdaptiveDynamicStreamingDefinition 是否已赋值
                     * 
                     */
                    bool AdaptiveDynamicStreamingDefinitionHasBeenSet() const;

                    /**
                     * 获取字幕的唯一标识。
                     * @return SubtitleIds 字幕的唯一标识。
                     * 
                     */
                    std::vector<std::string> GetSubtitleIds() const;

                    /**
                     * 设置字幕的唯一标识。
                     * @param _subtitleIds 字幕的唯一标识。
                     * 
                     */
                    void SetSubtitleIds(const std::vector<std::string>& _subtitleIds);

                    /**
                     * 判断参数 SubtitleIds 是否已赋值
                     * @return SubtitleIds 是否已赋值
                     * 
                     */
                    bool SubtitleIdsHasBeenSet() const;

                    /**
                     * 获取默认字幕的唯一标识。不填则不设置默认字幕。
                     * @return DefaultSubtitleId 默认字幕的唯一标识。不填则不设置默认字幕。
                     * 
                     */
                    std::string GetDefaultSubtitleId() const;

                    /**
                     * 设置默认字幕的唯一标识。不填则不设置默认字幕。
                     * @param _defaultSubtitleId 默认字幕的唯一标识。不填则不设置默认字幕。
                     * 
                     */
                    void SetDefaultSubtitleId(const std::string& _defaultSubtitleId);

                    /**
                     * 判断参数 DefaultSubtitleId 是否已赋值
                     * @return DefaultSubtitleId 是否已赋值
                     * 
                     */
                    bool DefaultSubtitleIdHasBeenSet() const;

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

                private:

                    /**
                     * 媒体文件唯一标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 操作。取值如下：
<li>Attach：关联字幕。</li>
<li>Detach：解除关联字幕。</li>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * [转自适应码流模板号](https://cloud.tencent.com/document/product/266/34071#zsy)。
                     */
                    uint64_t m_adaptiveDynamicStreamingDefinition;
                    bool m_adaptiveDynamicStreamingDefinitionHasBeenSet;

                    /**
                     * 字幕的唯一标识。
                     */
                    std::vector<std::string> m_subtitleIds;
                    bool m_subtitleIdsHasBeenSet;

                    /**
                     * 默认字幕的唯一标识。不填则不设置默认字幕。
                     */
                    std::string m_defaultSubtitleId;
                    bool m_defaultSubtitleIdHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_ATTACHMEDIASUBTITLESREQUEST_H_
