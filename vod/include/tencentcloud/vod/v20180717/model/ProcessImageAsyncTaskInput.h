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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASKINPUT_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ProcessImageAsyncInputExtendedParameter.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 图片处理配置。
                */
                class ProcessImageAsyncTaskInput : public AbstractModel
                {
                public:
                    ProcessImageAsyncTaskInput();
                    ~ProcessImageAsyncTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>图片异步处理模板ID。可使用自定义模板ID，也可使用下列预制模板：</p><table><thead><tr><th align="right">模板编号（Definition）</th><th>模板名称</th><th>功能说明</th></tr></thead><tbody><tr><td align="right">14</td><td>图片理解</td><td>图片内容分析、辅助分类与检索</td></tr><tr><td align="right">15</td><td>AI擦除</td><td>图片中文字或水印的擦除</td></tr><tr><td align="right">16</td><td>图片修复</td><td>图片修复与瑕疵处理，老照片修复</td></tr><tr><td align="right">17</td><td>AI抠图</td><td>主体抠图、背景替换前的素材准备</td></tr><tr><td align="right">19</td><td>图片美颜</td><td>人像照片美化</td></tr><tr><td align="right">20</td><td>通用抠图</td><td>商品或主体前景提取、素材合成</td></tr><tr><td align="right">22</td><td>图片超分至4K</td><td>图片超分-超分至4K-ultra（短边2160，长边自适应），可用于优化图片清晰度、高分辨率展示、大屏素材准备</td></tr><tr><td align="right">23</td><td>图片超分至2K</td><td>图片超分-超分至2K-ultra（短边1440，长边自适应），可用于优化图片清晰度、高分辨率图片展示、素材清晰度提升</td></tr><tr><td align="right">25</td><td>图片压缩75质量</td><td>图片压缩-75%质量-JPEG，可用于网页配图、缩略图等需要控制文件体积的场景</td></tr><tr><td align="right">27</td><td>图片超分两倍超分</td><td>图片超分-两倍超分-ultra，可用于小尺寸图片放大、提高展示分辨率与清晰度</td></tr></tbody></table>
                     * @return Definition <p>图片异步处理模板ID。可使用自定义模板ID，也可使用下列预制模板：</p><table><thead><tr><th align="right">模板编号（Definition）</th><th>模板名称</th><th>功能说明</th></tr></thead><tbody><tr><td align="right">14</td><td>图片理解</td><td>图片内容分析、辅助分类与检索</td></tr><tr><td align="right">15</td><td>AI擦除</td><td>图片中文字或水印的擦除</td></tr><tr><td align="right">16</td><td>图片修复</td><td>图片修复与瑕疵处理，老照片修复</td></tr><tr><td align="right">17</td><td>AI抠图</td><td>主体抠图、背景替换前的素材准备</td></tr><tr><td align="right">19</td><td>图片美颜</td><td>人像照片美化</td></tr><tr><td align="right">20</td><td>通用抠图</td><td>商品或主体前景提取、素材合成</td></tr><tr><td align="right">22</td><td>图片超分至4K</td><td>图片超分-超分至4K-ultra（短边2160，长边自适应），可用于优化图片清晰度、高分辨率展示、大屏素材准备</td></tr><tr><td align="right">23</td><td>图片超分至2K</td><td>图片超分-超分至2K-ultra（短边1440，长边自适应），可用于优化图片清晰度、高分辨率图片展示、素材清晰度提升</td></tr><tr><td align="right">25</td><td>图片压缩75质量</td><td>图片压缩-75%质量-JPEG，可用于网页配图、缩略图等需要控制文件体积的场景</td></tr><tr><td align="right">27</td><td>图片超分两倍超分</td><td>图片超分-两倍超分-ultra，可用于小尺寸图片放大、提高展示分辨率与清晰度</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置<p>图片异步处理模板ID。可使用自定义模板ID，也可使用下列预制模板：</p><table><thead><tr><th align="right">模板编号（Definition）</th><th>模板名称</th><th>功能说明</th></tr></thead><tbody><tr><td align="right">14</td><td>图片理解</td><td>图片内容分析、辅助分类与检索</td></tr><tr><td align="right">15</td><td>AI擦除</td><td>图片中文字或水印的擦除</td></tr><tr><td align="right">16</td><td>图片修复</td><td>图片修复与瑕疵处理，老照片修复</td></tr><tr><td align="right">17</td><td>AI抠图</td><td>主体抠图、背景替换前的素材准备</td></tr><tr><td align="right">19</td><td>图片美颜</td><td>人像照片美化</td></tr><tr><td align="right">20</td><td>通用抠图</td><td>商品或主体前景提取、素材合成</td></tr><tr><td align="right">22</td><td>图片超分至4K</td><td>图片超分-超分至4K-ultra（短边2160，长边自适应），可用于优化图片清晰度、高分辨率展示、大屏素材准备</td></tr><tr><td align="right">23</td><td>图片超分至2K</td><td>图片超分-超分至2K-ultra（短边1440，长边自适应），可用于优化图片清晰度、高分辨率图片展示、素材清晰度提升</td></tr><tr><td align="right">25</td><td>图片压缩75质量</td><td>图片压缩-75%质量-JPEG，可用于网页配图、缩略图等需要控制文件体积的场景</td></tr><tr><td align="right">27</td><td>图片超分两倍超分</td><td>图片超分-两倍超分-ultra，可用于小尺寸图片放大、提高展示分辨率与清晰度</td></tr></tbody></table>
                     * @param _definition <p>图片异步处理模板ID。可使用自定义模板ID，也可使用下列预制模板：</p><table><thead><tr><th align="right">模板编号（Definition）</th><th>模板名称</th><th>功能说明</th></tr></thead><tbody><tr><td align="right">14</td><td>图片理解</td><td>图片内容分析、辅助分类与检索</td></tr><tr><td align="right">15</td><td>AI擦除</td><td>图片中文字或水印的擦除</td></tr><tr><td align="right">16</td><td>图片修复</td><td>图片修复与瑕疵处理，老照片修复</td></tr><tr><td align="right">17</td><td>AI抠图</td><td>主体抠图、背景替换前的素材准备</td></tr><tr><td align="right">19</td><td>图片美颜</td><td>人像照片美化</td></tr><tr><td align="right">20</td><td>通用抠图</td><td>商品或主体前景提取、素材合成</td></tr><tr><td align="right">22</td><td>图片超分至4K</td><td>图片超分-超分至4K-ultra（短边2160，长边自适应），可用于优化图片清晰度、高分辨率展示、大屏素材准备</td></tr><tr><td align="right">23</td><td>图片超分至2K</td><td>图片超分-超分至2K-ultra（短边1440，长边自适应），可用于优化图片清晰度、高分辨率图片展示、素材清晰度提升</td></tr><tr><td align="right">25</td><td>图片压缩75质量</td><td>图片压缩-75%质量-JPEG，可用于网页配图、缩略图等需要控制文件体积的场景</td></tr><tr><td align="right">27</td><td>图片超分两倍超分</td><td>图片超分-两倍超分-ultra，可用于小尺寸图片放大、提高展示分辨率与清晰度</td></tr></tbody></table>
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
                     * 获取<p>图片异步处理扩展参数。</p>
                     * @return ExtendedParameter <p>图片异步处理扩展参数。</p>
                     * 
                     */
                    ProcessImageAsyncInputExtendedParameter GetExtendedParameter() const;

                    /**
                     * 设置<p>图片异步处理扩展参数。</p>
                     * @param _extendedParameter <p>图片异步处理扩展参数。</p>
                     * 
                     */
                    void SetExtendedParameter(const ProcessImageAsyncInputExtendedParameter& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                private:

                    /**
                     * <p>图片异步处理模板ID。可使用自定义模板ID，也可使用下列预制模板：</p><table><thead><tr><th align="right">模板编号（Definition）</th><th>模板名称</th><th>功能说明</th></tr></thead><tbody><tr><td align="right">14</td><td>图片理解</td><td>图片内容分析、辅助分类与检索</td></tr><tr><td align="right">15</td><td>AI擦除</td><td>图片中文字或水印的擦除</td></tr><tr><td align="right">16</td><td>图片修复</td><td>图片修复与瑕疵处理，老照片修复</td></tr><tr><td align="right">17</td><td>AI抠图</td><td>主体抠图、背景替换前的素材准备</td></tr><tr><td align="right">19</td><td>图片美颜</td><td>人像照片美化</td></tr><tr><td align="right">20</td><td>通用抠图</td><td>商品或主体前景提取、素材合成</td></tr><tr><td align="right">22</td><td>图片超分至4K</td><td>图片超分-超分至4K-ultra（短边2160，长边自适应），可用于优化图片清晰度、高分辨率展示、大屏素材准备</td></tr><tr><td align="right">23</td><td>图片超分至2K</td><td>图片超分-超分至2K-ultra（短边1440，长边自适应），可用于优化图片清晰度、高分辨率图片展示、素材清晰度提升</td></tr><tr><td align="right">25</td><td>图片压缩75质量</td><td>图片压缩-75%质量-JPEG，可用于网页配图、缩略图等需要控制文件体积的场景</td></tr><tr><td align="right">27</td><td>图片超分两倍超分</td><td>图片超分-两倍超分-ultra，可用于小尺寸图片放大、提高展示分辨率与清晰度</td></tr></tbody></table>
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>图片异步处理扩展参数。</p>
                     */
                    ProcessImageAsyncInputExtendedParameter m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_PROCESSIMAGEASYNCTASKINPUT_H_
