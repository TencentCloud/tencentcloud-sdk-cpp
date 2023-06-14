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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VINOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VINOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VinOCR返回参数结构体
                */
                class VinOCRResponse : public AbstractModel
                {
                public:
                    VinOCRResponse();
                    ~VinOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测到的车辆 VIN 码。
                     * @return Vin 检测到的车辆 VIN 码。
                     * 
                     */
                    std::string GetVin() const;

                    /**
                     * 判断参数 Vin 是否已赋值
                     * @return Vin 是否已赋值
                     * 
                     */
                    bool VinHasBeenSet() const;

                private:

                    /**
                     * 检测到的车辆 VIN 码。
                     */
                    std::string m_vin;
                    bool m_vinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VINOCRRESPONSE_H_
