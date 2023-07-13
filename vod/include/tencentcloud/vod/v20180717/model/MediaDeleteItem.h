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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MEDIADELETEITEM_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MEDIADELETEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 指定删除点播视频时的删除内容
                */
                class MediaDeleteItem : public AbstractModel
                {
                public:
                    MediaDeleteItem();
                    ~MediaDeleteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所指定的删除部分。如果未填写该字段则参数无效。可选值有：
<li>OriginalFiles（删除原文件，删除后无法发起转码、微信发布等任何视频处理操作）；</li>
<li>TranscodeFiles（删除转码文件）；</li>
<li>AdaptiveDynamicStreamingFiles（删除转自适应码流文件）；</li>
<li>WechatPublishFiles（删除微信发布文件）；</li>
<li>WechatMiniProgramPublishFiles（删除微信小程序发布文件）。</li>
<font color=red>注意：</font> <li>取值为OriginalFiles时，文件上传时携带的封面文件会被删除；</li>
<li>取值为TranscodeFiles时，媒体处理产生的封面文件会被删除。</li>
                     * @return Type 所指定的删除部分。如果未填写该字段则参数无效。可选值有：
<li>OriginalFiles（删除原文件，删除后无法发起转码、微信发布等任何视频处理操作）；</li>
<li>TranscodeFiles（删除转码文件）；</li>
<li>AdaptiveDynamicStreamingFiles（删除转自适应码流文件）；</li>
<li>WechatPublishFiles（删除微信发布文件）；</li>
<li>WechatMiniProgramPublishFiles（删除微信小程序发布文件）。</li>
<font color=red>注意：</font> <li>取值为OriginalFiles时，文件上传时携带的封面文件会被删除；</li>
<li>取值为TranscodeFiles时，媒体处理产生的封面文件会被删除。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置所指定的删除部分。如果未填写该字段则参数无效。可选值有：
<li>OriginalFiles（删除原文件，删除后无法发起转码、微信发布等任何视频处理操作）；</li>
<li>TranscodeFiles（删除转码文件）；</li>
<li>AdaptiveDynamicStreamingFiles（删除转自适应码流文件）；</li>
<li>WechatPublishFiles（删除微信发布文件）；</li>
<li>WechatMiniProgramPublishFiles（删除微信小程序发布文件）。</li>
<font color=red>注意：</font> <li>取值为OriginalFiles时，文件上传时携带的封面文件会被删除；</li>
<li>取值为TranscodeFiles时，媒体处理产生的封面文件会被删除。</li>
                     * @param _type 所指定的删除部分。如果未填写该字段则参数无效。可选值有：
<li>OriginalFiles（删除原文件，删除后无法发起转码、微信发布等任何视频处理操作）；</li>
<li>TranscodeFiles（删除转码文件）；</li>
<li>AdaptiveDynamicStreamingFiles（删除转自适应码流文件）；</li>
<li>WechatPublishFiles（删除微信发布文件）；</li>
<li>WechatMiniProgramPublishFiles（删除微信小程序发布文件）。</li>
<font color=red>注意：</font> <li>取值为OriginalFiles时，文件上传时携带的封面文件会被删除；</li>
<li>取值为TranscodeFiles时，媒体处理产生的封面文件会被删除。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取删除由Type参数指定的种类下的视频模板号，模板定义参见[转码模板](https://cloud.tencent.com/document/product/266/33478#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF)。
默认值为0，表示删除参数Type指定种类下所有的视频。
                     * @return Definition 删除由Type参数指定的种类下的视频模板号，模板定义参见[转码模板](https://cloud.tencent.com/document/product/266/33478#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF)。
默认值为0，表示删除参数Type指定种类下所有的视频。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置删除由Type参数指定的种类下的视频模板号，模板定义参见[转码模板](https://cloud.tencent.com/document/product/266/33478#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF)。
默认值为0，表示删除参数Type指定种类下所有的视频。
                     * @param _definition 删除由Type参数指定的种类下的视频模板号，模板定义参见[转码模板](https://cloud.tencent.com/document/product/266/33478#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF)。
默认值为0，表示删除参数Type指定种类下所有的视频。
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
                     * 所指定的删除部分。如果未填写该字段则参数无效。可选值有：
<li>OriginalFiles（删除原文件，删除后无法发起转码、微信发布等任何视频处理操作）；</li>
<li>TranscodeFiles（删除转码文件）；</li>
<li>AdaptiveDynamicStreamingFiles（删除转自适应码流文件）；</li>
<li>WechatPublishFiles（删除微信发布文件）；</li>
<li>WechatMiniProgramPublishFiles（删除微信小程序发布文件）。</li>
<font color=red>注意：</font> <li>取值为OriginalFiles时，文件上传时携带的封面文件会被删除；</li>
<li>取值为TranscodeFiles时，媒体处理产生的封面文件会被删除。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 删除由Type参数指定的种类下的视频模板号，模板定义参见[转码模板](https://cloud.tencent.com/document/product/266/33478#.3Cspan-id-.3D-.22zm.22-.3E.3C.2Fspan.3E.E8.BD.AC.E7.A0.81.E6.A8.A1.E6.9D.BF)。
默认值为0，表示删除参数Type指定种类下所有的视频。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MEDIADELETEITEM_H_
