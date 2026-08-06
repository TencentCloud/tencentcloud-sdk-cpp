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
                     * 获取<p>预处理后的图片base64编码</p>
                     * @return ImageBase64 <p>预处理后的图片base64编码</p>
                     * 
                     */
                    std::string GetImageBase64() const;

                    /**
                     * 设置<p>预处理后的图片base64编码</p>
                     * @param _imageBase64 <p>预处理后的图片base64编码</p>
                     * 
                     */
                    void SetImageBase64(const std::string& _imageBase64);

                    /**
                     * 判断参数 ImageBase64 是否已赋值
                     * @return ImageBase64 是否已赋值
                     * 
                     */
                    bool ImageBase64HasBeenSet() const;

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
                     * <p>预处理后的图片base64编码</p>
                     */
                    std::string m_imageBase64;
                    bool m_imageBase64HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_QUESTIONINFO_H_
