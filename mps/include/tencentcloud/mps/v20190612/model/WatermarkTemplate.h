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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKTEMPLATE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageWatermarkTemplate.h>
#include <tencentcloud/mps/v20190612/model/TextWatermarkTemplateInput.h>
#include <tencentcloud/mps/v20190612/model/SvgWatermarkInput.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 水印模板详情
                */
                class WatermarkTemplate : public AbstractModel
                {
                public:
                    WatermarkTemplate();
                    ~WatermarkTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取水印模板唯一标识。
                     * @return Definition 水印模板唯一标识。
                     * 
                     */
                    int64_t GetDefinition() const;

                    /**
                     * 设置水印模板唯一标识。
                     * @param _definition 水印模板唯一标识。
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
                     * 获取水印类型，取值：
<li>image：图片水印；</li>
<li>text：文字水印。</li>
                     * @return Type 水印类型，取值：
<li>image：图片水印；</li>
<li>text：文字水印。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置水印类型，取值：
<li>image：图片水印；</li>
<li>text：文字水印。</li>
                     * @param _type 水印类型，取值：
<li>image：图片水印；</li>
<li>text：文字水印。</li>
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
                     * 获取水印模板名称。
                     * @return Name 水印模板名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置水印模板名称。
                     * @param _name 水印模板名称。
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
                     * 获取模板描述信息。
                     * @return Comment 模板描述信息。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息。
                     * @param _comment 模板描述信息。
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
                     * 获取水印图片原点距离视频图像原点的水平位置。
<li>当字符串以 % 结尾，表示水印 Left 为视频宽度指定百分比的位置，如 10% 表示 Left 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Left 为视频宽度指定像素的位置，如 100px 表示 Left 为 100 像素。</li>
                     * @return XPos 水印图片原点距离视频图像原点的水平位置。
<li>当字符串以 % 结尾，表示水印 Left 为视频宽度指定百分比的位置，如 10% 表示 Left 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Left 为视频宽度指定像素的位置，如 100px 表示 Left 为 100 像素。</li>
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置水印图片原点距离视频图像原点的水平位置。
<li>当字符串以 % 结尾，表示水印 Left 为视频宽度指定百分比的位置，如 10% 表示 Left 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Left 为视频宽度指定像素的位置，如 100px 表示 Left 为 100 像素。</li>
                     * @param _xPos 水印图片原点距离视频图像原点的水平位置。
<li>当字符串以 % 结尾，表示水印 Left 为视频宽度指定百分比的位置，如 10% 表示 Left 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Left 为视频宽度指定像素的位置，如 100px 表示 Left 为 100 像素。</li>
                     * 
                     */
                    void SetXPos(const std::string& _xPos);

                    /**
                     * 判断参数 XPos 是否已赋值
                     * @return XPos 是否已赋值
                     * 
                     */
                    bool XPosHasBeenSet() const;

                    /**
                     * 获取水印图片原点距离视频图像原点的垂直位置。
<li>当字符串以 % 结尾，表示水印 Top 为视频高度指定百分比的位置，如 10% 表示 Top 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Top 为视频高度指定像素的位置，如 100px 表示 Top 为 100 像素。</li>
                     * @return YPos 水印图片原点距离视频图像原点的垂直位置。
<li>当字符串以 % 结尾，表示水印 Top 为视频高度指定百分比的位置，如 10% 表示 Top 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Top 为视频高度指定像素的位置，如 100px 表示 Top 为 100 像素。</li>
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置水印图片原点距离视频图像原点的垂直位置。
<li>当字符串以 % 结尾，表示水印 Top 为视频高度指定百分比的位置，如 10% 表示 Top 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Top 为视频高度指定像素的位置，如 100px 表示 Top 为 100 像素。</li>
                     * @param _yPos 水印图片原点距离视频图像原点的垂直位置。
<li>当字符串以 % 结尾，表示水印 Top 为视频高度指定百分比的位置，如 10% 表示 Top 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Top 为视频高度指定像素的位置，如 100px 表示 Top 为 100 像素。</li>
                     * 
                     */
                    void SetYPos(const std::string& _yPos);

                    /**
                     * 判断参数 YPos 是否已赋值
                     * @return YPos 是否已赋值
                     * 
                     */
                    bool YPosHasBeenSet() const;

                    /**
                     * 获取图片水印模板，仅当 Type 为 image，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ImageTemplate 图片水印模板，仅当 Type 为 image，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ImageWatermarkTemplate GetImageTemplate() const;

                    /**
                     * 设置图片水印模板，仅当 Type 为 image，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _imageTemplate 图片水印模板，仅当 Type 为 image，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetImageTemplate(const ImageWatermarkTemplate& _imageTemplate);

                    /**
                     * 判断参数 ImageTemplate 是否已赋值
                     * @return ImageTemplate 是否已赋值
                     * 
                     */
                    bool ImageTemplateHasBeenSet() const;

                    /**
                     * 获取文字水印模板，仅当 Type 为 text，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TextTemplate 文字水印模板，仅当 Type 为 text，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextWatermarkTemplateInput GetTextTemplate() const;

                    /**
                     * 设置文字水印模板，仅当 Type 为 text，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _textTemplate 文字水印模板，仅当 Type 为 text，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTextTemplate(const TextWatermarkTemplateInput& _textTemplate);

                    /**
                     * 判断参数 TextTemplate 是否已赋值
                     * @return TextTemplate 是否已赋值
                     * 
                     */
                    bool TextTemplateHasBeenSet() const;

                    /**
                     * 获取SVG 水印模板，当 Type 为 svg，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SvgTemplate SVG 水印模板，当 Type 为 svg，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    SvgWatermarkInput GetSvgTemplate() const;

                    /**
                     * 设置SVG 水印模板，当 Type 为 svg，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _svgTemplate SVG 水印模板，当 Type 为 svg，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSvgTemplate(const SvgWatermarkInput& _svgTemplate);

                    /**
                     * 判断参数 SvgTemplate 是否已赋值
                     * @return SvgTemplate 是否已赋值
                     * 
                     */
                    bool SvgTemplateHasBeenSet() const;

                    /**
                     * 获取模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return CreateTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _createTime 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
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
                     * 获取模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @return UpdateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * @param _updateTime 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取原点位置，可选值：
<li>topLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>topRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>bottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>bottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下。；</li>
                     * @return CoordinateOrigin 原点位置，可选值：
<li>topLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>topRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>bottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>bottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下。；</li>
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置原点位置，可选值：
<li>topLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>topRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>bottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>bottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下。；</li>
                     * @param _coordinateOrigin 原点位置，可选值：
<li>topLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>topRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>bottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>bottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下。；</li>
                     * 
                     */
                    void SetCoordinateOrigin(const std::string& _coordinateOrigin);

                    /**
                     * 判断参数 CoordinateOrigin 是否已赋值
                     * @return CoordinateOrigin 是否已赋值
                     * 
                     */
                    bool CoordinateOriginHasBeenSet() const;

                private:

                    /**
                     * 水印模板唯一标识。
                     */
                    int64_t m_definition;
                    bool m_definitionHasBeenSet;

                    /**
                     * 水印类型，取值：
<li>image：图片水印；</li>
<li>text：文字水印。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 水印模板名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 水印图片原点距离视频图像原点的水平位置。
<li>当字符串以 % 结尾，表示水印 Left 为视频宽度指定百分比的位置，如 10% 表示 Left 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Left 为视频宽度指定像素的位置，如 100px 表示 Left 为 100 像素。</li>
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * 水印图片原点距离视频图像原点的垂直位置。
<li>当字符串以 % 结尾，表示水印 Top 为视频高度指定百分比的位置，如 10% 表示 Top 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 Top 为视频高度指定像素的位置，如 100px 表示 Top 为 100 像素。</li>
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 图片水印模板，仅当 Type 为 image，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ImageWatermarkTemplate m_imageTemplate;
                    bool m_imageTemplateHasBeenSet;

                    /**
                     * 文字水印模板，仅当 Type 为 text，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextWatermarkTemplateInput m_textTemplate;
                    bool m_textTemplateHasBeenSet;

                    /**
                     * SVG 水印模板，当 Type 为 svg，该字段有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    SvgWatermarkInput m_svgTemplate;
                    bool m_svgTemplateHasBeenSet;

                    /**
                     * 模板创建时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 模板最后修改时间，使用 [ISO 日期格式](https://cloud.tencent.com/document/product/862/37710#52)。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 原点位置，可选值：
<li>topLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>topRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>bottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>bottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下。；</li>
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_WATERMARKTEMPLATE_H_
