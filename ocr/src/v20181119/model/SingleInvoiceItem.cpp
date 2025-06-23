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

#include <tencentcloud/ocr/v20181119/model/SingleInvoiceItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ocr::V20181119::Model;
using namespace std;

SingleInvoiceItem::SingleInvoiceItem() :
    m_vatSpecialInvoiceHasBeenSet(false),
    m_vatCommonInvoiceHasBeenSet(false),
    m_vatElectronicCommonInvoiceHasBeenSet(false),
    m_vatElectronicSpecialInvoiceHasBeenSet(false),
    m_vatElectronicInvoiceBlockchainHasBeenSet(false),
    m_vatElectronicInvoiceTollHasBeenSet(false),
    m_vatElectronicSpecialInvoiceFullHasBeenSet(false),
    m_vatElectronicInvoiceFullHasBeenSet(false),
    m_machinePrintedInvoiceHasBeenSet(false),
    m_busInvoiceHasBeenSet(false),
    m_shippingInvoiceHasBeenSet(false),
    m_tollInvoiceHasBeenSet(false),
    m_otherInvoiceHasBeenSet(false),
    m_motorVehicleSaleInvoiceHasBeenSet(false),
    m_usedCarPurchaseInvoiceHasBeenSet(false),
    m_vatInvoiceRollHasBeenSet(false),
    m_taxiTicketHasBeenSet(false),
    m_quotaInvoiceHasBeenSet(false),
    m_airTransportHasBeenSet(false),
    m_nonTaxIncomeGeneralBillHasBeenSet(false),
    m_nonTaxIncomeElectronicBillHasBeenSet(false),
    m_trainTicketHasBeenSet(false),
    m_medicalOutpatientInvoiceHasBeenSet(false),
    m_medicalHospitalizedInvoiceHasBeenSet(false),
    m_vatSalesListHasBeenSet(false),
    m_electronicTrainTicketFullHasBeenSet(false),
    m_electronicFlightTicketFullHasBeenSet(false),
    m_taxPaymentHasBeenSet(false),
    m_customsPaymentReceiptHasBeenSet(false),
    m_bankSlipHasBeenSet(false),
    m_onlineTaxiItineraryHasBeenSet(false),
    m_customsDeclarationHasBeenSet(false),
    m_overseasInvoiceHasBeenSet(false),
    m_shoppingReceiptHasBeenSet(false),
    m_saleInventoryHasBeenSet(false),
    m_motorVehicleSaleInvoiceElectronicHasBeenSet(false),
    m_usedCarPurchaseInvoiceElectronicHasBeenSet(false)
{
}

CoreInternalOutcome SingleInvoiceItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("VatSpecialInvoice") && !value["VatSpecialInvoice"].IsNull())
    {
        if (!value["VatSpecialInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatSpecialInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatSpecialInvoice.Deserialize(value["VatSpecialInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatSpecialInvoiceHasBeenSet = true;
    }

    if (value.HasMember("VatCommonInvoice") && !value["VatCommonInvoice"].IsNull())
    {
        if (!value["VatCommonInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatCommonInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatCommonInvoice.Deserialize(value["VatCommonInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatCommonInvoiceHasBeenSet = true;
    }

    if (value.HasMember("VatElectronicCommonInvoice") && !value["VatElectronicCommonInvoice"].IsNull())
    {
        if (!value["VatElectronicCommonInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatElectronicCommonInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatElectronicCommonInvoice.Deserialize(value["VatElectronicCommonInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatElectronicCommonInvoiceHasBeenSet = true;
    }

    if (value.HasMember("VatElectronicSpecialInvoice") && !value["VatElectronicSpecialInvoice"].IsNull())
    {
        if (!value["VatElectronicSpecialInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatElectronicSpecialInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatElectronicSpecialInvoice.Deserialize(value["VatElectronicSpecialInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatElectronicSpecialInvoiceHasBeenSet = true;
    }

    if (value.HasMember("VatElectronicInvoiceBlockchain") && !value["VatElectronicInvoiceBlockchain"].IsNull())
    {
        if (!value["VatElectronicInvoiceBlockchain"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatElectronicInvoiceBlockchain` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatElectronicInvoiceBlockchain.Deserialize(value["VatElectronicInvoiceBlockchain"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatElectronicInvoiceBlockchainHasBeenSet = true;
    }

    if (value.HasMember("VatElectronicInvoiceToll") && !value["VatElectronicInvoiceToll"].IsNull())
    {
        if (!value["VatElectronicInvoiceToll"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatElectronicInvoiceToll` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatElectronicInvoiceToll.Deserialize(value["VatElectronicInvoiceToll"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatElectronicInvoiceTollHasBeenSet = true;
    }

    if (value.HasMember("VatElectronicSpecialInvoiceFull") && !value["VatElectronicSpecialInvoiceFull"].IsNull())
    {
        if (!value["VatElectronicSpecialInvoiceFull"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatElectronicSpecialInvoiceFull` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatElectronicSpecialInvoiceFull.Deserialize(value["VatElectronicSpecialInvoiceFull"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatElectronicSpecialInvoiceFullHasBeenSet = true;
    }

    if (value.HasMember("VatElectronicInvoiceFull") && !value["VatElectronicInvoiceFull"].IsNull())
    {
        if (!value["VatElectronicInvoiceFull"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatElectronicInvoiceFull` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatElectronicInvoiceFull.Deserialize(value["VatElectronicInvoiceFull"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatElectronicInvoiceFullHasBeenSet = true;
    }

    if (value.HasMember("MachinePrintedInvoice") && !value["MachinePrintedInvoice"].IsNull())
    {
        if (!value["MachinePrintedInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.MachinePrintedInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_machinePrintedInvoice.Deserialize(value["MachinePrintedInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_machinePrintedInvoiceHasBeenSet = true;
    }

    if (value.HasMember("BusInvoice") && !value["BusInvoice"].IsNull())
    {
        if (!value["BusInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.BusInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_busInvoice.Deserialize(value["BusInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_busInvoiceHasBeenSet = true;
    }

    if (value.HasMember("ShippingInvoice") && !value["ShippingInvoice"].IsNull())
    {
        if (!value["ShippingInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.ShippingInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shippingInvoice.Deserialize(value["ShippingInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shippingInvoiceHasBeenSet = true;
    }

    if (value.HasMember("TollInvoice") && !value["TollInvoice"].IsNull())
    {
        if (!value["TollInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.TollInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_tollInvoice.Deserialize(value["TollInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_tollInvoiceHasBeenSet = true;
    }

    if (value.HasMember("OtherInvoice") && !value["OtherInvoice"].IsNull())
    {
        if (!value["OtherInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.OtherInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_otherInvoice.Deserialize(value["OtherInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_otherInvoiceHasBeenSet = true;
    }

    if (value.HasMember("MotorVehicleSaleInvoice") && !value["MotorVehicleSaleInvoice"].IsNull())
    {
        if (!value["MotorVehicleSaleInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.MotorVehicleSaleInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_motorVehicleSaleInvoice.Deserialize(value["MotorVehicleSaleInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_motorVehicleSaleInvoiceHasBeenSet = true;
    }

    if (value.HasMember("UsedCarPurchaseInvoice") && !value["UsedCarPurchaseInvoice"].IsNull())
    {
        if (!value["UsedCarPurchaseInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.UsedCarPurchaseInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usedCarPurchaseInvoice.Deserialize(value["UsedCarPurchaseInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usedCarPurchaseInvoiceHasBeenSet = true;
    }

    if (value.HasMember("VatInvoiceRoll") && !value["VatInvoiceRoll"].IsNull())
    {
        if (!value["VatInvoiceRoll"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatInvoiceRoll` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatInvoiceRoll.Deserialize(value["VatInvoiceRoll"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatInvoiceRollHasBeenSet = true;
    }

    if (value.HasMember("TaxiTicket") && !value["TaxiTicket"].IsNull())
    {
        if (!value["TaxiTicket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.TaxiTicket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taxiTicket.Deserialize(value["TaxiTicket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taxiTicketHasBeenSet = true;
    }

    if (value.HasMember("QuotaInvoice") && !value["QuotaInvoice"].IsNull())
    {
        if (!value["QuotaInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.QuotaInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_quotaInvoice.Deserialize(value["QuotaInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_quotaInvoiceHasBeenSet = true;
    }

    if (value.HasMember("AirTransport") && !value["AirTransport"].IsNull())
    {
        if (!value["AirTransport"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.AirTransport` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_airTransport.Deserialize(value["AirTransport"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_airTransportHasBeenSet = true;
    }

    if (value.HasMember("NonTaxIncomeGeneralBill") && !value["NonTaxIncomeGeneralBill"].IsNull())
    {
        if (!value["NonTaxIncomeGeneralBill"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.NonTaxIncomeGeneralBill` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nonTaxIncomeGeneralBill.Deserialize(value["NonTaxIncomeGeneralBill"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nonTaxIncomeGeneralBillHasBeenSet = true;
    }

    if (value.HasMember("NonTaxIncomeElectronicBill") && !value["NonTaxIncomeElectronicBill"].IsNull())
    {
        if (!value["NonTaxIncomeElectronicBill"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.NonTaxIncomeElectronicBill` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_nonTaxIncomeElectronicBill.Deserialize(value["NonTaxIncomeElectronicBill"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_nonTaxIncomeElectronicBillHasBeenSet = true;
    }

    if (value.HasMember("TrainTicket") && !value["TrainTicket"].IsNull())
    {
        if (!value["TrainTicket"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.TrainTicket` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_trainTicket.Deserialize(value["TrainTicket"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_trainTicketHasBeenSet = true;
    }

    if (value.HasMember("MedicalOutpatientInvoice") && !value["MedicalOutpatientInvoice"].IsNull())
    {
        if (!value["MedicalOutpatientInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.MedicalOutpatientInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_medicalOutpatientInvoice.Deserialize(value["MedicalOutpatientInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_medicalOutpatientInvoiceHasBeenSet = true;
    }

    if (value.HasMember("MedicalHospitalizedInvoice") && !value["MedicalHospitalizedInvoice"].IsNull())
    {
        if (!value["MedicalHospitalizedInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.MedicalHospitalizedInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_medicalHospitalizedInvoice.Deserialize(value["MedicalHospitalizedInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_medicalHospitalizedInvoiceHasBeenSet = true;
    }

    if (value.HasMember("VatSalesList") && !value["VatSalesList"].IsNull())
    {
        if (!value["VatSalesList"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.VatSalesList` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_vatSalesList.Deserialize(value["VatSalesList"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_vatSalesListHasBeenSet = true;
    }

    if (value.HasMember("ElectronicTrainTicketFull") && !value["ElectronicTrainTicketFull"].IsNull())
    {
        if (!value["ElectronicTrainTicketFull"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.ElectronicTrainTicketFull` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_electronicTrainTicketFull.Deserialize(value["ElectronicTrainTicketFull"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_electronicTrainTicketFullHasBeenSet = true;
    }

    if (value.HasMember("ElectronicFlightTicketFull") && !value["ElectronicFlightTicketFull"].IsNull())
    {
        if (!value["ElectronicFlightTicketFull"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.ElectronicFlightTicketFull` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_electronicFlightTicketFull.Deserialize(value["ElectronicFlightTicketFull"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_electronicFlightTicketFullHasBeenSet = true;
    }

    if (value.HasMember("TaxPayment") && !value["TaxPayment"].IsNull())
    {
        if (!value["TaxPayment"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.TaxPayment` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_taxPayment.Deserialize(value["TaxPayment"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_taxPaymentHasBeenSet = true;
    }

    if (value.HasMember("CustomsPaymentReceipt") && !value["CustomsPaymentReceipt"].IsNull())
    {
        if (!value["CustomsPaymentReceipt"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.CustomsPaymentReceipt` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customsPaymentReceipt.Deserialize(value["CustomsPaymentReceipt"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customsPaymentReceiptHasBeenSet = true;
    }

    if (value.HasMember("BankSlip") && !value["BankSlip"].IsNull())
    {
        if (!value["BankSlip"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.BankSlip` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_bankSlip.Deserialize(value["BankSlip"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_bankSlipHasBeenSet = true;
    }

    if (value.HasMember("OnlineTaxiItinerary") && !value["OnlineTaxiItinerary"].IsNull())
    {
        if (!value["OnlineTaxiItinerary"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.OnlineTaxiItinerary` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_onlineTaxiItinerary.Deserialize(value["OnlineTaxiItinerary"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_onlineTaxiItineraryHasBeenSet = true;
    }

    if (value.HasMember("CustomsDeclaration") && !value["CustomsDeclaration"].IsNull())
    {
        if (!value["CustomsDeclaration"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.CustomsDeclaration` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_customsDeclaration.Deserialize(value["CustomsDeclaration"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_customsDeclarationHasBeenSet = true;
    }

    if (value.HasMember("OverseasInvoice") && !value["OverseasInvoice"].IsNull())
    {
        if (!value["OverseasInvoice"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.OverseasInvoice` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_overseasInvoice.Deserialize(value["OverseasInvoice"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_overseasInvoiceHasBeenSet = true;
    }

    if (value.HasMember("ShoppingReceipt") && !value["ShoppingReceipt"].IsNull())
    {
        if (!value["ShoppingReceipt"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.ShoppingReceipt` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_shoppingReceipt.Deserialize(value["ShoppingReceipt"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_shoppingReceiptHasBeenSet = true;
    }

    if (value.HasMember("SaleInventory") && !value["SaleInventory"].IsNull())
    {
        if (!value["SaleInventory"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.SaleInventory` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_saleInventory.Deserialize(value["SaleInventory"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_saleInventoryHasBeenSet = true;
    }

    if (value.HasMember("MotorVehicleSaleInvoiceElectronic") && !value["MotorVehicleSaleInvoiceElectronic"].IsNull())
    {
        if (!value["MotorVehicleSaleInvoiceElectronic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.MotorVehicleSaleInvoiceElectronic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_motorVehicleSaleInvoiceElectronic.Deserialize(value["MotorVehicleSaleInvoiceElectronic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_motorVehicleSaleInvoiceElectronicHasBeenSet = true;
    }

    if (value.HasMember("UsedCarPurchaseInvoiceElectronic") && !value["UsedCarPurchaseInvoiceElectronic"].IsNull())
    {
        if (!value["UsedCarPurchaseInvoiceElectronic"].IsObject())
        {
            return CoreInternalOutcome(Core::Error("response `SingleInvoiceItem.UsedCarPurchaseInvoiceElectronic` is not object type").SetRequestId(requestId));
        }

        CoreInternalOutcome outcome = m_usedCarPurchaseInvoiceElectronic.Deserialize(value["UsedCarPurchaseInvoiceElectronic"]);
        if (!outcome.IsSuccess())
        {
            outcome.GetError().SetRequestId(requestId);
            return outcome;
        }

        m_usedCarPurchaseInvoiceElectronicHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SingleInvoiceItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_vatSpecialInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatSpecialInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatSpecialInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatCommonInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatCommonInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatCommonInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatElectronicCommonInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatElectronicCommonInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatElectronicCommonInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatElectronicSpecialInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatElectronicSpecialInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatElectronicSpecialInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatElectronicInvoiceBlockchainHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatElectronicInvoiceBlockchain";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatElectronicInvoiceBlockchain.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatElectronicInvoiceTollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatElectronicInvoiceToll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatElectronicInvoiceToll.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatElectronicSpecialInvoiceFullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatElectronicSpecialInvoiceFull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatElectronicSpecialInvoiceFull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatElectronicInvoiceFullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatElectronicInvoiceFull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatElectronicInvoiceFull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_machinePrintedInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MachinePrintedInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_machinePrintedInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_busInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BusInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_busInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shippingInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShippingInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shippingInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_tollInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TollInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_tollInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_otherInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OtherInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_otherInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_motorVehicleSaleInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotorVehicleSaleInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_motorVehicleSaleInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usedCarPurchaseInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCarPurchaseInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usedCarPurchaseInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatInvoiceRollHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatInvoiceRoll";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatInvoiceRoll.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taxiTicketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxiTicket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taxiTicket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_quotaInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "QuotaInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_quotaInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_airTransportHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AirTransport";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_airTransport.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nonTaxIncomeGeneralBillHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonTaxIncomeGeneralBill";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nonTaxIncomeGeneralBill.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_nonTaxIncomeElectronicBillHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "NonTaxIncomeElectronicBill";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_nonTaxIncomeElectronicBill.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_trainTicketHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TrainTicket";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_trainTicket.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_medicalOutpatientInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalOutpatientInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_medicalOutpatientInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_medicalHospitalizedInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MedicalHospitalizedInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_medicalHospitalizedInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_vatSalesListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "VatSalesList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_vatSalesList.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_electronicTrainTicketFullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicTrainTicketFull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_electronicTrainTicketFull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_electronicFlightTicketFullHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ElectronicFlightTicketFull";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_electronicFlightTicketFull.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_taxPaymentHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaxPayment";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_taxPayment.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customsPaymentReceiptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomsPaymentReceipt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customsPaymentReceipt.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_bankSlipHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "BankSlip";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_bankSlip.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_onlineTaxiItineraryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OnlineTaxiItinerary";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_onlineTaxiItinerary.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_customsDeclarationHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "CustomsDeclaration";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_customsDeclaration.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_overseasInvoiceHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "OverseasInvoice";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_overseasInvoice.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_shoppingReceiptHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ShoppingReceipt";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_shoppingReceipt.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_saleInventoryHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SaleInventory";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_saleInventory.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_motorVehicleSaleInvoiceElectronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "MotorVehicleSaleInvoiceElectronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_motorVehicleSaleInvoiceElectronic.ToJsonObject(value[key.c_str()], allocator);
    }

    if (m_usedCarPurchaseInvoiceElectronicHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "UsedCarPurchaseInvoiceElectronic";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
        m_usedCarPurchaseInvoiceElectronic.ToJsonObject(value[key.c_str()], allocator);
    }

}


VatInvoiceInfo SingleInvoiceItem::GetVatSpecialInvoice() const
{
    return m_vatSpecialInvoice;
}

void SingleInvoiceItem::SetVatSpecialInvoice(const VatInvoiceInfo& _vatSpecialInvoice)
{
    m_vatSpecialInvoice = _vatSpecialInvoice;
    m_vatSpecialInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::VatSpecialInvoiceHasBeenSet() const
{
    return m_vatSpecialInvoiceHasBeenSet;
}

VatInvoiceInfo SingleInvoiceItem::GetVatCommonInvoice() const
{
    return m_vatCommonInvoice;
}

void SingleInvoiceItem::SetVatCommonInvoice(const VatInvoiceInfo& _vatCommonInvoice)
{
    m_vatCommonInvoice = _vatCommonInvoice;
    m_vatCommonInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::VatCommonInvoiceHasBeenSet() const
{
    return m_vatCommonInvoiceHasBeenSet;
}

VatInvoiceInfo SingleInvoiceItem::GetVatElectronicCommonInvoice() const
{
    return m_vatElectronicCommonInvoice;
}

void SingleInvoiceItem::SetVatElectronicCommonInvoice(const VatInvoiceInfo& _vatElectronicCommonInvoice)
{
    m_vatElectronicCommonInvoice = _vatElectronicCommonInvoice;
    m_vatElectronicCommonInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::VatElectronicCommonInvoiceHasBeenSet() const
{
    return m_vatElectronicCommonInvoiceHasBeenSet;
}

VatInvoiceInfo SingleInvoiceItem::GetVatElectronicSpecialInvoice() const
{
    return m_vatElectronicSpecialInvoice;
}

void SingleInvoiceItem::SetVatElectronicSpecialInvoice(const VatInvoiceInfo& _vatElectronicSpecialInvoice)
{
    m_vatElectronicSpecialInvoice = _vatElectronicSpecialInvoice;
    m_vatElectronicSpecialInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::VatElectronicSpecialInvoiceHasBeenSet() const
{
    return m_vatElectronicSpecialInvoiceHasBeenSet;
}

VatInvoiceInfo SingleInvoiceItem::GetVatElectronicInvoiceBlockchain() const
{
    return m_vatElectronicInvoiceBlockchain;
}

void SingleInvoiceItem::SetVatElectronicInvoiceBlockchain(const VatInvoiceInfo& _vatElectronicInvoiceBlockchain)
{
    m_vatElectronicInvoiceBlockchain = _vatElectronicInvoiceBlockchain;
    m_vatElectronicInvoiceBlockchainHasBeenSet = true;
}

bool SingleInvoiceItem::VatElectronicInvoiceBlockchainHasBeenSet() const
{
    return m_vatElectronicInvoiceBlockchainHasBeenSet;
}

VatInvoiceInfo SingleInvoiceItem::GetVatElectronicInvoiceToll() const
{
    return m_vatElectronicInvoiceToll;
}

void SingleInvoiceItem::SetVatElectronicInvoiceToll(const VatInvoiceInfo& _vatElectronicInvoiceToll)
{
    m_vatElectronicInvoiceToll = _vatElectronicInvoiceToll;
    m_vatElectronicInvoiceTollHasBeenSet = true;
}

bool SingleInvoiceItem::VatElectronicInvoiceTollHasBeenSet() const
{
    return m_vatElectronicInvoiceTollHasBeenSet;
}

VatElectronicInfo SingleInvoiceItem::GetVatElectronicSpecialInvoiceFull() const
{
    return m_vatElectronicSpecialInvoiceFull;
}

void SingleInvoiceItem::SetVatElectronicSpecialInvoiceFull(const VatElectronicInfo& _vatElectronicSpecialInvoiceFull)
{
    m_vatElectronicSpecialInvoiceFull = _vatElectronicSpecialInvoiceFull;
    m_vatElectronicSpecialInvoiceFullHasBeenSet = true;
}

bool SingleInvoiceItem::VatElectronicSpecialInvoiceFullHasBeenSet() const
{
    return m_vatElectronicSpecialInvoiceFullHasBeenSet;
}

VatElectronicInfo SingleInvoiceItem::GetVatElectronicInvoiceFull() const
{
    return m_vatElectronicInvoiceFull;
}

void SingleInvoiceItem::SetVatElectronicInvoiceFull(const VatElectronicInfo& _vatElectronicInvoiceFull)
{
    m_vatElectronicInvoiceFull = _vatElectronicInvoiceFull;
    m_vatElectronicInvoiceFullHasBeenSet = true;
}

bool SingleInvoiceItem::VatElectronicInvoiceFullHasBeenSet() const
{
    return m_vatElectronicInvoiceFullHasBeenSet;
}

MachinePrintedInvoice SingleInvoiceItem::GetMachinePrintedInvoice() const
{
    return m_machinePrintedInvoice;
}

void SingleInvoiceItem::SetMachinePrintedInvoice(const MachinePrintedInvoice& _machinePrintedInvoice)
{
    m_machinePrintedInvoice = _machinePrintedInvoice;
    m_machinePrintedInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::MachinePrintedInvoiceHasBeenSet() const
{
    return m_machinePrintedInvoiceHasBeenSet;
}

BusInvoice SingleInvoiceItem::GetBusInvoice() const
{
    return m_busInvoice;
}

void SingleInvoiceItem::SetBusInvoice(const BusInvoice& _busInvoice)
{
    m_busInvoice = _busInvoice;
    m_busInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::BusInvoiceHasBeenSet() const
{
    return m_busInvoiceHasBeenSet;
}

ShippingInvoice SingleInvoiceItem::GetShippingInvoice() const
{
    return m_shippingInvoice;
}

void SingleInvoiceItem::SetShippingInvoice(const ShippingInvoice& _shippingInvoice)
{
    m_shippingInvoice = _shippingInvoice;
    m_shippingInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::ShippingInvoiceHasBeenSet() const
{
    return m_shippingInvoiceHasBeenSet;
}

TollInvoice SingleInvoiceItem::GetTollInvoice() const
{
    return m_tollInvoice;
}

void SingleInvoiceItem::SetTollInvoice(const TollInvoice& _tollInvoice)
{
    m_tollInvoice = _tollInvoice;
    m_tollInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::TollInvoiceHasBeenSet() const
{
    return m_tollInvoiceHasBeenSet;
}

OtherInvoice SingleInvoiceItem::GetOtherInvoice() const
{
    return m_otherInvoice;
}

void SingleInvoiceItem::SetOtherInvoice(const OtherInvoice& _otherInvoice)
{
    m_otherInvoice = _otherInvoice;
    m_otherInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::OtherInvoiceHasBeenSet() const
{
    return m_otherInvoiceHasBeenSet;
}

MotorVehicleSaleInvoice SingleInvoiceItem::GetMotorVehicleSaleInvoice() const
{
    return m_motorVehicleSaleInvoice;
}

void SingleInvoiceItem::SetMotorVehicleSaleInvoice(const MotorVehicleSaleInvoice& _motorVehicleSaleInvoice)
{
    m_motorVehicleSaleInvoice = _motorVehicleSaleInvoice;
    m_motorVehicleSaleInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::MotorVehicleSaleInvoiceHasBeenSet() const
{
    return m_motorVehicleSaleInvoiceHasBeenSet;
}

UsedCarPurchaseInvoice SingleInvoiceItem::GetUsedCarPurchaseInvoice() const
{
    return m_usedCarPurchaseInvoice;
}

void SingleInvoiceItem::SetUsedCarPurchaseInvoice(const UsedCarPurchaseInvoice& _usedCarPurchaseInvoice)
{
    m_usedCarPurchaseInvoice = _usedCarPurchaseInvoice;
    m_usedCarPurchaseInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::UsedCarPurchaseInvoiceHasBeenSet() const
{
    return m_usedCarPurchaseInvoiceHasBeenSet;
}

VatInvoiceRoll SingleInvoiceItem::GetVatInvoiceRoll() const
{
    return m_vatInvoiceRoll;
}

void SingleInvoiceItem::SetVatInvoiceRoll(const VatInvoiceRoll& _vatInvoiceRoll)
{
    m_vatInvoiceRoll = _vatInvoiceRoll;
    m_vatInvoiceRollHasBeenSet = true;
}

bool SingleInvoiceItem::VatInvoiceRollHasBeenSet() const
{
    return m_vatInvoiceRollHasBeenSet;
}

TaxiTicket SingleInvoiceItem::GetTaxiTicket() const
{
    return m_taxiTicket;
}

void SingleInvoiceItem::SetTaxiTicket(const TaxiTicket& _taxiTicket)
{
    m_taxiTicket = _taxiTicket;
    m_taxiTicketHasBeenSet = true;
}

bool SingleInvoiceItem::TaxiTicketHasBeenSet() const
{
    return m_taxiTicketHasBeenSet;
}

QuotaInvoice SingleInvoiceItem::GetQuotaInvoice() const
{
    return m_quotaInvoice;
}

void SingleInvoiceItem::SetQuotaInvoice(const QuotaInvoice& _quotaInvoice)
{
    m_quotaInvoice = _quotaInvoice;
    m_quotaInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::QuotaInvoiceHasBeenSet() const
{
    return m_quotaInvoiceHasBeenSet;
}

AirTransport SingleInvoiceItem::GetAirTransport() const
{
    return m_airTransport;
}

void SingleInvoiceItem::SetAirTransport(const AirTransport& _airTransport)
{
    m_airTransport = _airTransport;
    m_airTransportHasBeenSet = true;
}

bool SingleInvoiceItem::AirTransportHasBeenSet() const
{
    return m_airTransportHasBeenSet;
}

NonTaxIncomeBill SingleInvoiceItem::GetNonTaxIncomeGeneralBill() const
{
    return m_nonTaxIncomeGeneralBill;
}

void SingleInvoiceItem::SetNonTaxIncomeGeneralBill(const NonTaxIncomeBill& _nonTaxIncomeGeneralBill)
{
    m_nonTaxIncomeGeneralBill = _nonTaxIncomeGeneralBill;
    m_nonTaxIncomeGeneralBillHasBeenSet = true;
}

bool SingleInvoiceItem::NonTaxIncomeGeneralBillHasBeenSet() const
{
    return m_nonTaxIncomeGeneralBillHasBeenSet;
}

NonTaxIncomeBill SingleInvoiceItem::GetNonTaxIncomeElectronicBill() const
{
    return m_nonTaxIncomeElectronicBill;
}

void SingleInvoiceItem::SetNonTaxIncomeElectronicBill(const NonTaxIncomeBill& _nonTaxIncomeElectronicBill)
{
    m_nonTaxIncomeElectronicBill = _nonTaxIncomeElectronicBill;
    m_nonTaxIncomeElectronicBillHasBeenSet = true;
}

bool SingleInvoiceItem::NonTaxIncomeElectronicBillHasBeenSet() const
{
    return m_nonTaxIncomeElectronicBillHasBeenSet;
}

TrainTicket SingleInvoiceItem::GetTrainTicket() const
{
    return m_trainTicket;
}

void SingleInvoiceItem::SetTrainTicket(const TrainTicket& _trainTicket)
{
    m_trainTicket = _trainTicket;
    m_trainTicketHasBeenSet = true;
}

bool SingleInvoiceItem::TrainTicketHasBeenSet() const
{
    return m_trainTicketHasBeenSet;
}

MedicalInvoice SingleInvoiceItem::GetMedicalOutpatientInvoice() const
{
    return m_medicalOutpatientInvoice;
}

void SingleInvoiceItem::SetMedicalOutpatientInvoice(const MedicalInvoice& _medicalOutpatientInvoice)
{
    m_medicalOutpatientInvoice = _medicalOutpatientInvoice;
    m_medicalOutpatientInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::MedicalOutpatientInvoiceHasBeenSet() const
{
    return m_medicalOutpatientInvoiceHasBeenSet;
}

MedicalInvoice SingleInvoiceItem::GetMedicalHospitalizedInvoice() const
{
    return m_medicalHospitalizedInvoice;
}

void SingleInvoiceItem::SetMedicalHospitalizedInvoice(const MedicalInvoice& _medicalHospitalizedInvoice)
{
    m_medicalHospitalizedInvoice = _medicalHospitalizedInvoice;
    m_medicalHospitalizedInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::MedicalHospitalizedInvoiceHasBeenSet() const
{
    return m_medicalHospitalizedInvoiceHasBeenSet;
}

VatInvoiceInfo SingleInvoiceItem::GetVatSalesList() const
{
    return m_vatSalesList;
}

void SingleInvoiceItem::SetVatSalesList(const VatInvoiceInfo& _vatSalesList)
{
    m_vatSalesList = _vatSalesList;
    m_vatSalesListHasBeenSet = true;
}

bool SingleInvoiceItem::VatSalesListHasBeenSet() const
{
    return m_vatSalesListHasBeenSet;
}

ElectronicTrainTicketFull SingleInvoiceItem::GetElectronicTrainTicketFull() const
{
    return m_electronicTrainTicketFull;
}

void SingleInvoiceItem::SetElectronicTrainTicketFull(const ElectronicTrainTicketFull& _electronicTrainTicketFull)
{
    m_electronicTrainTicketFull = _electronicTrainTicketFull;
    m_electronicTrainTicketFullHasBeenSet = true;
}

bool SingleInvoiceItem::ElectronicTrainTicketFullHasBeenSet() const
{
    return m_electronicTrainTicketFullHasBeenSet;
}

ElectronicFlightTicketFull SingleInvoiceItem::GetElectronicFlightTicketFull() const
{
    return m_electronicFlightTicketFull;
}

void SingleInvoiceItem::SetElectronicFlightTicketFull(const ElectronicFlightTicketFull& _electronicFlightTicketFull)
{
    m_electronicFlightTicketFull = _electronicFlightTicketFull;
    m_electronicFlightTicketFullHasBeenSet = true;
}

bool SingleInvoiceItem::ElectronicFlightTicketFullHasBeenSet() const
{
    return m_electronicFlightTicketFullHasBeenSet;
}

TaxPayment SingleInvoiceItem::GetTaxPayment() const
{
    return m_taxPayment;
}

void SingleInvoiceItem::SetTaxPayment(const TaxPayment& _taxPayment)
{
    m_taxPayment = _taxPayment;
    m_taxPaymentHasBeenSet = true;
}

bool SingleInvoiceItem::TaxPaymentHasBeenSet() const
{
    return m_taxPaymentHasBeenSet;
}

CustomsPaymentReceipt SingleInvoiceItem::GetCustomsPaymentReceipt() const
{
    return m_customsPaymentReceipt;
}

void SingleInvoiceItem::SetCustomsPaymentReceipt(const CustomsPaymentReceipt& _customsPaymentReceipt)
{
    m_customsPaymentReceipt = _customsPaymentReceipt;
    m_customsPaymentReceiptHasBeenSet = true;
}

bool SingleInvoiceItem::CustomsPaymentReceiptHasBeenSet() const
{
    return m_customsPaymentReceiptHasBeenSet;
}

BankSlip SingleInvoiceItem::GetBankSlip() const
{
    return m_bankSlip;
}

void SingleInvoiceItem::SetBankSlip(const BankSlip& _bankSlip)
{
    m_bankSlip = _bankSlip;
    m_bankSlipHasBeenSet = true;
}

bool SingleInvoiceItem::BankSlipHasBeenSet() const
{
    return m_bankSlipHasBeenSet;
}

OnlineTaxiItinerary SingleInvoiceItem::GetOnlineTaxiItinerary() const
{
    return m_onlineTaxiItinerary;
}

void SingleInvoiceItem::SetOnlineTaxiItinerary(const OnlineTaxiItinerary& _onlineTaxiItinerary)
{
    m_onlineTaxiItinerary = _onlineTaxiItinerary;
    m_onlineTaxiItineraryHasBeenSet = true;
}

bool SingleInvoiceItem::OnlineTaxiItineraryHasBeenSet() const
{
    return m_onlineTaxiItineraryHasBeenSet;
}

CustomsDeclaration SingleInvoiceItem::GetCustomsDeclaration() const
{
    return m_customsDeclaration;
}

void SingleInvoiceItem::SetCustomsDeclaration(const CustomsDeclaration& _customsDeclaration)
{
    m_customsDeclaration = _customsDeclaration;
    m_customsDeclarationHasBeenSet = true;
}

bool SingleInvoiceItem::CustomsDeclarationHasBeenSet() const
{
    return m_customsDeclarationHasBeenSet;
}

OverseasInvoice SingleInvoiceItem::GetOverseasInvoice() const
{
    return m_overseasInvoice;
}

void SingleInvoiceItem::SetOverseasInvoice(const OverseasInvoice& _overseasInvoice)
{
    m_overseasInvoice = _overseasInvoice;
    m_overseasInvoiceHasBeenSet = true;
}

bool SingleInvoiceItem::OverseasInvoiceHasBeenSet() const
{
    return m_overseasInvoiceHasBeenSet;
}

ShoppingReceipt SingleInvoiceItem::GetShoppingReceipt() const
{
    return m_shoppingReceipt;
}

void SingleInvoiceItem::SetShoppingReceipt(const ShoppingReceipt& _shoppingReceipt)
{
    m_shoppingReceipt = _shoppingReceipt;
    m_shoppingReceiptHasBeenSet = true;
}

bool SingleInvoiceItem::ShoppingReceiptHasBeenSet() const
{
    return m_shoppingReceiptHasBeenSet;
}

SaleInventory SingleInvoiceItem::GetSaleInventory() const
{
    return m_saleInventory;
}

void SingleInvoiceItem::SetSaleInventory(const SaleInventory& _saleInventory)
{
    m_saleInventory = _saleInventory;
    m_saleInventoryHasBeenSet = true;
}

bool SingleInvoiceItem::SaleInventoryHasBeenSet() const
{
    return m_saleInventoryHasBeenSet;
}

MotorVehicleSaleInvoice SingleInvoiceItem::GetMotorVehicleSaleInvoiceElectronic() const
{
    return m_motorVehicleSaleInvoiceElectronic;
}

void SingleInvoiceItem::SetMotorVehicleSaleInvoiceElectronic(const MotorVehicleSaleInvoice& _motorVehicleSaleInvoiceElectronic)
{
    m_motorVehicleSaleInvoiceElectronic = _motorVehicleSaleInvoiceElectronic;
    m_motorVehicleSaleInvoiceElectronicHasBeenSet = true;
}

bool SingleInvoiceItem::MotorVehicleSaleInvoiceElectronicHasBeenSet() const
{
    return m_motorVehicleSaleInvoiceElectronicHasBeenSet;
}

UsedCarPurchaseInvoice SingleInvoiceItem::GetUsedCarPurchaseInvoiceElectronic() const
{
    return m_usedCarPurchaseInvoiceElectronic;
}

void SingleInvoiceItem::SetUsedCarPurchaseInvoiceElectronic(const UsedCarPurchaseInvoice& _usedCarPurchaseInvoiceElectronic)
{
    m_usedCarPurchaseInvoiceElectronic = _usedCarPurchaseInvoiceElectronic;
    m_usedCarPurchaseInvoiceElectronicHasBeenSet = true;
}

bool SingleInvoiceItem::UsedCarPurchaseInvoiceElectronicHasBeenSet() const
{
    return m_usedCarPurchaseInvoiceElectronicHasBeenSet;
}

