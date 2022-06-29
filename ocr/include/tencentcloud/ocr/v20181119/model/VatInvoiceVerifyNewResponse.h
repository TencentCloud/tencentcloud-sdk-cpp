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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYNEWRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYNEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoice.h>
#include <tencentcloud/ocr/v20181119/model/VehicleInvoiceInfo.h>
#include <tencentcloud/ocr/v20181119/model/UsedVehicleInvoiceInfo.h>
#include <tencentcloud/ocr/v20181119/model/PassInvoiceInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * VatInvoiceVerifyNew返回参数结构体
                */
                class VatInvoiceVerifyNewResponse : public AbstractModel
                {
                public:
                    VatInvoiceVerifyNewResponse();
                    ~VatInvoiceVerifyNewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取增值税发票信息，详情请点击左侧链接。
                     * @return Invoice 增值税发票信息，详情请点击左侧链接。
                     */
                    VatInvoice GetInvoice() const;

                    /**
                     * 判断参数 Invoice 是否已赋值
                     * @return Invoice 是否已赋值
                     */
                    bool InvoiceHasBeenSet() const;

                    /**
                     * 获取机动车销售统一发票信息
                     * @return VehicleInvoiceInfo 机动车销售统一发票信息
                     */
                    VehicleInvoiceInfo GetVehicleInvoiceInfo() const;

                    /**
                     * 判断参数 VehicleInvoiceInfo 是否已赋值
                     * @return VehicleInvoiceInfo 是否已赋值
                     */
                    bool VehicleInvoiceInfoHasBeenSet() const;

                    /**
                     * 获取二手车销售统一发票信息
                     * @return UsedVehicleInvoiceInfo 二手车销售统一发票信息
                     */
                    UsedVehicleInvoiceInfo GetUsedVehicleInvoiceInfo() const;

                    /**
                     * 判断参数 UsedVehicleInvoiceInfo 是否已赋值
                     * @return UsedVehicleInvoiceInfo 是否已赋值
                     */
                    bool UsedVehicleInvoiceInfoHasBeenSet() const;

                    /**
                     * 获取通行费发票信息
                     * @return PassInvoiceInfoList 通行费发票信息
                     */
                    std::vector<PassInvoiceInfo> GetPassInvoiceInfoList() const;

                    /**
                     * 判断参数 PassInvoiceInfoList 是否已赋值
                     * @return PassInvoiceInfoList 是否已赋值
                     */
                    bool PassInvoiceInfoListHasBeenSet() const;

                private:

                    /**
                     * 增值税发票信息，详情请点击左侧链接。
                     */
                    VatInvoice m_invoice;
                    bool m_invoiceHasBeenSet;

                    /**
                     * 机动车销售统一发票信息
                     */
                    VehicleInvoiceInfo m_vehicleInvoiceInfo;
                    bool m_vehicleInvoiceInfoHasBeenSet;

                    /**
                     * 二手车销售统一发票信息
                     */
                    UsedVehicleInvoiceInfo m_usedVehicleInvoiceInfo;
                    bool m_usedVehicleInvoiceInfoHasBeenSet;

                    /**
                     * 通行费发票信息
                     */
                    std::vector<PassInvoiceInfo> m_passInvoiceInfoList;
                    bool m_passInvoiceInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_VATINVOICEVERIFYNEWRESPONSE_H_
