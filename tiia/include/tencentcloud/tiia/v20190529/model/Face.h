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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_FACE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_FACE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/Labels.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * 公众人物识别人脸信息
                */
                class Face : public AbstractModel
                {
                public:
                    Face();
                    ~Face() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取与图片中人脸最相似的公众人物的名字。
                     * @return Name 与图片中人脸最相似的公众人物的名字。
                     */
                    std::string GetName() const;

                    /**
                     * 设置与图片中人脸最相似的公众人物的名字。
                     * @param Name 与图片中人脸最相似的公众人物的名字。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取公众人物身份标签的数组，一个公众人物可能有多个身份标签。
                     * @return Labels 公众人物身份标签的数组，一个公众人物可能有多个身份标签。
                     */
                    std::vector<Labels> GetLabels() const;

                    /**
                     * 设置公众人物身份标签的数组，一个公众人物可能有多个身份标签。
                     * @param Labels 公众人物身份标签的数组，一个公众人物可能有多个身份标签。
                     */
                    void SetLabels(const std::vector<Labels>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     */
                    bool LabelsHasBeenSet() const;

                    /**
                     * 获取对人物的简介。
                     * @return BasicInfo 对人物的简介。
                     */
                    std::string GetBasicInfo() const;

                    /**
                     * 设置对人物的简介。
                     * @param BasicInfo 对人物的简介。
                     */
                    void SetBasicInfo(const std::string& _basicInfo);

                    /**
                     * 判断参数 BasicInfo 是否已赋值
                     * @return BasicInfo 是否已赋值
                     */
                    bool BasicInfoHasBeenSet() const;

                    /**
                     * 获取算法对于Name的置信度（图像中人脸与公众人物的相似度），0-100之间，值越高，表示对于Name越确定。
当Confidence低于70分时，Name仅供参考。您可以根据业务实际情况调整阈值。
                     * @return Confidence 算法对于Name的置信度（图像中人脸与公众人物的相似度），0-100之间，值越高，表示对于Name越确定。
当Confidence低于70分时，Name仅供参考。您可以根据业务实际情况调整阈值。
                     */
                    int64_t GetConfidence() const;

                    /**
                     * 设置算法对于Name的置信度（图像中人脸与公众人物的相似度），0-100之间，值越高，表示对于Name越确定。
当Confidence低于70分时，Name仅供参考。您可以根据业务实际情况调整阈值。
                     * @param Confidence 算法对于Name的置信度（图像中人脸与公众人物的相似度），0-100之间，值越高，表示对于Name越确定。
当Confidence低于70分时，Name仅供参考。您可以根据业务实际情况调整阈值。
                     */
                    void SetConfidence(const int64_t& _confidence);

                    /**
                     * 判断参数 Confidence 是否已赋值
                     * @return Confidence 是否已赋值
                     */
                    bool ConfidenceHasBeenSet() const;

                    /**
                     * 获取人脸区域左上角横坐标。
                     * @return X 人脸区域左上角横坐标。
                     */
                    int64_t GetX() const;

                    /**
                     * 设置人脸区域左上角横坐标。
                     * @param X 人脸区域左上角横坐标。
                     */
                    void SetX(const int64_t& _x);

                    /**
                     * 判断参数 X 是否已赋值
                     * @return X 是否已赋值
                     */
                    bool XHasBeenSet() const;

                    /**
                     * 获取人脸区域左上角纵坐标。
                     * @return Y 人脸区域左上角纵坐标。
                     */
                    int64_t GetY() const;

                    /**
                     * 设置人脸区域左上角纵坐标。
                     * @param Y 人脸区域左上角纵坐标。
                     */
                    void SetY(const int64_t& _y);

                    /**
                     * 判断参数 Y 是否已赋值
                     * @return Y 是否已赋值
                     */
                    bool YHasBeenSet() const;

                    /**
                     * 获取人脸区域宽度。
                     * @return Width 人脸区域宽度。
                     */
                    int64_t GetWidth() const;

                    /**
                     * 设置人脸区域宽度。
                     * @param Width 人脸区域宽度。
                     */
                    void SetWidth(const int64_t& _width);

                    /**
                     * 判断参数 Width 是否已赋值
                     * @return Width 是否已赋值
                     */
                    bool WidthHasBeenSet() const;

                    /**
                     * 获取人脸区域高度。
                     * @return Height 人脸区域高度。
                     */
                    int64_t GetHeight() const;

                    /**
                     * 设置人脸区域高度。
                     * @param Height 人脸区域高度。
                     */
                    void SetHeight(const int64_t& _height);

                    /**
                     * 判断参数 Height 是否已赋值
                     * @return Height 是否已赋值
                     */
                    bool HeightHasBeenSet() const;

                    /**
                     * 获取公众人物的唯一编号，可以用于区分同名人物、一个人物不同称呼等情况。唯一编号为8个字符构成的字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 公众人物的唯一编号，可以用于区分同名人物、一个人物不同称呼等情况。唯一编号为8个字符构成的字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetID() const;

                    /**
                     * 设置公众人物的唯一编号，可以用于区分同名人物、一个人物不同称呼等情况。唯一编号为8个字符构成的字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ID 公众人物的唯一编号，可以用于区分同名人物、一个人物不同称呼等情况。唯一编号为8个字符构成的字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 与图片中人脸最相似的公众人物的名字。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 公众人物身份标签的数组，一个公众人物可能有多个身份标签。
                     */
                    std::vector<Labels> m_labels;
                    bool m_labelsHasBeenSet;

                    /**
                     * 对人物的简介。
                     */
                    std::string m_basicInfo;
                    bool m_basicInfoHasBeenSet;

                    /**
                     * 算法对于Name的置信度（图像中人脸与公众人物的相似度），0-100之间，值越高，表示对于Name越确定。
当Confidence低于70分时，Name仅供参考。您可以根据业务实际情况调整阈值。
                     */
                    int64_t m_confidence;
                    bool m_confidenceHasBeenSet;

                    /**
                     * 人脸区域左上角横坐标。
                     */
                    int64_t m_x;
                    bool m_xHasBeenSet;

                    /**
                     * 人脸区域左上角纵坐标。
                     */
                    int64_t m_y;
                    bool m_yHasBeenSet;

                    /**
                     * 人脸区域宽度。
                     */
                    int64_t m_width;
                    bool m_widthHasBeenSet;

                    /**
                     * 人脸区域高度。
                     */
                    int64_t m_height;
                    bool m_heightHasBeenSet;

                    /**
                     * 公众人物的唯一编号，可以用于区分同名人物、一个人物不同称呼等情况。唯一编号为8个字符构成的字符串。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_FACE_H_
