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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLELICENSEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLELICENSEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/TextVehicleFront.h>
#include <tencentcloud/ocr/v20181119/model/TextVehicleBack.h>
#include <tencentcloud/ocr/v20181119/model/TextTractorVehicleBack.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VehicleLicenseOCR返回参数结构体
                */
                class VehicleLicenseOCRResponse : public AbstractModel
                {
                public:
                    VehicleLicenseOCRResponse();
                    ~VehicleLicenseOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取行驶证主页正面的识别结果，CardSide 为 FRONT。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontInfo 行驶证主页正面的识别结果，CardSide 为 FRONT。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextVehicleFront GetFrontInfo() const;

                    /**
                     * 判断参数 FrontInfo 是否已赋值
                     * @return FrontInfo 是否已赋值
                     * 
                     */
                    bool FrontInfoHasBeenSet() const;

                    /**
                     * 获取行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackInfo 行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextVehicleBack GetBackInfo() const;

                    /**
                     * 判断参数 BackInfo 是否已赋值
                     * @return BackInfo 是否已赋值
                     * 
                     */
                    bool BackInfoHasBeenSet() const;

                    /**
                     * 获取Code 告警码列表和释义：
-9102  复印件告警
-9103  翻拍件告警
-9104  反光告警
-9105  模糊告警
-9106  边框不完整告警
注：告警码可以同时存在多个
                     * @return RecognizeWarnCode Code 告警码列表和释义：
-9102  复印件告警
-9103  翻拍件告警
-9104  反光告警
-9105  模糊告警
-9106  边框不完整告警
注：告警码可以同时存在多个
                     * 
                     */
                    std::vector<int64_t> GetRecognizeWarnCode() const;

                    /**
                     * 判断参数 RecognizeWarnCode 是否已赋值
                     * @return RecognizeWarnCode 是否已赋值
                     * 
                     */
                    bool RecognizeWarnCodeHasBeenSet() const;

                    /**
                     * 获取告警码说明：
WARN_DRIVER_LICENSE_COPY_CARD 复印件告警
WARN_DRIVER_LICENSE_SCREENED_CARD 翻拍件告警
WARN_DRIVER_LICENSE_REFLECTION 反光告警
WARN_DRIVER_LICENSE_BLUR 模糊告警
WARN_DRIVER_LICENSE_BORDER_INCOMPLETE 边框不完整告警
注：告警信息可以同时存在多个
                     * @return RecognizeWarnMsg 告警码说明：
WARN_DRIVER_LICENSE_COPY_CARD 复印件告警
WARN_DRIVER_LICENSE_SCREENED_CARD 翻拍件告警
WARN_DRIVER_LICENSE_REFLECTION 反光告警
WARN_DRIVER_LICENSE_BLUR 模糊告警
WARN_DRIVER_LICENSE_BORDER_INCOMPLETE 边框不完整告警
注：告警信息可以同时存在多个
                     * 
                     */
                    std::vector<std::string> GetRecognizeWarnMsg() const;

                    /**
                     * 判断参数 RecognizeWarnMsg 是否已赋值
                     * @return RecognizeWarnMsg 是否已赋值
                     * 
                     */
                    bool RecognizeWarnMsgHasBeenSet() const;

                    /**
                     * 获取行驶证类型 电子行驶证：Electronic 普通行驶证：Normal
                     * @return VehicleLicenseType 行驶证类型 电子行驶证：Electronic 普通行驶证：Normal
                     * 
                     */
                    std::string GetVehicleLicenseType() const;

                    /**
                     * 判断参数 VehicleLicenseType 是否已赋值
                     * @return VehicleLicenseType 是否已赋值
                     * 
                     */
                    bool VehicleLicenseTypeHasBeenSet() const;

                    /**
                     * 获取拖拉机行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TractorBackInfo 拖拉机行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TextTractorVehicleBack GetTractorBackInfo() const;

                    /**
                     * 判断参数 TractorBackInfo 是否已赋值
                     * @return TractorBackInfo 是否已赋值
                     * 
                     */
                    bool TractorBackInfoHasBeenSet() const;

                private:

                    /**
                     * 行驶证主页正面的识别结果，CardSide 为 FRONT。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextVehicleFront m_frontInfo;
                    bool m_frontInfoHasBeenSet;

                    /**
                     * 行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextVehicleBack m_backInfo;
                    bool m_backInfoHasBeenSet;

                    /**
                     * Code 告警码列表和释义：
-9102  复印件告警
-9103  翻拍件告警
-9104  反光告警
-9105  模糊告警
-9106  边框不完整告警
注：告警码可以同时存在多个
                     */
                    std::vector<int64_t> m_recognizeWarnCode;
                    bool m_recognizeWarnCodeHasBeenSet;

                    /**
                     * 告警码说明：
WARN_DRIVER_LICENSE_COPY_CARD 复印件告警
WARN_DRIVER_LICENSE_SCREENED_CARD 翻拍件告警
WARN_DRIVER_LICENSE_REFLECTION 反光告警
WARN_DRIVER_LICENSE_BLUR 模糊告警
WARN_DRIVER_LICENSE_BORDER_INCOMPLETE 边框不完整告警
注：告警信息可以同时存在多个
                     */
                    std::vector<std::string> m_recognizeWarnMsg;
                    bool m_recognizeWarnMsgHasBeenSet;

                    /**
                     * 行驶证类型 电子行驶证：Electronic 普通行驶证：Normal
                     */
                    std::string m_vehicleLicenseType;
                    bool m_vehicleLicenseTypeHasBeenSet;

                    /**
                     * 拖拉机行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextTractorVehicleBack m_tractorBackInfo;
                    bool m_tractorBackInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLELICENSEOCRRESPONSE_H_
