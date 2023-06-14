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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEITEM_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceInfo.h>
#include <tencentcloud/ocr/v20181119/model/VatElectronicInfo.h>
#include <tencentcloud/ocr/v20181119/model/MachinePrintedInvoice.h>
#include <tencentcloud/ocr/v20181119/model/BusInvoice.h>
#include <tencentcloud/ocr/v20181119/model/ShippingInvoice.h>
#include <tencentcloud/ocr/v20181119/model/TollInvoice.h>
#include <tencentcloud/ocr/v20181119/model/OtherInvoice.h>
#include <tencentcloud/ocr/v20181119/model/MotorVehicleSaleInvoice.h>
#include <tencentcloud/ocr/v20181119/model/UsedCarPurchaseInvoice.h>
#include <tencentcloud/ocr/v20181119/model/VatInvoiceRoll.h>
#include <tencentcloud/ocr/v20181119/model/TaxiTicket.h>
#include <tencentcloud/ocr/v20181119/model/QuotaInvoice.h>
#include <tencentcloud/ocr/v20181119/model/AirTransport.h>
#include <tencentcloud/ocr/v20181119/model/NonTaxIncomeBill.h>
#include <tencentcloud/ocr/v20181119/model/TrainTicket.h>
#include <tencentcloud/ocr/v20181119/model/MedicalInvoice.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 混贴票据中单张发票的内容
                */
                class SingleInvoiceItem : public AbstractModel
                {
                public:
                    SingleInvoiceItem();
                    ~SingleInvoiceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取增值税专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatSpecialInvoice 增值税专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatInvoiceInfo GetVatSpecialInvoice() const;

                    /**
                     * 设置增值税专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatSpecialInvoice 增值税专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatSpecialInvoice(const VatInvoiceInfo& _vatSpecialInvoice);

                    /**
                     * 判断参数 VatSpecialInvoice 是否已赋值
                     * @return VatSpecialInvoice 是否已赋值
                     * 
                     */
                    bool VatSpecialInvoiceHasBeenSet() const;

                    /**
                     * 获取增值税普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatCommonInvoice 增值税普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatInvoiceInfo GetVatCommonInvoice() const;

                    /**
                     * 设置增值税普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatCommonInvoice 增值税普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatCommonInvoice(const VatInvoiceInfo& _vatCommonInvoice);

                    /**
                     * 判断参数 VatCommonInvoice 是否已赋值
                     * @return VatCommonInvoice 是否已赋值
                     * 
                     */
                    bool VatCommonInvoiceHasBeenSet() const;

                    /**
                     * 获取增值税电子普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatElectronicCommonInvoice 增值税电子普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicCommonInvoice() const;

                    /**
                     * 设置增值税电子普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatElectronicCommonInvoice 增值税电子普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatElectronicCommonInvoice(const VatInvoiceInfo& _vatElectronicCommonInvoice);

                    /**
                     * 判断参数 VatElectronicCommonInvoice 是否已赋值
                     * @return VatElectronicCommonInvoice 是否已赋值
                     * 
                     */
                    bool VatElectronicCommonInvoiceHasBeenSet() const;

                    /**
                     * 获取增值税电子专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatElectronicSpecialInvoice 增值税电子专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicSpecialInvoice() const;

                    /**
                     * 设置增值税电子专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatElectronicSpecialInvoice 增值税电子专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatElectronicSpecialInvoice(const VatInvoiceInfo& _vatElectronicSpecialInvoice);

                    /**
                     * 判断参数 VatElectronicSpecialInvoice 是否已赋值
                     * @return VatElectronicSpecialInvoice 是否已赋值
                     * 
                     */
                    bool VatElectronicSpecialInvoiceHasBeenSet() const;

                    /**
                     * 获取区块链电子发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatElectronicInvoiceBlockchain 区块链电子发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicInvoiceBlockchain() const;

                    /**
                     * 设置区块链电子发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatElectronicInvoiceBlockchain 区块链电子发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatElectronicInvoiceBlockchain(const VatInvoiceInfo& _vatElectronicInvoiceBlockchain);

                    /**
                     * 判断参数 VatElectronicInvoiceBlockchain 是否已赋值
                     * @return VatElectronicInvoiceBlockchain 是否已赋值
                     * 
                     */
                    bool VatElectronicInvoiceBlockchainHasBeenSet() const;

                    /**
                     * 获取增值税电子普通发票(通行费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatElectronicInvoiceToll 增值税电子普通发票(通行费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatInvoiceInfo GetVatElectronicInvoiceToll() const;

                    /**
                     * 设置增值税电子普通发票(通行费)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatElectronicInvoiceToll 增值税电子普通发票(通行费)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatElectronicInvoiceToll(const VatInvoiceInfo& _vatElectronicInvoiceToll);

                    /**
                     * 判断参数 VatElectronicInvoiceToll 是否已赋值
                     * @return VatElectronicInvoiceToll 是否已赋值
                     * 
                     */
                    bool VatElectronicInvoiceTollHasBeenSet() const;

                    /**
                     * 获取电子发票(专用发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatElectronicSpecialInvoiceFull 电子发票(专用发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatElectronicInfo GetVatElectronicSpecialInvoiceFull() const;

                    /**
                     * 设置电子发票(专用发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatElectronicSpecialInvoiceFull 电子发票(专用发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatElectronicSpecialInvoiceFull(const VatElectronicInfo& _vatElectronicSpecialInvoiceFull);

                    /**
                     * 判断参数 VatElectronicSpecialInvoiceFull 是否已赋值
                     * @return VatElectronicSpecialInvoiceFull 是否已赋值
                     * 
                     */
                    bool VatElectronicSpecialInvoiceFullHasBeenSet() const;

                    /**
                     * 获取电子发票(普通发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatElectronicInvoiceFull 电子发票(普通发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatElectronicInfo GetVatElectronicInvoiceFull() const;

                    /**
                     * 设置电子发票(普通发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatElectronicInvoiceFull 电子发票(普通发票)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatElectronicInvoiceFull(const VatElectronicInfo& _vatElectronicInvoiceFull);

                    /**
                     * 判断参数 VatElectronicInvoiceFull 是否已赋值
                     * @return VatElectronicInvoiceFull 是否已赋值
                     * 
                     */
                    bool VatElectronicInvoiceFullHasBeenSet() const;

                    /**
                     * 获取通用机打发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachinePrintedInvoice 通用机打发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MachinePrintedInvoice GetMachinePrintedInvoice() const;

                    /**
                     * 设置通用机打发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _machinePrintedInvoice 通用机打发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMachinePrintedInvoice(const MachinePrintedInvoice& _machinePrintedInvoice);

                    /**
                     * 判断参数 MachinePrintedInvoice 是否已赋值
                     * @return MachinePrintedInvoice 是否已赋值
                     * 
                     */
                    bool MachinePrintedInvoiceHasBeenSet() const;

                    /**
                     * 获取汽车票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BusInvoice 汽车票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    BusInvoice GetBusInvoice() const;

                    /**
                     * 设置汽车票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _busInvoice 汽车票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBusInvoice(const BusInvoice& _busInvoice);

                    /**
                     * 判断参数 BusInvoice 是否已赋值
                     * @return BusInvoice 是否已赋值
                     * 
                     */
                    bool BusInvoiceHasBeenSet() const;

                    /**
                     * 获取轮船票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShippingInvoice 轮船票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ShippingInvoice GetShippingInvoice() const;

                    /**
                     * 设置轮船票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shippingInvoice 轮船票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShippingInvoice(const ShippingInvoice& _shippingInvoice);

                    /**
                     * 判断参数 ShippingInvoice 是否已赋值
                     * @return ShippingInvoice 是否已赋值
                     * 
                     */
                    bool ShippingInvoiceHasBeenSet() const;

                    /**
                     * 获取过路过桥费发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TollInvoice 过路过桥费发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TollInvoice GetTollInvoice() const;

                    /**
                     * 设置过路过桥费发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tollInvoice 过路过桥费发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTollInvoice(const TollInvoice& _tollInvoice);

                    /**
                     * 判断参数 TollInvoice 是否已赋值
                     * @return TollInvoice 是否已赋值
                     * 
                     */
                    bool TollInvoiceHasBeenSet() const;

                    /**
                     * 获取其他发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OtherInvoice 其他发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    OtherInvoice GetOtherInvoice() const;

                    /**
                     * 设置其他发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _otherInvoice 其他发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOtherInvoice(const OtherInvoice& _otherInvoice);

                    /**
                     * 判断参数 OtherInvoice 是否已赋值
                     * @return OtherInvoice 是否已赋值
                     * 
                     */
                    bool OtherInvoiceHasBeenSet() const;

                    /**
                     * 获取机动车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MotorVehicleSaleInvoice 机动车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MotorVehicleSaleInvoice GetMotorVehicleSaleInvoice() const;

                    /**
                     * 设置机动车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _motorVehicleSaleInvoice 机动车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMotorVehicleSaleInvoice(const MotorVehicleSaleInvoice& _motorVehicleSaleInvoice);

                    /**
                     * 判断参数 MotorVehicleSaleInvoice 是否已赋值
                     * @return MotorVehicleSaleInvoice 是否已赋值
                     * 
                     */
                    bool MotorVehicleSaleInvoiceHasBeenSet() const;

                    /**
                     * 获取二手车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UsedCarPurchaseInvoice 二手车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    UsedCarPurchaseInvoice GetUsedCarPurchaseInvoice() const;

                    /**
                     * 设置二手车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _usedCarPurchaseInvoice 二手车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsedCarPurchaseInvoice(const UsedCarPurchaseInvoice& _usedCarPurchaseInvoice);

                    /**
                     * 判断参数 UsedCarPurchaseInvoice 是否已赋值
                     * @return UsedCarPurchaseInvoice 是否已赋值
                     * 
                     */
                    bool UsedCarPurchaseInvoiceHasBeenSet() const;

                    /**
                     * 获取增值税普通发票(卷票)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VatInvoiceRoll 增值税普通发票(卷票)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VatInvoiceRoll GetVatInvoiceRoll() const;

                    /**
                     * 设置增值税普通发票(卷票)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vatInvoiceRoll 增值税普通发票(卷票)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVatInvoiceRoll(const VatInvoiceRoll& _vatInvoiceRoll);

                    /**
                     * 判断参数 VatInvoiceRoll 是否已赋值
                     * @return VatInvoiceRoll 是否已赋值
                     * 
                     */
                    bool VatInvoiceRollHasBeenSet() const;

                    /**
                     * 获取出租车发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaxiTicket 出租车发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TaxiTicket GetTaxiTicket() const;

                    /**
                     * 设置出租车发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taxiTicket 出租车发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaxiTicket(const TaxiTicket& _taxiTicket);

                    /**
                     * 判断参数 TaxiTicket 是否已赋值
                     * @return TaxiTicket 是否已赋值
                     * 
                     */
                    bool TaxiTicketHasBeenSet() const;

                    /**
                     * 获取定额发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QuotaInvoice 定额发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    QuotaInvoice GetQuotaInvoice() const;

                    /**
                     * 设置定额发票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _quotaInvoice 定额发票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQuotaInvoice(const QuotaInvoice& _quotaInvoice);

                    /**
                     * 判断参数 QuotaInvoice 是否已赋值
                     * @return QuotaInvoice 是否已赋值
                     * 
                     */
                    bool QuotaInvoiceHasBeenSet() const;

                    /**
                     * 获取机票行程单
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AirTransport 机票行程单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AirTransport GetAirTransport() const;

                    /**
                     * 设置机票行程单
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _airTransport 机票行程单
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAirTransport(const AirTransport& _airTransport);

                    /**
                     * 判断参数 AirTransport 是否已赋值
                     * @return AirTransport 是否已赋值
                     * 
                     */
                    bool AirTransportHasBeenSet() const;

                    /**
                     * 获取非税收入通用票据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonTaxIncomeGeneralBill 非税收入通用票据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NonTaxIncomeBill GetNonTaxIncomeGeneralBill() const;

                    /**
                     * 设置非税收入通用票据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonTaxIncomeGeneralBill 非税收入通用票据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNonTaxIncomeGeneralBill(const NonTaxIncomeBill& _nonTaxIncomeGeneralBill);

                    /**
                     * 判断参数 NonTaxIncomeGeneralBill 是否已赋值
                     * @return NonTaxIncomeGeneralBill 是否已赋值
                     * 
                     */
                    bool NonTaxIncomeGeneralBillHasBeenSet() const;

                    /**
                     * 获取非税收入一般缴款书(电子)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NonTaxIncomeElectronicBill 非税收入一般缴款书(电子)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    NonTaxIncomeBill GetNonTaxIncomeElectronicBill() const;

                    /**
                     * 设置非税收入一般缴款书(电子)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nonTaxIncomeElectronicBill 非税收入一般缴款书(电子)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNonTaxIncomeElectronicBill(const NonTaxIncomeBill& _nonTaxIncomeElectronicBill);

                    /**
                     * 判断参数 NonTaxIncomeElectronicBill 是否已赋值
                     * @return NonTaxIncomeElectronicBill 是否已赋值
                     * 
                     */
                    bool NonTaxIncomeElectronicBillHasBeenSet() const;

                    /**
                     * 获取火车票
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TrainTicket 火车票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    TrainTicket GetTrainTicket() const;

                    /**
                     * 设置火车票
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _trainTicket 火车票
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTrainTicket(const TrainTicket& _trainTicket);

                    /**
                     * 判断参数 TrainTicket 是否已赋值
                     * @return TrainTicket 是否已赋值
                     * 
                     */
                    bool TrainTicketHasBeenSet() const;

                    /**
                     * 获取医疗门诊收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalOutpatientInvoice 医疗门诊收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MedicalInvoice GetMedicalOutpatientInvoice() const;

                    /**
                     * 设置医疗门诊收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _medicalOutpatientInvoice 医疗门诊收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMedicalOutpatientInvoice(const MedicalInvoice& _medicalOutpatientInvoice);

                    /**
                     * 判断参数 MedicalOutpatientInvoice 是否已赋值
                     * @return MedicalOutpatientInvoice 是否已赋值
                     * 
                     */
                    bool MedicalOutpatientInvoiceHasBeenSet() const;

                    /**
                     * 获取医疗住院收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MedicalHospitalizedInvoice 医疗住院收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MedicalInvoice GetMedicalHospitalizedInvoice() const;

                    /**
                     * 设置医疗住院收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _medicalHospitalizedInvoice 医疗住院收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMedicalHospitalizedInvoice(const MedicalInvoice& _medicalHospitalizedInvoice);

                    /**
                     * 判断参数 MedicalHospitalizedInvoice 是否已赋值
                     * @return MedicalHospitalizedInvoice 是否已赋值
                     * 
                     */
                    bool MedicalHospitalizedInvoiceHasBeenSet() const;

                private:

                    /**
                     * 增值税专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatInvoiceInfo m_vatSpecialInvoice;
                    bool m_vatSpecialInvoiceHasBeenSet;

                    /**
                     * 增值税普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatInvoiceInfo m_vatCommonInvoice;
                    bool m_vatCommonInvoiceHasBeenSet;

                    /**
                     * 增值税电子普通发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatInvoiceInfo m_vatElectronicCommonInvoice;
                    bool m_vatElectronicCommonInvoiceHasBeenSet;

                    /**
                     * 增值税电子专用发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatInvoiceInfo m_vatElectronicSpecialInvoice;
                    bool m_vatElectronicSpecialInvoiceHasBeenSet;

                    /**
                     * 区块链电子发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatInvoiceInfo m_vatElectronicInvoiceBlockchain;
                    bool m_vatElectronicInvoiceBlockchainHasBeenSet;

                    /**
                     * 增值税电子普通发票(通行费)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatInvoiceInfo m_vatElectronicInvoiceToll;
                    bool m_vatElectronicInvoiceTollHasBeenSet;

                    /**
                     * 电子发票(专用发票)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatElectronicInfo m_vatElectronicSpecialInvoiceFull;
                    bool m_vatElectronicSpecialInvoiceFullHasBeenSet;

                    /**
                     * 电子发票(普通发票)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatElectronicInfo m_vatElectronicInvoiceFull;
                    bool m_vatElectronicInvoiceFullHasBeenSet;

                    /**
                     * 通用机打发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachinePrintedInvoice m_machinePrintedInvoice;
                    bool m_machinePrintedInvoiceHasBeenSet;

                    /**
                     * 汽车票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    BusInvoice m_busInvoice;
                    bool m_busInvoiceHasBeenSet;

                    /**
                     * 轮船票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ShippingInvoice m_shippingInvoice;
                    bool m_shippingInvoiceHasBeenSet;

                    /**
                     * 过路过桥费发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TollInvoice m_tollInvoice;
                    bool m_tollInvoiceHasBeenSet;

                    /**
                     * 其他发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    OtherInvoice m_otherInvoice;
                    bool m_otherInvoiceHasBeenSet;

                    /**
                     * 机动车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MotorVehicleSaleInvoice m_motorVehicleSaleInvoice;
                    bool m_motorVehicleSaleInvoiceHasBeenSet;

                    /**
                     * 二手车销售统一发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UsedCarPurchaseInvoice m_usedCarPurchaseInvoice;
                    bool m_usedCarPurchaseInvoiceHasBeenSet;

                    /**
                     * 增值税普通发票(卷票)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VatInvoiceRoll m_vatInvoiceRoll;
                    bool m_vatInvoiceRollHasBeenSet;

                    /**
                     * 出租车发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TaxiTicket m_taxiTicket;
                    bool m_taxiTicketHasBeenSet;

                    /**
                     * 定额发票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    QuotaInvoice m_quotaInvoice;
                    bool m_quotaInvoiceHasBeenSet;

                    /**
                     * 机票行程单
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AirTransport m_airTransport;
                    bool m_airTransportHasBeenSet;

                    /**
                     * 非税收入通用票据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NonTaxIncomeBill m_nonTaxIncomeGeneralBill;
                    bool m_nonTaxIncomeGeneralBillHasBeenSet;

                    /**
                     * 非税收入一般缴款书(电子)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    NonTaxIncomeBill m_nonTaxIncomeElectronicBill;
                    bool m_nonTaxIncomeElectronicBillHasBeenSet;

                    /**
                     * 火车票
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    TrainTicket m_trainTicket;
                    bool m_trainTicketHasBeenSet;

                    /**
                     * 医疗门诊收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MedicalInvoice m_medicalOutpatientInvoice;
                    bool m_medicalOutpatientInvoiceHasBeenSet;

                    /**
                     * 医疗住院收费票据（电子）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MedicalInvoice m_medicalHospitalizedInvoice;
                    bool m_medicalHospitalizedInvoiceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SINGLEINVOICEITEM_H_
