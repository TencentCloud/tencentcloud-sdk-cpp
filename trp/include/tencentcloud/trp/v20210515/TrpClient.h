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

#ifndef TENCENTCLOUD_TRP_V20210515_TRPCLIENT_H_
#define TENCENTCLOUD_TRP_V20210515_TRPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/trp/v20210515/model/CreateCodeBatchRequest.h>
#include <tencentcloud/trp/v20210515/model/CreateCodeBatchResponse.h>
#include <tencentcloud/trp/v20210515/model/CreateCodePackRequest.h>
#include <tencentcloud/trp/v20210515/model/CreateCodePackResponse.h>
#include <tencentcloud/trp/v20210515/model/CreateMerchantRequest.h>
#include <tencentcloud/trp/v20210515/model/CreateMerchantResponse.h>
#include <tencentcloud/trp/v20210515/model/CreateProductRequest.h>
#include <tencentcloud/trp/v20210515/model/CreateProductResponse.h>
#include <tencentcloud/trp/v20210515/model/CreateTraceChainRequest.h>
#include <tencentcloud/trp/v20210515/model/CreateTraceChainResponse.h>
#include <tencentcloud/trp/v20210515/model/CreateTraceCodesRequest.h>
#include <tencentcloud/trp/v20210515/model/CreateTraceCodesResponse.h>
#include <tencentcloud/trp/v20210515/model/CreateTraceDataRequest.h>
#include <tencentcloud/trp/v20210515/model/CreateTraceDataResponse.h>
#include <tencentcloud/trp/v20210515/model/DeleteCodeBatchRequest.h>
#include <tencentcloud/trp/v20210515/model/DeleteCodeBatchResponse.h>
#include <tencentcloud/trp/v20210515/model/DeleteMerchantRequest.h>
#include <tencentcloud/trp/v20210515/model/DeleteMerchantResponse.h>
#include <tencentcloud/trp/v20210515/model/DeleteProductRequest.h>
#include <tencentcloud/trp/v20210515/model/DeleteProductResponse.h>
#include <tencentcloud/trp/v20210515/model/DeleteTraceDataRequest.h>
#include <tencentcloud/trp/v20210515/model/DeleteTraceDataResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodeBatchByIdRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodeBatchByIdResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodeBatchsRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodeBatchsResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodePacksRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodePacksResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodesByPackRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeCodesByPackResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeMerchantByIdRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeMerchantByIdResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeMerchantsRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeMerchantsResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeProductByIdRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeProductByIdResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeProductsRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeProductsResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeTraceCodeByIdRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeTraceCodeByIdResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeTraceCodesRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeTraceCodesResponse.h>
#include <tencentcloud/trp/v20210515/model/DescribeTraceDataListRequest.h>
#include <tencentcloud/trp/v20210515/model/DescribeTraceDataListResponse.h>
#include <tencentcloud/trp/v20210515/model/ModifyCodeBatchRequest.h>
#include <tencentcloud/trp/v20210515/model/ModifyCodeBatchResponse.h>
#include <tencentcloud/trp/v20210515/model/ModifyMerchantRequest.h>
#include <tencentcloud/trp/v20210515/model/ModifyMerchantResponse.h>
#include <tencentcloud/trp/v20210515/model/ModifyProductRequest.h>
#include <tencentcloud/trp/v20210515/model/ModifyProductResponse.h>
#include <tencentcloud/trp/v20210515/model/ModifyTraceCodeRequest.h>
#include <tencentcloud/trp/v20210515/model/ModifyTraceCodeResponse.h>
#include <tencentcloud/trp/v20210515/model/ModifyTraceDataRequest.h>
#include <tencentcloud/trp/v20210515/model/ModifyTraceDataResponse.h>
#include <tencentcloud/trp/v20210515/model/ModifyTraceDataRanksRequest.h>
#include <tencentcloud/trp/v20210515/model/ModifyTraceDataRanksResponse.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            class TrpClient : public AbstractClient
            {
            public:
                TrpClient(const Credential &credential, const std::string &region);
                TrpClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCodeBatchResponse> CreateCodeBatchOutcome;
                typedef std::future<CreateCodeBatchOutcome> CreateCodeBatchOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::CreateCodeBatchRequest&, CreateCodeBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCodeBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCodePackResponse> CreateCodePackOutcome;
                typedef std::future<CreateCodePackOutcome> CreateCodePackOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::CreateCodePackRequest&, CreateCodePackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCodePackAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateMerchantResponse> CreateMerchantOutcome;
                typedef std::future<CreateMerchantOutcome> CreateMerchantOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::CreateMerchantRequest&, CreateMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProductResponse> CreateProductOutcome;
                typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::CreateProductRequest&, CreateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTraceChainResponse> CreateTraceChainOutcome;
                typedef std::future<CreateTraceChainOutcome> CreateTraceChainOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::CreateTraceChainRequest&, CreateTraceChainOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTraceChainAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTraceCodesResponse> CreateTraceCodesOutcome;
                typedef std::future<CreateTraceCodesOutcome> CreateTraceCodesOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::CreateTraceCodesRequest&, CreateTraceCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTraceCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTraceDataResponse> CreateTraceDataOutcome;
                typedef std::future<CreateTraceDataOutcome> CreateTraceDataOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::CreateTraceDataRequest&, CreateTraceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTraceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCodeBatchResponse> DeleteCodeBatchOutcome;
                typedef std::future<DeleteCodeBatchOutcome> DeleteCodeBatchOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DeleteCodeBatchRequest&, DeleteCodeBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCodeBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteMerchantResponse> DeleteMerchantOutcome;
                typedef std::future<DeleteMerchantOutcome> DeleteMerchantOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DeleteMerchantRequest&, DeleteMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTraceDataResponse> DeleteTraceDataOutcome;
                typedef std::future<DeleteTraceDataOutcome> DeleteTraceDataOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DeleteTraceDataRequest&, DeleteTraceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTraceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeBatchByIdResponse> DescribeCodeBatchByIdOutcome;
                typedef std::future<DescribeCodeBatchByIdOutcome> DescribeCodeBatchByIdOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeCodeBatchByIdRequest&, DescribeCodeBatchByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeBatchByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodeBatchsResponse> DescribeCodeBatchsOutcome;
                typedef std::future<DescribeCodeBatchsOutcome> DescribeCodeBatchsOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeCodeBatchsRequest&, DescribeCodeBatchsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodeBatchsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodePacksResponse> DescribeCodePacksOutcome;
                typedef std::future<DescribeCodePacksOutcome> DescribeCodePacksOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeCodePacksRequest&, DescribeCodePacksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodePacksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCodesByPackResponse> DescribeCodesByPackOutcome;
                typedef std::future<DescribeCodesByPackOutcome> DescribeCodesByPackOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeCodesByPackRequest&, DescribeCodesByPackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCodesByPackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMerchantByIdResponse> DescribeMerchantByIdOutcome;
                typedef std::future<DescribeMerchantByIdOutcome> DescribeMerchantByIdOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeMerchantByIdRequest&, DescribeMerchantByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMerchantByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeMerchantsResponse> DescribeMerchantsOutcome;
                typedef std::future<DescribeMerchantsOutcome> DescribeMerchantsOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeMerchantsRequest&, DescribeMerchantsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeMerchantsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductByIdResponse> DescribeProductByIdOutcome;
                typedef std::future<DescribeProductByIdOutcome> DescribeProductByIdOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeProductByIdRequest&, DescribeProductByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductsResponse> DescribeProductsOutcome;
                typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeProductsRequest&, DescribeProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTraceCodeByIdResponse> DescribeTraceCodeByIdOutcome;
                typedef std::future<DescribeTraceCodeByIdOutcome> DescribeTraceCodeByIdOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeTraceCodeByIdRequest&, DescribeTraceCodeByIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceCodeByIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTraceCodesResponse> DescribeTraceCodesOutcome;
                typedef std::future<DescribeTraceCodesOutcome> DescribeTraceCodesOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeTraceCodesRequest&, DescribeTraceCodesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceCodesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTraceDataListResponse> DescribeTraceDataListOutcome;
                typedef std::future<DescribeTraceDataListOutcome> DescribeTraceDataListOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::DescribeTraceDataListRequest&, DescribeTraceDataListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTraceDataListAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCodeBatchResponse> ModifyCodeBatchOutcome;
                typedef std::future<ModifyCodeBatchOutcome> ModifyCodeBatchOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::ModifyCodeBatchRequest&, ModifyCodeBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCodeBatchAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyMerchantResponse> ModifyMerchantOutcome;
                typedef std::future<ModifyMerchantOutcome> ModifyMerchantOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::ModifyMerchantRequest&, ModifyMerchantOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyMerchantAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProductResponse> ModifyProductOutcome;
                typedef std::future<ModifyProductOutcome> ModifyProductOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::ModifyProductRequest&, ModifyProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProductAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTraceCodeResponse> ModifyTraceCodeOutcome;
                typedef std::future<ModifyTraceCodeOutcome> ModifyTraceCodeOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::ModifyTraceCodeRequest&, ModifyTraceCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTraceCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTraceDataResponse> ModifyTraceDataOutcome;
                typedef std::future<ModifyTraceDataOutcome> ModifyTraceDataOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::ModifyTraceDataRequest&, ModifyTraceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTraceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTraceDataRanksResponse> ModifyTraceDataRanksOutcome;
                typedef std::future<ModifyTraceDataRanksOutcome> ModifyTraceDataRanksOutcomeCallable;
                typedef std::function<void(const TrpClient*, const Model::ModifyTraceDataRanksRequest&, ModifyTraceDataRanksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTraceDataRanksAsyncHandler;



                /**
                 *新增批次
                 * @param req CreateCodeBatchRequest
                 * @return CreateCodeBatchOutcome
                 */
                CreateCodeBatchOutcome CreateCodeBatch(const Model::CreateCodeBatchRequest &request);
                void CreateCodeBatchAsync(const Model::CreateCodeBatchRequest& request, const CreateCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCodeBatchOutcomeCallable CreateCodeBatchCallable(const Model::CreateCodeBatchRequest& request);

                /**
                 *生成码包
                 * @param req CreateCodePackRequest
                 * @return CreateCodePackOutcome
                 */
                CreateCodePackOutcome CreateCodePack(const Model::CreateCodePackRequest &request);
                void CreateCodePackAsync(const Model::CreateCodePackRequest& request, const CreateCodePackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCodePackOutcomeCallable CreateCodePackCallable(const Model::CreateCodePackRequest& request);

                /**
                 *新建商户
                 * @param req CreateMerchantRequest
                 * @return CreateMerchantOutcome
                 */
                CreateMerchantOutcome CreateMerchant(const Model::CreateMerchantRequest &request);
                void CreateMerchantAsync(const Model::CreateMerchantRequest& request, const CreateMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateMerchantOutcomeCallable CreateMerchantCallable(const Model::CreateMerchantRequest& request);

                /**
                 *新建商品
                 * @param req CreateProductRequest
                 * @return CreateProductOutcome
                 */
                CreateProductOutcome CreateProduct(const Model::CreateProductRequest &request);
                void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request);

                /**
                 *上链溯源信息
                 * @param req CreateTraceChainRequest
                 * @return CreateTraceChainOutcome
                 */
                CreateTraceChainOutcome CreateTraceChain(const Model::CreateTraceChainRequest &request);
                void CreateTraceChainAsync(const Model::CreateTraceChainRequest& request, const CreateTraceChainAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTraceChainOutcomeCallable CreateTraceChainCallable(const Model::CreateTraceChainRequest& request);

                /**
                 *批量导入二维码，只支持平台发的码
                 * @param req CreateTraceCodesRequest
                 * @return CreateTraceCodesOutcome
                 */
                CreateTraceCodesOutcome CreateTraceCodes(const Model::CreateTraceCodesRequest &request);
                void CreateTraceCodesAsync(const Model::CreateTraceCodesRequest& request, const CreateTraceCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTraceCodesOutcomeCallable CreateTraceCodesCallable(const Model::CreateTraceCodesRequest& request);

                /**
                 *新增溯源信息
                 * @param req CreateTraceDataRequest
                 * @return CreateTraceDataOutcome
                 */
                CreateTraceDataOutcome CreateTraceData(const Model::CreateTraceDataRequest &request);
                void CreateTraceDataAsync(const Model::CreateTraceDataRequest& request, const CreateTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTraceDataOutcomeCallable CreateTraceDataCallable(const Model::CreateTraceDataRequest& request);

                /**
                 *删除批次
                 * @param req DeleteCodeBatchRequest
                 * @return DeleteCodeBatchOutcome
                 */
                DeleteCodeBatchOutcome DeleteCodeBatch(const Model::DeleteCodeBatchRequest &request);
                void DeleteCodeBatchAsync(const Model::DeleteCodeBatchRequest& request, const DeleteCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCodeBatchOutcomeCallable DeleteCodeBatchCallable(const Model::DeleteCodeBatchRequest& request);

                /**
                 *删除商户
                 * @param req DeleteMerchantRequest
                 * @return DeleteMerchantOutcome
                 */
                DeleteMerchantOutcome DeleteMerchant(const Model::DeleteMerchantRequest &request);
                void DeleteMerchantAsync(const Model::DeleteMerchantRequest& request, const DeleteMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteMerchantOutcomeCallable DeleteMerchantCallable(const Model::DeleteMerchantRequest& request);

                /**
                 *删除商品，如果商品被使用，则不可删除
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *删除溯源信息，如果已经上链则不可删除
                 * @param req DeleteTraceDataRequest
                 * @return DeleteTraceDataOutcome
                 */
                DeleteTraceDataOutcome DeleteTraceData(const Model::DeleteTraceDataRequest &request);
                void DeleteTraceDataAsync(const Model::DeleteTraceDataRequest& request, const DeleteTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTraceDataOutcomeCallable DeleteTraceDataCallable(const Model::DeleteTraceDataRequest& request);

                /**
                 *查询批次信息
                 * @param req DescribeCodeBatchByIdRequest
                 * @return DescribeCodeBatchByIdOutcome
                 */
                DescribeCodeBatchByIdOutcome DescribeCodeBatchById(const Model::DescribeCodeBatchByIdRequest &request);
                void DescribeCodeBatchByIdAsync(const Model::DescribeCodeBatchByIdRequest& request, const DescribeCodeBatchByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeBatchByIdOutcomeCallable DescribeCodeBatchByIdCallable(const Model::DescribeCodeBatchByIdRequest& request);

                /**
                 *查询批次列表
                 * @param req DescribeCodeBatchsRequest
                 * @return DescribeCodeBatchsOutcome
                 */
                DescribeCodeBatchsOutcome DescribeCodeBatchs(const Model::DescribeCodeBatchsRequest &request);
                void DescribeCodeBatchsAsync(const Model::DescribeCodeBatchsRequest& request, const DescribeCodeBatchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodeBatchsOutcomeCallable DescribeCodeBatchsCallable(const Model::DescribeCodeBatchsRequest& request);

                /**
                 *查询码包列表
                 * @param req DescribeCodePacksRequest
                 * @return DescribeCodePacksOutcome
                 */
                DescribeCodePacksOutcome DescribeCodePacks(const Model::DescribeCodePacksRequest &request);
                void DescribeCodePacksAsync(const Model::DescribeCodePacksRequest& request, const DescribeCodePacksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodePacksOutcomeCallable DescribeCodePacksCallable(const Model::DescribeCodePacksRequest& request);

                /**
                 *查询码包的二维码列表，上限 3 万
                 * @param req DescribeCodesByPackRequest
                 * @return DescribeCodesByPackOutcome
                 */
                DescribeCodesByPackOutcome DescribeCodesByPack(const Model::DescribeCodesByPackRequest &request);
                void DescribeCodesByPackAsync(const Model::DescribeCodesByPackRequest& request, const DescribeCodesByPackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCodesByPackOutcomeCallable DescribeCodesByPackCallable(const Model::DescribeCodesByPackRequest& request);

                /**
                 *查询商户信息
                 * @param req DescribeMerchantByIdRequest
                 * @return DescribeMerchantByIdOutcome
                 */
                DescribeMerchantByIdOutcome DescribeMerchantById(const Model::DescribeMerchantByIdRequest &request);
                void DescribeMerchantByIdAsync(const Model::DescribeMerchantByIdRequest& request, const DescribeMerchantByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMerchantByIdOutcomeCallable DescribeMerchantByIdCallable(const Model::DescribeMerchantByIdRequest& request);

                /**
                 *查询商户列表
                 * @param req DescribeMerchantsRequest
                 * @return DescribeMerchantsOutcome
                 */
                DescribeMerchantsOutcome DescribeMerchants(const Model::DescribeMerchantsRequest &request);
                void DescribeMerchantsAsync(const Model::DescribeMerchantsRequest& request, const DescribeMerchantsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeMerchantsOutcomeCallable DescribeMerchantsCallable(const Model::DescribeMerchantsRequest& request);

                /**
                 *查询商品信息
                 * @param req DescribeProductByIdRequest
                 * @return DescribeProductByIdOutcome
                 */
                DescribeProductByIdOutcome DescribeProductById(const Model::DescribeProductByIdRequest &request);
                void DescribeProductByIdAsync(const Model::DescribeProductByIdRequest& request, const DescribeProductByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductByIdOutcomeCallable DescribeProductByIdCallable(const Model::DescribeProductByIdRequest& request);

                /**
                 *查询商品列表
                 * @param req DescribeProductsRequest
                 * @return DescribeProductsOutcome
                 */
                DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest &request);
                void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request);

                /**
                 *查询二维码信息
                 * @param req DescribeTraceCodeByIdRequest
                 * @return DescribeTraceCodeByIdOutcome
                 */
                DescribeTraceCodeByIdOutcome DescribeTraceCodeById(const Model::DescribeTraceCodeByIdRequest &request);
                void DescribeTraceCodeByIdAsync(const Model::DescribeTraceCodeByIdRequest& request, const DescribeTraceCodeByIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTraceCodeByIdOutcomeCallable DescribeTraceCodeByIdCallable(const Model::DescribeTraceCodeByIdRequest& request);

                /**
                 *查询二维码列表
                 * @param req DescribeTraceCodesRequest
                 * @return DescribeTraceCodesOutcome
                 */
                DescribeTraceCodesOutcome DescribeTraceCodes(const Model::DescribeTraceCodesRequest &request);
                void DescribeTraceCodesAsync(const Model::DescribeTraceCodesRequest& request, const DescribeTraceCodesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTraceCodesOutcomeCallable DescribeTraceCodesCallable(const Model::DescribeTraceCodesRequest& request);

                /**
                 *查询溯源信息，通常溯源信息跟生产批次绑定，即一个批次的所有溯源信息都是一样的
                 * @param req DescribeTraceDataListRequest
                 * @return DescribeTraceDataListOutcome
                 */
                DescribeTraceDataListOutcome DescribeTraceDataList(const Model::DescribeTraceDataListRequest &request);
                void DescribeTraceDataListAsync(const Model::DescribeTraceDataListRequest& request, const DescribeTraceDataListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTraceDataListOutcomeCallable DescribeTraceDataListCallable(const Model::DescribeTraceDataListRequest& request);

                /**
                 *修改批次
                 * @param req ModifyCodeBatchRequest
                 * @return ModifyCodeBatchOutcome
                 */
                ModifyCodeBatchOutcome ModifyCodeBatch(const Model::ModifyCodeBatchRequest &request);
                void ModifyCodeBatchAsync(const Model::ModifyCodeBatchRequest& request, const ModifyCodeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCodeBatchOutcomeCallable ModifyCodeBatchCallable(const Model::ModifyCodeBatchRequest& request);

                /**
                 *编辑商户
                 * @param req ModifyMerchantRequest
                 * @return ModifyMerchantOutcome
                 */
                ModifyMerchantOutcome ModifyMerchant(const Model::ModifyMerchantRequest &request);
                void ModifyMerchantAsync(const Model::ModifyMerchantRequest& request, const ModifyMerchantAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyMerchantOutcomeCallable ModifyMerchantCallable(const Model::ModifyMerchantRequest& request);

                /**
                 *编辑商品
                 * @param req ModifyProductRequest
                 * @return ModifyProductOutcome
                 */
                ModifyProductOutcome ModifyProduct(const Model::ModifyProductRequest &request);
                void ModifyProductAsync(const Model::ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProductOutcomeCallable ModifyProductCallable(const Model::ModifyProductRequest& request);

                /**
                 *冻结或者激活二维码，所属的批次的冻结状态优先级大于单个二维码的状态，即如果批次是冻结的，那么该批次下二维码的状态都是冻结的
                 * @param req ModifyTraceCodeRequest
                 * @return ModifyTraceCodeOutcome
                 */
                ModifyTraceCodeOutcome ModifyTraceCode(const Model::ModifyTraceCodeRequest &request);
                void ModifyTraceCodeAsync(const Model::ModifyTraceCodeRequest& request, const ModifyTraceCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTraceCodeOutcomeCallable ModifyTraceCodeCallable(const Model::ModifyTraceCodeRequest& request);

                /**
                 *修改溯源信息
                 * @param req ModifyTraceDataRequest
                 * @return ModifyTraceDataOutcome
                 */
                ModifyTraceDataOutcome ModifyTraceData(const Model::ModifyTraceDataRequest &request);
                void ModifyTraceDataAsync(const Model::ModifyTraceDataRequest& request, const ModifyTraceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTraceDataOutcomeCallable ModifyTraceDataCallable(const Model::ModifyTraceDataRequest& request);

                /**
                 *修改溯源信息的排序
                 * @param req ModifyTraceDataRanksRequest
                 * @return ModifyTraceDataRanksOutcome
                 */
                ModifyTraceDataRanksOutcome ModifyTraceDataRanks(const Model::ModifyTraceDataRanksRequest &request);
                void ModifyTraceDataRanksAsync(const Model::ModifyTraceDataRanksRequest& request, const ModifyTraceDataRanksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTraceDataRanksOutcomeCallable ModifyTraceDataRanksCallable(const Model::ModifyTraceDataRanksRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_TRPCLIENT_H_
