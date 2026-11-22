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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONINFO_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ResultList.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 试题识别结果
                */
                class QuestionInfo : public AbstractModel
                {
                public:
                    QuestionInfo();
                    ~QuestionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>旋转角度</p>
                     * @return Angle <p>旋转角度</p>
                     * 
                     */
                    double GetAngle() const;

                    /**
                     * 设置<p>旋转角度</p>
                     * @param _angle <p>旋转角度</p>
                     * 
                     */
                    void SetAngle(const double& _angle);

                    /**
                     * 判断参数 Angle 是否已赋值
                     * @return Angle 是否已赋值
                     * 
                     */
                    bool AngleHasBeenSet() const;

                    /**
                     * 获取<p>预处理后图片高度</p><p>单位：px</p>
                     * @return Height <p>预处理后图片高度</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置<p>预处理后图片高度</p><p>单位：px</p>
                     * @param _height <p>预处理后图片高度</p><p>单位：px</p>
                     * 
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     * 
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取<p>预处理后图片宽度</p><p>单位：px</p>
                     * @return Width <p>预处理后图片宽度</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置<p>预处理后图片宽度</p><p>单位：px</p>
                     * @param _width <p>预处理后图片宽度</p><p>单位：px</p>
                     * 
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     * 
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取<p>文档元素</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResultList <p>文档元素</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ResultList> GetResultList() const;

                    /**
                     * 设置<p>文档元素</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resultList <p>文档元素</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResultList(const std::vector<ResultList>& _resultList);

                    /**
                     * 判断参数 ResultList 是否已赋值
                     * @return ResultList 是否已赋值
                     * 
                     */
                    bool ResultListHasBeenSet() const;

                    /**
                     * 获取<p>输入图片高度</p><p>单位：px</p>
                     * @return OrgHeight <p>输入图片高度</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetOrgHeight() const;

                    /**
                     * 设置<p>输入图片高度</p><p>单位：px</p>
                     * @param _orgHeight <p>输入图片高度</p><p>单位：px</p>
                     * 
                     */
                    void SetOrgHeight(const int64_t& _orgHeight);

                    /**
                     * 判断参数 OrgHeight 是否已赋值
                     * @return OrgHeight 是否已赋值
                     * 
                     */
                    bool OrgHeightHasBeenSet() const;

                    /**
                     * 获取<p>输入图片宽度</p><p>单位：px</p>
                     * @return OrgWidth <p>输入图片宽度</p><p>单位：px</p>
                     * 
                     */
                    int64_t GetOrgWidth() const;

                    /**
                     * 设置<p>输入图片宽度</p><p>单位：px</p>
                     * @param _orgWidth <p>输入图片宽度</p><p>单位：px</p>
                     * 
                     */
                    void SetOrgWidth(const int64_t& _orgWidth);

                    /**
                     * 判断参数 OrgWidth 是否已赋值
                     * @return OrgWidth 是否已赋值
                     * 
                     */
                    bool OrgWidthHasBeenSet() const;

                    /**
                     * 获取<p>废弃字段</p>
                     * @return ImageBase64 <p>废弃字段</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>废弃字段</p>
                     * @param _imageBase64 <p>废弃字段</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

                    /**
                     * 获取<p>预处理后的图片URL,如果开启了图像切边矫正，后续的坐标都是基于当前图片返回的坐标</p>
                     * @return ReturnImageUrl <p>预处理后的图片URL,如果开启了图像切边矫正，后续的坐标都是基于当前图片返回的坐标</p>
                     * 
                     */
                    std::string GetReturnImageUrl() const;

                    /**
                     * 设置<p>预处理后的图片URL,如果开启了图像切边矫正，后续的坐标都是基于当前图片返回的坐标</p>
                     * @param _returnImageUrl <p>预处理后的图片URL,如果开启了图像切边矫正，后续的坐标都是基于当前图片返回的坐标</p>
                     * 
                     */
                    void SetReturnImageUrl(const std::string& _returnImageUrl);

                    /**
                     * 判断参数 ReturnImageUrl 是否已赋值
                     * @return ReturnImageUrl 是否已赋值
                     * 
                     */
                    bool ReturnImageUrlHasBeenSet() const;

                    /**
                     * 获取<p>【批改 API 专属特性】图片类型预判别（常规作业 / 非作业图片 / 无作答痕迹），仅 ModelType = yuanbao_correction_model 且快速模式下生效。其他模型类型不支持该能力。</p>
                     * @return ClassName <p>【批改 API 专属特性】图片类型预判别（常规作业 / 非作业图片 / 无作答痕迹），仅 ModelType = yuanbao_correction_model 且快速模式下生效。其他模型类型不支持该能力。</p>
                     * 
                     */
                    std::string GetClassName() const;

                    /**
                     * 设置<p>【批改 API 专属特性】图片类型预判别（常规作业 / 非作业图片 / 无作答痕迹），仅 ModelType = yuanbao_correction_model 且快速模式下生效。其他模型类型不支持该能力。</p>
                     * @param _className <p>【批改 API 专属特性】图片类型预判别（常规作业 / 非作业图片 / 无作答痕迹），仅 ModelType = yuanbao_correction_model 且快速模式下生效。其他模型类型不支持该能力。</p>
                     * 
                     */
                    void SetClassName(const std::string& _className);

                    /**
                     * 判断参数 ClassName 是否已赋值
                     * @return ClassName 是否已赋值
                     * 
                     */
                    bool ClassNameHasBeenSet() const;

                    /**
                     * 获取<p>文档所在页</p>
                     * @return PageIndex <p>文档所在页</p>
                     * 
                     */
                    int64_t GetPageIndex() const;

                    /**
                     * 设置<p>文档所在页</p>
                     * @param _pageIndex <p>文档所在页</p>
                     * 
                     */
                    void SetPageIndex(const int64_t& _pageIndex);

                    /**
                     * 判断参数 PageIndex 是否已赋值
                     * @return PageIndex 是否已赋值
                     * 
                     */
                    bool PageIndexHasBeenSet() const;

                private:

                    /**
                     * <p>旋转角度</p>
                     */
                    double m_angle;
                    bool m_angleHasBeenSet;

                    /**
                     * <p>预处理后图片高度</p><p>单位：px</p>
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * <p>预处理后图片宽度</p><p>单位：px</p>
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * <p>文档元素</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ResultList> m_resultList;
                    bool m_resultListHasBeenSet;

                    /**
                     * <p>输入图片高度</p><p>单位：px</p>
                     */
                    int64_t m_orgHeight;
                    bool m_orgHeightHasBeenSet;

                    /**
                     * <p>输入图片宽度</p><p>单位：px</p>
                     */
                    int64_t m_orgWidth;
                    bool m_orgWidthHasBeenSet;

                    /**
                     * <p>废弃字段</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                    /**
                     * <p>预处理后的图片URL,如果开启了图像切边矫正，后续的坐标都是基于当前图片返回的坐标</p>
                     */
                    std::string m_returnImageUrl;
                    bool m_returnImageUrlHasBeenSet;

                    /**
                     * <p>【批改 API 专属特性】图片类型预判别（常规作业 / 非作业图片 / 无作答痕迹），仅 ModelType = yuanbao_correction_model 且快速模式下生效。其他模型类型不支持该能力。</p>
                     */
                    std::string m_className;
                    bool m_classNameHasBeenSet;

                    /**
                     * <p>文档所在页</p>
                     */
                    int64_t m_pageIndex;
                    bool m_pageIndexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONINFO_H_
