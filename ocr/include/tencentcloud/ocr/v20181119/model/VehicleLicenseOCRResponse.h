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


                    /**
                     * 获取行驶证主页正面的识别结果，CardSide 为 FRONT。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FrontInfo 行驶证主页正面的识别结果，CardSide 为 FRONT。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextVehicleFront GetFrontInfo() const;

                    /**
                     * 判断参数 FrontInfo 是否已赋值
                     * @return FrontInfo 是否已赋值
                     */
                    bool FrontInfoHasBeenSet() const;

                    /**
                     * 获取行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BackInfo 行驶证副页正面的识别结果，CardSide 为 BACK。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TextVehicleBack GetBackInfo() const;

                    /**
                     * 判断参数 BackInfo 是否已赋值
                     * @return BackInfo 是否已赋值
                     */
                    bool BackInfoHasBeenSet() const;

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

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VEHICLELICENSEOCRRESPONSE_H_
