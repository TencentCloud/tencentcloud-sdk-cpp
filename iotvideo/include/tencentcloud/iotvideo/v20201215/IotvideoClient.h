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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_IOTVIDEOCLIENT_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_IOTVIDEOCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotvideo/v20201215/model/BatchUpdateFirmwareRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/BatchUpdateFirmwareResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CancelDeviceFirmwareTaskRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CancelDeviceFirmwareTaskResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CheckForwardAuthRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CheckForwardAuthResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateBatchRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateBatchResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateCloudStorageRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateCloudStorageResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateTaskFileUrlRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/CreateTaskFileUrlResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteFirmwareRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteFirmwareResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DeleteProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchsRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeBatchsResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCategoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCategoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageDateRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageDateResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageEventsRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageEventsResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageThumbnailRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageThumbnailResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageTimeRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeCloudStorageTimeResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceActionHistoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceActionHistoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceCommLogRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceCommLogResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataHistoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceDataHistoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceEventHistoryRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDeviceEventHistoryResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDevicesRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeDevicesResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskDevicesRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskDevicesResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskDistributionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskDistributionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskStatisticsRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTaskStatisticsResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTasksRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeFirmwareTasksResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeModelDefinitionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeModelDefinitionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductsRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/DescribeProductsResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/EditFirmwareRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/EditFirmwareResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/GetAllFirmwareVersionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/GetAllFirmwareVersionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/GetFirmwareURLRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/GetFirmwareURLResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ImportModelDefinitionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ImportModelDefinitionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ListFirmwaresRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ListFirmwaresResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyDeviceRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyDeviceResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyForwardRuleRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyForwardRuleResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyModelDefinitionRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyModelDefinitionResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyProductRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ModifyProductResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/ResetCloudStorageRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/ResetCloudStorageResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/RetryDeviceFirmwareTaskRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/RetryDeviceFirmwareTaskResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/SetForwardAuthRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/SetForwardAuthResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/TransferCloudStorageRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/TransferCloudStorageResponse.h>
#include <tencentcloud/iotvideo/v20201215/model/UploadFirmwareRequest.h>
#include <tencentcloud/iotvideo/v20201215/model/UploadFirmwareResponse.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            class IotvideoClient : public AbstractClient
            {
            public:
                IotvideoClient(const Credential &credential, const std::string &region);
                IotvideoClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::BatchUpdateFirmwareResponse> BatchUpdateFirmwareOutcome;
                typedef std::future<BatchUpdateFirmwareOutcome> BatchUpdateFirmwareOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::BatchUpdateFirmwareRequest&, BatchUpdateFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateFirmwareAsyncHandler;
                typedef Outcome<Error, Model::CancelDeviceFirmwareTaskResponse> CancelDeviceFirmwareTaskOutcome;
                typedef std::future<CancelDeviceFirmwareTaskOutcome> CancelDeviceFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CancelDeviceFirmwareTaskRequest&, CancelDeviceFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelDeviceFirmwareTaskAsyncHandler;
                typedef Outcome<Error, Model::CheckForwardAuthResponse> CheckForwardAuthOutcome;
                typedef std::future<CheckForwardAuthOutcome> CheckForwardAuthOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CheckForwardAuthRequest&, CheckForwardAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckForwardAuthAsyncHandler;
                typedef Outcome<Error, Model::CreateBatchResponse> CreateBatchOutcome;
                typedef std::future<CreateBatchOutcome> CreateBatchOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateBatchRequest&, CreateBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchAsyncHandler;
                typedef Outcome<Error, Model::CreateCloudStorageResponse> CreateCloudStorageOutcome;
                typedef std::future<CreateCloudStorageOutcome> CreateCloudStorageOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateCloudStorageRequest&, CreateCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudStorageAsyncHandler;
                typedef Outcome<Error, Model::CreateForwardRuleResponse> CreateForwardRuleOutcome;
                typedef std::future<CreateForwardRuleOutcome> CreateForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateForwardRuleRequest&, CreateForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::CreateProductResponse> CreateProductOutcome;
                typedef std::future<CreateProductOutcome> CreateProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateProductRequest&, CreateProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProductAsyncHandler;
                typedef Outcome<Error, Model::CreateTaskFileUrlResponse> CreateTaskFileUrlOutcome;
                typedef std::future<CreateTaskFileUrlOutcome> CreateTaskFileUrlOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::CreateTaskFileUrlRequest&, CreateTaskFileUrlOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTaskFileUrlAsyncHandler;
                typedef Outcome<Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Error, Model::DeleteFirmwareResponse> DeleteFirmwareOutcome;
                typedef std::future<DeleteFirmwareOutcome> DeleteFirmwareOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteFirmwareRequest&, DeleteFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFirmwareAsyncHandler;
                typedef Outcome<Error, Model::DeleteForwardRuleResponse> DeleteForwardRuleOutcome;
                typedef std::future<DeleteForwardRuleOutcome> DeleteForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteForwardRuleRequest&, DeleteForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::DeleteProductResponse> DeleteProductOutcome;
                typedef std::future<DeleteProductOutcome> DeleteProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DeleteProductRequest&, DeleteProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProductAsyncHandler;
                typedef Outcome<Error, Model::DescribeBatchResponse> DescribeBatchOutcome;
                typedef std::future<DescribeBatchOutcome> DescribeBatchOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeBatchRequest&, DescribeBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchAsyncHandler;
                typedef Outcome<Error, Model::DescribeBatchsResponse> DescribeBatchsOutcome;
                typedef std::future<DescribeBatchsOutcome> DescribeBatchsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeBatchsRequest&, DescribeBatchsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCategoryResponse> DescribeCategoryOutcome;
                typedef std::future<DescribeCategoryOutcome> DescribeCategoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeCategoryRequest&, DescribeCategoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCategoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeCloudStorageResponse> DescribeCloudStorageOutcome;
                typedef std::future<DescribeCloudStorageOutcome> DescribeCloudStorageOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeCloudStorageRequest&, DescribeCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageAsyncHandler;
                typedef Outcome<Error, Model::DescribeCloudStorageDateResponse> DescribeCloudStorageDateOutcome;
                typedef std::future<DescribeCloudStorageDateOutcome> DescribeCloudStorageDateOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeCloudStorageDateRequest&, DescribeCloudStorageDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageDateAsyncHandler;
                typedef Outcome<Error, Model::DescribeCloudStorageEventsResponse> DescribeCloudStorageEventsOutcome;
                typedef std::future<DescribeCloudStorageEventsOutcome> DescribeCloudStorageEventsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeCloudStorageEventsRequest&, DescribeCloudStorageEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageEventsAsyncHandler;
                typedef Outcome<Error, Model::DescribeCloudStorageThumbnailResponse> DescribeCloudStorageThumbnailOutcome;
                typedef std::future<DescribeCloudStorageThumbnailOutcome> DescribeCloudStorageThumbnailOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeCloudStorageThumbnailRequest&, DescribeCloudStorageThumbnailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageThumbnailAsyncHandler;
                typedef Outcome<Error, Model::DescribeCloudStorageTimeResponse> DescribeCloudStorageTimeOutcome;
                typedef std::future<DescribeCloudStorageTimeOutcome> DescribeCloudStorageTimeOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeCloudStorageTimeRequest&, DescribeCloudStorageTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageTimeAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceActionHistoryResponse> DescribeDeviceActionHistoryOutcome;
                typedef std::future<DescribeDeviceActionHistoryOutcome> DescribeDeviceActionHistoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceActionHistoryRequest&, DescribeDeviceActionHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceActionHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceCommLogResponse> DescribeDeviceCommLogOutcome;
                typedef std::future<DescribeDeviceCommLogOutcome> DescribeDeviceCommLogOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceCommLogRequest&, DescribeDeviceCommLogOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceCommLogAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceDataResponse> DescribeDeviceDataOutcome;
                typedef std::future<DescribeDeviceDataOutcome> DescribeDeviceDataOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceDataRequest&, DescribeDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceDataHistoryResponse> DescribeDeviceDataHistoryOutcome;
                typedef std::future<DescribeDeviceDataHistoryOutcome> DescribeDeviceDataHistoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceDataHistoryRequest&, DescribeDeviceDataHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDeviceEventHistoryResponse> DescribeDeviceEventHistoryOutcome;
                typedef std::future<DescribeDeviceEventHistoryOutcome> DescribeDeviceEventHistoryOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDeviceEventHistoryRequest&, DescribeDeviceEventHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceEventHistoryAsyncHandler;
                typedef Outcome<Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirmwareResponse> DescribeFirmwareOutcome;
                typedef std::future<DescribeFirmwareOutcome> DescribeFirmwareOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeFirmwareRequest&, DescribeFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirmwareTaskResponse> DescribeFirmwareTaskOutcome;
                typedef std::future<DescribeFirmwareTaskOutcome> DescribeFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeFirmwareTaskRequest&, DescribeFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirmwareTaskDevicesResponse> DescribeFirmwareTaskDevicesOutcome;
                typedef std::future<DescribeFirmwareTaskDevicesOutcome> DescribeFirmwareTaskDevicesOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeFirmwareTaskDevicesRequest&, DescribeFirmwareTaskDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskDevicesAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirmwareTaskDistributionResponse> DescribeFirmwareTaskDistributionOutcome;
                typedef std::future<DescribeFirmwareTaskDistributionOutcome> DescribeFirmwareTaskDistributionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeFirmwareTaskDistributionRequest&, DescribeFirmwareTaskDistributionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskDistributionAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirmwareTaskStatisticsResponse> DescribeFirmwareTaskStatisticsOutcome;
                typedef std::future<DescribeFirmwareTaskStatisticsOutcome> DescribeFirmwareTaskStatisticsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeFirmwareTaskStatisticsRequest&, DescribeFirmwareTaskStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskStatisticsAsyncHandler;
                typedef Outcome<Error, Model::DescribeFirmwareTasksResponse> DescribeFirmwareTasksOutcome;
                typedef std::future<DescribeFirmwareTasksOutcome> DescribeFirmwareTasksOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeFirmwareTasksRequest&, DescribeFirmwareTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTasksAsyncHandler;
                typedef Outcome<Error, Model::DescribeForwardRuleResponse> DescribeForwardRuleOutcome;
                typedef std::future<DescribeForwardRuleOutcome> DescribeForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeForwardRuleRequest&, DescribeForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::DescribeModelDefinitionResponse> DescribeModelDefinitionOutcome;
                typedef std::future<DescribeModelDefinitionOutcome> DescribeModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeModelDefinitionRequest&, DescribeModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductResponse> DescribeProductOutcome;
                typedef std::future<DescribeProductOutcome> DescribeProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeProductRequest&, DescribeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductAsyncHandler;
                typedef Outcome<Error, Model::DescribeProductsResponse> DescribeProductsOutcome;
                typedef std::future<DescribeProductsOutcome> DescribeProductsOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::DescribeProductsRequest&, DescribeProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductsAsyncHandler;
                typedef Outcome<Error, Model::EditFirmwareResponse> EditFirmwareOutcome;
                typedef std::future<EditFirmwareOutcome> EditFirmwareOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::EditFirmwareRequest&, EditFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EditFirmwareAsyncHandler;
                typedef Outcome<Error, Model::GetAllFirmwareVersionResponse> GetAllFirmwareVersionOutcome;
                typedef std::future<GetAllFirmwareVersionOutcome> GetAllFirmwareVersionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::GetAllFirmwareVersionRequest&, GetAllFirmwareVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAllFirmwareVersionAsyncHandler;
                typedef Outcome<Error, Model::GetFirmwareURLResponse> GetFirmwareURLOutcome;
                typedef std::future<GetFirmwareURLOutcome> GetFirmwareURLOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::GetFirmwareURLRequest&, GetFirmwareURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFirmwareURLAsyncHandler;
                typedef Outcome<Error, Model::ImportModelDefinitionResponse> ImportModelDefinitionOutcome;
                typedef std::future<ImportModelDefinitionOutcome> ImportModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ImportModelDefinitionRequest&, ImportModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImportModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::ListFirmwaresResponse> ListFirmwaresOutcome;
                typedef std::future<ListFirmwaresOutcome> ListFirmwaresOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ListFirmwaresRequest&, ListFirmwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFirmwaresAsyncHandler;
                typedef Outcome<Error, Model::ModifyDeviceResponse> ModifyDeviceOutcome;
                typedef std::future<ModifyDeviceOutcome> ModifyDeviceOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyDeviceRequest&, ModifyDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyDeviceAsyncHandler;
                typedef Outcome<Error, Model::ModifyForwardRuleResponse> ModifyForwardRuleOutcome;
                typedef std::future<ModifyForwardRuleOutcome> ModifyForwardRuleOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyForwardRuleRequest&, ModifyForwardRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyForwardRuleAsyncHandler;
                typedef Outcome<Error, Model::ModifyModelDefinitionResponse> ModifyModelDefinitionOutcome;
                typedef std::future<ModifyModelDefinitionOutcome> ModifyModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyModelDefinitionRequest&, ModifyModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelDefinitionAsyncHandler;
                typedef Outcome<Error, Model::ModifyProductResponse> ModifyProductOutcome;
                typedef std::future<ModifyProductOutcome> ModifyProductOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ModifyProductRequest&, ModifyProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProductAsyncHandler;
                typedef Outcome<Error, Model::ResetCloudStorageResponse> ResetCloudStorageOutcome;
                typedef std::future<ResetCloudStorageOutcome> ResetCloudStorageOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::ResetCloudStorageRequest&, ResetCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetCloudStorageAsyncHandler;
                typedef Outcome<Error, Model::RetryDeviceFirmwareTaskResponse> RetryDeviceFirmwareTaskOutcome;
                typedef std::future<RetryDeviceFirmwareTaskOutcome> RetryDeviceFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::RetryDeviceFirmwareTaskRequest&, RetryDeviceFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RetryDeviceFirmwareTaskAsyncHandler;
                typedef Outcome<Error, Model::SetForwardAuthResponse> SetForwardAuthOutcome;
                typedef std::future<SetForwardAuthOutcome> SetForwardAuthOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::SetForwardAuthRequest&, SetForwardAuthOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetForwardAuthAsyncHandler;
                typedef Outcome<Error, Model::TransferCloudStorageResponse> TransferCloudStorageOutcome;
                typedef std::future<TransferCloudStorageOutcome> TransferCloudStorageOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::TransferCloudStorageRequest&, TransferCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferCloudStorageAsyncHandler;
                typedef Outcome<Error, Model::UploadFirmwareResponse> UploadFirmwareOutcome;
                typedef std::future<UploadFirmwareOutcome> UploadFirmwareOutcomeCallable;
                typedef std::function<void(const IotvideoClient*, const Model::UploadFirmwareRequest&, UploadFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFirmwareAsyncHandler;



                /**
                 *本接口（BatchUpdateFirmware）用于批量更新设备固件 
                 * @param req BatchUpdateFirmwareRequest
                 * @return BatchUpdateFirmwareOutcome
                 */
                BatchUpdateFirmwareOutcome BatchUpdateFirmware(const Model::BatchUpdateFirmwareRequest &request);
                void BatchUpdateFirmwareAsync(const Model::BatchUpdateFirmwareRequest& request, const BatchUpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchUpdateFirmwareOutcomeCallable BatchUpdateFirmwareCallable(const Model::BatchUpdateFirmwareRequest& request);

                /**
                 *本接口用于取消设备升级任务
                 * @param req CancelDeviceFirmwareTaskRequest
                 * @return CancelDeviceFirmwareTaskOutcome
                 */
                CancelDeviceFirmwareTaskOutcome CancelDeviceFirmwareTask(const Model::CancelDeviceFirmwareTaskRequest &request);
                void CancelDeviceFirmwareTaskAsync(const Model::CancelDeviceFirmwareTaskRequest& request, const CancelDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelDeviceFirmwareTaskOutcomeCallable CancelDeviceFirmwareTaskCallable(const Model::CancelDeviceFirmwareTaskRequest& request);

                /**
                 *判断是否开启的转发的权限
                 * @param req CheckForwardAuthRequest
                 * @return CheckForwardAuthOutcome
                 */
                CheckForwardAuthOutcome CheckForwardAuth(const Model::CheckForwardAuthRequest &request);
                void CheckForwardAuthAsync(const Model::CheckForwardAuthRequest& request, const CheckForwardAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckForwardAuthOutcomeCallable CheckForwardAuthCallable(const Model::CheckForwardAuthRequest& request);

                /**
                 *创建批次
                 * @param req CreateBatchRequest
                 * @return CreateBatchOutcome
                 */
                CreateBatchOutcome CreateBatch(const Model::CreateBatchRequest &request);
                void CreateBatchAsync(const Model::CreateBatchRequest& request, const CreateBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchOutcomeCallable CreateBatchCallable(const Model::CreateBatchRequest& request);

                /**
                 *开通云存服务
                 * @param req CreateCloudStorageRequest
                 * @return CreateCloudStorageOutcome
                 */
                CreateCloudStorageOutcome CreateCloudStorage(const Model::CreateCloudStorageRequest &request);
                void CreateCloudStorageAsync(const Model::CreateCloudStorageRequest& request, const CreateCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudStorageOutcomeCallable CreateCloudStorageCallable(const Model::CreateCloudStorageRequest& request);

                /**
                 *创建转发规则
                 * @param req CreateForwardRuleRequest
                 * @return CreateForwardRuleOutcome
                 */
                CreateForwardRuleOutcome CreateForwardRule(const Model::CreateForwardRuleRequest &request);
                void CreateForwardRuleAsync(const Model::CreateForwardRuleRequest& request, const CreateForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateForwardRuleOutcomeCallable CreateForwardRuleCallable(const Model::CreateForwardRuleRequest& request);

                /**
                 *创建产品
                 * @param req CreateProductRequest
                 * @return CreateProductOutcome
                 */
                CreateProductOutcome CreateProduct(const Model::CreateProductRequest &request);
                void CreateProductAsync(const Model::CreateProductRequest& request, const CreateProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProductOutcomeCallable CreateProductCallable(const Model::CreateProductRequest& request);

                /**
                 *本接口（CreateTaskFileUrl）用于获取产品级任务文件上传链接
                 * @param req CreateTaskFileUrlRequest
                 * @return CreateTaskFileUrlOutcome
                 */
                CreateTaskFileUrlOutcome CreateTaskFileUrl(const Model::CreateTaskFileUrlRequest &request);
                void CreateTaskFileUrlAsync(const Model::CreateTaskFileUrlRequest& request, const CreateTaskFileUrlAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTaskFileUrlOutcomeCallable CreateTaskFileUrlCallable(const Model::CreateTaskFileUrlRequest& request);

                /**
                 *删除设备
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *本接口（DeleteFirmware）用于删除固件 
                 * @param req DeleteFirmwareRequest
                 * @return DeleteFirmwareOutcome
                 */
                DeleteFirmwareOutcome DeleteFirmware(const Model::DeleteFirmwareRequest &request);
                void DeleteFirmwareAsync(const Model::DeleteFirmwareRequest& request, const DeleteFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFirmwareOutcomeCallable DeleteFirmwareCallable(const Model::DeleteFirmwareRequest& request);

                /**
                 *删除转发规则
                 * @param req DeleteForwardRuleRequest
                 * @return DeleteForwardRuleOutcome
                 */
                DeleteForwardRuleOutcome DeleteForwardRule(const Model::DeleteForwardRuleRequest &request);
                void DeleteForwardRuleAsync(const Model::DeleteForwardRuleRequest& request, const DeleteForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteForwardRuleOutcomeCallable DeleteForwardRuleCallable(const Model::DeleteForwardRuleRequest& request);

                /**
                 *删除产品
                 * @param req DeleteProductRequest
                 * @return DeleteProductOutcome
                 */
                DeleteProductOutcome DeleteProduct(const Model::DeleteProductRequest &request);
                void DeleteProductAsync(const Model::DeleteProductRequest& request, const DeleteProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProductOutcomeCallable DeleteProductCallable(const Model::DeleteProductRequest& request);

                /**
                 *获取批次详情
                 * @param req DescribeBatchRequest
                 * @return DescribeBatchOutcome
                 */
                DescribeBatchOutcome DescribeBatch(const Model::DescribeBatchRequest &request);
                void DescribeBatchAsync(const Model::DescribeBatchRequest& request, const DescribeBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchOutcomeCallable DescribeBatchCallable(const Model::DescribeBatchRequest& request);

                /**
                 *获取批次列表
                 * @param req DescribeBatchsRequest
                 * @return DescribeBatchsOutcome
                 */
                DescribeBatchsOutcome DescribeBatchs(const Model::DescribeBatchsRequest &request);
                void DescribeBatchsAsync(const Model::DescribeBatchsRequest& request, const DescribeBatchsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchsOutcomeCallable DescribeBatchsCallable(const Model::DescribeBatchsRequest& request);

                /**
                 *获取Category详情
                 * @param req DescribeCategoryRequest
                 * @return DescribeCategoryOutcome
                 */
                DescribeCategoryOutcome DescribeCategory(const Model::DescribeCategoryRequest &request);
                void DescribeCategoryAsync(const Model::DescribeCategoryRequest& request, const DescribeCategoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCategoryOutcomeCallable DescribeCategoryCallable(const Model::DescribeCategoryRequest& request);

                /**
                 *获取设备云存服务详情
                 * @param req DescribeCloudStorageRequest
                 * @return DescribeCloudStorageOutcome
                 */
                DescribeCloudStorageOutcome DescribeCloudStorage(const Model::DescribeCloudStorageRequest &request);
                void DescribeCloudStorageAsync(const Model::DescribeCloudStorageRequest& request, const DescribeCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageOutcomeCallable DescribeCloudStorageCallable(const Model::DescribeCloudStorageRequest& request);

                /**
                 *获取具有云存的日期
                 * @param req DescribeCloudStorageDateRequest
                 * @return DescribeCloudStorageDateOutcome
                 */
                DescribeCloudStorageDateOutcome DescribeCloudStorageDate(const Model::DescribeCloudStorageDateRequest &request);
                void DescribeCloudStorageDateAsync(const Model::DescribeCloudStorageDateRequest& request, const DescribeCloudStorageDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageDateOutcomeCallable DescribeCloudStorageDateCallable(const Model::DescribeCloudStorageDateRequest& request);

                /**
                 *拉取云存事件列表
                 * @param req DescribeCloudStorageEventsRequest
                 * @return DescribeCloudStorageEventsOutcome
                 */
                DescribeCloudStorageEventsOutcome DescribeCloudStorageEvents(const Model::DescribeCloudStorageEventsRequest &request);
                void DescribeCloudStorageEventsAsync(const Model::DescribeCloudStorageEventsRequest& request, const DescribeCloudStorageEventsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageEventsOutcomeCallable DescribeCloudStorageEventsCallable(const Model::DescribeCloudStorageEventsRequest& request);

                /**
                 *拉取云存事件缩略图
                 * @param req DescribeCloudStorageThumbnailRequest
                 * @return DescribeCloudStorageThumbnailOutcome
                 */
                DescribeCloudStorageThumbnailOutcome DescribeCloudStorageThumbnail(const Model::DescribeCloudStorageThumbnailRequest &request);
                void DescribeCloudStorageThumbnailAsync(const Model::DescribeCloudStorageThumbnailRequest& request, const DescribeCloudStorageThumbnailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageThumbnailOutcomeCallable DescribeCloudStorageThumbnailCallable(const Model::DescribeCloudStorageThumbnailRequest& request);

                /**
                 *获取某一天云存时间轴
                 * @param req DescribeCloudStorageTimeRequest
                 * @return DescribeCloudStorageTimeOutcome
                 */
                DescribeCloudStorageTimeOutcome DescribeCloudStorageTime(const Model::DescribeCloudStorageTimeRequest &request);
                void DescribeCloudStorageTimeAsync(const Model::DescribeCloudStorageTimeRequest& request, const DescribeCloudStorageTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageTimeOutcomeCallable DescribeCloudStorageTimeCallable(const Model::DescribeCloudStorageTimeRequest& request);

                /**
                 *查看设备详情
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *为用户提供获取动作历史的能力。
                 * @param req DescribeDeviceActionHistoryRequest
                 * @return DescribeDeviceActionHistoryOutcome
                 */
                DescribeDeviceActionHistoryOutcome DescribeDeviceActionHistory(const Model::DescribeDeviceActionHistoryRequest &request);
                void DescribeDeviceActionHistoryAsync(const Model::DescribeDeviceActionHistoryRequest& request, const DescribeDeviceActionHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceActionHistoryOutcomeCallable DescribeDeviceActionHistoryCallable(const Model::DescribeDeviceActionHistoryRequest& request);

                /**
                 *获取设备在指定时间范围内的通讯日志
                 * @param req DescribeDeviceCommLogRequest
                 * @return DescribeDeviceCommLogOutcome
                 */
                DescribeDeviceCommLogOutcome DescribeDeviceCommLog(const Model::DescribeDeviceCommLogRequest &request);
                void DescribeDeviceCommLogAsync(const Model::DescribeDeviceCommLogRequest& request, const DescribeDeviceCommLogAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceCommLogOutcomeCallable DescribeDeviceCommLogCallable(const Model::DescribeDeviceCommLogRequest& request);

                /**
                 *获取设备属性数据
                 * @param req DescribeDeviceDataRequest
                 * @return DescribeDeviceDataOutcome
                 */
                DescribeDeviceDataOutcome DescribeDeviceData(const Model::DescribeDeviceDataRequest &request);
                void DescribeDeviceDataAsync(const Model::DescribeDeviceDataRequest& request, const DescribeDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDataOutcomeCallable DescribeDeviceDataCallable(const Model::DescribeDeviceDataRequest& request);

                /**
                 *获取设备在指定时间范围内上报的历史数据。
                 * @param req DescribeDeviceDataHistoryRequest
                 * @return DescribeDeviceDataHistoryOutcome
                 */
                DescribeDeviceDataHistoryOutcome DescribeDeviceDataHistory(const Model::DescribeDeviceDataHistoryRequest &request);
                void DescribeDeviceDataHistoryAsync(const Model::DescribeDeviceDataHistoryRequest& request, const DescribeDeviceDataHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceDataHistoryOutcomeCallable DescribeDeviceDataHistoryCallable(const Model::DescribeDeviceDataHistoryRequest& request);

                /**
                 *获取设备的历史事件
                 * @param req DescribeDeviceEventHistoryRequest
                 * @return DescribeDeviceEventHistoryOutcome
                 */
                DescribeDeviceEventHistoryOutcome DescribeDeviceEventHistory(const Model::DescribeDeviceEventHistoryRequest &request);
                void DescribeDeviceEventHistoryAsync(const Model::DescribeDeviceEventHistoryRequest& request, const DescribeDeviceEventHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceEventHistoryOutcomeCallable DescribeDeviceEventHistoryCallable(const Model::DescribeDeviceEventHistoryRequest& request);

                /**
                 *获取设备列表
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *本接口（DescribeFirmware）用于查询固件信息
                 * @param req DescribeFirmwareRequest
                 * @return DescribeFirmwareOutcome
                 */
                DescribeFirmwareOutcome DescribeFirmware(const Model::DescribeFirmwareRequest &request);
                void DescribeFirmwareAsync(const Model::DescribeFirmwareRequest& request, const DescribeFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareOutcomeCallable DescribeFirmwareCallable(const Model::DescribeFirmwareRequest& request);

                /**
                 *此接口查询固件升级任务详情
                 * @param req DescribeFirmwareTaskRequest
                 * @return DescribeFirmwareTaskOutcome
                 */
                DescribeFirmwareTaskOutcome DescribeFirmwareTask(const Model::DescribeFirmwareTaskRequest &request);
                void DescribeFirmwareTaskAsync(const Model::DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskOutcomeCallable DescribeFirmwareTaskCallable(const Model::DescribeFirmwareTaskRequest& request);

                /**
                 *本接口用于查询固件升级任务的设备列表
                 * @param req DescribeFirmwareTaskDevicesRequest
                 * @return DescribeFirmwareTaskDevicesOutcome
                 */
                DescribeFirmwareTaskDevicesOutcome DescribeFirmwareTaskDevices(const Model::DescribeFirmwareTaskDevicesRequest &request);
                void DescribeFirmwareTaskDevicesAsync(const Model::DescribeFirmwareTaskDevicesRequest& request, const DescribeFirmwareTaskDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskDevicesOutcomeCallable DescribeFirmwareTaskDevicesCallable(const Model::DescribeFirmwareTaskDevicesRequest& request);

                /**
                 *本接口用于查询固件升级任务状态分布
                 * @param req DescribeFirmwareTaskDistributionRequest
                 * @return DescribeFirmwareTaskDistributionOutcome
                 */
                DescribeFirmwareTaskDistributionOutcome DescribeFirmwareTaskDistribution(const Model::DescribeFirmwareTaskDistributionRequest &request);
                void DescribeFirmwareTaskDistributionAsync(const Model::DescribeFirmwareTaskDistributionRequest& request, const DescribeFirmwareTaskDistributionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskDistributionOutcomeCallable DescribeFirmwareTaskDistributionCallable(const Model::DescribeFirmwareTaskDistributionRequest& request);

                /**
                 *本接口用于查询固件升级任务统计信息
                 * @param req DescribeFirmwareTaskStatisticsRequest
                 * @return DescribeFirmwareTaskStatisticsOutcome
                 */
                DescribeFirmwareTaskStatisticsOutcome DescribeFirmwareTaskStatistics(const Model::DescribeFirmwareTaskStatisticsRequest &request);
                void DescribeFirmwareTaskStatisticsAsync(const Model::DescribeFirmwareTaskStatisticsRequest& request, const DescribeFirmwareTaskStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskStatisticsOutcomeCallable DescribeFirmwareTaskStatisticsCallable(const Model::DescribeFirmwareTaskStatisticsRequest& request);

                /**
                 *本接口用于查询固件升级任务列表
                 * @param req DescribeFirmwareTasksRequest
                 * @return DescribeFirmwareTasksOutcome
                 */
                DescribeFirmwareTasksOutcome DescribeFirmwareTasks(const Model::DescribeFirmwareTasksRequest &request);
                void DescribeFirmwareTasksAsync(const Model::DescribeFirmwareTasksRequest& request, const DescribeFirmwareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTasksOutcomeCallable DescribeFirmwareTasksCallable(const Model::DescribeFirmwareTasksRequest& request);

                /**
                 *获取产品转发规则
                 * @param req DescribeForwardRuleRequest
                 * @return DescribeForwardRuleOutcome
                 */
                DescribeForwardRuleOutcome DescribeForwardRule(const Model::DescribeForwardRuleRequest &request);
                void DescribeForwardRuleAsync(const Model::DescribeForwardRuleRequest& request, const DescribeForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeForwardRuleOutcomeCallable DescribeForwardRuleCallable(const Model::DescribeForwardRuleRequest& request);

                /**
                 *查询产品配置的数据模板信息
                 * @param req DescribeModelDefinitionRequest
                 * @return DescribeModelDefinitionOutcome
                 */
                DescribeModelDefinitionOutcome DescribeModelDefinition(const Model::DescribeModelDefinitionRequest &request);
                void DescribeModelDefinitionAsync(const Model::DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelDefinitionOutcomeCallable DescribeModelDefinitionCallable(const Model::DescribeModelDefinitionRequest& request);

                /**
                 *获取产品详情
                 * @param req DescribeProductRequest
                 * @return DescribeProductOutcome
                 */
                DescribeProductOutcome DescribeProduct(const Model::DescribeProductRequest &request);
                void DescribeProductAsync(const Model::DescribeProductRequest& request, const DescribeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductOutcomeCallable DescribeProductCallable(const Model::DescribeProductRequest& request);

                /**
                 *获取产品列表
                 * @param req DescribeProductsRequest
                 * @return DescribeProductsOutcome
                 */
                DescribeProductsOutcome DescribeProducts(const Model::DescribeProductsRequest &request);
                void DescribeProductsAsync(const Model::DescribeProductsRequest& request, const DescribeProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductsOutcomeCallable DescribeProductsCallable(const Model::DescribeProductsRequest& request);

                /**
                 *本接口用于编辑固件信息
                 * @param req EditFirmwareRequest
                 * @return EditFirmwareOutcome
                 */
                EditFirmwareOutcome EditFirmware(const Model::EditFirmwareRequest &request);
                void EditFirmwareAsync(const Model::EditFirmwareRequest& request, const EditFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EditFirmwareOutcomeCallable EditFirmwareCallable(const Model::EditFirmwareRequest& request);

                /**
                 *本接口（GetAllFirmwareVersion）用于获取所有的版本列表 
                 * @param req GetAllFirmwareVersionRequest
                 * @return GetAllFirmwareVersionOutcome
                 */
                GetAllFirmwareVersionOutcome GetAllFirmwareVersion(const Model::GetAllFirmwareVersionRequest &request);
                void GetAllFirmwareVersionAsync(const Model::GetAllFirmwareVersionRequest& request, const GetAllFirmwareVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAllFirmwareVersionOutcomeCallable GetAllFirmwareVersionCallable(const Model::GetAllFirmwareVersionRequest& request);

                /**
                 *本接口（GetFirmwareURL）用于获取固件存储的URL 
                 * @param req GetFirmwareURLRequest
                 * @return GetFirmwareURLOutcome
                 */
                GetFirmwareURLOutcome GetFirmwareURL(const Model::GetFirmwareURLRequest &request);
                void GetFirmwareURLAsync(const Model::GetFirmwareURLRequest& request, const GetFirmwareURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFirmwareURLOutcomeCallable GetFirmwareURLCallable(const Model::GetFirmwareURLRequest& request);

                /**
                 *导入其它产品的数据模板，覆盖现有数据模板的物模型和产品分类信息
                 * @param req ImportModelDefinitionRequest
                 * @return ImportModelDefinitionOutcome
                 */
                ImportModelDefinitionOutcome ImportModelDefinition(const Model::ImportModelDefinitionRequest &request);
                void ImportModelDefinitionAsync(const Model::ImportModelDefinitionRequest& request, const ImportModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImportModelDefinitionOutcomeCallable ImportModelDefinitionCallable(const Model::ImportModelDefinitionRequest& request);

                /**
                 *本接口（ListFirmwares）用于获取固件列表 
                 * @param req ListFirmwaresRequest
                 * @return ListFirmwaresOutcome
                 */
                ListFirmwaresOutcome ListFirmwares(const Model::ListFirmwaresRequest &request);
                void ListFirmwaresAsync(const Model::ListFirmwaresRequest& request, const ListFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFirmwaresOutcomeCallable ListFirmwaresCallable(const Model::ListFirmwaresRequest& request);

                /**
                 *修改设备信息
                 * @param req ModifyDeviceRequest
                 * @return ModifyDeviceOutcome
                 */
                ModifyDeviceOutcome ModifyDevice(const Model::ModifyDeviceRequest &request);
                void ModifyDeviceAsync(const Model::ModifyDeviceRequest& request, const ModifyDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyDeviceOutcomeCallable ModifyDeviceCallable(const Model::ModifyDeviceRequest& request);

                /**
                 *修改转发规则
                 * @param req ModifyForwardRuleRequest
                 * @return ModifyForwardRuleOutcome
                 */
                ModifyForwardRuleOutcome ModifyForwardRule(const Model::ModifyForwardRuleRequest &request);
                void ModifyForwardRuleAsync(const Model::ModifyForwardRuleRequest& request, const ModifyForwardRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyForwardRuleOutcomeCallable ModifyForwardRuleCallable(const Model::ModifyForwardRuleRequest& request);

                /**
                 *提供修改产品的数据模板的能力
                 * @param req ModifyModelDefinitionRequest
                 * @return ModifyModelDefinitionOutcome
                 */
                ModifyModelDefinitionOutcome ModifyModelDefinition(const Model::ModifyModelDefinitionRequest &request);
                void ModifyModelDefinitionAsync(const Model::ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelDefinitionOutcomeCallable ModifyModelDefinitionCallable(const Model::ModifyModelDefinitionRequest& request);

                /**
                 *修改产品信息
                 * @param req ModifyProductRequest
                 * @return ModifyProductOutcome
                 */
                ModifyProductOutcome ModifyProduct(const Model::ModifyProductRequest &request);
                void ModifyProductAsync(const Model::ModifyProductRequest& request, const ModifyProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProductOutcomeCallable ModifyProductCallable(const Model::ModifyProductRequest& request);

                /**
                 *重置云存服务
                 * @param req ResetCloudStorageRequest
                 * @return ResetCloudStorageOutcome
                 */
                ResetCloudStorageOutcome ResetCloudStorage(const Model::ResetCloudStorageRequest &request);
                void ResetCloudStorageAsync(const Model::ResetCloudStorageRequest& request, const ResetCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetCloudStorageOutcomeCallable ResetCloudStorageCallable(const Model::ResetCloudStorageRequest& request);

                /**
                 *本接口用于重试设备升级任务
                 * @param req RetryDeviceFirmwareTaskRequest
                 * @return RetryDeviceFirmwareTaskOutcome
                 */
                RetryDeviceFirmwareTaskOutcome RetryDeviceFirmwareTask(const Model::RetryDeviceFirmwareTaskRequest &request);
                void RetryDeviceFirmwareTaskAsync(const Model::RetryDeviceFirmwareTaskRequest& request, const RetryDeviceFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RetryDeviceFirmwareTaskOutcomeCallable RetryDeviceFirmwareTaskCallable(const Model::RetryDeviceFirmwareTaskRequest& request);

                /**
                 *设置转发权限
                 * @param req SetForwardAuthRequest
                 * @return SetForwardAuthOutcome
                 */
                SetForwardAuthOutcome SetForwardAuth(const Model::SetForwardAuthRequest &request);
                void SetForwardAuthAsync(const Model::SetForwardAuthRequest& request, const SetForwardAuthAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetForwardAuthOutcomeCallable SetForwardAuthCallable(const Model::SetForwardAuthRequest& request);

                /**
                 *转移云存服务
                 * @param req TransferCloudStorageRequest
                 * @return TransferCloudStorageOutcome
                 */
                TransferCloudStorageOutcome TransferCloudStorage(const Model::TransferCloudStorageRequest &request);
                void TransferCloudStorageAsync(const Model::TransferCloudStorageRequest& request, const TransferCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferCloudStorageOutcomeCallable TransferCloudStorageCallable(const Model::TransferCloudStorageRequest& request);

                /**
                 *本接口（UploadFirmware）用于上传设备固件信息 
                 * @param req UploadFirmwareRequest
                 * @return UploadFirmwareOutcome
                 */
                UploadFirmwareOutcome UploadFirmware(const Model::UploadFirmwareRequest &request);
                void UploadFirmwareAsync(const Model::UploadFirmwareRequest& request, const UploadFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadFirmwareOutcomeCallable UploadFirmwareCallable(const Model::UploadFirmwareRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_IOTVIDEOCLIENT_H_
