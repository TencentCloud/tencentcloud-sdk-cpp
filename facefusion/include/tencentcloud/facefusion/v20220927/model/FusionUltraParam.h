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

#ifndef TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSIONULTRAPARAM_H_
#define TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSIONULTRAPARAM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20220927
        {
            namespace Model
            {
                /**
                * 高精度融合参数
                */
                class FusionUltraParam : public AbstractModel
                {
                public:
                    FusionUltraParam();
                    ~FusionUltraParam() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拉脸强度。主要用于调整生成结果人脸脸型更像素材模板还是用户人脸。取值越大越像用户人脸。
取值范围：0-1之间。默认取值0.7。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @return WarpRadio 拉脸强度。主要用于调整生成结果人脸脸型更像素材模板还是用户人脸。取值越大越像用户人脸。
取值范围：0-1之间。默认取值0.7。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    double GetWarpRadio() const;

                    /**
                     * 设置拉脸强度。主要用于调整生成结果人脸脸型更像素材模板还是用户人脸。取值越大越像用户人脸。
取值范围：0-1之间。默认取值0.7。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @param _warpRadio 拉脸强度。主要用于调整生成结果人脸脸型更像素材模板还是用户人脸。取值越大越像用户人脸。
取值范围：0-1之间。默认取值0.7。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    void SetWarpRadio(const double& _warpRadio);

                    /**
                     * 判断参数 WarpRadio 是否已赋值
                     * @return WarpRadio 是否已赋值
                     * 
                     */
                    bool WarpRadioHasBeenSet() const;

                    /**
                     * 获取人脸增强强度。对整个人脸进行增强，增加清晰度，改善质量。当生成的人脸不够清晰，质感不够好的时候可以设置。取值越大增强强度越大。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @return EnhanceRadio 人脸增强强度。对整个人脸进行增强，增加清晰度，改善质量。当生成的人脸不够清晰，质感不够好的时候可以设置。取值越大增强强度越大。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    double GetEnhanceRadio() const;

                    /**
                     * 设置人脸增强强度。对整个人脸进行增强，增加清晰度，改善质量。当生成的人脸不够清晰，质感不够好的时候可以设置。取值越大增强强度越大。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @param _enhanceRadio 人脸增强强度。对整个人脸进行增强，增加清晰度，改善质量。当生成的人脸不够清晰，质感不够好的时候可以设置。取值越大增强强度越大。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    void SetEnhanceRadio(const double& _enhanceRadio);

                    /**
                     * 判断参数 EnhanceRadio 是否已赋值
                     * @return EnhanceRadio 是否已赋值
                     * 
                     */
                    bool EnhanceRadioHasBeenSet() const;

                    /**
                     * 获取磨皮强度。当生成脸的图像面部显脏时，可进行设置。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @return MpRadio 磨皮强度。当生成脸的图像面部显脏时，可进行设置。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    double GetMpRadio() const;

                    /**
                     * 设置磨皮强度。当生成脸的图像面部显脏时，可进行设置。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @param _mpRadio 磨皮强度。当生成脸的图像面部显脏时，可进行设置。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    void SetMpRadio(const double& _mpRadio);

                    /**
                     * 判断参数 MpRadio 是否已赋值
                     * @return MpRadio 是否已赋值
                     * 
                     */
                    bool MpRadioHasBeenSet() const;

                    /**
                     * 获取人脸模糊开关（暂不支持）
当生成人脸比较清晰时，将人脸模糊到接近模板的清晰度的程度

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @return BlurRadio 人脸模糊开关（暂不支持）
当生成人脸比较清晰时，将人脸模糊到接近模板的清晰度的程度

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    double GetBlurRadio() const;

                    /**
                     * 设置人脸模糊开关（暂不支持）
当生成人脸比较清晰时，将人脸模糊到接近模板的清晰度的程度

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @param _blurRadio 人脸模糊开关（暂不支持）
当生成人脸比较清晰时，将人脸模糊到接近模板的清晰度的程度

该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    void SetBlurRadio(const double& _blurRadio);

                    /**
                     * 判断参数 BlurRadio 是否已赋值
                     * @return BlurRadio 是否已赋值
                     * 
                     */
                    bool BlurRadioHasBeenSet() const;

                    /**
                     * 获取牙齿增强开关，默认取值为1
牙齿增强，修复牙齿。当生成牙齿不好（如牙齿裂开）可以打开此开关
0：牙齿增强关闭
1：牙齿增强打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @return TeethEnhanceRadio 牙齿增强开关，默认取值为1
牙齿增强，修复牙齿。当生成牙齿不好（如牙齿裂开）可以打开此开关
0：牙齿增强关闭
1：牙齿增强打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    double GetTeethEnhanceRadio() const;

                    /**
                     * 设置牙齿增强开关，默认取值为1
牙齿增强，修复牙齿。当生成牙齿不好（如牙齿裂开）可以打开此开关
0：牙齿增强关闭
1：牙齿增强打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @param _teethEnhanceRadio 牙齿增强开关，默认取值为1
牙齿增强，修复牙齿。当生成牙齿不好（如牙齿裂开）可以打开此开关
0：牙齿增强关闭
1：牙齿增强打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    void SetTeethEnhanceRadio(const double& _teethEnhanceRadio);

                    /**
                     * 判断参数 TeethEnhanceRadio 是否已赋值
                     * @return TeethEnhanceRadio 是否已赋值
                     * 
                     */
                    bool TeethEnhanceRadioHasBeenSet() const;

                    /**
                     * 获取妆容迁移开关，默认取值为0。
将素材模板的妆容迁移到融合结果上。即：如果希望妆容效果与模板图保持一致，可以打开此开关。
0：妆容迁移关闭
1：妆容迁移打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @return MakeupTransferRadio 妆容迁移开关，默认取值为0。
将素材模板的妆容迁移到融合结果上。即：如果希望妆容效果与模板图保持一致，可以打开此开关。
0：妆容迁移关闭
1：妆容迁移打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    double GetMakeupTransferRadio() const;

                    /**
                     * 设置妆容迁移开关，默认取值为0。
将素材模板的妆容迁移到融合结果上。即：如果希望妆容效果与模板图保持一致，可以打开此开关。
0：妆容迁移关闭
1：妆容迁移打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * @param _makeupTransferRadio 妆容迁移开关，默认取值为0。
将素材模板的妆容迁移到融合结果上。即：如果希望妆容效果与模板图保持一致，可以打开此开关。
0：妆容迁移关闭
1：妆容迁移打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     * 
                     */
                    void SetMakeupTransferRadio(const double& _makeupTransferRadio);

                    /**
                     * 判断参数 MakeupTransferRadio 是否已赋值
                     * @return MakeupTransferRadio 是否已赋值
                     * 
                     */
                    bool MakeupTransferRadioHasBeenSet() const;

                private:

                    /**
                     * 拉脸强度。主要用于调整生成结果人脸脸型更像素材模板还是用户人脸。取值越大越像用户人脸。
取值范围：0-1之间。默认取值0.7。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     */
                    double m_warpRadio;
                    bool m_warpRadioHasBeenSet;

                    /**
                     * 人脸增强强度。对整个人脸进行增强，增加清晰度，改善质量。当生成的人脸不够清晰，质感不够好的时候可以设置。取值越大增强强度越大。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     */
                    double m_enhanceRadio;
                    bool m_enhanceRadioHasBeenSet;

                    /**
                     * 磨皮强度。当生成脸的图像面部显脏时，可进行设置。
取值范围：0-1之间。默认取值0.5。

该参数仅对SwapModelType（模型类型）取值1-5生效
                     */
                    double m_mpRadio;
                    bool m_mpRadioHasBeenSet;

                    /**
                     * 人脸模糊开关（暂不支持）
当生成人脸比较清晰时，将人脸模糊到接近模板的清晰度的程度

该参数仅对SwapModelType（模型类型）取值1-5生效
                     */
                    double m_blurRadio;
                    bool m_blurRadioHasBeenSet;

                    /**
                     * 牙齿增强开关，默认取值为1
牙齿增强，修复牙齿。当生成牙齿不好（如牙齿裂开）可以打开此开关
0：牙齿增强关闭
1：牙齿增强打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     */
                    double m_teethEnhanceRadio;
                    bool m_teethEnhanceRadioHasBeenSet;

                    /**
                     * 妆容迁移开关，默认取值为0。
将素材模板的妆容迁移到融合结果上。即：如果希望妆容效果与模板图保持一致，可以打开此开关。
0：妆容迁移关闭
1：妆容迁移打开
该参数仅对SwapModelType（模型类型）取值1-5生效
                     */
                    double m_makeupTransferRadio;
                    bool m_makeupTransferRadioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20220927_MODEL_FUSIONULTRAPARAM_H_
