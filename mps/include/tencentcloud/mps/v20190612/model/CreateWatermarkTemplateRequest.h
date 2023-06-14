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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWATERMARKTEMPLATEREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWATERMARKTEMPLATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/ImageWatermarkInput.h>
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
                * CreateWatermarkTemplate请求参数结构体
                */
                class CreateWatermarkTemplateRequest : public AbstractModel
                {
                public:
                    CreateWatermarkTemplateRequest();
                    ~CreateWatermarkTemplateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取水印类型，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     * @return Type 水印类型，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置水印类型，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     * @param _type 水印类型，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
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
                     * 获取水印模板名称，长度限制：64 个字符。
                     * @return Name 水印模板名称，长度限制：64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置水印模板名称，长度限制：64 个字符。
                     * @param _name 水印模板名称，长度限制：64 个字符。
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
                     * 获取模板描述信息，长度限制：256 个字符。
                     * @return Comment 模板描述信息，长度限制：256 个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 设置模板描述信息，长度限制：256 个字符。
                     * @param _comment 模板描述信息，长度限制：256 个字符。
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
                     * 获取原点位置，可选值：
<li>TopLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>TopRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>BottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>BottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下角。</li>
默认值：TopLeft。
                     * @return CoordinateOrigin 原点位置，可选值：
<li>TopLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>TopRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>BottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>BottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下角。</li>
默认值：TopLeft。
                     * 
                     */
                    std::string GetCoordinateOrigin() const;

                    /**
                     * 设置原点位置，可选值：
<li>TopLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>TopRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>BottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>BottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下角。</li>
默认值：TopLeft。
                     * @param _coordinateOrigin 原点位置，可选值：
<li>TopLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>TopRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>BottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>BottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下角。</li>
默认值：TopLeft。
                     * 
                     */
                    void SetCoordinateOrigin(const std::string& _coordinateOrigin);

                    /**
                     * 判断参数 CoordinateOrigin 是否已赋值
                     * @return CoordinateOrigin 是否已赋值
                     * 
                     */
                    bool CoordinateOriginHasBeenSet() const;

                    /**
                     * 获取水印原点距离视频图像坐标原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 XPos 为指定像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     * @return XPos 水印原点距离视频图像坐标原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 XPos 为指定像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     * 
                     */
                    std::string GetXPos() const;

                    /**
                     * 设置水印原点距离视频图像坐标原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 XPos 为指定像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     * @param _xPos 水印原点距离视频图像坐标原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 XPos 为指定像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
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
                     * 获取水印原点距离视频图像坐标原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 YPos 为指定像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     * @return YPos 水印原点距离视频图像坐标原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 YPos 为指定像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     * 
                     */
                    std::string GetYPos() const;

                    /**
                     * 设置水印原点距离视频图像坐标原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 YPos 为指定像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     * @param _yPos 水印原点距离视频图像坐标原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 YPos 为指定像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
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
                     * 获取图片水印模板，仅当 Type 为 image，该字段必填且有效。
                     * @return ImageTemplate 图片水印模板，仅当 Type 为 image，该字段必填且有效。
                     * 
                     */
                    ImageWatermarkInput GetImageTemplate() const;

                    /**
                     * 设置图片水印模板，仅当 Type 为 image，该字段必填且有效。
                     * @param _imageTemplate 图片水印模板，仅当 Type 为 image，该字段必填且有效。
                     * 
                     */
                    void SetImageTemplate(const ImageWatermarkInput& _imageTemplate);

                    /**
                     * 判断参数 ImageTemplate 是否已赋值
                     * @return ImageTemplate 是否已赋值
                     * 
                     */
                    bool ImageTemplateHasBeenSet() const;

                    /**
                     * 获取文字水印模板，仅当 Type 为 text，该字段必填且有效。
                     * @return TextTemplate 文字水印模板，仅当 Type 为 text，该字段必填且有效。
                     * 
                     */
                    TextWatermarkTemplateInput GetTextTemplate() const;

                    /**
                     * 设置文字水印模板，仅当 Type 为 text，该字段必填且有效。
                     * @param _textTemplate 文字水印模板，仅当 Type 为 text，该字段必填且有效。
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
                     * 获取SVG 水印模板，仅当 Type 为 svg，该字段必填且有效。
                     * @return SvgTemplate SVG 水印模板，仅当 Type 为 svg，该字段必填且有效。
                     * 
                     */
                    SvgWatermarkInput GetSvgTemplate() const;

                    /**
                     * 设置SVG 水印模板，仅当 Type 为 svg，该字段必填且有效。
                     * @param _svgTemplate SVG 水印模板，仅当 Type 为 svg，该字段必填且有效。
                     * 
                     */
                    void SetSvgTemplate(const SvgWatermarkInput& _svgTemplate);

                    /**
                     * 判断参数 SvgTemplate 是否已赋值
                     * @return SvgTemplate 是否已赋值
                     * 
                     */
                    bool SvgTemplateHasBeenSet() const;

                private:

                    /**
                     * 水印类型，可选值：
<li>image：图片水印；</li>
<li>text：文字水印；</li>
<li>svg：SVG 水印。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 水印模板名称，长度限制：64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 模板描述信息，长度限制：256 个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 原点位置，可选值：
<li>TopLeft：表示坐标原点位于视频图像左上角，水印原点为图片或文字的左上角；</li>
<li>TopRight：表示坐标原点位于视频图像的右上角，水印原点为图片或文字的右上角；</li>
<li>BottomLeft：表示坐标原点位于视频图像的左下角，水印原点为图片或文字的左下角；</li>
<li>BottomRight：表示坐标原点位于视频图像的右下角，水印原点为图片或文字的右下角。</li>
默认值：TopLeft。
                     */
                    std::string m_coordinateOrigin;
                    bool m_coordinateOriginHasBeenSet;

                    /**
                     * 水印原点距离视频图像坐标原点的水平位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 XPos 为视频宽度指定百分比，如 10% 表示 XPos 为视频宽度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 XPos 为指定像素，如 100px 表示 XPos 为 100 像素。</li>
默认值：0px。
                     */
                    std::string m_xPos;
                    bool m_xPosHasBeenSet;

                    /**
                     * 水印原点距离视频图像坐标原点的垂直位置。支持 %、px 两种格式：
<li>当字符串以 % 结尾，表示水印 YPos 为视频高度指定百分比，如 10% 表示 YPos 为视频高度的 10%；</li>
<li>当字符串以 px 结尾，表示水印 YPos 为指定像素，如 100px 表示 YPos 为 100 像素。</li>
默认值：0px。
                     */
                    std::string m_yPos;
                    bool m_yPosHasBeenSet;

                    /**
                     * 图片水印模板，仅当 Type 为 image，该字段必填且有效。
                     */
                    ImageWatermarkInput m_imageTemplate;
                    bool m_imageTemplateHasBeenSet;

                    /**
                     * 文字水印模板，仅当 Type 为 text，该字段必填且有效。
                     */
                    TextWatermarkTemplateInput m_textTemplate;
                    bool m_textTemplateHasBeenSet;

                    /**
                     * SVG 水印模板，仅当 Type 为 svg，该字段必填且有效。
                     */
                    SvgWatermarkInput m_svgTemplate;
                    bool m_svgTemplateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEWATERMARKTEMPLATEREQUEST_H_
