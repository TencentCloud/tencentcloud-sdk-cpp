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

#ifndef TENCENTCLOUD_CPDP_V20190820_CPDPCLIENT_H_
#define TENCENTCLOUD_CPDP_V20190820_CPDPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/cpdp/v20190820/model/AddContractRequest.h>
#include <tencentcloud/cpdp/v20190820/model/AddContractResponse.h>
#include <tencentcloud/cpdp/v20190820/model/AddMerchantRequest.h>
#include <tencentcloud/cpdp/v20190820/model/AddMerchantResponse.h>
#include <tencentcloud/cpdp/v20190820/model/AddShopRequest.h>
#include <tencentcloud/cpdp/v20190820/model/AddShopResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyApplicationMaterialRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyApplicationMaterialResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyOutwardOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyOutwardOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyPayerInfoRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyPayerInfoResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyReWithdrawalRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyReWithdrawalResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyTradeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyTradeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyWithdrawalRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ApplyWithdrawalResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindAccountRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindAccountResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAccReUnionPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAccReUnionPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctSmallAmountRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctSmallAmountResponse.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctUnionPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/BindRelateAcctUnionPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAmountRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CheckAmountResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CloseOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CloseOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ConfirmOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ConfirmOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ContractOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ContractOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAgentTaxPaymentInfosRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAgentTaxPaymentInfosResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAnchorRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateAnchorResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateBatchPaymentResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateCustAcctIdRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateCustAcctIdResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateExternalAnchorRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateExternalAnchorResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceV2Request.h>
#include <tencentcloud/cpdp/v20190820/model/CreateInvoiceV2Response.h>
#include <tencentcloud/cpdp/v20190820/model/CreateMerchantRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateMerchantResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreatePayMerchantRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreatePayMerchantResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceV2Request.h>
#include <tencentcloud/cpdp/v20190820/model/CreateRedInvoiceV2Response.h>
#include <tencentcloud/cpdp/v20190820/model/CreateSinglePayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateSinglePayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateSinglePaymentRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateSinglePaymentResponse.h>
#include <tencentcloud/cpdp/v20190820/model/CreateTransferBatchRequest.h>
#include <tencentcloud/cpdp/v20190820/model/CreateTransferBatchResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DeleteAgentTaxPaymentInfoRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DeleteAgentTaxPaymentInfoResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DeleteAgentTaxPaymentInfosRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DeleteAgentTaxPaymentInfosResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DescribeChargeDetailRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DescribeChargeDetailResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DescribeOrderStatusRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DescribeOrderStatusResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeAccreditQueryRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeAccreditQueryResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeAccreditTlinxRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeAccreditTlinxResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeAddReceiverRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeAddReceiverResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeApplyRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeApplyResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeCancelRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeCancelResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeQueryRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeQueryResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeQueryReceiverRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeQueryReceiverResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeRemoveReceiverRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DistributeRemoveReceiverResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadBillRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadBillResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadOrgFileRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadOrgFileResponse.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadReconciliationUrlRequest.h>
#include <tencentcloud/cpdp/v20190820/model/DownloadReconciliationUrlResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ExecuteMemberTransactionRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ExecuteMemberTransactionResponse.h>
#include <tencentcloud/cpdp/v20190820/model/MigrateOrderRefundRequest.h>
#include <tencentcloud/cpdp/v20190820/model/MigrateOrderRefundResponse.h>
#include <tencentcloud/cpdp/v20190820/model/MigrateOrderRefundQueryRequest.h>
#include <tencentcloud/cpdp/v20190820/model/MigrateOrderRefundQueryResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyAgentTaxPaymentInfoRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyAgentTaxPaymentInfoResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyBindedAccountRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyBindedAccountResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyMerchantRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyMerchantResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ModifyMntMbrBindRelateAcctBankCodeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAcctBindingRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAcctBindingResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoListRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAcctInfoListResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAgentStatementsRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAgentStatementsResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAgentTaxPaymentBatchRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAgentTaxPaymentBatchResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAnchorContractInfoRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryAnchorContractInfoResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryApplicationMaterialRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryApplicationMaterialResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBalanceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBalanceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankClearRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankClearResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankTransactionDetailsRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankTransactionDetailsResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankWithdrawCashDetailsRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBankWithdrawCashDetailsResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBatchPaymentResultRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBatchPaymentResultResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBillDownloadURLRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryBillDownloadURLResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCityCodeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCityCodeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCommonTransferRechargeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCommonTransferRechargeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractPayFeeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractPayFeeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractPayWayListRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractPayWayListResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractRelateShopRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryContractRelateShopResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCustAcctIdBalanceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryCustAcctIdBalanceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryDownloadBillURLRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryDownloadBillURLResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryExchangeRateRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryExchangeRateResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceV2Request.h>
#include <tencentcloud/cpdp/v20190820/model/QueryInvoiceV2Response.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMaliciousRegistrationRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMaliciousRegistrationResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberBindRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberBindResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberTransactionRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMemberTransactionResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantBalanceRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantBalanceResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantClassificationRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantClassificationResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantInfoForManagementRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantInfoForManagementResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantPayWayListRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryMerchantPayWayListResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderStatusRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOrderStatusResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOutwardOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryOutwardOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryPayerInfoRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryPayerInfoResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryReconciliationDocumentRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryReconciliationDocumentResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryRefundRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryRefundResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryShopOpenIdRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryShopOpenIdResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySinglePayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySinglePayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySinglePaymentResultRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySinglePaymentResultResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySingleTransactionStatusRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySingleTransactionStatusResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QuerySmallAmountTransferResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTradeRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTradeResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTransferBatchRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTransferBatchResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTransferDetailRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTransferDetailResponse.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTransferResultRequest.h>
#include <tencentcloud/cpdp/v20190820/model/QueryTransferResultResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RechargeByThirdPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RechargeByThirdPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RechargeMemberThirdPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RechargeMemberThirdPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RefundRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RefundResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RefundMemberTransactionRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RefundMemberTransactionResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RefundOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RefundOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RefundTlinxOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RefundTlinxOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBehaviorRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBehaviorResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBillRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBillResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBillSupportWithdrawRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RegisterBillSupportWithdrawResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RevResigterBillSupportWithdrawRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RevResigterBillSupportWithdrawResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ReviseMbrPropertyRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ReviseMbrPropertyResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RevokeMemberRechargeThirdPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/RevokeRechargeByThirdPayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/RevokeRechargeByThirdPayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/SyncContractDataRequest.h>
#include <tencentcloud/cpdp/v20190820/model/SyncContractDataResponse.h>
#include <tencentcloud/cpdp/v20190820/model/TerminateContractRequest.h>
#include <tencentcloud/cpdp/v20190820/model/TerminateContractResponse.h>
#include <tencentcloud/cpdp/v20190820/model/TransferSinglePayRequest.h>
#include <tencentcloud/cpdp/v20190820/model/TransferSinglePayResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UnBindAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UnBindAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UnbindRelateAcctRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UnbindRelateAcctResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UnifiedOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UnifiedOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UnifiedTlinxOrderRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UnifiedTlinxOrderResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UploadExternalAnchorInfoRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UploadExternalAnchorInfoResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UploadFileRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UploadFileResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UploadOrgFileRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UploadOrgFileResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UploadTaxListRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UploadTaxListResponse.h>
#include <tencentcloud/cpdp/v20190820/model/UploadTaxPaymentRequest.h>
#include <tencentcloud/cpdp/v20190820/model/UploadTaxPaymentResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ViewContractRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ViewContractResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ViewMerchantRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ViewMerchantResponse.h>
#include <tencentcloud/cpdp/v20190820/model/ViewShopRequest.h>
#include <tencentcloud/cpdp/v20190820/model/ViewShopResponse.h>
#include <tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipRequest.h>
#include <tencentcloud/cpdp/v20190820/model/WithdrawCashMembershipResponse.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            class CpdpClient : public AbstractClient
            {
            public:
                CpdpClient(const Credential &credential, const std::string &region);
                CpdpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddContractResponse> AddContractOutcome;
                typedef std::future<AddContractOutcome> AddContractOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::AddContractRequest&, AddContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddContractAsyncHandler;
                typedef Outcome<Core::Error, Model::AddMerchantResponse> AddMerchantOutcome;
                typedef std::future<AddMerchantOutcome> AddMerchantOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::AddMerchantRequest&, AddMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::AddShopResponse> AddShopOutcome;
                typedef std::future<AddShopOutcome> AddShopOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::AddShopRequest&, AddShopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddShopAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyApplicationMaterialResponse> ApplyApplicationMaterialOutcome;
                typedef std::future<ApplyApplicationMaterialOutcome> ApplyApplicationMaterialOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ApplyApplicationMaterialRequest&, ApplyApplicationMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyApplicationMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyOutwardOrderResponse> ApplyOutwardOrderOutcome;
                typedef std::future<ApplyOutwardOrderOutcome> ApplyOutwardOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ApplyOutwardOrderRequest&, ApplyOutwardOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyOutwardOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyPayerInfoResponse> ApplyPayerInfoOutcome;
                typedef std::future<ApplyPayerInfoOutcome> ApplyPayerInfoOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ApplyPayerInfoRequest&, ApplyPayerInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyPayerInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyReWithdrawalResponse> ApplyReWithdrawalOutcome;
                typedef std::future<ApplyReWithdrawalOutcome> ApplyReWithdrawalOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ApplyReWithdrawalRequest&, ApplyReWithdrawalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyReWithdrawalAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyTradeResponse> ApplyTradeOutcome;
                typedef std::future<ApplyTradeOutcome> ApplyTradeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ApplyTradeRequest&, ApplyTradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyTradeAsyncHandler;
                typedef Outcome<Core::Error, Model::ApplyWithdrawalResponse> ApplyWithdrawalOutcome;
                typedef std::future<ApplyWithdrawalOutcome> ApplyWithdrawalOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ApplyWithdrawalRequest&, ApplyWithdrawalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ApplyWithdrawalAsyncHandler;
                typedef Outcome<Core::Error, Model::BindAccountResponse> BindAccountOutcome;
                typedef std::future<BindAccountOutcome> BindAccountOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindAccountRequest&, BindAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::BindAcctResponse> BindAcctOutcome;
                typedef std::future<BindAcctOutcome> BindAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindAcctRequest&, BindAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindAcctAsyncHandler;
                typedef Outcome<Core::Error, Model::BindRelateAccReUnionPayResponse> BindRelateAccReUnionPayOutcome;
                typedef std::future<BindRelateAccReUnionPayOutcome> BindRelateAccReUnionPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindRelateAccReUnionPayRequest&, BindRelateAccReUnionPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRelateAccReUnionPayAsyncHandler;
                typedef Outcome<Core::Error, Model::BindRelateAcctSmallAmountResponse> BindRelateAcctSmallAmountOutcome;
                typedef std::future<BindRelateAcctSmallAmountOutcome> BindRelateAcctSmallAmountOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindRelateAcctSmallAmountRequest&, BindRelateAcctSmallAmountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRelateAcctSmallAmountAsyncHandler;
                typedef Outcome<Core::Error, Model::BindRelateAcctUnionPayResponse> BindRelateAcctUnionPayOutcome;
                typedef std::future<BindRelateAcctUnionPayOutcome> BindRelateAcctUnionPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::BindRelateAcctUnionPayRequest&, BindRelateAcctUnionPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindRelateAcctUnionPayAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAcctResponse> CheckAcctOutcome;
                typedef std::future<CheckAcctOutcome> CheckAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CheckAcctRequest&, CheckAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAcctAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckAmountResponse> CheckAmountOutcome;
                typedef std::future<CheckAmountOutcome> CheckAmountOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CheckAmountRequest&, CheckAmountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckAmountAsyncHandler;
                typedef Outcome<Core::Error, Model::CloseOrderResponse> CloseOrderOutcome;
                typedef std::future<CloseOrderOutcome> CloseOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CloseOrderRequest&, CloseOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::ConfirmOrderResponse> ConfirmOrderOutcome;
                typedef std::future<ConfirmOrderOutcome> ConfirmOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ConfirmOrderRequest&, ConfirmOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ConfirmOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::ContractOrderResponse> ContractOrderOutcome;
                typedef std::future<ContractOrderOutcome> ContractOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ContractOrderRequest&, ContractOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ContractOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAcctResponse> CreateAcctOutcome;
                typedef std::future<CreateAcctOutcome> CreateAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateAcctRequest&, CreateAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAcctAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAgentTaxPaymentInfosResponse> CreateAgentTaxPaymentInfosOutcome;
                typedef std::future<CreateAgentTaxPaymentInfosOutcome> CreateAgentTaxPaymentInfosOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateAgentTaxPaymentInfosRequest&, CreateAgentTaxPaymentInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAgentTaxPaymentInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAnchorResponse> CreateAnchorOutcome;
                typedef std::future<CreateAnchorOutcome> CreateAnchorOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateAnchorRequest&, CreateAnchorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAnchorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchPaymentResponse> CreateBatchPaymentOutcome;
                typedef std::future<CreateBatchPaymentOutcome> CreateBatchPaymentOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateBatchPaymentRequest&, CreateBatchPaymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchPaymentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustAcctIdResponse> CreateCustAcctIdOutcome;
                typedef std::future<CreateCustAcctIdOutcome> CreateCustAcctIdOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateCustAcctIdRequest&, CreateCustAcctIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustAcctIdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExternalAnchorResponse> CreateExternalAnchorOutcome;
                typedef std::future<CreateExternalAnchorOutcome> CreateExternalAnchorOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateExternalAnchorRequest&, CreateExternalAnchorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExternalAnchorAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInvoiceResponse> CreateInvoiceOutcome;
                typedef std::future<CreateInvoiceOutcome> CreateInvoiceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateInvoiceRequest&, CreateInvoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInvoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateInvoiceV2Response> CreateInvoiceV2Outcome;
                typedef std::future<CreateInvoiceV2Outcome> CreateInvoiceV2OutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateInvoiceV2Request&, CreateInvoiceV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateInvoiceV2AsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMerchantResponse> CreateMerchantOutcome;
                typedef std::future<CreateMerchantOutcome> CreateMerchantOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateMerchantRequest&, CreateMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOrderResponse> CreateOrderOutcome;
                typedef std::future<CreateOrderOutcome> CreateOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateOrderRequest&, CreateOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePayMerchantResponse> CreatePayMerchantOutcome;
                typedef std::future<CreatePayMerchantOutcome> CreatePayMerchantOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreatePayMerchantRequest&, CreatePayMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePayMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRedInvoiceResponse> CreateRedInvoiceOutcome;
                typedef std::future<CreateRedInvoiceOutcome> CreateRedInvoiceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateRedInvoiceRequest&, CreateRedInvoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRedInvoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRedInvoiceV2Response> CreateRedInvoiceV2Outcome;
                typedef std::future<CreateRedInvoiceV2Outcome> CreateRedInvoiceV2OutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateRedInvoiceV2Request&, CreateRedInvoiceV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRedInvoiceV2AsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSinglePayResponse> CreateSinglePayOutcome;
                typedef std::future<CreateSinglePayOutcome> CreateSinglePayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateSinglePayRequest&, CreateSinglePayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSinglePayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateSinglePaymentResponse> CreateSinglePaymentOutcome;
                typedef std::future<CreateSinglePaymentOutcome> CreateSinglePaymentOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateSinglePaymentRequest&, CreateSinglePaymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateSinglePaymentAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTransferBatchResponse> CreateTransferBatchOutcome;
                typedef std::future<CreateTransferBatchOutcome> CreateTransferBatchOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::CreateTransferBatchRequest&, CreateTransferBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTransferBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentTaxPaymentInfoResponse> DeleteAgentTaxPaymentInfoOutcome;
                typedef std::future<DeleteAgentTaxPaymentInfoOutcome> DeleteAgentTaxPaymentInfoOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DeleteAgentTaxPaymentInfoRequest&, DeleteAgentTaxPaymentInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentTaxPaymentInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAgentTaxPaymentInfosResponse> DeleteAgentTaxPaymentInfosOutcome;
                typedef std::future<DeleteAgentTaxPaymentInfosOutcome> DeleteAgentTaxPaymentInfosOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DeleteAgentTaxPaymentInfosRequest&, DeleteAgentTaxPaymentInfosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAgentTaxPaymentInfosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeChargeDetailResponse> DescribeChargeDetailOutcome;
                typedef std::future<DescribeChargeDetailOutcome> DescribeChargeDetailOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DescribeChargeDetailRequest&, DescribeChargeDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeChargeDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeOrderStatusResponse> DescribeOrderStatusOutcome;
                typedef std::future<DescribeOrderStatusOutcome> DescribeOrderStatusOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DescribeOrderStatusRequest&, DescribeOrderStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeOrderStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeAccreditQueryResponse> DistributeAccreditQueryOutcome;
                typedef std::future<DistributeAccreditQueryOutcome> DistributeAccreditQueryOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeAccreditQueryRequest&, DistributeAccreditQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeAccreditQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeAccreditTlinxResponse> DistributeAccreditTlinxOutcome;
                typedef std::future<DistributeAccreditTlinxOutcome> DistributeAccreditTlinxOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeAccreditTlinxRequest&, DistributeAccreditTlinxOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeAccreditTlinxAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeAddReceiverResponse> DistributeAddReceiverOutcome;
                typedef std::future<DistributeAddReceiverOutcome> DistributeAddReceiverOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeAddReceiverRequest&, DistributeAddReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeAddReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeApplyResponse> DistributeApplyOutcome;
                typedef std::future<DistributeApplyOutcome> DistributeApplyOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeApplyRequest&, DistributeApplyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeApplyAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeCancelResponse> DistributeCancelOutcome;
                typedef std::future<DistributeCancelOutcome> DistributeCancelOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeCancelRequest&, DistributeCancelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeCancelAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeQueryResponse> DistributeQueryOutcome;
                typedef std::future<DistributeQueryOutcome> DistributeQueryOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeQueryRequest&, DistributeQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeQueryReceiverResponse> DistributeQueryReceiverOutcome;
                typedef std::future<DistributeQueryReceiverOutcome> DistributeQueryReceiverOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeQueryReceiverRequest&, DistributeQueryReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeQueryReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DistributeRemoveReceiverResponse> DistributeRemoveReceiverOutcome;
                typedef std::future<DistributeRemoveReceiverOutcome> DistributeRemoveReceiverOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DistributeRemoveReceiverRequest&, DistributeRemoveReceiverOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DistributeRemoveReceiverAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadBillResponse> DownloadBillOutcome;
                typedef std::future<DownloadBillOutcome> DownloadBillOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DownloadBillRequest&, DownloadBillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadBillAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadOrgFileResponse> DownloadOrgFileOutcome;
                typedef std::future<DownloadOrgFileOutcome> DownloadOrgFileOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DownloadOrgFileRequest&, DownloadOrgFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadOrgFileAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadReconciliationUrlResponse> DownloadReconciliationUrlOutcome;
                typedef std::future<DownloadReconciliationUrlOutcome> DownloadReconciliationUrlOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::DownloadReconciliationUrlRequest&, DownloadReconciliationUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadReconciliationUrlAsyncHandler;
                typedef Outcome<Core::Error, Model::ExecuteMemberTransactionResponse> ExecuteMemberTransactionOutcome;
                typedef std::future<ExecuteMemberTransactionOutcome> ExecuteMemberTransactionOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ExecuteMemberTransactionRequest&, ExecuteMemberTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ExecuteMemberTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateOrderRefundResponse> MigrateOrderRefundOutcome;
                typedef std::future<MigrateOrderRefundOutcome> MigrateOrderRefundOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::MigrateOrderRefundRequest&, MigrateOrderRefundOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateOrderRefundAsyncHandler;
                typedef Outcome<Core::Error, Model::MigrateOrderRefundQueryResponse> MigrateOrderRefundQueryOutcome;
                typedef std::future<MigrateOrderRefundQueryOutcome> MigrateOrderRefundQueryOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::MigrateOrderRefundQueryRequest&, MigrateOrderRefundQueryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MigrateOrderRefundQueryAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyAgentTaxPaymentInfoResponse> ModifyAgentTaxPaymentInfoOutcome;
                typedef std::future<ModifyAgentTaxPaymentInfoOutcome> ModifyAgentTaxPaymentInfoOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ModifyAgentTaxPaymentInfoRequest&, ModifyAgentTaxPaymentInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyAgentTaxPaymentInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyBindedAccountResponse> ModifyBindedAccountOutcome;
                typedef std::future<ModifyBindedAccountOutcome> ModifyBindedAccountOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ModifyBindedAccountRequest&, ModifyBindedAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyBindedAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMerchantResponse> ModifyMerchantOutcome;
                typedef std::future<ModifyMerchantOutcome> ModifyMerchantOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ModifyMerchantRequest&, ModifyMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMntMbrBindRelateAcctBankCodeResponse> ModifyMntMbrBindRelateAcctBankCodeOutcome;
                typedef std::future<ModifyMntMbrBindRelateAcctBankCodeOutcome> ModifyMntMbrBindRelateAcctBankCodeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ModifyMntMbrBindRelateAcctBankCodeRequest&, ModifyMntMbrBindRelateAcctBankCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMntMbrBindRelateAcctBankCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAcctBindingResponse> QueryAcctBindingOutcome;
                typedef std::future<QueryAcctBindingOutcome> QueryAcctBindingOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryAcctBindingRequest&, QueryAcctBindingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAcctBindingAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAcctInfoResponse> QueryAcctInfoOutcome;
                typedef std::future<QueryAcctInfoOutcome> QueryAcctInfoOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryAcctInfoRequest&, QueryAcctInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAcctInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAcctInfoListResponse> QueryAcctInfoListOutcome;
                typedef std::future<QueryAcctInfoListOutcome> QueryAcctInfoListOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryAcctInfoListRequest&, QueryAcctInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAcctInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAgentStatementsResponse> QueryAgentStatementsOutcome;
                typedef std::future<QueryAgentStatementsOutcome> QueryAgentStatementsOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryAgentStatementsRequest&, QueryAgentStatementsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAgentStatementsAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAgentTaxPaymentBatchResponse> QueryAgentTaxPaymentBatchOutcome;
                typedef std::future<QueryAgentTaxPaymentBatchOutcome> QueryAgentTaxPaymentBatchOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryAgentTaxPaymentBatchRequest&, QueryAgentTaxPaymentBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAgentTaxPaymentBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryAnchorContractInfoResponse> QueryAnchorContractInfoOutcome;
                typedef std::future<QueryAnchorContractInfoOutcome> QueryAnchorContractInfoOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryAnchorContractInfoRequest&, QueryAnchorContractInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryAnchorContractInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryApplicationMaterialResponse> QueryApplicationMaterialOutcome;
                typedef std::future<QueryApplicationMaterialOutcome> QueryApplicationMaterialOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryApplicationMaterialRequest&, QueryApplicationMaterialOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryApplicationMaterialAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryBalanceResponse> QueryBalanceOutcome;
                typedef std::future<QueryBalanceOutcome> QueryBalanceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBalanceRequest&, QueryBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryBankClearResponse> QueryBankClearOutcome;
                typedef std::future<QueryBankClearOutcome> QueryBankClearOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBankClearRequest&, QueryBankClearOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBankClearAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryBankTransactionDetailsResponse> QueryBankTransactionDetailsOutcome;
                typedef std::future<QueryBankTransactionDetailsOutcome> QueryBankTransactionDetailsOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBankTransactionDetailsRequest&, QueryBankTransactionDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBankTransactionDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryBankWithdrawCashDetailsResponse> QueryBankWithdrawCashDetailsOutcome;
                typedef std::future<QueryBankWithdrawCashDetailsOutcome> QueryBankWithdrawCashDetailsOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBankWithdrawCashDetailsRequest&, QueryBankWithdrawCashDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBankWithdrawCashDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryBatchPaymentResultResponse> QueryBatchPaymentResultOutcome;
                typedef std::future<QueryBatchPaymentResultOutcome> QueryBatchPaymentResultOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBatchPaymentResultRequest&, QueryBatchPaymentResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBatchPaymentResultAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryBillDownloadURLResponse> QueryBillDownloadURLOutcome;
                typedef std::future<QueryBillDownloadURLOutcome> QueryBillDownloadURLOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryBillDownloadURLRequest&, QueryBillDownloadURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryBillDownloadURLAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCityCodeResponse> QueryCityCodeOutcome;
                typedef std::future<QueryCityCodeOutcome> QueryCityCodeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryCityCodeRequest&, QueryCityCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCityCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCommonTransferRechargeResponse> QueryCommonTransferRechargeOutcome;
                typedef std::future<QueryCommonTransferRechargeOutcome> QueryCommonTransferRechargeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryCommonTransferRechargeRequest&, QueryCommonTransferRechargeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCommonTransferRechargeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryContractResponse> QueryContractOutcome;
                typedef std::future<QueryContractOutcome> QueryContractOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryContractRequest&, QueryContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryContractAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryContractPayFeeResponse> QueryContractPayFeeOutcome;
                typedef std::future<QueryContractPayFeeOutcome> QueryContractPayFeeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryContractPayFeeRequest&, QueryContractPayFeeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryContractPayFeeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryContractPayWayListResponse> QueryContractPayWayListOutcome;
                typedef std::future<QueryContractPayWayListOutcome> QueryContractPayWayListOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryContractPayWayListRequest&, QueryContractPayWayListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryContractPayWayListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryContractRelateShopResponse> QueryContractRelateShopOutcome;
                typedef std::future<QueryContractRelateShopOutcome> QueryContractRelateShopOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryContractRelateShopRequest&, QueryContractRelateShopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryContractRelateShopAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryCustAcctIdBalanceResponse> QueryCustAcctIdBalanceOutcome;
                typedef std::future<QueryCustAcctIdBalanceOutcome> QueryCustAcctIdBalanceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryCustAcctIdBalanceRequest&, QueryCustAcctIdBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryCustAcctIdBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDownloadBillURLResponse> QueryDownloadBillURLOutcome;
                typedef std::future<QueryDownloadBillURLOutcome> QueryDownloadBillURLOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryDownloadBillURLRequest&, QueryDownloadBillURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDownloadBillURLAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryExchangeRateResponse> QueryExchangeRateOutcome;
                typedef std::future<QueryExchangeRateOutcome> QueryExchangeRateOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryExchangeRateRequest&, QueryExchangeRateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryExchangeRateAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryInvoiceResponse> QueryInvoiceOutcome;
                typedef std::future<QueryInvoiceOutcome> QueryInvoiceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryInvoiceRequest&, QueryInvoiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryInvoiceAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryInvoiceV2Response> QueryInvoiceV2Outcome;
                typedef std::future<QueryInvoiceV2Outcome> QueryInvoiceV2OutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryInvoiceV2Request&, QueryInvoiceV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryInvoiceV2AsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMaliciousRegistrationResponse> QueryMaliciousRegistrationOutcome;
                typedef std::future<QueryMaliciousRegistrationOutcome> QueryMaliciousRegistrationOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMaliciousRegistrationRequest&, QueryMaliciousRegistrationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMaliciousRegistrationAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMemberBindResponse> QueryMemberBindOutcome;
                typedef std::future<QueryMemberBindOutcome> QueryMemberBindOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMemberBindRequest&, QueryMemberBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMemberBindAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMemberTransactionResponse> QueryMemberTransactionOutcome;
                typedef std::future<QueryMemberTransactionOutcome> QueryMemberTransactionOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMemberTransactionRequest&, QueryMemberTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMemberTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMerchantResponse> QueryMerchantOutcome;
                typedef std::future<QueryMerchantOutcome> QueryMerchantOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMerchantRequest&, QueryMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMerchantBalanceResponse> QueryMerchantBalanceOutcome;
                typedef std::future<QueryMerchantBalanceOutcome> QueryMerchantBalanceOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMerchantBalanceRequest&, QueryMerchantBalanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMerchantBalanceAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMerchantClassificationResponse> QueryMerchantClassificationOutcome;
                typedef std::future<QueryMerchantClassificationOutcome> QueryMerchantClassificationOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMerchantClassificationRequest&, QueryMerchantClassificationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMerchantClassificationAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMerchantInfoForManagementResponse> QueryMerchantInfoForManagementOutcome;
                typedef std::future<QueryMerchantInfoForManagementOutcome> QueryMerchantInfoForManagementOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMerchantInfoForManagementRequest&, QueryMerchantInfoForManagementOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMerchantInfoForManagementAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMerchantOrderResponse> QueryMerchantOrderOutcome;
                typedef std::future<QueryMerchantOrderOutcome> QueryMerchantOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMerchantOrderRequest&, QueryMerchantOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMerchantOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMerchantPayWayListResponse> QueryMerchantPayWayListOutcome;
                typedef std::future<QueryMerchantPayWayListOutcome> QueryMerchantPayWayListOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryMerchantPayWayListRequest&, QueryMerchantPayWayListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMerchantPayWayListAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryOrderResponse> QueryOrderOutcome;
                typedef std::future<QueryOrderOutcome> QueryOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryOrderRequest&, QueryOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryOrderStatusResponse> QueryOrderStatusOutcome;
                typedef std::future<QueryOrderStatusOutcome> QueryOrderStatusOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryOrderStatusRequest&, QueryOrderStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryOrderStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryOutwardOrderResponse> QueryOutwardOrderOutcome;
                typedef std::future<QueryOutwardOrderOutcome> QueryOutwardOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryOutwardOrderRequest&, QueryOutwardOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryOutwardOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryPayerInfoResponse> QueryPayerInfoOutcome;
                typedef std::future<QueryPayerInfoOutcome> QueryPayerInfoOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryPayerInfoRequest&, QueryPayerInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryPayerInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryReconciliationDocumentResponse> QueryReconciliationDocumentOutcome;
                typedef std::future<QueryReconciliationDocumentOutcome> QueryReconciliationDocumentOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryReconciliationDocumentRequest&, QueryReconciliationDocumentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryReconciliationDocumentAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryRefundResponse> QueryRefundOutcome;
                typedef std::future<QueryRefundOutcome> QueryRefundOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryRefundRequest&, QueryRefundOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryRefundAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryShopOpenIdResponse> QueryShopOpenIdOutcome;
                typedef std::future<QueryShopOpenIdOutcome> QueryShopOpenIdOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryShopOpenIdRequest&, QueryShopOpenIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryShopOpenIdAsyncHandler;
                typedef Outcome<Core::Error, Model::QuerySinglePayResponse> QuerySinglePayOutcome;
                typedef std::future<QuerySinglePayOutcome> QuerySinglePayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QuerySinglePayRequest&, QuerySinglePayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuerySinglePayAsyncHandler;
                typedef Outcome<Core::Error, Model::QuerySinglePaymentResultResponse> QuerySinglePaymentResultOutcome;
                typedef std::future<QuerySinglePaymentResultOutcome> QuerySinglePaymentResultOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QuerySinglePaymentResultRequest&, QuerySinglePaymentResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuerySinglePaymentResultAsyncHandler;
                typedef Outcome<Core::Error, Model::QuerySingleTransactionStatusResponse> QuerySingleTransactionStatusOutcome;
                typedef std::future<QuerySingleTransactionStatusOutcome> QuerySingleTransactionStatusOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QuerySingleTransactionStatusRequest&, QuerySingleTransactionStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuerySingleTransactionStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::QuerySmallAmountTransferResponse> QuerySmallAmountTransferOutcome;
                typedef std::future<QuerySmallAmountTransferOutcome> QuerySmallAmountTransferOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QuerySmallAmountTransferRequest&, QuerySmallAmountTransferOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QuerySmallAmountTransferAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTradeResponse> QueryTradeOutcome;
                typedef std::future<QueryTradeOutcome> QueryTradeOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryTradeRequest&, QueryTradeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTradeAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTransferBatchResponse> QueryTransferBatchOutcome;
                typedef std::future<QueryTransferBatchOutcome> QueryTransferBatchOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryTransferBatchRequest&, QueryTransferBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTransferBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTransferDetailResponse> QueryTransferDetailOutcome;
                typedef std::future<QueryTransferDetailOutcome> QueryTransferDetailOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryTransferDetailRequest&, QueryTransferDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTransferDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTransferResultResponse> QueryTransferResultOutcome;
                typedef std::future<QueryTransferResultOutcome> QueryTransferResultOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::QueryTransferResultRequest&, QueryTransferResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTransferResultAsyncHandler;
                typedef Outcome<Core::Error, Model::RechargeByThirdPayResponse> RechargeByThirdPayOutcome;
                typedef std::future<RechargeByThirdPayOutcome> RechargeByThirdPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RechargeByThirdPayRequest&, RechargeByThirdPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RechargeByThirdPayAsyncHandler;
                typedef Outcome<Core::Error, Model::RechargeMemberThirdPayResponse> RechargeMemberThirdPayOutcome;
                typedef std::future<RechargeMemberThirdPayOutcome> RechargeMemberThirdPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RechargeMemberThirdPayRequest&, RechargeMemberThirdPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RechargeMemberThirdPayAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundResponse> RefundOutcome;
                typedef std::future<RefundOutcome> RefundOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RefundRequest&, RefundOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundMemberTransactionResponse> RefundMemberTransactionOutcome;
                typedef std::future<RefundMemberTransactionOutcome> RefundMemberTransactionOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RefundMemberTransactionRequest&, RefundMemberTransactionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundMemberTransactionAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundOrderResponse> RefundOrderOutcome;
                typedef std::future<RefundOrderOutcome> RefundOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RefundOrderRequest&, RefundOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::RefundTlinxOrderResponse> RefundTlinxOrderOutcome;
                typedef std::future<RefundTlinxOrderOutcome> RefundTlinxOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RefundTlinxOrderRequest&, RefundTlinxOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefundTlinxOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterBehaviorResponse> RegisterBehaviorOutcome;
                typedef std::future<RegisterBehaviorOutcome> RegisterBehaviorOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RegisterBehaviorRequest&, RegisterBehaviorOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterBehaviorAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterBillResponse> RegisterBillOutcome;
                typedef std::future<RegisterBillOutcome> RegisterBillOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RegisterBillRequest&, RegisterBillOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterBillAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterBillSupportWithdrawResponse> RegisterBillSupportWithdrawOutcome;
                typedef std::future<RegisterBillSupportWithdrawOutcome> RegisterBillSupportWithdrawOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RegisterBillSupportWithdrawRequest&, RegisterBillSupportWithdrawOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterBillSupportWithdrawAsyncHandler;
                typedef Outcome<Core::Error, Model::RevResigterBillSupportWithdrawResponse> RevResigterBillSupportWithdrawOutcome;
                typedef std::future<RevResigterBillSupportWithdrawOutcome> RevResigterBillSupportWithdrawOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RevResigterBillSupportWithdrawRequest&, RevResigterBillSupportWithdrawOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevResigterBillSupportWithdrawAsyncHandler;
                typedef Outcome<Core::Error, Model::ReviseMbrPropertyResponse> ReviseMbrPropertyOutcome;
                typedef std::future<ReviseMbrPropertyOutcome> ReviseMbrPropertyOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ReviseMbrPropertyRequest&, ReviseMbrPropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReviseMbrPropertyAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokeMemberRechargeThirdPayResponse> RevokeMemberRechargeThirdPayOutcome;
                typedef std::future<RevokeMemberRechargeThirdPayOutcome> RevokeMemberRechargeThirdPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RevokeMemberRechargeThirdPayRequest&, RevokeMemberRechargeThirdPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeMemberRechargeThirdPayAsyncHandler;
                typedef Outcome<Core::Error, Model::RevokeRechargeByThirdPayResponse> RevokeRechargeByThirdPayOutcome;
                typedef std::future<RevokeRechargeByThirdPayOutcome> RevokeRechargeByThirdPayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::RevokeRechargeByThirdPayRequest&, RevokeRechargeByThirdPayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevokeRechargeByThirdPayAsyncHandler;
                typedef Outcome<Core::Error, Model::SyncContractDataResponse> SyncContractDataOutcome;
                typedef std::future<SyncContractDataOutcome> SyncContractDataOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::SyncContractDataRequest&, SyncContractDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SyncContractDataAsyncHandler;
                typedef Outcome<Core::Error, Model::TerminateContractResponse> TerminateContractOutcome;
                typedef std::future<TerminateContractOutcome> TerminateContractOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::TerminateContractRequest&, TerminateContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TerminateContractAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferSinglePayResponse> TransferSinglePayOutcome;
                typedef std::future<TransferSinglePayOutcome> TransferSinglePayOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::TransferSinglePayRequest&, TransferSinglePayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferSinglePayAsyncHandler;
                typedef Outcome<Core::Error, Model::UnBindAcctResponse> UnBindAcctOutcome;
                typedef std::future<UnBindAcctOutcome> UnBindAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UnBindAcctRequest&, UnBindAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnBindAcctAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindRelateAcctResponse> UnbindRelateAcctOutcome;
                typedef std::future<UnbindRelateAcctOutcome> UnbindRelateAcctOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UnbindRelateAcctRequest&, UnbindRelateAcctOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindRelateAcctAsyncHandler;
                typedef Outcome<Core::Error, Model::UnifiedOrderResponse> UnifiedOrderOutcome;
                typedef std::future<UnifiedOrderOutcome> UnifiedOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UnifiedOrderRequest&, UnifiedOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnifiedOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::UnifiedTlinxOrderResponse> UnifiedTlinxOrderOutcome;
                typedef std::future<UnifiedTlinxOrderOutcome> UnifiedTlinxOrderOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UnifiedTlinxOrderRequest&, UnifiedTlinxOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnifiedTlinxOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadExternalAnchorInfoResponse> UploadExternalAnchorInfoOutcome;
                typedef std::future<UploadExternalAnchorInfoOutcome> UploadExternalAnchorInfoOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UploadExternalAnchorInfoRequest&, UploadExternalAnchorInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadExternalAnchorInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFileResponse> UploadFileOutcome;
                typedef std::future<UploadFileOutcome> UploadFileOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UploadFileRequest&, UploadFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFileAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadOrgFileResponse> UploadOrgFileOutcome;
                typedef std::future<UploadOrgFileOutcome> UploadOrgFileOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UploadOrgFileRequest&, UploadOrgFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadOrgFileAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadTaxListResponse> UploadTaxListOutcome;
                typedef std::future<UploadTaxListOutcome> UploadTaxListOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UploadTaxListRequest&, UploadTaxListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadTaxListAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadTaxPaymentResponse> UploadTaxPaymentOutcome;
                typedef std::future<UploadTaxPaymentOutcome> UploadTaxPaymentOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::UploadTaxPaymentRequest&, UploadTaxPaymentOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadTaxPaymentAsyncHandler;
                typedef Outcome<Core::Error, Model::ViewContractResponse> ViewContractOutcome;
                typedef std::future<ViewContractOutcome> ViewContractOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ViewContractRequest&, ViewContractOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ViewContractAsyncHandler;
                typedef Outcome<Core::Error, Model::ViewMerchantResponse> ViewMerchantOutcome;
                typedef std::future<ViewMerchantOutcome> ViewMerchantOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ViewMerchantRequest&, ViewMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ViewMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::ViewShopResponse> ViewShopOutcome;
                typedef std::future<ViewShopOutcome> ViewShopOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::ViewShopRequest&, ViewShopOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ViewShopAsyncHandler;
                typedef Outcome<Core::Error, Model::WithdrawCashMembershipResponse> WithdrawCashMembershipOutcome;
                typedef std::future<WithdrawCashMembershipOutcome> WithdrawCashMembershipOutcomeCallable;
                typedef std::function<void(const CpdpClient*, const Model::WithdrawCashMembershipRequest&, WithdrawCashMembershipOutcome, const std::shared_ptr<const AsyncCallerContext>&)> WithdrawCashMembershipAsyncHandler;



                /**
                 *云支付-添加合同接口
                 * @param req AddContractRequest
                 * @return AddContractOutcome
                 */
                AddContractOutcome AddContract(const Model::AddContractRequest &request);
                void AddContractAsync(const Model::AddContractRequest& request, const AddContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddContractOutcomeCallable AddContractCallable(const Model::AddContractRequest& request);

                /**
                 *云支付-添加商户接口
                 * @param req AddMerchantRequest
                 * @return AddMerchantOutcome
                 */
                AddMerchantOutcome AddMerchant(const Model::AddMerchantRequest &request);
                void AddMerchantAsync(const Model::AddMerchantRequest& request, const AddMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddMerchantOutcomeCallable AddMerchantCallable(const Model::AddMerchantRequest& request);

                /**
                 *云支付-添加门店接口
                 * @param req AddShopRequest
                 * @return AddShopOutcome
                 */
                AddShopOutcome AddShop(const Model::AddShopRequest &request);
                void AddShopAsync(const Model::AddShopRequest& request, const AddShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddShopOutcomeCallable AddShopCallable(const Model::AddShopRequest& request);

                /**
                 *跨境-提交申报材料。申报材料的主体是付款人，需要提前调用【跨境-付款人申请】接口提交付款人信息且审核通过后调用。
                 * @param req ApplyApplicationMaterialRequest
                 * @return ApplyApplicationMaterialOutcome
                 */
                ApplyApplicationMaterialOutcome ApplyApplicationMaterial(const Model::ApplyApplicationMaterialRequest &request);
                void ApplyApplicationMaterialAsync(const Model::ApplyApplicationMaterialRequest& request, const ApplyApplicationMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyApplicationMaterialOutcomeCallable ApplyApplicationMaterialCallable(const Model::ApplyApplicationMaterialRequest& request);

                /**
                 *跨境-汇出指令申请。通过该接口可将对接方账户中的人民币余额汇兑成外币，再汇出至指定银行账户。
                 * @param req ApplyOutwardOrderRequest
                 * @return ApplyOutwardOrderOutcome
                 */
                ApplyOutwardOrderOutcome ApplyOutwardOrder(const Model::ApplyOutwardOrderRequest &request);
                void ApplyOutwardOrderAsync(const Model::ApplyOutwardOrderRequest& request, const ApplyOutwardOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyOutwardOrderOutcomeCallable ApplyOutwardOrderCallable(const Model::ApplyOutwardOrderRequest& request);

                /**
                 *跨境-付款人申请。通过该接口提交付款人信息并进行 kyc 审核。
                 * @param req ApplyPayerInfoRequest
                 * @return ApplyPayerInfoOutcome
                 */
                ApplyPayerInfoOutcome ApplyPayerInfo(const Model::ApplyPayerInfoRequest &request);
                void ApplyPayerInfoAsync(const Model::ApplyPayerInfoRequest& request, const ApplyPayerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyPayerInfoOutcomeCallable ApplyPayerInfoCallable(const Model::ApplyPayerInfoRequest& request);

                /**
                 *正常结算提现失败情况下，发起重新提现的请求接口
                 * @param req ApplyReWithdrawalRequest
                 * @return ApplyReWithdrawalOutcome
                 */
                ApplyReWithdrawalOutcome ApplyReWithdrawal(const Model::ApplyReWithdrawalRequest &request);
                void ApplyReWithdrawalAsync(const Model::ApplyReWithdrawalRequest& request, const ApplyReWithdrawalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyReWithdrawalOutcomeCallable ApplyReWithdrawalCallable(const Model::ApplyReWithdrawalRequest& request);

                /**
                 *跨境-提交贸易材料。通过提交贸易材料接口可为对接方累计贸易额度，在额度范围内可发起汇兑汇出交易。
                 * @param req ApplyTradeRequest
                 * @return ApplyTradeOutcome
                 */
                ApplyTradeOutcome ApplyTrade(const Model::ApplyTradeRequest &request);
                void ApplyTradeAsync(const Model::ApplyTradeRequest& request, const ApplyTradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyTradeOutcomeCallable ApplyTradeCallable(const Model::ApplyTradeRequest& request);

                /**
                 *商户提现
                 * @param req ApplyWithdrawalRequest
                 * @return ApplyWithdrawalOutcome
                 */
                ApplyWithdrawalOutcome ApplyWithdrawal(const Model::ApplyWithdrawalRequest &request);
                void ApplyWithdrawalAsync(const Model::ApplyWithdrawalRequest& request, const ApplyWithdrawalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ApplyWithdrawalOutcomeCallable ApplyWithdrawalCallable(const Model::ApplyWithdrawalRequest& request);

                /**
                 *灵云-绑定账号
                 * @param req BindAccountRequest
                 * @return BindAccountOutcome
                 */
                BindAccountOutcome BindAccount(const Model::BindAccountRequest &request);
                void BindAccountAsync(const Model::BindAccountRequest& request, const BindAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAccountOutcomeCallable BindAccountCallable(const Model::BindAccountRequest& request);

                /**
                 *商户绑定提现银行卡，每个商户只能绑定一张提现银行卡
                 * @param req BindAcctRequest
                 * @return BindAcctOutcome
                 */
                BindAcctOutcome BindAcct(const Model::BindAcctRequest &request);
                void BindAcctAsync(const Model::BindAcctRequest& request, const BindAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindAcctOutcomeCallable BindAcctCallable(const Model::BindAcctRequest& request);

                /**
                 *会员绑定提现账户-回填银联鉴权短信码。用于会员填写动态验证码后，发往银行进行验证，验证成功则完成绑定。
                 * @param req BindRelateAccReUnionPayRequest
                 * @return BindRelateAccReUnionPayOutcome
                 */
                BindRelateAccReUnionPayOutcome BindRelateAccReUnionPay(const Model::BindRelateAccReUnionPayRequest &request);
                void BindRelateAccReUnionPayAsync(const Model::BindRelateAccReUnionPayRequest& request, const BindRelateAccReUnionPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRelateAccReUnionPayOutcomeCallable BindRelateAccReUnionPayCallable(const Model::BindRelateAccReUnionPayRequest& request);

                /**
                 *会员绑定提现账户-小额鉴权。会员申请绑定提现账户，绑定后从会员子账户中提现到绑定账户。
转账鉴权有两种形式：往账鉴权和来账鉴权。
往账鉴权：该接口发起成功后，银行会向提现账户转入小于等于0.5元的随机金额，并短信通知客户查看，客户查看后，需将收到的金额大小，在电商平台页面上回填，并通知银行。银行验证通过后，完成提现账户绑定。
来账鉴权：该接口发起成功后，银行以短信通知客户查看，客户查看后，需通过待绑定的账户往市场的监管账户转入短信上指定的金额。银行检索到该笔指定金额的来账是源自待绑定账户，则绑定成功。平安银行的账户，即BankType送1时，大小额行号和超级网银号都不用送。
                 * @param req BindRelateAcctSmallAmountRequest
                 * @return BindRelateAcctSmallAmountOutcome
                 */
                BindRelateAcctSmallAmountOutcome BindRelateAcctSmallAmount(const Model::BindRelateAcctSmallAmountRequest &request);
                void BindRelateAcctSmallAmountAsync(const Model::BindRelateAcctSmallAmountRequest& request, const BindRelateAcctSmallAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRelateAcctSmallAmountOutcomeCallable BindRelateAcctSmallAmountCallable(const Model::BindRelateAcctSmallAmountRequest& request);

                /**
                 *会员绑定提现账户-银联鉴权。用于会员申请绑定提现账户，申请后银行前往银联验证卡信息：姓名、证件、卡号、银行预留手机是否相符，相符则发送给会员手机动态验证码并返回成功，不相符则返回失败。
平台接收到银行返回成功后，进入输入动态验证码的页面，有效期120秒，若120秒未输入，客户可点击重新发送动态验证码，这个步骤重新调用该接口即可。
平安银行的账户，大小额行号和超级网银号都不用送。
超级网银号：单笔转账金额不超过5万，不限制笔数，只用选XX银行，不用具体到支行，可实时知道对方是否收款成功。
大小额联行号：单笔转账可超过5万，需具体到支行，不能实时知道对方是否收款成功。金额超过5万的，在工作日的8点30-17点间才会成功。
                 * @param req BindRelateAcctUnionPayRequest
                 * @return BindRelateAcctUnionPayOutcome
                 */
                BindRelateAcctUnionPayOutcome BindRelateAcctUnionPay(const Model::BindRelateAcctUnionPayRequest &request);
                void BindRelateAcctUnionPayAsync(const Model::BindRelateAcctUnionPayRequest& request, const BindRelateAcctUnionPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindRelateAcctUnionPayOutcomeCallable BindRelateAcctUnionPayCallable(const Model::BindRelateAcctUnionPayRequest& request);

                /**
                 *商户绑定提现银行卡的验证接口
                 * @param req CheckAcctRequest
                 * @return CheckAcctOutcome
                 */
                CheckAcctOutcome CheckAcct(const Model::CheckAcctRequest &request);
                void CheckAcctAsync(const Model::CheckAcctRequest& request, const CheckAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAcctOutcomeCallable CheckAcctCallable(const Model::CheckAcctRequest& request);

                /**
                 *验证鉴权金额。此接口可受理BindRelateAcctSmallAmount接口发起的转账金额（往账鉴权方式）的验证处理。若所回填的验证金额验证通过，则会绑定原申请中的银行账户作为提现账户。通过此接口也可以查得BindRelateAcctSmallAmount接口发起的来账鉴权方式的申请的当前状态。
                 * @param req CheckAmountRequest
                 * @return CheckAmountOutcome
                 */
                CheckAmountOutcome CheckAmount(const Model::CheckAmountRequest &request);
                void CheckAmountAsync(const Model::CheckAmountRequest& request, const CheckAmountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckAmountOutcomeCallable CheckAmountCallable(const Model::CheckAmountRequest& request);

                /**
                 *通过此接口关闭此前已创建的订单，关闭后，用户将无法继续付款。仅能关闭创建后未支付的订单
                 * @param req CloseOrderRequest
                 * @return CloseOrderOutcome
                 */
                CloseOrderOutcome CloseOrder(const Model::CloseOrderRequest &request);
                void CloseOrderAsync(const Model::CloseOrderRequest& request, const CloseOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseOrderOutcomeCallable CloseOrderCallable(const Model::CloseOrderRequest& request);

                /**
                 *云鉴-消费订单确认接口
                 * @param req ConfirmOrderRequest
                 * @return ConfirmOrderOutcome
                 */
                ConfirmOrderOutcome ConfirmOrder(const Model::ConfirmOrderRequest &request);
                void ConfirmOrderAsync(const Model::ConfirmOrderRequest& request, const ConfirmOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ConfirmOrderOutcomeCallable ConfirmOrderCallable(const Model::ConfirmOrderRequest& request);

                /**
                 *应用需要先带上签约信息调用本接口生成支付订单号，并将应答的PayInfo透传给聚鑫SDK，拉起客户端（包括微信公众号/微信小程序/客户端App）支付。
                 * @param req ContractOrderRequest
                 * @return ContractOrderOutcome
                 */
                ContractOrderOutcome ContractOrder(const Model::ContractOrderRequest &request);
                void ContractOrderAsync(const Model::ContractOrderRequest& request, const ContractOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ContractOrderOutcomeCallable ContractOrderCallable(const Model::ContractOrderRequest& request);

                /**
                 *子商户入驻聚鑫平台
                 * @param req CreateAcctRequest
                 * @return CreateAcctOutcome
                 */
                CreateAcctOutcome CreateAcct(const Model::CreateAcctRequest &request);
                void CreateAcctAsync(const Model::CreateAcctRequest& request, const CreateAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAcctOutcomeCallable CreateAcctCallable(const Model::CreateAcctRequest& request);

                /**
                 *直播平台-代理商完税信息录入
                 * @param req CreateAgentTaxPaymentInfosRequest
                 * @return CreateAgentTaxPaymentInfosOutcome
                 */
                CreateAgentTaxPaymentInfosOutcome CreateAgentTaxPaymentInfos(const Model::CreateAgentTaxPaymentInfosRequest &request);
                void CreateAgentTaxPaymentInfosAsync(const Model::CreateAgentTaxPaymentInfosRequest& request, const CreateAgentTaxPaymentInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAgentTaxPaymentInfosOutcomeCallable CreateAgentTaxPaymentInfosCallable(const Model::CreateAgentTaxPaymentInfosRequest& request);

                /**
                 *直播平台-主播入驻
                 * @param req CreateAnchorRequest
                 * @return CreateAnchorOutcome
                 */
                CreateAnchorOutcome CreateAnchor(const Model::CreateAnchorRequest &request);
                void CreateAnchorAsync(const Model::CreateAnchorRequest& request, const CreateAnchorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAnchorOutcomeCallable CreateAnchorCallable(const Model::CreateAnchorRequest& request);

                /**
                 *灵云-批量主播转账接口
                 * @param req CreateBatchPaymentRequest
                 * @return CreateBatchPaymentOutcome
                 */
                CreateBatchPaymentOutcome CreateBatchPayment(const Model::CreateBatchPaymentRequest &request);
                void CreateBatchPaymentAsync(const Model::CreateBatchPaymentRequest& request, const CreateBatchPaymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchPaymentOutcomeCallable CreateBatchPaymentCallable(const Model::CreateBatchPaymentRequest& request);

                /**
                 *会员子账户开立。会员在银行注册，并开立会员子账户，交易网会员代码即会员在平台端系统的会员编号。
平台需保存银行返回的子账户账号，后续交易接口都会用到。会员属性字段为预留扩展字段，当前必须送默认值。
                 * @param req CreateCustAcctIdRequest
                 * @return CreateCustAcctIdOutcome
                 */
                CreateCustAcctIdOutcome CreateCustAcctId(const Model::CreateCustAcctIdRequest &request);
                void CreateCustAcctIdAsync(const Model::CreateCustAcctIdRequest& request, const CreateCustAcctIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustAcctIdOutcomeCallable CreateCustAcctIdCallable(const Model::CreateCustAcctIdRequest& request);

                /**
                 *灵云-主播入驻
                 * @param req CreateExternalAnchorRequest
                 * @return CreateExternalAnchorOutcome
                 */
                CreateExternalAnchorOutcome CreateExternalAnchor(const Model::CreateExternalAnchorRequest &request);
                void CreateExternalAnchorAsync(const Model::CreateExternalAnchorRequest& request, const CreateExternalAnchorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExternalAnchorOutcomeCallable CreateExternalAnchorCallable(const Model::CreateExternalAnchorRequest& request);

                /**
                 *智慧零售-发票开具
                 * @param req CreateInvoiceRequest
                 * @return CreateInvoiceOutcome
                 */
                CreateInvoiceOutcome CreateInvoice(const Model::CreateInvoiceRequest &request);
                void CreateInvoiceAsync(const Model::CreateInvoiceRequest& request, const CreateInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInvoiceOutcomeCallable CreateInvoiceCallable(const Model::CreateInvoiceRequest& request);

                /**
                 *智慧零售-发票开具V2
                 * @param req CreateInvoiceV2Request
                 * @return CreateInvoiceV2Outcome
                 */
                CreateInvoiceV2Outcome CreateInvoiceV2(const Model::CreateInvoiceV2Request &request);
                void CreateInvoiceV2Async(const Model::CreateInvoiceV2Request& request, const CreateInvoiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateInvoiceV2OutcomeCallable CreateInvoiceV2Callable(const Model::CreateInvoiceV2Request& request);

                /**
                 *智慧零售-商户注册
                 * @param req CreateMerchantRequest
                 * @return CreateMerchantOutcome
                 */
                CreateMerchantOutcome CreateMerchant(const Model::CreateMerchantRequest &request);
                void CreateMerchantAsync(const Model::CreateMerchantRequest& request, const CreateMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMerchantOutcomeCallable CreateMerchantCallable(const Model::CreateMerchantRequest& request);

                /**
                 *云鉴-消费订单发起的接口
                 * @param req CreateOrderRequest
                 * @return CreateOrderOutcome
                 */
                CreateOrderOutcome CreateOrder(const Model::CreateOrderRequest &request);
                void CreateOrderAsync(const Model::CreateOrderRequest& request, const CreateOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOrderOutcomeCallable CreateOrderCallable(const Model::CreateOrderRequest& request);

                /**
                 *商户新增的接口
                 * @param req CreatePayMerchantRequest
                 * @return CreatePayMerchantOutcome
                 */
                CreatePayMerchantOutcome CreatePayMerchant(const Model::CreatePayMerchantRequest &request);
                void CreatePayMerchantAsync(const Model::CreatePayMerchantRequest& request, const CreatePayMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePayMerchantOutcomeCallable CreatePayMerchantCallable(const Model::CreatePayMerchantRequest& request);

                /**
                 *智慧零售-发票红冲
                 * @param req CreateRedInvoiceRequest
                 * @return CreateRedInvoiceOutcome
                 */
                CreateRedInvoiceOutcome CreateRedInvoice(const Model::CreateRedInvoiceRequest &request);
                void CreateRedInvoiceAsync(const Model::CreateRedInvoiceRequest& request, const CreateRedInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRedInvoiceOutcomeCallable CreateRedInvoiceCallable(const Model::CreateRedInvoiceRequest& request);

                /**
                 *智慧零售-发票红冲V2
                 * @param req CreateRedInvoiceV2Request
                 * @return CreateRedInvoiceV2Outcome
                 */
                CreateRedInvoiceV2Outcome CreateRedInvoiceV2(const Model::CreateRedInvoiceV2Request &request);
                void CreateRedInvoiceV2Async(const Model::CreateRedInvoiceV2Request& request, const CreateRedInvoiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRedInvoiceV2OutcomeCallable CreateRedInvoiceV2Callable(const Model::CreateRedInvoiceV2Request& request);

                /**
                 *银企直连-单笔支付接口
                 * @param req CreateSinglePayRequest
                 * @return CreateSinglePayOutcome
                 */
                CreateSinglePayOutcome CreateSinglePay(const Model::CreateSinglePayRequest &request);
                void CreateSinglePayAsync(const Model::CreateSinglePayRequest& request, const CreateSinglePayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSinglePayOutcomeCallable CreateSinglePayCallable(const Model::CreateSinglePayRequest& request);

                /**
                 *灵云-单笔主播转账接口
                 * @param req CreateSinglePaymentRequest
                 * @return CreateSinglePaymentOutcome
                 */
                CreateSinglePaymentOutcome CreateSinglePayment(const Model::CreateSinglePaymentRequest &request);
                void CreateSinglePaymentAsync(const Model::CreateSinglePaymentRequest& request, const CreateSinglePaymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateSinglePaymentOutcomeCallable CreateSinglePaymentCallable(const Model::CreateSinglePaymentRequest& request);

                /**
                 *微信商户发起批量转账
                 * @param req CreateTransferBatchRequest
                 * @return CreateTransferBatchOutcome
                 */
                CreateTransferBatchOutcome CreateTransferBatch(const Model::CreateTransferBatchRequest &request);
                void CreateTransferBatchAsync(const Model::CreateTransferBatchRequest& request, const CreateTransferBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTransferBatchOutcomeCallable CreateTransferBatchCallable(const Model::CreateTransferBatchRequest& request);

                /**
                 *直播平台-删除代理商完税信息
                 * @param req DeleteAgentTaxPaymentInfoRequest
                 * @return DeleteAgentTaxPaymentInfoOutcome
                 */
                DeleteAgentTaxPaymentInfoOutcome DeleteAgentTaxPaymentInfo(const Model::DeleteAgentTaxPaymentInfoRequest &request);
                void DeleteAgentTaxPaymentInfoAsync(const Model::DeleteAgentTaxPaymentInfoRequest& request, const DeleteAgentTaxPaymentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentTaxPaymentInfoOutcomeCallable DeleteAgentTaxPaymentInfoCallable(const Model::DeleteAgentTaxPaymentInfoRequest& request);

                /**
                 *直播平台-删除代理商完税信息
                 * @param req DeleteAgentTaxPaymentInfosRequest
                 * @return DeleteAgentTaxPaymentInfosOutcome
                 */
                DeleteAgentTaxPaymentInfosOutcome DeleteAgentTaxPaymentInfos(const Model::DeleteAgentTaxPaymentInfosRequest &request);
                void DeleteAgentTaxPaymentInfosAsync(const Model::DeleteAgentTaxPaymentInfosRequest& request, const DeleteAgentTaxPaymentInfosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAgentTaxPaymentInfosOutcomeCallable DeleteAgentTaxPaymentInfosCallable(const Model::DeleteAgentTaxPaymentInfosRequest& request);

                /**
                 *查询充值明细接口
                 * @param req DescribeChargeDetailRequest
                 * @return DescribeChargeDetailOutcome
                 */
                DescribeChargeDetailOutcome DescribeChargeDetail(const Model::DescribeChargeDetailRequest &request);
                void DescribeChargeDetailAsync(const Model::DescribeChargeDetailRequest& request, const DescribeChargeDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeChargeDetailOutcomeCallable DescribeChargeDetailCallable(const Model::DescribeChargeDetailRequest& request);

                /**
                 *查询单笔订单交易状态
                 * @param req DescribeOrderStatusRequest
                 * @return DescribeOrderStatusOutcome
                 */
                DescribeOrderStatusOutcome DescribeOrderStatus(const Model::DescribeOrderStatusRequest &request);
                void DescribeOrderStatusAsync(const Model::DescribeOrderStatusRequest& request, const DescribeOrderStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeOrderStatusOutcomeCallable DescribeOrderStatusCallable(const Model::DescribeOrderStatusRequest& request);

                /**
                 *云支付-分账授权申请查询接口
                 * @param req DistributeAccreditQueryRequest
                 * @return DistributeAccreditQueryOutcome
                 */
                DistributeAccreditQueryOutcome DistributeAccreditQuery(const Model::DistributeAccreditQueryRequest &request);
                void DistributeAccreditQueryAsync(const Model::DistributeAccreditQueryRequest& request, const DistributeAccreditQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeAccreditQueryOutcomeCallable DistributeAccreditQueryCallable(const Model::DistributeAccreditQueryRequest& request);

                /**
                 *云支付-分账授权申请接口
                 * @param req DistributeAccreditTlinxRequest
                 * @return DistributeAccreditTlinxOutcome
                 */
                DistributeAccreditTlinxOutcome DistributeAccreditTlinx(const Model::DistributeAccreditTlinxRequest &request);
                void DistributeAccreditTlinxAsync(const Model::DistributeAccreditTlinxRequest& request, const DistributeAccreditTlinxAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeAccreditTlinxOutcomeCallable DistributeAccreditTlinxCallable(const Model::DistributeAccreditTlinxRequest& request);

                /**
                 *云支付-分账添加分账接收方接口
                 * @param req DistributeAddReceiverRequest
                 * @return DistributeAddReceiverOutcome
                 */
                DistributeAddReceiverOutcome DistributeAddReceiver(const Model::DistributeAddReceiverRequest &request);
                void DistributeAddReceiverAsync(const Model::DistributeAddReceiverRequest& request, const DistributeAddReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeAddReceiverOutcomeCallable DistributeAddReceiverCallable(const Model::DistributeAddReceiverRequest& request);

                /**
                 *云支付-分账请求接口
                 * @param req DistributeApplyRequest
                 * @return DistributeApplyOutcome
                 */
                DistributeApplyOutcome DistributeApply(const Model::DistributeApplyRequest &request);
                void DistributeApplyAsync(const Model::DistributeApplyRequest& request, const DistributeApplyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeApplyOutcomeCallable DistributeApplyCallable(const Model::DistributeApplyRequest& request);

                /**
                 *云支付-分账撤销接口
                 * @param req DistributeCancelRequest
                 * @return DistributeCancelOutcome
                 */
                DistributeCancelOutcome DistributeCancel(const Model::DistributeCancelRequest &request);
                void DistributeCancelAsync(const Model::DistributeCancelRequest& request, const DistributeCancelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeCancelOutcomeCallable DistributeCancelCallable(const Model::DistributeCancelRequest& request);

                /**
                 *云支付-分账结果查询接口
                 * @param req DistributeQueryRequest
                 * @return DistributeQueryOutcome
                 */
                DistributeQueryOutcome DistributeQuery(const Model::DistributeQueryRequest &request);
                void DistributeQueryAsync(const Model::DistributeQueryRequest& request, const DistributeQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeQueryOutcomeCallable DistributeQueryCallable(const Model::DistributeQueryRequest& request);

                /**
                 *云支付-T查询已添加分账接收方接口
                 * @param req DistributeQueryReceiverRequest
                 * @return DistributeQueryReceiverOutcome
                 */
                DistributeQueryReceiverOutcome DistributeQueryReceiver(const Model::DistributeQueryReceiverRequest &request);
                void DistributeQueryReceiverAsync(const Model::DistributeQueryReceiverRequest& request, const DistributeQueryReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeQueryReceiverOutcomeCallable DistributeQueryReceiverCallable(const Model::DistributeQueryReceiverRequest& request);

                /**
                 *云支付-分账解除分账接收方接口
                 * @param req DistributeRemoveReceiverRequest
                 * @return DistributeRemoveReceiverOutcome
                 */
                DistributeRemoveReceiverOutcome DistributeRemoveReceiver(const Model::DistributeRemoveReceiverRequest &request);
                void DistributeRemoveReceiverAsync(const Model::DistributeRemoveReceiverRequest& request, const DistributeRemoveReceiverAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DistributeRemoveReceiverOutcomeCallable DistributeRemoveReceiverCallable(const Model::DistributeRemoveReceiverRequest& request);

                /**
                 *账单下载接口，根据本接口返回的URL地址，在D+1日下载对账单。注意，本接口返回的URL地址有时效，请尽快下载。URL超时时效后，请重新调用本接口再次获取。
                 * @param req DownloadBillRequest
                 * @return DownloadBillOutcome
                 */
                DownloadBillOutcome DownloadBill(const Model::DownloadBillRequest &request);
                void DownloadBillAsync(const Model::DownloadBillRequest& request, const DownloadBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadBillOutcomeCallable DownloadBillCallable(const Model::DownloadBillRequest& request);

                /**
                 *云支付-下载机构文件接口
                 * @param req DownloadOrgFileRequest
                 * @return DownloadOrgFileOutcome
                 */
                DownloadOrgFileOutcome DownloadOrgFile(const Model::DownloadOrgFileRequest &request);
                void DownloadOrgFileAsync(const Model::DownloadOrgFileRequest& request, const DownloadOrgFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadOrgFileOutcomeCallable DownloadOrgFileCallable(const Model::DownloadOrgFileRequest& request);

                /**
                 *获取对账中心账单下载地址的接口
                 * @param req DownloadReconciliationUrlRequest
                 * @return DownloadReconciliationUrlOutcome
                 */
                DownloadReconciliationUrlOutcome DownloadReconciliationUrl(const Model::DownloadReconciliationUrlRequest &request);
                void DownloadReconciliationUrlAsync(const Model::DownloadReconciliationUrlRequest& request, const DownloadReconciliationUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadReconciliationUrlOutcomeCallable DownloadReconciliationUrlCallable(const Model::DownloadReconciliationUrlRequest& request);

                /**
                 *会员间交易接口
                 * @param req ExecuteMemberTransactionRequest
                 * @return ExecuteMemberTransactionOutcome
                 */
                ExecuteMemberTransactionOutcome ExecuteMemberTransaction(const Model::ExecuteMemberTransactionRequest &request);
                void ExecuteMemberTransactionAsync(const Model::ExecuteMemberTransactionRequest& request, const ExecuteMemberTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ExecuteMemberTransactionOutcomeCallable ExecuteMemberTransactionCallable(const Model::ExecuteMemberTransactionRequest& request);

                /**
                 *山姆聚合支付项目-存量订单退款接口。可以通过本接口将支付款全部或部分退还给付款方，在收到用户退款请求并且验证成功之后，按照退款规则将支付款按原路退回到支付帐号。
                 * @param req MigrateOrderRefundRequest
                 * @return MigrateOrderRefundOutcome
                 */
                MigrateOrderRefundOutcome MigrateOrderRefund(const Model::MigrateOrderRefundRequest &request);
                void MigrateOrderRefundAsync(const Model::MigrateOrderRefundRequest& request, const MigrateOrderRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateOrderRefundOutcomeCallable MigrateOrderRefundCallable(const Model::MigrateOrderRefundRequest& request);

                /**
                 *提交退款申请后，通过调用该接口查询退款状态。退款可能有一定延时。
                 * @param req MigrateOrderRefundQueryRequest
                 * @return MigrateOrderRefundQueryOutcome
                 */
                MigrateOrderRefundQueryOutcome MigrateOrderRefundQuery(const Model::MigrateOrderRefundQueryRequest &request);
                void MigrateOrderRefundQueryAsync(const Model::MigrateOrderRefundQueryRequest& request, const MigrateOrderRefundQueryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MigrateOrderRefundQueryOutcomeCallable MigrateOrderRefundQueryCallable(const Model::MigrateOrderRefundQueryRequest& request);

                /**
                 *直播平台-修改代理商完税信息
                 * @param req ModifyAgentTaxPaymentInfoRequest
                 * @return ModifyAgentTaxPaymentInfoOutcome
                 */
                ModifyAgentTaxPaymentInfoOutcome ModifyAgentTaxPaymentInfo(const Model::ModifyAgentTaxPaymentInfoRequest &request);
                void ModifyAgentTaxPaymentInfoAsync(const Model::ModifyAgentTaxPaymentInfoRequest& request, const ModifyAgentTaxPaymentInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyAgentTaxPaymentInfoOutcomeCallable ModifyAgentTaxPaymentInfoCallable(const Model::ModifyAgentTaxPaymentInfoRequest& request);

                /**
                 *灵云-重新绑定账号
                 * @param req ModifyBindedAccountRequest
                 * @return ModifyBindedAccountOutcome
                 */
                ModifyBindedAccountOutcome ModifyBindedAccount(const Model::ModifyBindedAccountRequest &request);
                void ModifyBindedAccountAsync(const Model::ModifyBindedAccountRequest& request, const ModifyBindedAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyBindedAccountOutcomeCallable ModifyBindedAccountCallable(const Model::ModifyBindedAccountRequest& request);

                /**
                 *云鉴-商户信息修改的接口
                 * @param req ModifyMerchantRequest
                 * @return ModifyMerchantOutcome
                 */
                ModifyMerchantOutcome ModifyMerchant(const Model::ModifyMerchantRequest &request);
                void ModifyMerchantAsync(const Model::ModifyMerchantRequest& request, const ModifyMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMerchantOutcomeCallable ModifyMerchantCallable(const Model::ModifyMerchantRequest& request);

                /**
                 *维护会员绑定提现账户联行号。此接口可以支持市场修改会员的提现账户的开户行信息，具体包括开户行行名、开户行的银行联行号（大小额联行号）和超级网银行号。
                 * @param req ModifyMntMbrBindRelateAcctBankCodeRequest
                 * @return ModifyMntMbrBindRelateAcctBankCodeOutcome
                 */
                ModifyMntMbrBindRelateAcctBankCodeOutcome ModifyMntMbrBindRelateAcctBankCode(const Model::ModifyMntMbrBindRelateAcctBankCodeRequest &request);
                void ModifyMntMbrBindRelateAcctBankCodeAsync(const Model::ModifyMntMbrBindRelateAcctBankCodeRequest& request, const ModifyMntMbrBindRelateAcctBankCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMntMbrBindRelateAcctBankCodeOutcomeCallable ModifyMntMbrBindRelateAcctBankCodeCallable(const Model::ModifyMntMbrBindRelateAcctBankCodeRequest& request);

                /**
                 *聚鑫-查询子账户绑定银行卡
                 * @param req QueryAcctBindingRequest
                 * @return QueryAcctBindingOutcome
                 */
                QueryAcctBindingOutcome QueryAcctBinding(const Model::QueryAcctBindingRequest &request);
                void QueryAcctBindingAsync(const Model::QueryAcctBindingRequest& request, const QueryAcctBindingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAcctBindingOutcomeCallable QueryAcctBindingCallable(const Model::QueryAcctBindingRequest& request);

                /**
                 *聚鑫-开户信息查询
                 * @param req QueryAcctInfoRequest
                 * @return QueryAcctInfoOutcome
                 */
                QueryAcctInfoOutcome QueryAcctInfo(const Model::QueryAcctInfoRequest &request);
                void QueryAcctInfoAsync(const Model::QueryAcctInfoRequest& request, const QueryAcctInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAcctInfoOutcomeCallable QueryAcctInfoCallable(const Model::QueryAcctInfoRequest& request);

                /**
                 *聚鑫-开户信息列表查询, 查询某一段时间的开户信息
                 * @param req QueryAcctInfoListRequest
                 * @return QueryAcctInfoListOutcome
                 */
                QueryAcctInfoListOutcome QueryAcctInfoList(const Model::QueryAcctInfoListRequest &request);
                void QueryAcctInfoListAsync(const Model::QueryAcctInfoListRequest& request, const QueryAcctInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAcctInfoListOutcomeCallable QueryAcctInfoListCallable(const Model::QueryAcctInfoListRequest& request);

                /**
                 *直播平台-查询代理商结算单链接
                 * @param req QueryAgentStatementsRequest
                 * @return QueryAgentStatementsOutcome
                 */
                QueryAgentStatementsOutcome QueryAgentStatements(const Model::QueryAgentStatementsRequest &request);
                void QueryAgentStatementsAsync(const Model::QueryAgentStatementsRequest& request, const QueryAgentStatementsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAgentStatementsOutcomeCallable QueryAgentStatementsCallable(const Model::QueryAgentStatementsRequest& request);

                /**
                 *直播平台-查询批次信息
                 * @param req QueryAgentTaxPaymentBatchRequest
                 * @return QueryAgentTaxPaymentBatchOutcome
                 */
                QueryAgentTaxPaymentBatchOutcome QueryAgentTaxPaymentBatch(const Model::QueryAgentTaxPaymentBatchRequest &request);
                void QueryAgentTaxPaymentBatchAsync(const Model::QueryAgentTaxPaymentBatchRequest& request, const QueryAgentTaxPaymentBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAgentTaxPaymentBatchOutcomeCallable QueryAgentTaxPaymentBatchCallable(const Model::QueryAgentTaxPaymentBatchRequest& request);

                /**
                 *直播平台-查询主播签约信息
                 * @param req QueryAnchorContractInfoRequest
                 * @return QueryAnchorContractInfoOutcome
                 */
                QueryAnchorContractInfoOutcome QueryAnchorContractInfo(const Model::QueryAnchorContractInfoRequest &request);
                void QueryAnchorContractInfoAsync(const Model::QueryAnchorContractInfoRequest& request, const QueryAnchorContractInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryAnchorContractInfoOutcomeCallable QueryAnchorContractInfoCallable(const Model::QueryAnchorContractInfoRequest& request);

                /**
                 *跨境-成功申报材料查询。查询成功入库的申报材料。
                 * @param req QueryApplicationMaterialRequest
                 * @return QueryApplicationMaterialOutcome
                 */
                QueryApplicationMaterialOutcome QueryApplicationMaterial(const Model::QueryApplicationMaterialRequest &request);
                void QueryApplicationMaterialAsync(const Model::QueryApplicationMaterialRequest& request, const QueryApplicationMaterialAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryApplicationMaterialOutcomeCallable QueryApplicationMaterialCallable(const Model::QueryApplicationMaterialRequest& request);

                /**
                 *子商户余额查询
                 * @param req QueryBalanceRequest
                 * @return QueryBalanceOutcome
                 */
                QueryBalanceOutcome QueryBalance(const Model::QueryBalanceRequest &request);
                void QueryBalanceAsync(const Model::QueryBalanceRequest& request, const QueryBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBalanceOutcomeCallable QueryBalanceCallable(const Model::QueryBalanceRequest& request);

                /**
                 *查询银行在途清算结果。查询时间段内交易网的在途清算结果。
                 * @param req QueryBankClearRequest
                 * @return QueryBankClearOutcome
                 */
                QueryBankClearOutcome QueryBankClear(const Model::QueryBankClearRequest &request);
                void QueryBankClearAsync(const Model::QueryBankClearRequest& request, const QueryBankClearAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBankClearOutcomeCallable QueryBankClearCallable(const Model::QueryBankClearRequest& request);

                /**
                 *查询银行时间段内交易明细。查询时间段的会员成功交易。
                 * @param req QueryBankTransactionDetailsRequest
                 * @return QueryBankTransactionDetailsOutcome
                 */
                QueryBankTransactionDetailsOutcome QueryBankTransactionDetails(const Model::QueryBankTransactionDetailsRequest &request);
                void QueryBankTransactionDetailsAsync(const Model::QueryBankTransactionDetailsRequest& request, const QueryBankTransactionDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBankTransactionDetailsOutcomeCallable QueryBankTransactionDetailsCallable(const Model::QueryBankTransactionDetailsRequest& request);

                /**
                 *查询银行时间段内清分提现明细。查询银行时间段内清分提现明细接口：若为“见证+收单退款”“见证+收单充值”记录时备注Note为“见证+收单充值,订单号”“见证+收单退款,订单号”，此接口可以查到T0/T1的充值明细和退款记录。查询标志：充值记录仍用3清分选项查询，退款记录同提现用2选项查询。
                 * @param req QueryBankWithdrawCashDetailsRequest
                 * @return QueryBankWithdrawCashDetailsOutcome
                 */
                QueryBankWithdrawCashDetailsOutcome QueryBankWithdrawCashDetails(const Model::QueryBankWithdrawCashDetailsRequest &request);
                void QueryBankWithdrawCashDetailsAsync(const Model::QueryBankWithdrawCashDetailsRequest& request, const QueryBankWithdrawCashDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBankWithdrawCashDetailsOutcomeCallable QueryBankWithdrawCashDetailsCallable(const Model::QueryBankWithdrawCashDetailsRequest& request);

                /**
                 *灵云-批量转账结果查询
                 * @param req QueryBatchPaymentResultRequest
                 * @return QueryBatchPaymentResultOutcome
                 */
                QueryBatchPaymentResultOutcome QueryBatchPaymentResult(const Model::QueryBatchPaymentResultRequest &request);
                void QueryBatchPaymentResultAsync(const Model::QueryBatchPaymentResultRequest& request, const QueryBatchPaymentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBatchPaymentResultOutcomeCallable QueryBatchPaymentResultCallable(const Model::QueryBatchPaymentResultRequest& request);

                /**
                 *获取单笔代发转账对账单下载URL
                 * @param req QueryBillDownloadURLRequest
                 * @return QueryBillDownloadURLOutcome
                 */
                QueryBillDownloadURLOutcome QueryBillDownloadURL(const Model::QueryBillDownloadURLRequest &request);
                void QueryBillDownloadURLAsync(const Model::QueryBillDownloadURLRequest& request, const QueryBillDownloadURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryBillDownloadURLOutcomeCallable QueryBillDownloadURLCallable(const Model::QueryBillDownloadURLRequest& request);

                /**
                 *云支付-查询城市编码接口
                 * @param req QueryCityCodeRequest
                 * @return QueryCityCodeOutcome
                 */
                QueryCityCodeOutcome QueryCityCode(const Model::QueryCityCodeRequest &request);
                void QueryCityCodeAsync(const Model::QueryCityCodeRequest& request, const QueryCityCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCityCodeOutcomeCallable QueryCityCodeCallable(const Model::QueryCityCodeRequest& request);

                /**
                 *查询普通转账充值明细。接口用于查询会员主动转账进资金汇总账户的明细情况。若会员使用绑定账号转入，则直接入账到会员子账户。若未使用绑定账号转入，则系统无法自动清分到对应子账户，则转入挂账子账户由平台自行清分。若是 “见证+收单充值”T0充值记录时备注Note为“见证+收单充值,订单号” 此接口可以查到T0到账的“见证+收单充值”充值记录。
                 * @param req QueryCommonTransferRechargeRequest
                 * @return QueryCommonTransferRechargeOutcome
                 */
                QueryCommonTransferRechargeOutcome QueryCommonTransferRecharge(const Model::QueryCommonTransferRechargeRequest &request);
                void QueryCommonTransferRechargeAsync(const Model::QueryCommonTransferRechargeRequest& request, const QueryCommonTransferRechargeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCommonTransferRechargeOutcomeCallable QueryCommonTransferRechargeCallable(const Model::QueryCommonTransferRechargeRequest& request);

                /**
                 *通过此接口查询签约数据
                 * @param req QueryContractRequest
                 * @return QueryContractOutcome
                 */
                QueryContractOutcome QueryContract(const Model::QueryContractRequest &request);
                void QueryContractAsync(const Model::QueryContractRequest& request, const QueryContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryContractOutcomeCallable QueryContractCallable(const Model::QueryContractRequest& request);

                /**
                 *云支付-查询支付方式费率及自定义表单项接口
                 * @param req QueryContractPayFeeRequest
                 * @return QueryContractPayFeeOutcome
                 */
                QueryContractPayFeeOutcome QueryContractPayFee(const Model::QueryContractPayFeeRequest &request);
                void QueryContractPayFeeAsync(const Model::QueryContractPayFeeRequest& request, const QueryContractPayFeeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryContractPayFeeOutcomeCallable QueryContractPayFeeCallable(const Model::QueryContractPayFeeRequest& request);

                /**
                 *云支付-查询合同支付方式列表接口
                 * @param req QueryContractPayWayListRequest
                 * @return QueryContractPayWayListOutcome
                 */
                QueryContractPayWayListOutcome QueryContractPayWayList(const Model::QueryContractPayWayListRequest &request);
                void QueryContractPayWayListAsync(const Model::QueryContractPayWayListRequest& request, const QueryContractPayWayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryContractPayWayListOutcomeCallable QueryContractPayWayListCallable(const Model::QueryContractPayWayListRequest& request);

                /**
                 *云支付-查询合同可关联门店接口
                 * @param req QueryContractRelateShopRequest
                 * @return QueryContractRelateShopOutcome
                 */
                QueryContractRelateShopOutcome QueryContractRelateShop(const Model::QueryContractRelateShopRequest &request);
                void QueryContractRelateShopAsync(const Model::QueryContractRelateShopRequest& request, const QueryContractRelateShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryContractRelateShopOutcomeCallable QueryContractRelateShopCallable(const Model::QueryContractRelateShopRequest& request);

                /**
                 *查询银行子账户余额。查询会员子账户以及平台的功能子账户的余额。
                 * @param req QueryCustAcctIdBalanceRequest
                 * @return QueryCustAcctIdBalanceOutcome
                 */
                QueryCustAcctIdBalanceOutcome QueryCustAcctIdBalance(const Model::QueryCustAcctIdBalanceRequest &request);
                void QueryCustAcctIdBalanceAsync(const Model::QueryCustAcctIdBalanceRequest& request, const QueryCustAcctIdBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryCustAcctIdBalanceOutcomeCallable QueryCustAcctIdBalanceCallable(const Model::QueryCustAcctIdBalanceRequest& request);

                /**
                 *云鉴-查询对账单下载地址的接口
                 * @param req QueryDownloadBillURLRequest
                 * @return QueryDownloadBillURLOutcome
                 */
                QueryDownloadBillURLOutcome QueryDownloadBillURL(const Model::QueryDownloadBillURLRequest &request);
                void QueryDownloadBillURLAsync(const Model::QueryDownloadBillURLRequest& request, const QueryDownloadBillURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDownloadBillURLOutcomeCallable QueryDownloadBillURLCallable(const Model::QueryDownloadBillURLRequest& request);

                /**
                 *跨境-查询汇率
                 * @param req QueryExchangeRateRequest
                 * @return QueryExchangeRateOutcome
                 */
                QueryExchangeRateOutcome QueryExchangeRate(const Model::QueryExchangeRateRequest &request);
                void QueryExchangeRateAsync(const Model::QueryExchangeRateRequest& request, const QueryExchangeRateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryExchangeRateOutcomeCallable QueryExchangeRateCallable(const Model::QueryExchangeRateRequest& request);

                /**
                 *智慧零售-发票查询
                 * @param req QueryInvoiceRequest
                 * @return QueryInvoiceOutcome
                 */
                QueryInvoiceOutcome QueryInvoice(const Model::QueryInvoiceRequest &request);
                void QueryInvoiceAsync(const Model::QueryInvoiceRequest& request, const QueryInvoiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryInvoiceOutcomeCallable QueryInvoiceCallable(const Model::QueryInvoiceRequest& request);

                /**
                 *智慧零售-发票查询V2
                 * @param req QueryInvoiceV2Request
                 * @return QueryInvoiceV2Outcome
                 */
                QueryInvoiceV2Outcome QueryInvoiceV2(const Model::QueryInvoiceV2Request &request);
                void QueryInvoiceV2Async(const Model::QueryInvoiceV2Request& request, const QueryInvoiceV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryInvoiceV2OutcomeCallable QueryInvoiceV2Callable(const Model::QueryInvoiceV2Request& request);

                /**
                 *商户恶意注册接口
                 * @param req QueryMaliciousRegistrationRequest
                 * @return QueryMaliciousRegistrationOutcome
                 */
                QueryMaliciousRegistrationOutcome QueryMaliciousRegistration(const Model::QueryMaliciousRegistrationRequest &request);
                void QueryMaliciousRegistrationAsync(const Model::QueryMaliciousRegistrationRequest& request, const QueryMaliciousRegistrationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMaliciousRegistrationOutcomeCallable QueryMaliciousRegistrationCallable(const Model::QueryMaliciousRegistrationRequest& request);

                /**
                 *会员绑定信息查询。查询标志为“单个会员”的情况下，返回该会员的有效的绑定账户信息。
查询标志为“全部会员”的情况下，返回市场下的全部的有效的绑定账户信息。查询标志为“单个会员的证件信息”的情况下，返回市场下的指定的会员的留存在电商见证宝系统的证件信息。
                 * @param req QueryMemberBindRequest
                 * @return QueryMemberBindOutcome
                 */
                QueryMemberBindOutcome QueryMemberBind(const Model::QueryMemberBindRequest &request);
                void QueryMemberBindAsync(const Model::QueryMemberBindRequest& request, const QueryMemberBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMemberBindOutcomeCallable QueryMemberBindCallable(const Model::QueryMemberBindRequest& request);

                /**
                 *会员间交易-不验证。此接口可以实现会员间的余额的交易，实现资金在会员之间流动。
                 * @param req QueryMemberTransactionRequest
                 * @return QueryMemberTransactionOutcome
                 */
                QueryMemberTransactionOutcome QueryMemberTransaction(const Model::QueryMemberTransactionRequest &request);
                void QueryMemberTransactionAsync(const Model::QueryMemberTransactionRequest& request, const QueryMemberTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMemberTransactionOutcomeCallable QueryMemberTransactionCallable(const Model::QueryMemberTransactionRequest& request);

                /**
                 *云鉴-商户信息查询接口
                 * @param req QueryMerchantRequest
                 * @return QueryMerchantOutcome
                 */
                QueryMerchantOutcome QueryMerchant(const Model::QueryMerchantRequest &request);
                void QueryMerchantAsync(const Model::QueryMerchantRequest& request, const QueryMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMerchantOutcomeCallable QueryMerchantCallable(const Model::QueryMerchantRequest& request);

                /**
                 *跨境-对接方账户余额查询
                 * @param req QueryMerchantBalanceRequest
                 * @return QueryMerchantBalanceOutcome
                 */
                QueryMerchantBalanceOutcome QueryMerchantBalance(const Model::QueryMerchantBalanceRequest &request);
                void QueryMerchantBalanceAsync(const Model::QueryMerchantBalanceRequest& request, const QueryMerchantBalanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMerchantBalanceOutcomeCallable QueryMerchantBalanceCallable(const Model::QueryMerchantBalanceRequest& request);

                /**
                 *云支付-查询商户分类接口
                 * @param req QueryMerchantClassificationRequest
                 * @return QueryMerchantClassificationOutcome
                 */
                QueryMerchantClassificationOutcome QueryMerchantClassification(const Model::QueryMerchantClassificationRequest &request);
                void QueryMerchantClassificationAsync(const Model::QueryMerchantClassificationRequest& request, const QueryMerchantClassificationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMerchantClassificationOutcomeCallable QueryMerchantClassificationCallable(const Model::QueryMerchantClassificationRequest& request);

                /**
                 *智慧零售-查询管理端商户
                 * @param req QueryMerchantInfoForManagementRequest
                 * @return QueryMerchantInfoForManagementOutcome
                 */
                QueryMerchantInfoForManagementOutcome QueryMerchantInfoForManagement(const Model::QueryMerchantInfoForManagementRequest &request);
                void QueryMerchantInfoForManagementAsync(const Model::QueryMerchantInfoForManagementRequest& request, const QueryMerchantInfoForManagementAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMerchantInfoForManagementOutcomeCallable QueryMerchantInfoForManagementCallable(const Model::QueryMerchantInfoForManagementRequest& request);

                /**
                 *云鉴-消费订单查询接口
                 * @param req QueryMerchantOrderRequest
                 * @return QueryMerchantOrderOutcome
                 */
                QueryMerchantOrderOutcome QueryMerchantOrder(const Model::QueryMerchantOrderRequest &request);
                void QueryMerchantOrderAsync(const Model::QueryMerchantOrderRequest& request, const QueryMerchantOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMerchantOrderOutcomeCallable QueryMerchantOrderCallable(const Model::QueryMerchantOrderRequest& request);

                /**
                 *商户查询已开通的支付方式列表
                 * @param req QueryMerchantPayWayListRequest
                 * @return QueryMerchantPayWayListOutcome
                 */
                QueryMerchantPayWayListOutcome QueryMerchantPayWayList(const Model::QueryMerchantPayWayListRequest &request);
                void QueryMerchantPayWayListAsync(const Model::QueryMerchantPayWayListRequest& request, const QueryMerchantPayWayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMerchantPayWayListOutcomeCallable QueryMerchantPayWayListCallable(const Model::QueryMerchantPayWayListRequest& request);

                /**
                 *根据订单号，或者用户Id，查询支付订单状态 
                 * @param req QueryOrderRequest
                 * @return QueryOrderOutcome
                 */
                QueryOrderOutcome QueryOrder(const Model::QueryOrderRequest &request);
                void QueryOrderAsync(const Model::QueryOrderRequest& request, const QueryOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryOrderOutcomeCallable QueryOrderCallable(const Model::QueryOrderRequest& request);

                /**
                 *云支付-查询订单付款状态
                 * @param req QueryOrderStatusRequest
                 * @return QueryOrderStatusOutcome
                 */
                QueryOrderStatusOutcome QueryOrderStatus(const Model::QueryOrderStatusRequest &request);
                void QueryOrderStatusAsync(const Model::QueryOrderStatusRequest& request, const QueryOrderStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryOrderStatusOutcomeCallable QueryOrderStatusCallable(const Model::QueryOrderStatusRequest& request);

                /**
                 *跨境-查询汇出结果
                 * @param req QueryOutwardOrderRequest
                 * @return QueryOutwardOrderOutcome
                 */
                QueryOutwardOrderOutcome QueryOutwardOrder(const Model::QueryOutwardOrderRequest &request);
                void QueryOutwardOrderAsync(const Model::QueryOutwardOrderRequest& request, const QueryOutwardOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryOutwardOrderOutcomeCallable QueryOutwardOrderCallable(const Model::QueryOutwardOrderRequest& request);

                /**
                 *跨境-付款人查询
                 * @param req QueryPayerInfoRequest
                 * @return QueryPayerInfoOutcome
                 */
                QueryPayerInfoOutcome QueryPayerInfo(const Model::QueryPayerInfoRequest &request);
                void QueryPayerInfoAsync(const Model::QueryPayerInfoRequest& request, const QueryPayerInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryPayerInfoOutcomeCallable QueryPayerInfoCallable(const Model::QueryPayerInfoRequest& request);

                /**
                 *查询对账文件信息。平台调用该接口获取需下载对账文件的文件名称以及密钥。 平台获取到信息后， 可以再调用OPENAPI的文件下载功能。
                 * @param req QueryReconciliationDocumentRequest
                 * @return QueryReconciliationDocumentOutcome
                 */
                QueryReconciliationDocumentOutcome QueryReconciliationDocument(const Model::QueryReconciliationDocumentRequest &request);
                void QueryReconciliationDocumentAsync(const Model::QueryReconciliationDocumentRequest& request, const QueryReconciliationDocumentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryReconciliationDocumentOutcomeCallable QueryReconciliationDocumentCallable(const Model::QueryReconciliationDocumentRequest& request);

                /**
                 *提交退款申请后，通过调用该接口查询退款状态。退款可能有一定延时，用微信零钱支付的退款约20分钟内到账，银行卡支付的退款约3个工作日后到账。
                 * @param req QueryRefundRequest
                 * @return QueryRefundOutcome
                 */
                QueryRefundOutcome QueryRefund(const Model::QueryRefundRequest &request);
                void QueryRefundAsync(const Model::QueryRefundRequest& request, const QueryRefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryRefundOutcomeCallable QueryRefundCallable(const Model::QueryRefundRequest& request);

                /**
                 *云支付-获取门店OpenId接口
                 * @param req QueryShopOpenIdRequest
                 * @return QueryShopOpenIdOutcome
                 */
                QueryShopOpenIdOutcome QueryShopOpenId(const Model::QueryShopOpenIdRequest &request);
                void QueryShopOpenIdAsync(const Model::QueryShopOpenIdRequest& request, const QueryShopOpenIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryShopOpenIdOutcomeCallable QueryShopOpenIdCallable(const Model::QueryShopOpenIdRequest& request);

                /**
                 *银企直连-单笔支付状态查询接口
                 * @param req QuerySinglePayRequest
                 * @return QuerySinglePayOutcome
                 */
                QuerySinglePayOutcome QuerySinglePay(const Model::QuerySinglePayRequest &request);
                void QuerySinglePayAsync(const Model::QuerySinglePayRequest& request, const QuerySinglePayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuerySinglePayOutcomeCallable QuerySinglePayCallable(const Model::QuerySinglePayRequest& request);

                /**
                 *灵云-单笔转账结果查询
                 * @param req QuerySinglePaymentResultRequest
                 * @return QuerySinglePaymentResultOutcome
                 */
                QuerySinglePaymentResultOutcome QuerySinglePaymentResult(const Model::QuerySinglePaymentResultRequest &request);
                void QuerySinglePaymentResultAsync(const Model::QuerySinglePaymentResultRequest& request, const QuerySinglePaymentResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuerySinglePaymentResultOutcomeCallable QuerySinglePaymentResultCallable(const Model::QuerySinglePaymentResultRequest& request);

                /**
                 *查询银行单笔交易状态。查询单笔交易的状态。
                 * @param req QuerySingleTransactionStatusRequest
                 * @return QuerySingleTransactionStatusOutcome
                 */
                QuerySingleTransactionStatusOutcome QuerySingleTransactionStatus(const Model::QuerySingleTransactionStatusRequest &request);
                void QuerySingleTransactionStatusAsync(const Model::QuerySingleTransactionStatusRequest& request, const QuerySingleTransactionStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuerySingleTransactionStatusOutcomeCallable QuerySingleTransactionStatusCallable(const Model::QuerySingleTransactionStatusRequest& request);

                /**
                 *查询小额鉴权转账结果。查询小额往账鉴权的转账状态。
                 * @param req QuerySmallAmountTransferRequest
                 * @return QuerySmallAmountTransferOutcome
                 */
                QuerySmallAmountTransferOutcome QuerySmallAmountTransfer(const Model::QuerySmallAmountTransferRequest &request);
                void QuerySmallAmountTransferAsync(const Model::QuerySmallAmountTransferRequest& request, const QuerySmallAmountTransferAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QuerySmallAmountTransferOutcomeCallable QuerySmallAmountTransferCallable(const Model::QuerySmallAmountTransferRequest& request);

                /**
                 *跨境-贸易材料明细查询。
                 * @param req QueryTradeRequest
                 * @return QueryTradeOutcome
                 */
                QueryTradeOutcome QueryTrade(const Model::QueryTradeRequest &request);
                void QueryTradeAsync(const Model::QueryTradeRequest& request, const QueryTradeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTradeOutcomeCallable QueryTradeCallable(const Model::QueryTradeRequest& request);

                /**
                 *通过商家批次单号或者微信批次号查询批次单
                 * @param req QueryTransferBatchRequest
                 * @return QueryTransferBatchOutcome
                 */
                QueryTransferBatchOutcome QueryTransferBatch(const Model::QueryTransferBatchRequest &request);
                void QueryTransferBatchAsync(const Model::QueryTransferBatchRequest& request, const QueryTransferBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTransferBatchOutcomeCallable QueryTransferBatchCallable(const Model::QueryTransferBatchRequest& request);

                /**
                 *通过商家或者微信批次明细单号查询明细单
                 * @param req QueryTransferDetailRequest
                 * @return QueryTransferDetailOutcome
                 */
                QueryTransferDetailOutcome QueryTransferDetail(const Model::QueryTransferDetailRequest &request);
                void QueryTransferDetailAsync(const Model::QueryTransferDetailRequest& request, const QueryTransferDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTransferDetailOutcomeCallable QueryTransferDetailCallable(const Model::QueryTransferDetailRequest& request);

                /**
                 *智能代发-单笔代发转账查询接口
                 * @param req QueryTransferResultRequest
                 * @return QueryTransferResultOutcome
                 */
                QueryTransferResultOutcome QueryTransferResult(const Model::QueryTransferResultRequest &request);
                void QueryTransferResultAsync(const Model::QueryTransferResultRequest& request, const QueryTransferResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTransferResultOutcomeCallable QueryTransferResultCallable(const Model::QueryTransferResultRequest& request);

                /**
                 *会员在途充值(经第三方支付渠道)接口
                 * @param req RechargeByThirdPayRequest
                 * @return RechargeByThirdPayOutcome
                 */
                RechargeByThirdPayOutcome RechargeByThirdPay(const Model::RechargeByThirdPayRequest &request);
                void RechargeByThirdPayAsync(const Model::RechargeByThirdPayRequest& request, const RechargeByThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RechargeByThirdPayOutcomeCallable RechargeByThirdPayCallable(const Model::RechargeByThirdPayRequest& request);

                /**
                 *见证宝-会员在途充值(经第三方支付渠道)
                 * @param req RechargeMemberThirdPayRequest
                 * @return RechargeMemberThirdPayOutcome
                 */
                RechargeMemberThirdPayOutcome RechargeMemberThirdPay(const Model::RechargeMemberThirdPayRequest &request);
                void RechargeMemberThirdPayAsync(const Model::RechargeMemberThirdPayRequest& request, const RechargeMemberThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RechargeMemberThirdPayOutcomeCallable RechargeMemberThirdPayCallable(const Model::RechargeMemberThirdPayRequest& request);

                /**
                 *如交易订单需退款，可以通过本接口将支付款全部或部分退还给付款方，聚鑫将在收到退款请求并且验证成功之后，按照退款规则将支付款按原路退回到支付帐号。最长支持1年的订单退款。在订单包含多个子订单的情况下，如果使用本接口传入OutTradeNo或TransactionId退款，则只支持全单退款；如果需要部分退款，请通过传入子订单的方式来指定部分金额退款。 
                 * @param req RefundRequest
                 * @return RefundOutcome
                 */
                RefundOutcome Refund(const Model::RefundRequest &request);
                void RefundAsync(const Model::RefundRequest& request, const RefundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundOutcomeCallable RefundCallable(const Model::RefundRequest& request);

                /**
                 *会员间交易退款
                 * @param req RefundMemberTransactionRequest
                 * @return RefundMemberTransactionOutcome
                 */
                RefundMemberTransactionOutcome RefundMemberTransaction(const Model::RefundMemberTransactionRequest &request);
                void RefundMemberTransactionAsync(const Model::RefundMemberTransactionRequest& request, const RefundMemberTransactionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundMemberTransactionOutcomeCallable RefundMemberTransactionCallable(const Model::RefundMemberTransactionRequest& request);

                /**
                 *云鉴-消费订单退款的接口
                 * @param req RefundOrderRequest
                 * @return RefundOrderOutcome
                 */
                RefundOrderOutcome RefundOrder(const Model::RefundOrderRequest &request);
                void RefundOrderAsync(const Model::RefundOrderRequest& request, const RefundOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundOrderOutcomeCallable RefundOrderCallable(const Model::RefundOrderRequest& request);

                /**
                 *云支付订单退款接口
                 * @param req RefundTlinxOrderRequest
                 * @return RefundTlinxOrderOutcome
                 */
                RefundTlinxOrderOutcome RefundTlinxOrder(const Model::RefundTlinxOrderRequest &request);
                void RefundTlinxOrderAsync(const Model::RefundTlinxOrderRequest& request, const RefundTlinxOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefundTlinxOrderOutcomeCallable RefundTlinxOrderCallable(const Model::RefundTlinxOrderRequest& request);

                /**
                 *商户查询是否签约和签约行为上报
                 * @param req RegisterBehaviorRequest
                 * @return RegisterBehaviorOutcome
                 */
                RegisterBehaviorOutcome RegisterBehavior(const Model::RegisterBehaviorRequest &request);
                void RegisterBehaviorAsync(const Model::RegisterBehaviorRequest& request, const RegisterBehaviorAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterBehaviorOutcomeCallable RegisterBehaviorCallable(const Model::RegisterBehaviorRequest& request);

                /**
                 *登记挂账(支持撤销)
                 * @param req RegisterBillRequest
                 * @return RegisterBillOutcome
                 */
                RegisterBillOutcome RegisterBill(const Model::RegisterBillRequest &request);
                void RegisterBillAsync(const Model::RegisterBillRequest& request, const RegisterBillAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterBillOutcomeCallable RegisterBillCallable(const Model::RegisterBillRequest& request);

                /**
                 *登记挂账(支持撤销)。此接口可实现把不明来账或自有资金等已登记在挂账子账户下的资金调整到普通会员子账户。即通过申请调用此接口，将会减少挂账子账户的资金，调增指定的普通会员子账户的可提现余额及可用余额。此接口不支持把挂账子账户资金清分到功能子账户。
                 * @param req RegisterBillSupportWithdrawRequest
                 * @return RegisterBillSupportWithdrawOutcome
                 */
                RegisterBillSupportWithdrawOutcome RegisterBillSupportWithdraw(const Model::RegisterBillSupportWithdrawRequest &request);
                void RegisterBillSupportWithdrawAsync(const Model::RegisterBillSupportWithdrawRequest& request, const RegisterBillSupportWithdrawAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterBillSupportWithdrawOutcomeCallable RegisterBillSupportWithdrawCallable(const Model::RegisterBillSupportWithdrawRequest& request);

                /**
                 *登记挂账撤销。此接口可以实现把RegisterBillSupportWithdraw接口完成的登记挂账进行撤销，即调减普通会员子账户的可提现和可用余额，调增挂账子账户的可用余额。
                 * @param req RevResigterBillSupportWithdrawRequest
                 * @return RevResigterBillSupportWithdrawOutcome
                 */
                RevResigterBillSupportWithdrawOutcome RevResigterBillSupportWithdraw(const Model::RevResigterBillSupportWithdrawRequest &request);
                void RevResigterBillSupportWithdrawAsync(const Model::RevResigterBillSupportWithdrawRequest& request, const RevResigterBillSupportWithdrawAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevResigterBillSupportWithdrawOutcomeCallable RevResigterBillSupportWithdrawCallable(const Model::RevResigterBillSupportWithdrawRequest& request);

                /**
                 *修改会员属性-普通商户子账户。修改会员的会员属性。
                 * @param req ReviseMbrPropertyRequest
                 * @return ReviseMbrPropertyOutcome
                 */
                ReviseMbrPropertyOutcome ReviseMbrProperty(const Model::ReviseMbrPropertyRequest &request);
                void ReviseMbrPropertyAsync(const Model::ReviseMbrPropertyRequest& request, const ReviseMbrPropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReviseMbrPropertyOutcomeCallable ReviseMbrPropertyCallable(const Model::ReviseMbrPropertyRequest& request);

                /**
                 *撤销会员在途充值(经第三方支付渠道)
                 * @param req RevokeMemberRechargeThirdPayRequest
                 * @return RevokeMemberRechargeThirdPayOutcome
                 */
                RevokeMemberRechargeThirdPayOutcome RevokeMemberRechargeThirdPay(const Model::RevokeMemberRechargeThirdPayRequest &request);
                void RevokeMemberRechargeThirdPayAsync(const Model::RevokeMemberRechargeThirdPayRequest& request, const RevokeMemberRechargeThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeMemberRechargeThirdPayOutcomeCallable RevokeMemberRechargeThirdPayCallable(const Model::RevokeMemberRechargeThirdPayRequest& request);

                /**
                 *撤销会员在途充值(经第三方支付渠道)接口
                 * @param req RevokeRechargeByThirdPayRequest
                 * @return RevokeRechargeByThirdPayOutcome
                 */
                RevokeRechargeByThirdPayOutcome RevokeRechargeByThirdPay(const Model::RevokeRechargeByThirdPayRequest &request);
                void RevokeRechargeByThirdPayAsync(const Model::RevokeRechargeByThirdPayRequest& request, const RevokeRechargeByThirdPayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevokeRechargeByThirdPayOutcomeCallable RevokeRechargeByThirdPayCallable(const Model::RevokeRechargeByThirdPayRequest& request);

                /**
                 *对于存量的签约关系导入或者部分场景下米大师无法收到签约通知的场景，需要由调用方主动将签约状态同步至米大师
                 * @param req SyncContractDataRequest
                 * @return SyncContractDataOutcome
                 */
                SyncContractDataOutcome SyncContractData(const Model::SyncContractDataRequest &request);
                void SyncContractDataAsync(const Model::SyncContractDataRequest& request, const SyncContractDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SyncContractDataOutcomeCallable SyncContractDataCallable(const Model::SyncContractDataRequest& request);

                /**
                 *通过此接口进行解约
                 * @param req TerminateContractRequest
                 * @return TerminateContractOutcome
                 */
                TerminateContractOutcome TerminateContract(const Model::TerminateContractRequest &request);
                void TerminateContractAsync(const Model::TerminateContractRequest& request, const TerminateContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TerminateContractOutcomeCallable TerminateContractCallable(const Model::TerminateContractRequest& request);

                /**
                 *智能代发-单笔代发转账接口
                 * @param req TransferSinglePayRequest
                 * @return TransferSinglePayOutcome
                 */
                TransferSinglePayOutcome TransferSinglePay(const Model::TransferSinglePayRequest &request);
                void TransferSinglePayAsync(const Model::TransferSinglePayRequest& request, const TransferSinglePayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferSinglePayOutcomeCallable TransferSinglePayCallable(const Model::TransferSinglePayRequest& request);

                /**
                 *商户解除绑定的提现银行卡
                 * @param req UnBindAcctRequest
                 * @return UnBindAcctOutcome
                 */
                UnBindAcctOutcome UnBindAcct(const Model::UnBindAcctRequest &request);
                void UnBindAcctAsync(const Model::UnBindAcctRequest& request, const UnBindAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnBindAcctOutcomeCallable UnBindAcctCallable(const Model::UnBindAcctRequest& request);

                /**
                 *会员解绑提现账户。此接口可以支持会员解除名下的绑定账户关系。
                 * @param req UnbindRelateAcctRequest
                 * @return UnbindRelateAcctOutcome
                 */
                UnbindRelateAcctOutcome UnbindRelateAcct(const Model::UnbindRelateAcctRequest &request);
                void UnbindRelateAcctAsync(const Model::UnbindRelateAcctRequest& request, const UnbindRelateAcctAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindRelateAcctOutcomeCallable UnbindRelateAcctCallable(const Model::UnbindRelateAcctRequest& request);

                /**
                 *应用需要先调用本接口生成支付订单号，并将应答的PayInfo透传给聚鑫SDK，拉起客户端（包括微信公众号/微信小程序/客户端App）支付。
                 * @param req UnifiedOrderRequest
                 * @return UnifiedOrderOutcome
                 */
                UnifiedOrderOutcome UnifiedOrder(const Model::UnifiedOrderRequest &request);
                void UnifiedOrderAsync(const Model::UnifiedOrderRequest& request, const UnifiedOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnifiedOrderOutcomeCallable UnifiedOrderCallable(const Model::UnifiedOrderRequest& request);

                /**
                 *云支付-统一下单接口
                 * @param req UnifiedTlinxOrderRequest
                 * @return UnifiedTlinxOrderOutcome
                 */
                UnifiedTlinxOrderOutcome UnifiedTlinxOrder(const Model::UnifiedTlinxOrderRequest &request);
                void UnifiedTlinxOrderAsync(const Model::UnifiedTlinxOrderRequest& request, const UnifiedTlinxOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnifiedTlinxOrderOutcomeCallable UnifiedTlinxOrderCallable(const Model::UnifiedTlinxOrderRequest& request);

                /**
                 *灵云-上传主播信息
                 * @param req UploadExternalAnchorInfoRequest
                 * @return UploadExternalAnchorInfoOutcome
                 */
                UploadExternalAnchorInfoOutcome UploadExternalAnchorInfo(const Model::UploadExternalAnchorInfoRequest &request);
                void UploadExternalAnchorInfoAsync(const Model::UploadExternalAnchorInfoRequest& request, const UploadExternalAnchorInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadExternalAnchorInfoOutcomeCallable UploadExternalAnchorInfoCallable(const Model::UploadExternalAnchorInfoRequest& request);

                /**
                 *直播平台-文件上传
                 * @param req UploadFileRequest
                 * @return UploadFileOutcome
                 */
                UploadFileOutcome UploadFile(const Model::UploadFileRequest &request);
                void UploadFileAsync(const Model::UploadFileRequest& request, const UploadFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFileOutcomeCallable UploadFileCallable(const Model::UploadFileRequest& request);

                /**
                 *云支付-上传机构文件接口
                 * @param req UploadOrgFileRequest
                 * @return UploadOrgFileOutcome
                 */
                UploadOrgFileOutcome UploadOrgFile(const Model::UploadOrgFileRequest &request);
                void UploadOrgFileAsync(const Model::UploadOrgFileRequest& request, const UploadOrgFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadOrgFileOutcomeCallable UploadOrgFileCallable(const Model::UploadOrgFileRequest& request);

                /**
                 *直播平台-上传代理商完税列表
                 * @param req UploadTaxListRequest
                 * @return UploadTaxListOutcome
                 */
                UploadTaxListOutcome UploadTaxList(const Model::UploadTaxListRequest &request);
                void UploadTaxListAsync(const Model::UploadTaxListRequest& request, const UploadTaxListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadTaxListOutcomeCallable UploadTaxListCallable(const Model::UploadTaxListRequest& request);

                /**
                 *直播平台-上传代理商完税证明
                 * @param req UploadTaxPaymentRequest
                 * @return UploadTaxPaymentOutcome
                 */
                UploadTaxPaymentOutcome UploadTaxPayment(const Model::UploadTaxPaymentRequest &request);
                void UploadTaxPaymentAsync(const Model::UploadTaxPaymentRequest& request, const UploadTaxPaymentAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadTaxPaymentOutcomeCallable UploadTaxPaymentCallable(const Model::UploadTaxPaymentRequest& request);

                /**
                 *云支付-查询合同明细接口
                 * @param req ViewContractRequest
                 * @return ViewContractOutcome
                 */
                ViewContractOutcome ViewContract(const Model::ViewContractRequest &request);
                void ViewContractAsync(const Model::ViewContractRequest& request, const ViewContractAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ViewContractOutcomeCallable ViewContractCallable(const Model::ViewContractRequest& request);

                /**
                 *云支付-查询商户明细接口
                 * @param req ViewMerchantRequest
                 * @return ViewMerchantOutcome
                 */
                ViewMerchantOutcome ViewMerchant(const Model::ViewMerchantRequest &request);
                void ViewMerchantAsync(const Model::ViewMerchantRequest& request, const ViewMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ViewMerchantOutcomeCallable ViewMerchantCallable(const Model::ViewMerchantRequest& request);

                /**
                 *云支付-查询门店明细接口
                 * @param req ViewShopRequest
                 * @return ViewShopOutcome
                 */
                ViewShopOutcome ViewShop(const Model::ViewShopRequest &request);
                void ViewShopAsync(const Model::ViewShopRequest& request, const ViewShopAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ViewShopOutcomeCallable ViewShopCallable(const Model::ViewShopRequest& request);

                /**
                 *会员提现-不验证。此接口受理会员发起的提现申请。会员子账户的可提现余额、可用余额会减少，市场的资金汇总账户(监管账户)会减少相应的发生金额，提现到会员申请的收款账户。		
                 * @param req WithdrawCashMembershipRequest
                 * @return WithdrawCashMembershipOutcome
                 */
                WithdrawCashMembershipOutcome WithdrawCashMembership(const Model::WithdrawCashMembershipRequest &request);
                void WithdrawCashMembershipAsync(const Model::WithdrawCashMembershipRequest& request, const WithdrawCashMembershipAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                WithdrawCashMembershipOutcomeCallable WithdrawCashMembershipCallable(const Model::WithdrawCashMembershipRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_CPDPCLIENT_H_
