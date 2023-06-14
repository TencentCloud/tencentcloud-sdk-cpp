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

#ifndef TENCENTCLOUD_FMU_V20191213_MODEL_LIPCOLORINFO_H_
#define TENCENTCLOUD_FMU_V20191213_MODEL_LIPCOLORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/fmu/v20191213/model/RGBAInfo.h>
#include <tencentcloud/fmu/v20191213/model/FaceRect.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            namespace Model
            {
                /**
                * 唇色信息
                */
                class LipColorInfo : public AbstractModel
                {
                public:
                    LipColorInfo();
                    ~LipColorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用RGBA模型试唇色。
                     * @return RGBA 使用RGBA模型试唇色。
                     * 
                     */
                    RGBAInfo GetRGBA() const;

                    /**
                     * 设置使用RGBA模型试唇色。
                     * @param _rGBA 使用RGBA模型试唇色。
                     * 
                     */
                    void SetRGBA(const RGBAInfo& _rGBA);

                    /**
                     * 判断参数 RGBA 是否已赋值
                     * @return RGBA 是否已赋值
                     * 
                     */
                    bool RGBAHasBeenSet() const;

                    /**
                     * 获取使用已注册的 LUT 文件试唇色。  
ModelId 和 RGBA 两个参数只需提供一个，若都提供只使用 ModelId。
                     * @return ModelId 使用已注册的 LUT 文件试唇色。  
ModelId 和 RGBA 两个参数只需提供一个，若都提供只使用 ModelId。
                     * 
                     */
                    std::string GetModelId() const;

                    /**
                     * 设置使用已注册的 LUT 文件试唇色。  
ModelId 和 RGBA 两个参数只需提供一个，若都提供只使用 ModelId。
                     * @param _modelId 使用已注册的 LUT 文件试唇色。  
ModelId 和 RGBA 两个参数只需提供一个，若都提供只使用 ModelId。
                     * 
                     */
                    void SetModelId(const std::string& _modelId);

                    /**
                     * 判断参数 ModelId 是否已赋值
                     * @return ModelId 是否已赋值
                     * 
                     */
                    bool ModelIdHasBeenSet() const;

                    /**
                     * 获取人脸框位置。若不输入则选择 Image 或 Url 中面积最大的人脸。  
您可以通过 [人脸检测与分析](https://cloud.tencent.com/document/api/867/32800)  接口获取人脸框位置信息。
                     * @return FaceRect 人脸框位置。若不输入则选择 Image 或 Url 中面积最大的人脸。  
您可以通过 [人脸检测与分析](https://cloud.tencent.com/document/api/867/32800)  接口获取人脸框位置信息。
                     * 
                     */
                    FaceRect GetFaceRect() const;

                    /**
                     * 设置人脸框位置。若不输入则选择 Image 或 Url 中面积最大的人脸。  
您可以通过 [人脸检测与分析](https://cloud.tencent.com/document/api/867/32800)  接口获取人脸框位置信息。
                     * @param _faceRect 人脸框位置。若不输入则选择 Image 或 Url 中面积最大的人脸。  
您可以通过 [人脸检测与分析](https://cloud.tencent.com/document/api/867/32800)  接口获取人脸框位置信息。
                     * 
                     */
                    void SetFaceRect(const FaceRect& _faceRect);

                    /**
                     * 判断参数 FaceRect 是否已赋值
                     * @return FaceRect 是否已赋值
                     * 
                     */
                    bool FaceRectHasBeenSet() const;

                    /**
                     * 获取涂妆浓淡[0,100]。建议取值50。本参数仅控制ModelId对应的涂妆浓淡。
                     * @return ModelAlpha 涂妆浓淡[0,100]。建议取值50。本参数仅控制ModelId对应的涂妆浓淡。
                     * 
                     */
                    int64_t GetModelAlpha() const;

                    /**
                     * 设置涂妆浓淡[0,100]。建议取值50。本参数仅控制ModelId对应的涂妆浓淡。
                     * @param _modelAlpha 涂妆浓淡[0,100]。建议取值50。本参数仅控制ModelId对应的涂妆浓淡。
                     * 
                     */
                    void SetModelAlpha(const int64_t& _modelAlpha);

                    /**
                     * 判断参数 ModelAlpha 是否已赋值
                     * @return ModelAlpha 是否已赋值
                     * 
                     */
                    bool ModelAlphaHasBeenSet() const;

                private:

                    /**
                     * 使用RGBA模型试唇色。
                     */
                    RGBAInfo m_rGBA;
                    bool m_rGBAHasBeenSet;

                    /**
                     * 使用已注册的 LUT 文件试唇色。  
ModelId 和 RGBA 两个参数只需提供一个，若都提供只使用 ModelId。
                     */
                    std::string m_modelId;
                    bool m_modelIdHasBeenSet;

                    /**
                     * 人脸框位置。若不输入则选择 Image 或 Url 中面积最大的人脸。  
您可以通过 [人脸检测与分析](https://cloud.tencent.com/document/api/867/32800)  接口获取人脸框位置信息。
                     */
                    FaceRect m_faceRect;
                    bool m_faceRectHasBeenSet;

                    /**
                     * 涂妆浓淡[0,100]。建议取值50。本参数仅控制ModelId对应的涂妆浓淡。
                     */
                    int64_t m_modelAlpha;
                    bool m_modelAlphaHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_MODEL_LIPCOLORINFO_H_
