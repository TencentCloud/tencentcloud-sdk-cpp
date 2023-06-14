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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTINVOICEOCRRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTINVOICEOCRRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FlightInvoiceInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * FlightInvoiceOCR返回参数结构体
                */
                class FlightInvoiceOCRResponse : public AbstractModel
                {
                public:
                    FlightInvoiceOCRResponse();
                    ~FlightInvoiceOCRResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机票行程单识别结果，具体内容请点击左侧链接。
                     * @return FlightInvoiceInfos 机票行程单识别结果，具体内容请点击左侧链接。
                     * 
                     */
                    std::vector<FlightInvoiceInfo> GetFlightInvoiceInfos() const;

                    /**
                     * 判断参数 FlightInvoiceInfos 是否已赋值
                     * @return FlightInvoiceInfos 是否已赋值
                     * 
                     */
                    bool FlightInvoiceInfosHasBeenSet() const;

                private:

                    /**
                     * 机票行程单识别结果，具体内容请点击左侧链接。
                     */
                    std::vector<FlightInvoiceInfo> m_flightInvoiceInfos;
                    bool m_flightInvoiceInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_FLIGHTINVOICEOCRRESPONSE_H_
