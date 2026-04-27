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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETASKINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETASKINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TaskOutputStorage.h>
#include <tencentcloud/mps/v20190612/model/NumberFormat.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 对视频截雪碧图任务输入参数类型
                */
                class ImageSpriteTaskInput : public AbstractModel
                {
                public:
                    ImageSpriteTaskInput();
                    ~ImageSpriteTaskInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>雪碧图模板 ID。</p>
                     * @return Definition <p>雪碧图模板 ID。</p>
                     * 
                     */
                    uint64_t GetDefinition() const;

                    /**
                     * 设置<p>雪碧图模板 ID。</p>
                     * @param _definition <p>雪碧图模板 ID。</p>
                     * 
                     */
                    void SetDefinition(const uint64_t& _definition);

                    /**
                     * 判断参数 Definition 是否已赋值
                     * @return Definition 是否已赋值
                     * 
                     */
                    bool DefinitionHasBeenSet() const;

                    /**
                     * 获取<p>截取雪碧图后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputStorage <p>截取雪碧图后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaskOutputStorage GetOutputStorage() const;

                    /**
                     * 设置<p>截取雪碧图后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputStorage <p>截取雪碧图后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputStorage(const TaskOutputStorage& _outputStorage);

                    /**
                     * 判断参数 OutputStorage 是否已赋值
                     * @return OutputStorage 是否已赋值
                     * 
                     */
                    bool OutputStorageHasBeenSet() const;

                    /**
                     * 获取<p>截取雪碧图后，雪碧图图片文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}_{number}.{format}</code>。
                     * @return OutputObjectPath <p>截取雪碧图后，雪碧图图片文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}_{number}.{format}</code>。
                     * 
                     */
                    std::string GetOutputObjectPath() const;

                    /**
                     * 设置<p>截取雪碧图后，雪碧图图片文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}_{number}.{format}</code>。
                     * @param _outputObjectPath <p>截取雪碧图后，雪碧图图片文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}_{number}.{format}</code>。
                     * 
                     */
                    void SetOutputObjectPath(const std::string& _outputObjectPath);

                    /**
                     * 判断参数 OutputObjectPath 是否已赋值
                     * @return OutputObjectPath 是否已赋值
                     * 
                     */
                    bool OutputObjectPathHasBeenSet() const;

                    /**
                     * 获取<p>截取雪碧图后，Web VTT 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}.{format}</code>。</p>
                     * @return WebVttObjectName <p>截取雪碧图后，Web VTT 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}.{format}</code>。</p>
                     * 
                     */
                    std::string GetWebVttObjectName() const;

                    /**
                     * 设置<p>截取雪碧图后，Web VTT 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}.{format}</code>。</p>
                     * @param _webVttObjectName <p>截取雪碧图后，Web VTT 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}.{format}</code>。</p>
                     * 
                     */
                    void SetWebVttObjectName(const std::string& _webVttObjectName);

                    /**
                     * 判断参数 WebVttObjectName 是否已赋值
                     * @return WebVttObjectName 是否已赋值
                     * 
                     */
                    bool WebVttObjectNameHasBeenSet() const;

                    /**
                     * 获取<p>截取雪碧图后输出路径中的<code>{number}</code>变量的规则。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObjectNumberFormat <p>截取雪碧图后输出路径中的<code>{number}</code>变量的规则。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NumberFormat GetObjectNumberFormat() const;

                    /**
                     * 设置<p>截取雪碧图后输出路径中的<code>{number}</code>变量的规则。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _objectNumberFormat <p>截取雪碧图后输出路径中的<code>{number}</code>变量的规则。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetObjectNumberFormat(const NumberFormat& _objectNumberFormat);

                    /**
                     * 判断参数 ObjectNumberFormat 是否已赋值
                     * @return ObjectNumberFormat 是否已赋值
                     * 
                     */
                    bool ObjectNumberFormatHasBeenSet() const;

                    /**
                     * 获取<p>扩展参数。</p>
                     * @return ExtInfo <p>扩展参数。</p>
                     * 
                     */
                    std::string GetExtInfo() const;

                    /**
                     * 设置<p>扩展参数。</p>
                     * @param _extInfo <p>扩展参数。</p>
                     * 
                     */
                    void SetExtInfo(const std::string& _extInfo);

                    /**
                     * 判断参数 ExtInfo 是否已赋值
                     * @return ExtInfo 是否已赋值
                     * 
                     */
                    bool ExtInfoHasBeenSet() const;

                private:

                    /**
                     * <p>雪碧图模板 ID。</p>
                     */
                    uint64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * <p>截取雪碧图后文件的目标存储，不填则继承上层的 OutputStorage 值。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaskOutputStorage m_outputStorage;
                    bool m_outputStorageHasBeenSet;

                    /**
                     * <p>截取雪碧图后，雪碧图图片文件的输出路径，可以为相对路径或者绝对路径。<br>若需定义输出路径，路径需以<code>.{format}</code>结尾。变量名请参考 <a href="https://cloud.tencent.com/document/product/862/37039">文件名变量说明</a>。<br>相对路径示例：</p><li>文件名_{变量名}.{format}</li><li>文件名.{format}</li>绝对路径示例：<li>/自定义路径/文件名_{变量名}.{format}</li>如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}_{number}.{format}</code>。
                     */
                    std::string m_outputObjectPath;
                    bool m_outputObjectPathHasBeenSet;

                    /**
                     * <p>截取雪碧图后，Web VTT 文件的输出路径，只能为相对路径。如果不填，则默认为相对路径：<code>{inputName}_imageSprite_{definition}.{format}</code>。</p>
                     */
                    std::string m_webVttObjectName;
                    bool m_webVttObjectNameHasBeenSet;

                    /**
                     * <p>截取雪碧图后输出路径中的<code>{number}</code>变量的规则。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NumberFormat m_objectNumberFormat;
                    bool m_objectNumberFormatHasBeenSet;

                    /**
                     * <p>扩展参数。</p>
                     */
                    std::string m_extInfo;
                    bool m_extInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_IMAGESPRITETASKINPUT_H_
