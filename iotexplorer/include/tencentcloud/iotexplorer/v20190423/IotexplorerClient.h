/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_IOTEXPLORERCLIENT_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_IOTEXPLORERCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iotexplorer/v20190423/model/ActivateTWeCallLicenseRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ActivateTWeCallLicenseResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchCreateTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchCreateTWeSeeRecognitionTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchInvokeTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchInvokeTWeSeeRecognitionTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchUpdateFirmwareRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BatchUpdateFirmwareResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindCloudStorageUserRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindCloudStorageUserResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindTWeTalkAIBotRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/BindTWeTalkAIBotResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionAsyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CallDeviceActionSyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ChangeP2PRouteRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ChangeP2PRouteResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CheckFirmwareUpdateRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CheckFirmwareUpdateResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ControlDeviceDataResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateAISearchTaskAsyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateAISearchTaskAsyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateBatchProductionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateBatchProductionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateCloudStorageAIServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateCloudStorageAIServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateCloudStorageAIServiceTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateCloudStorageAIServiceTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceChannelRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceChannelResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceSDPAnswerRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateDeviceSDPAnswerResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateExternalSourceAIServiceTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateExternalSourceAIServiceTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateFenceBindRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateFenceBindResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateFreeCloudStorageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateFreeCloudStorageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateIotVideoCloudStorageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateIotVideoCloudStorageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateOtaModuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateOtaModuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionFenceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionFenceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreatePositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTRTCSignaturesWithRoomIdRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTRTCSignaturesWithRoomIdResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeRecognitionTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeRecognitionTaskWithFileRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeRecognitionTaskWithFileResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeSeeServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkAIBotRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkAIBotResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkProductConfigRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkProductConfigResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkProductConfigV2Request.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTWeTalkProductConfigV2Response.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/CreateTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteCloudStorageEventRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteCloudStorageEventResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteFenceBindRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteFenceBindResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteOtaModuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteOtaModuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionFenceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionFenceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeletePositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTWeTalkAIBotRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTWeTalkAIBotResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTWeTalkProductConfigV2Request.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTWeTalkProductConfigV2Response.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeleteTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeAISearchTaskAsyncRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeAISearchTaskAsyncResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeActivateDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeActivateDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeActivateLicenseServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeActivateLicenseServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBatchProductionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBatchProductionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBindedProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeBindedProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceCallbackRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceCallbackResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceTasksRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageAIServiceTasksResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageDateRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageDateResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageEventsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageEventsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageEventsWithAITasksRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageEventsWithAITasksResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageMultiThumbnailRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageMultiThumbnailResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageOrderRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageOrderResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStoragePackageConsumeDetailsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStoragePackageConsumeDetailsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStoragePackageConsumeStatsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStoragePackageConsumeStatsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageStreamDataRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageStreamDataResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageThumbnailRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageThumbnailResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageThumbnailListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageThumbnailListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageTimeRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageTimeResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageUsersRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCloudStorageUsersResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCsReportCountDataInfoRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeCsReportCountDataInfoResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceBindGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceBindGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceDataHistoryResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceFirmWareRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceFirmWareResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceFirmwaresRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDeviceFirmwaresResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDevicePackagesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDevicePackagesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDevicePositionListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeDevicePositionListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceBindListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceBindListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceEventListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFenceEventListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTaskDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTasksRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareTasksResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareUpdateStatusRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFirmwareUpdateStatusResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFreeCloudStorageNumRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeFreeCloudStorageNumResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewayBindDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewayBindDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubDeviceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubDeviceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeGatewaySubProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeInstanceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeInstanceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeModelDefinitionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeP2PRouteRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeP2PRouteResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePackageConsumeTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePackageConsumeTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePackageConsumeTasksRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePackageConsumeTasksResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePositionFenceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribePositionFenceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProductCloudStorageAIServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProductCloudStorageAIServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeSpaceFenceEventListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeSpaceFenceEventListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeSubscribedTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeSubscribedTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeConfigRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeConfigResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeSeeRecognitionTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkAIBotRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkAIBotResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkProductConfigRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkProductConfigResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkProductConfigV2Request.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTWeTalkProductConfigV2Response.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeUnbindedDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeUnbindedDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeVideoLicenseRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DescribeVideoLicenseResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DirectBindDeviceInFamilyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DirectBindDeviceInFamilyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DisableTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DisableTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/DismissRoomByStrRoomIdFromTRTCRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/DismissRoomByStrRoomIdFromTRTCResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/EnableTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/EnableTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenSingleDeviceSignatureOfPublicRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenSingleDeviceSignatureOfPublicResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenerateCloudStorageAIServiceTaskFileURLRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenerateCloudStorageAIServiceTaskFileURLResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenerateSignedVideoURLRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GenerateSignedVideoURLResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetAuthMiniProgramAppListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetAuthMiniProgramAppListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetBatchProductionsListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetBatchProductionsListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetCOSURLRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetCOSURLResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceLocationHistoryRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceLocationHistoryResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceSumStatisticsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetDeviceSumStatisticsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetFamilyDeviceUserListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetFamilyDeviceUserListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetGatewaySubDeviceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetGatewaySubDeviceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetLoRaGatewayListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetLoRaGatewayListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetPositionSpaceListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetPositionSpaceListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetProjectListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetProjectListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetStudioProductListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetStudioProductListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeCallActiveStatusRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeCallActiveStatusResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkAIBotListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkAIBotListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkProductConfigListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkProductConfigListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkProductConfigListV2Request.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTWeTalkProductConfigListV2Response.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTopicRuleListRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetTopicRuleListResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetWechatDeviceTicketRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/GetWechatDeviceTicketResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/InheritCloudStorageUserRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/InheritCloudStorageUserResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeAISearchServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeAISearchServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeCloudStorageAIServiceTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeCloudStorageAIServiceTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeExternalSourceAIServiceTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeExternalSourceAIServiceTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeRecognitionTaskRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeRecognitionTaskResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeRecognitionTaskWithFileRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeTWeSeeRecognitionTaskWithFileResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeVideosKeywordsAnalyzerRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/InvokeVideosKeywordsAnalyzerResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListEventHistoryRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListEventHistoryResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListFirmwaresRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListFirmwaresResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListOtaModulesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListOtaModulesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListProductOtaModulesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListProductOtaModulesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ListTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyApplicationRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyApplicationResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyCloudStorageAIServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyCloudStorageAIServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyCloudStorageAIServiceCallbackRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyCloudStorageAIServiceCallbackResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyFenceBindRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyFenceBindResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaFrequencyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaFrequencyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaGatewayRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyLoRaGatewayResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyModelDefinitionResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionFenceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionFenceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyPositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProductCloudStorageAIServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProductCloudStorageAIServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProjectRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyProjectResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifySpacePropertyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifySpacePropertyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeSeeConfigRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeSeeConfigResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkAIBotRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkAIBotResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkProductConfigRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkProductConfigResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkProductConfigV2Request.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTWeTalkProductConfigV2Response.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicPolicyRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicPolicyResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ModifyTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PauseTWeCallDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PauseTWeCallDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishBroadcastMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishBroadcastMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishFirmwareUpdateMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishFirmwareUpdateMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishRRPCMessageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/PublishRRPCMessageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ReleaseStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/RemoveUserByRoomIdFromTRTCRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/RemoveUserByRoomIdFromTRTCResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetCloudStorageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetCloudStorageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetCloudStorageAIServiceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetCloudStorageAIServiceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetCloudStorageEventRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetCloudStorageEventResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetTWeCallDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResetTWeCallDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResumeWeCallDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/ResumeWeCallDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchPositionSpaceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchPositionSpaceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchStudioProductRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchStudioProductResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchTopicRuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/SearchTopicRuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/TransferCloudStorageRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/TransferCloudStorageResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/TransferTWeCallDeviceRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/TransferTWeCallDeviceResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindDevicesRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindDevicesResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindProductsRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindProductsResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindTWeTalkAIBotRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UnbindTWeTalkAIBotResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateDeviceTWeCallAuthorizeStatusRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateDeviceTWeCallAuthorizeStatusResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateDevicesEnableStateRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateDevicesEnableStateResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateFirmwareRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateFirmwareResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateOtaModuleRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateOtaModuleResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateOtaTaskStatusRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UpdateOtaTaskStatusResponse.h>
#include <tencentcloud/iotexplorer/v20190423/model/UploadFirmwareRequest.h>
#include <tencentcloud/iotexplorer/v20190423/model/UploadFirmwareResponse.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            class IotexplorerClient : public AbstractClient
            {
            public:
                IotexplorerClient(const Credential &credential, const std::string &region);
                IotexplorerClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ActivateTWeCallLicenseResponse> ActivateTWeCallLicenseOutcome;
                typedef std::future<ActivateTWeCallLicenseOutcome> ActivateTWeCallLicenseOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ActivateTWeCallLicenseRequest&, ActivateTWeCallLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ActivateTWeCallLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchCreateTWeSeeRecognitionTaskResponse> BatchCreateTWeSeeRecognitionTaskOutcome;
                typedef std::future<BatchCreateTWeSeeRecognitionTaskOutcome> BatchCreateTWeSeeRecognitionTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BatchCreateTWeSeeRecognitionTaskRequest&, BatchCreateTWeSeeRecognitionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchCreateTWeSeeRecognitionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchInvokeTWeSeeRecognitionTaskResponse> BatchInvokeTWeSeeRecognitionTaskOutcome;
                typedef std::future<BatchInvokeTWeSeeRecognitionTaskOutcome> BatchInvokeTWeSeeRecognitionTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BatchInvokeTWeSeeRecognitionTaskRequest&, BatchInvokeTWeSeeRecognitionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchInvokeTWeSeeRecognitionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::BatchUpdateFirmwareResponse> BatchUpdateFirmwareOutcome;
                typedef std::future<BatchUpdateFirmwareOutcome> BatchUpdateFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BatchUpdateFirmwareRequest&, BatchUpdateFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BatchUpdateFirmwareAsyncHandler;
                typedef Outcome<Core::Error, Model::BindCloudStorageUserResponse> BindCloudStorageUserOutcome;
                typedef std::future<BindCloudStorageUserOutcome> BindCloudStorageUserOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BindCloudStorageUserRequest&, BindCloudStorageUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindCloudStorageUserAsyncHandler;
                typedef Outcome<Core::Error, Model::BindDevicesResponse> BindDevicesOutcome;
                typedef std::future<BindDevicesOutcome> BindDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BindDevicesRequest&, BindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::BindProductsResponse> BindProductsOutcome;
                typedef std::future<BindProductsOutcome> BindProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BindProductsRequest&, BindProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::BindTWeTalkAIBotResponse> BindTWeTalkAIBotOutcome;
                typedef std::future<BindTWeTalkAIBotOutcome> BindTWeTalkAIBotOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::BindTWeTalkAIBotRequest&, BindTWeTalkAIBotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BindTWeTalkAIBotAsyncHandler;
                typedef Outcome<Core::Error, Model::CallDeviceActionAsyncResponse> CallDeviceActionAsyncOutcome;
                typedef std::future<CallDeviceActionAsyncOutcome> CallDeviceActionAsyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CallDeviceActionAsyncRequest&, CallDeviceActionAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::CallDeviceActionSyncResponse> CallDeviceActionSyncOutcome;
                typedef std::future<CallDeviceActionSyncOutcome> CallDeviceActionSyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CallDeviceActionSyncRequest&, CallDeviceActionSyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CallDeviceActionSyncAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeP2PRouteResponse> ChangeP2PRouteOutcome;
                typedef std::future<ChangeP2PRouteOutcome> ChangeP2PRouteOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ChangeP2PRouteRequest&, ChangeP2PRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeP2PRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::CheckFirmwareUpdateResponse> CheckFirmwareUpdateOutcome;
                typedef std::future<CheckFirmwareUpdateOutcome> CheckFirmwareUpdateOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CheckFirmwareUpdateRequest&, CheckFirmwareUpdateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CheckFirmwareUpdateAsyncHandler;
                typedef Outcome<Core::Error, Model::ControlDeviceDataResponse> ControlDeviceDataOutcome;
                typedef std::future<ControlDeviceDataOutcome> ControlDeviceDataOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ControlDeviceDataRequest&, ControlDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ControlDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAISearchTaskAsyncResponse> CreateAISearchTaskAsyncOutcome;
                typedef std::future<CreateAISearchTaskAsyncOutcome> CreateAISearchTaskAsyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateAISearchTaskAsyncRequest&, CreateAISearchTaskAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAISearchTaskAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateBatchProductionResponse> CreateBatchProductionOutcome;
                typedef std::future<CreateBatchProductionOutcome> CreateBatchProductionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateBatchProductionRequest&, CreateBatchProductionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateBatchProductionAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudStorageAIServiceResponse> CreateCloudStorageAIServiceOutcome;
                typedef std::future<CreateCloudStorageAIServiceOutcome> CreateCloudStorageAIServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateCloudStorageAIServiceRequest&, CreateCloudStorageAIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudStorageAIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCloudStorageAIServiceTaskResponse> CreateCloudStorageAIServiceTaskOutcome;
                typedef std::future<CreateCloudStorageAIServiceTaskOutcome> CreateCloudStorageAIServiceTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateCloudStorageAIServiceTaskRequest&, CreateCloudStorageAIServiceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCloudStorageAIServiceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceResponse> CreateDeviceOutcome;
                typedef std::future<CreateDeviceOutcome> CreateDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateDeviceRequest&, CreateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceChannelResponse> CreateDeviceChannelOutcome;
                typedef std::future<CreateDeviceChannelOutcome> CreateDeviceChannelOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateDeviceChannelRequest&, CreateDeviceChannelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceChannelAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceSDPAnswerResponse> CreateDeviceSDPAnswerOutcome;
                typedef std::future<CreateDeviceSDPAnswerOutcome> CreateDeviceSDPAnswerOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateDeviceSDPAnswerRequest&, CreateDeviceSDPAnswerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceSDPAnswerAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateExternalSourceAIServiceTaskResponse> CreateExternalSourceAIServiceTaskOutcome;
                typedef std::future<CreateExternalSourceAIServiceTaskOutcome> CreateExternalSourceAIServiceTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateExternalSourceAIServiceTaskRequest&, CreateExternalSourceAIServiceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateExternalSourceAIServiceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFenceBindResponse> CreateFenceBindOutcome;
                typedef std::future<CreateFenceBindOutcome> CreateFenceBindOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateFenceBindRequest&, CreateFenceBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFenceBindAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFreeCloudStorageResponse> CreateFreeCloudStorageOutcome;
                typedef std::future<CreateFreeCloudStorageOutcome> CreateFreeCloudStorageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateFreeCloudStorageRequest&, CreateFreeCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFreeCloudStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateIotVideoCloudStorageResponse> CreateIotVideoCloudStorageOutcome;
                typedef std::future<CreateIotVideoCloudStorageOutcome> CreateIotVideoCloudStorageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateIotVideoCloudStorageRequest&, CreateIotVideoCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateIotVideoCloudStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoRaFrequencyResponse> CreateLoRaFrequencyOutcome;
                typedef std::future<CreateLoRaFrequencyOutcome> CreateLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateLoRaFrequencyRequest&, CreateLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateLoRaGatewayResponse> CreateLoRaGatewayOutcome;
                typedef std::future<CreateLoRaGatewayOutcome> CreateLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateLoRaGatewayRequest&, CreateLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateLoRaGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateOtaModuleResponse> CreateOtaModuleOutcome;
                typedef std::future<CreateOtaModuleOutcome> CreateOtaModuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateOtaModuleRequest&, CreateOtaModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateOtaModuleAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePositionFenceResponse> CreatePositionFenceOutcome;
                typedef std::future<CreatePositionFenceOutcome> CreatePositionFenceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreatePositionFenceRequest&, CreatePositionFenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePositionFenceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePositionSpaceResponse> CreatePositionSpaceOutcome;
                typedef std::future<CreatePositionSpaceOutcome> CreatePositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreatePositionSpaceRequest&, CreatePositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateProjectResponse> CreateProjectOutcome;
                typedef std::future<CreateProjectOutcome> CreateProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateProjectRequest&, CreateProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateStudioProductResponse> CreateStudioProductOutcome;
                typedef std::future<CreateStudioProductOutcome> CreateStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateStudioProductRequest&, CreateStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTRTCSignaturesWithRoomIdResponse> CreateTRTCSignaturesWithRoomIdOutcome;
                typedef std::future<CreateTRTCSignaturesWithRoomIdOutcome> CreateTRTCSignaturesWithRoomIdOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTRTCSignaturesWithRoomIdRequest&, CreateTRTCSignaturesWithRoomIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTRTCSignaturesWithRoomIdAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTWeSeeRecognitionTaskResponse> CreateTWeSeeRecognitionTaskOutcome;
                typedef std::future<CreateTWeSeeRecognitionTaskOutcome> CreateTWeSeeRecognitionTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTWeSeeRecognitionTaskRequest&, CreateTWeSeeRecognitionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTWeSeeRecognitionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTWeSeeRecognitionTaskWithFileResponse> CreateTWeSeeRecognitionTaskWithFileOutcome;
                typedef std::future<CreateTWeSeeRecognitionTaskWithFileOutcome> CreateTWeSeeRecognitionTaskWithFileOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTWeSeeRecognitionTaskWithFileRequest&, CreateTWeSeeRecognitionTaskWithFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTWeSeeRecognitionTaskWithFileAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTWeSeeServiceResponse> CreateTWeSeeServiceOutcome;
                typedef std::future<CreateTWeSeeServiceOutcome> CreateTWeSeeServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTWeSeeServiceRequest&, CreateTWeSeeServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTWeSeeServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTWeTalkAIBotResponse> CreateTWeTalkAIBotOutcome;
                typedef std::future<CreateTWeTalkAIBotOutcome> CreateTWeTalkAIBotOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTWeTalkAIBotRequest&, CreateTWeTalkAIBotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTWeTalkAIBotAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTWeTalkProductConfigResponse> CreateTWeTalkProductConfigOutcome;
                typedef std::future<CreateTWeTalkProductConfigOutcome> CreateTWeTalkProductConfigOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTWeTalkProductConfigRequest&, CreateTWeTalkProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTWeTalkProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTWeTalkProductConfigV2Response> CreateTWeTalkProductConfigV2Outcome;
                typedef std::future<CreateTWeTalkProductConfigV2Outcome> CreateTWeTalkProductConfigV2OutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTWeTalkProductConfigV2Request&, CreateTWeTalkProductConfigV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTWeTalkProductConfigV2AsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicPolicyResponse> CreateTopicPolicyOutcome;
                typedef std::future<CreateTopicPolicyOutcome> CreateTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTopicPolicyRequest&, CreateTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateTopicRuleResponse> CreateTopicRuleOutcome;
                typedef std::future<CreateTopicRuleOutcome> CreateTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::CreateTopicRuleRequest&, CreateTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCloudStorageEventResponse> DeleteCloudStorageEventOutcome;
                typedef std::future<DeleteCloudStorageEventOutcome> DeleteCloudStorageEventOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteCloudStorageEventRequest&, DeleteCloudStorageEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCloudStorageEventAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDevicesResponse> DeleteDevicesOutcome;
                typedef std::future<DeleteDevicesOutcome> DeleteDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteDevicesRequest&, DeleteDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFenceBindResponse> DeleteFenceBindOutcome;
                typedef std::future<DeleteFenceBindOutcome> DeleteFenceBindOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteFenceBindRequest&, DeleteFenceBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFenceBindAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoRaFrequencyResponse> DeleteLoRaFrequencyOutcome;
                typedef std::future<DeleteLoRaFrequencyOutcome> DeleteLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteLoRaFrequencyRequest&, DeleteLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteLoRaGatewayResponse> DeleteLoRaGatewayOutcome;
                typedef std::future<DeleteLoRaGatewayOutcome> DeleteLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteLoRaGatewayRequest&, DeleteLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteLoRaGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteOtaModuleResponse> DeleteOtaModuleOutcome;
                typedef std::future<DeleteOtaModuleOutcome> DeleteOtaModuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteOtaModuleRequest&, DeleteOtaModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteOtaModuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePositionFenceResponse> DeletePositionFenceOutcome;
                typedef std::future<DeletePositionFenceOutcome> DeletePositionFenceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeletePositionFenceRequest&, DeletePositionFenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePositionFenceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePositionSpaceResponse> DeletePositionSpaceOutcome;
                typedef std::future<DeletePositionSpaceOutcome> DeletePositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeletePositionSpaceRequest&, DeletePositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteProjectResponse> DeleteProjectOutcome;
                typedef std::future<DeleteProjectOutcome> DeleteProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteProjectRequest&, DeleteProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteStudioProductResponse> DeleteStudioProductOutcome;
                typedef std::future<DeleteStudioProductOutcome> DeleteStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteStudioProductRequest&, DeleteStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTWeTalkAIBotResponse> DeleteTWeTalkAIBotOutcome;
                typedef std::future<DeleteTWeTalkAIBotOutcome> DeleteTWeTalkAIBotOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteTWeTalkAIBotRequest&, DeleteTWeTalkAIBotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTWeTalkAIBotAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTWeTalkProductConfigV2Response> DeleteTWeTalkProductConfigV2Outcome;
                typedef std::future<DeleteTWeTalkProductConfigV2Outcome> DeleteTWeTalkProductConfigV2OutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteTWeTalkProductConfigV2Request&, DeleteTWeTalkProductConfigV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTWeTalkProductConfigV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicPolicyResponse> DeleteTopicPolicyOutcome;
                typedef std::future<DeleteTopicPolicyOutcome> DeleteTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteTopicPolicyRequest&, DeleteTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteTopicRuleResponse> DeleteTopicRuleOutcome;
                typedef std::future<DeleteTopicRuleOutcome> DeleteTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DeleteTopicRuleRequest&, DeleteTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAISearchTaskAsyncResponse> DescribeAISearchTaskAsyncOutcome;
                typedef std::future<DescribeAISearchTaskAsyncOutcome> DescribeAISearchTaskAsyncOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeAISearchTaskAsyncRequest&, DescribeAISearchTaskAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAISearchTaskAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActivateDeviceResponse> DescribeActivateDeviceOutcome;
                typedef std::future<DescribeActivateDeviceOutcome> DescribeActivateDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeActivateDeviceRequest&, DescribeActivateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActivateDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeActivateLicenseServiceResponse> DescribeActivateLicenseServiceOutcome;
                typedef std::future<DescribeActivateLicenseServiceOutcome> DescribeActivateLicenseServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeActivateLicenseServiceRequest&, DescribeActivateLicenseServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeActivateLicenseServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBatchProductionResponse> DescribeBatchProductionOutcome;
                typedef std::future<DescribeBatchProductionOutcome> DescribeBatchProductionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeBatchProductionRequest&, DescribeBatchProductionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBatchProductionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeBindedProductsResponse> DescribeBindedProductsOutcome;
                typedef std::future<DescribeBindedProductsOutcome> DescribeBindedProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeBindedProductsRequest&, DescribeBindedProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeBindedProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageResponse> DescribeCloudStorageOutcome;
                typedef std::future<DescribeCloudStorageOutcome> DescribeCloudStorageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageRequest&, DescribeCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageAIServiceResponse> DescribeCloudStorageAIServiceOutcome;
                typedef std::future<DescribeCloudStorageAIServiceOutcome> DescribeCloudStorageAIServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageAIServiceRequest&, DescribeCloudStorageAIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageAIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageAIServiceCallbackResponse> DescribeCloudStorageAIServiceCallbackOutcome;
                typedef std::future<DescribeCloudStorageAIServiceCallbackOutcome> DescribeCloudStorageAIServiceCallbackOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageAIServiceCallbackRequest&, DescribeCloudStorageAIServiceCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageAIServiceCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageAIServiceTaskResponse> DescribeCloudStorageAIServiceTaskOutcome;
                typedef std::future<DescribeCloudStorageAIServiceTaskOutcome> DescribeCloudStorageAIServiceTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageAIServiceTaskRequest&, DescribeCloudStorageAIServiceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageAIServiceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageAIServiceTasksResponse> DescribeCloudStorageAIServiceTasksOutcome;
                typedef std::future<DescribeCloudStorageAIServiceTasksOutcome> DescribeCloudStorageAIServiceTasksOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageAIServiceTasksRequest&, DescribeCloudStorageAIServiceTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageAIServiceTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageDateResponse> DescribeCloudStorageDateOutcome;
                typedef std::future<DescribeCloudStorageDateOutcome> DescribeCloudStorageDateOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageDateRequest&, DescribeCloudStorageDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageDateAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageEventsResponse> DescribeCloudStorageEventsOutcome;
                typedef std::future<DescribeCloudStorageEventsOutcome> DescribeCloudStorageEventsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageEventsRequest&, DescribeCloudStorageEventsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageEventsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageEventsWithAITasksResponse> DescribeCloudStorageEventsWithAITasksOutcome;
                typedef std::future<DescribeCloudStorageEventsWithAITasksOutcome> DescribeCloudStorageEventsWithAITasksOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageEventsWithAITasksRequest&, DescribeCloudStorageEventsWithAITasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageEventsWithAITasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageMultiThumbnailResponse> DescribeCloudStorageMultiThumbnailOutcome;
                typedef std::future<DescribeCloudStorageMultiThumbnailOutcome> DescribeCloudStorageMultiThumbnailOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageMultiThumbnailRequest&, DescribeCloudStorageMultiThumbnailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageMultiThumbnailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageOrderResponse> DescribeCloudStorageOrderOutcome;
                typedef std::future<DescribeCloudStorageOrderOutcome> DescribeCloudStorageOrderOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageOrderRequest&, DescribeCloudStorageOrderOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageOrderAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStoragePackageConsumeDetailsResponse> DescribeCloudStoragePackageConsumeDetailsOutcome;
                typedef std::future<DescribeCloudStoragePackageConsumeDetailsOutcome> DescribeCloudStoragePackageConsumeDetailsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStoragePackageConsumeDetailsRequest&, DescribeCloudStoragePackageConsumeDetailsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStoragePackageConsumeDetailsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStoragePackageConsumeStatsResponse> DescribeCloudStoragePackageConsumeStatsOutcome;
                typedef std::future<DescribeCloudStoragePackageConsumeStatsOutcome> DescribeCloudStoragePackageConsumeStatsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStoragePackageConsumeStatsRequest&, DescribeCloudStoragePackageConsumeStatsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStoragePackageConsumeStatsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageStreamDataResponse> DescribeCloudStorageStreamDataOutcome;
                typedef std::future<DescribeCloudStorageStreamDataOutcome> DescribeCloudStorageStreamDataOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageStreamDataRequest&, DescribeCloudStorageStreamDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageStreamDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageThumbnailResponse> DescribeCloudStorageThumbnailOutcome;
                typedef std::future<DescribeCloudStorageThumbnailOutcome> DescribeCloudStorageThumbnailOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageThumbnailRequest&, DescribeCloudStorageThumbnailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageThumbnailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageThumbnailListResponse> DescribeCloudStorageThumbnailListOutcome;
                typedef std::future<DescribeCloudStorageThumbnailListOutcome> DescribeCloudStorageThumbnailListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageThumbnailListRequest&, DescribeCloudStorageThumbnailListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageThumbnailListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageTimeResponse> DescribeCloudStorageTimeOutcome;
                typedef std::future<DescribeCloudStorageTimeOutcome> DescribeCloudStorageTimeOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageTimeRequest&, DescribeCloudStorageTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCloudStorageUsersResponse> DescribeCloudStorageUsersOutcome;
                typedef std::future<DescribeCloudStorageUsersOutcome> DescribeCloudStorageUsersOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCloudStorageUsersRequest&, DescribeCloudStorageUsersOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCloudStorageUsersAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCsReportCountDataInfoResponse> DescribeCsReportCountDataInfoOutcome;
                typedef std::future<DescribeCsReportCountDataInfoOutcome> DescribeCsReportCountDataInfoOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeCsReportCountDataInfoRequest&, DescribeCsReportCountDataInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCsReportCountDataInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceResponse> DescribeDeviceOutcome;
                typedef std::future<DescribeDeviceOutcome> DescribeDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceRequest&, DescribeDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceBindGatewayResponse> DescribeDeviceBindGatewayOutcome;
                typedef std::future<DescribeDeviceBindGatewayOutcome> DescribeDeviceBindGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceBindGatewayRequest&, DescribeDeviceBindGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceBindGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceDataResponse> DescribeDeviceDataOutcome;
                typedef std::future<DescribeDeviceDataOutcome> DescribeDeviceDataOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceDataRequest&, DescribeDeviceDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceDataHistoryResponse> DescribeDeviceDataHistoryOutcome;
                typedef std::future<DescribeDeviceDataHistoryOutcome> DescribeDeviceDataHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceDataHistoryRequest&, DescribeDeviceDataHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceDataHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceFirmWareResponse> DescribeDeviceFirmWareOutcome;
                typedef std::future<DescribeDeviceFirmWareOutcome> DescribeDeviceFirmWareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceFirmWareRequest&, DescribeDeviceFirmWareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceFirmWareAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceFirmwaresResponse> DescribeDeviceFirmwaresOutcome;
                typedef std::future<DescribeDeviceFirmwaresOutcome> DescribeDeviceFirmwaresOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDeviceFirmwaresRequest&, DescribeDeviceFirmwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceFirmwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePackagesResponse> DescribeDevicePackagesOutcome;
                typedef std::future<DescribeDevicePackagesOutcome> DescribeDevicePackagesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDevicePackagesRequest&, DescribeDevicePackagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePackagesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicePositionListResponse> DescribeDevicePositionListOutcome;
                typedef std::future<DescribeDevicePositionListOutcome> DescribeDevicePositionListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeDevicePositionListRequest&, DescribeDevicePositionListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicePositionListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFenceBindListResponse> DescribeFenceBindListOutcome;
                typedef std::future<DescribeFenceBindListOutcome> DescribeFenceBindListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFenceBindListRequest&, DescribeFenceBindListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFenceBindListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFenceEventListResponse> DescribeFenceEventListOutcome;
                typedef std::future<DescribeFenceEventListOutcome> DescribeFenceEventListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFenceEventListRequest&, DescribeFenceEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFenceEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareResponse> DescribeFirmwareOutcome;
                typedef std::future<DescribeFirmwareOutcome> DescribeFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFirmwareRequest&, DescribeFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTaskResponse> DescribeFirmwareTaskOutcome;
                typedef std::future<DescribeFirmwareTaskOutcome> DescribeFirmwareTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFirmwareTaskRequest&, DescribeFirmwareTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTaskDevicesResponse> DescribeFirmwareTaskDevicesOutcome;
                typedef std::future<DescribeFirmwareTaskDevicesOutcome> DescribeFirmwareTaskDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFirmwareTaskDevicesRequest&, DescribeFirmwareTaskDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTaskDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareTasksResponse> DescribeFirmwareTasksOutcome;
                typedef std::future<DescribeFirmwareTasksOutcome> DescribeFirmwareTasksOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFirmwareTasksRequest&, DescribeFirmwareTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFirmwareUpdateStatusResponse> DescribeFirmwareUpdateStatusOutcome;
                typedef std::future<DescribeFirmwareUpdateStatusOutcome> DescribeFirmwareUpdateStatusOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFirmwareUpdateStatusRequest&, DescribeFirmwareUpdateStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFirmwareUpdateStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFreeCloudStorageNumResponse> DescribeFreeCloudStorageNumOutcome;
                typedef std::future<DescribeFreeCloudStorageNumOutcome> DescribeFreeCloudStorageNumOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeFreeCloudStorageNumRequest&, DescribeFreeCloudStorageNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFreeCloudStorageNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewayBindDevicesResponse> DescribeGatewayBindDevicesOutcome;
                typedef std::future<DescribeGatewayBindDevicesOutcome> DescribeGatewayBindDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeGatewayBindDevicesRequest&, DescribeGatewayBindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewayBindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewaySubDeviceListResponse> DescribeGatewaySubDeviceListOutcome;
                typedef std::future<DescribeGatewaySubDeviceListOutcome> DescribeGatewaySubDeviceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeGatewaySubDeviceListRequest&, DescribeGatewaySubDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaySubDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeGatewaySubProductsResponse> DescribeGatewaySubProductsOutcome;
                typedef std::future<DescribeGatewaySubProductsOutcome> DescribeGatewaySubProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeGatewaySubProductsRequest&, DescribeGatewaySubProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeGatewaySubProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeInstanceResponse> DescribeInstanceOutcome;
                typedef std::future<DescribeInstanceOutcome> DescribeInstanceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeInstanceRequest&, DescribeInstanceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeInstanceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLoRaFrequencyResponse> DescribeLoRaFrequencyOutcome;
                typedef std::future<DescribeLoRaFrequencyOutcome> DescribeLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeLoRaFrequencyRequest&, DescribeLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeModelDefinitionResponse> DescribeModelDefinitionOutcome;
                typedef std::future<DescribeModelDefinitionOutcome> DescribeModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeModelDefinitionRequest&, DescribeModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeModelDefinitionAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeP2PRouteResponse> DescribeP2PRouteOutcome;
                typedef std::future<DescribeP2PRouteOutcome> DescribeP2PRouteOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeP2PRouteRequest&, DescribeP2PRouteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeP2PRouteAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePackageConsumeTaskResponse> DescribePackageConsumeTaskOutcome;
                typedef std::future<DescribePackageConsumeTaskOutcome> DescribePackageConsumeTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribePackageConsumeTaskRequest&, DescribePackageConsumeTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackageConsumeTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePackageConsumeTasksResponse> DescribePackageConsumeTasksOutcome;
                typedef std::future<DescribePackageConsumeTasksOutcome> DescribePackageConsumeTasksOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribePackageConsumeTasksRequest&, DescribePackageConsumeTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePackageConsumeTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePositionFenceListResponse> DescribePositionFenceListOutcome;
                typedef std::future<DescribePositionFenceListOutcome> DescribePositionFenceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribePositionFenceListRequest&, DescribePositionFenceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePositionFenceListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProductCloudStorageAIServiceResponse> DescribeProductCloudStorageAIServiceOutcome;
                typedef std::future<DescribeProductCloudStorageAIServiceOutcome> DescribeProductCloudStorageAIServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeProductCloudStorageAIServiceRequest&, DescribeProductCloudStorageAIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProductCloudStorageAIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeProjectResponse> DescribeProjectOutcome;
                typedef std::future<DescribeProjectOutcome> DescribeProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeProjectRequest&, DescribeProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSpaceFenceEventListResponse> DescribeSpaceFenceEventListOutcome;
                typedef std::future<DescribeSpaceFenceEventListOutcome> DescribeSpaceFenceEventListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeSpaceFenceEventListRequest&, DescribeSpaceFenceEventListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSpaceFenceEventListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeStudioProductResponse> DescribeStudioProductOutcome;
                typedef std::future<DescribeStudioProductOutcome> DescribeStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeStudioProductRequest&, DescribeStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSubscribedTopicPolicyResponse> DescribeSubscribedTopicPolicyOutcome;
                typedef std::future<DescribeSubscribedTopicPolicyOutcome> DescribeSubscribedTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeSubscribedTopicPolicyRequest&, DescribeSubscribedTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSubscribedTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTWeSeeConfigResponse> DescribeTWeSeeConfigOutcome;
                typedef std::future<DescribeTWeSeeConfigOutcome> DescribeTWeSeeConfigOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTWeSeeConfigRequest&, DescribeTWeSeeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTWeSeeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTWeSeeRecognitionTaskResponse> DescribeTWeSeeRecognitionTaskOutcome;
                typedef std::future<DescribeTWeSeeRecognitionTaskOutcome> DescribeTWeSeeRecognitionTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTWeSeeRecognitionTaskRequest&, DescribeTWeSeeRecognitionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTWeSeeRecognitionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTWeTalkAIBotResponse> DescribeTWeTalkAIBotOutcome;
                typedef std::future<DescribeTWeTalkAIBotOutcome> DescribeTWeTalkAIBotOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTWeTalkAIBotRequest&, DescribeTWeTalkAIBotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTWeTalkAIBotAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTWeTalkProductConfigResponse> DescribeTWeTalkProductConfigOutcome;
                typedef std::future<DescribeTWeTalkProductConfigOutcome> DescribeTWeTalkProductConfigOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTWeTalkProductConfigRequest&, DescribeTWeTalkProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTWeTalkProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTWeTalkProductConfigV2Response> DescribeTWeTalkProductConfigV2Outcome;
                typedef std::future<DescribeTWeTalkProductConfigV2Outcome> DescribeTWeTalkProductConfigV2OutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTWeTalkProductConfigV2Request&, DescribeTWeTalkProductConfigV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTWeTalkProductConfigV2AsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicPolicyResponse> DescribeTopicPolicyOutcome;
                typedef std::future<DescribeTopicPolicyOutcome> DescribeTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTopicPolicyRequest&, DescribeTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTopicRuleResponse> DescribeTopicRuleOutcome;
                typedef std::future<DescribeTopicRuleOutcome> DescribeTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeTopicRuleRequest&, DescribeTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeUnbindedDevicesResponse> DescribeUnbindedDevicesOutcome;
                typedef std::future<DescribeUnbindedDevicesOutcome> DescribeUnbindedDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeUnbindedDevicesRequest&, DescribeUnbindedDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeUnbindedDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVideoLicenseResponse> DescribeVideoLicenseOutcome;
                typedef std::future<DescribeVideoLicenseOutcome> DescribeVideoLicenseOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DescribeVideoLicenseRequest&, DescribeVideoLicenseOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVideoLicenseAsyncHandler;
                typedef Outcome<Core::Error, Model::DirectBindDeviceInFamilyResponse> DirectBindDeviceInFamilyOutcome;
                typedef std::future<DirectBindDeviceInFamilyOutcome> DirectBindDeviceInFamilyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DirectBindDeviceInFamilyRequest&, DirectBindDeviceInFamilyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DirectBindDeviceInFamilyAsyncHandler;
                typedef Outcome<Core::Error, Model::DisableTopicRuleResponse> DisableTopicRuleOutcome;
                typedef std::future<DisableTopicRuleOutcome> DisableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DisableTopicRuleRequest&, DisableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DisableTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::DismissRoomByStrRoomIdFromTRTCResponse> DismissRoomByStrRoomIdFromTRTCOutcome;
                typedef std::future<DismissRoomByStrRoomIdFromTRTCOutcome> DismissRoomByStrRoomIdFromTRTCOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::DismissRoomByStrRoomIdFromTRTCRequest&, DismissRoomByStrRoomIdFromTRTCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DismissRoomByStrRoomIdFromTRTCAsyncHandler;
                typedef Outcome<Core::Error, Model::EnableTopicRuleResponse> EnableTopicRuleOutcome;
                typedef std::future<EnableTopicRuleOutcome> EnableTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::EnableTopicRuleRequest&, EnableTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> EnableTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::GenSingleDeviceSignatureOfPublicResponse> GenSingleDeviceSignatureOfPublicOutcome;
                typedef std::future<GenSingleDeviceSignatureOfPublicOutcome> GenSingleDeviceSignatureOfPublicOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GenSingleDeviceSignatureOfPublicRequest&, GenSingleDeviceSignatureOfPublicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenSingleDeviceSignatureOfPublicAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateCloudStorageAIServiceTaskFileURLResponse> GenerateCloudStorageAIServiceTaskFileURLOutcome;
                typedef std::future<GenerateCloudStorageAIServiceTaskFileURLOutcome> GenerateCloudStorageAIServiceTaskFileURLOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GenerateCloudStorageAIServiceTaskFileURLRequest&, GenerateCloudStorageAIServiceTaskFileURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateCloudStorageAIServiceTaskFileURLAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateSignedVideoURLResponse> GenerateSignedVideoURLOutcome;
                typedef std::future<GenerateSignedVideoURLOutcome> GenerateSignedVideoURLOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GenerateSignedVideoURLRequest&, GenerateSignedVideoURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateSignedVideoURLAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAuthMiniProgramAppListResponse> GetAuthMiniProgramAppListOutcome;
                typedef std::future<GetAuthMiniProgramAppListOutcome> GetAuthMiniProgramAppListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetAuthMiniProgramAppListRequest&, GetAuthMiniProgramAppListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAuthMiniProgramAppListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetBatchProductionsListResponse> GetBatchProductionsListOutcome;
                typedef std::future<GetBatchProductionsListOutcome> GetBatchProductionsListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetBatchProductionsListRequest&, GetBatchProductionsListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetBatchProductionsListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCOSURLResponse> GetCOSURLOutcome;
                typedef std::future<GetCOSURLOutcome> GetCOSURLOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetCOSURLRequest&, GetCOSURLOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCOSURLAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceListResponse> GetDeviceListOutcome;
                typedef std::future<GetDeviceListOutcome> GetDeviceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetDeviceListRequest&, GetDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceLocationHistoryResponse> GetDeviceLocationHistoryOutcome;
                typedef std::future<GetDeviceLocationHistoryOutcome> GetDeviceLocationHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetDeviceLocationHistoryRequest&, GetDeviceLocationHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceLocationHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceSumStatisticsResponse> GetDeviceSumStatisticsOutcome;
                typedef std::future<GetDeviceSumStatisticsOutcome> GetDeviceSumStatisticsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetDeviceSumStatisticsRequest&, GetDeviceSumStatisticsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceSumStatisticsAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFamilyDeviceUserListResponse> GetFamilyDeviceUserListOutcome;
                typedef std::future<GetFamilyDeviceUserListOutcome> GetFamilyDeviceUserListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetFamilyDeviceUserListRequest&, GetFamilyDeviceUserListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFamilyDeviceUserListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGatewaySubDeviceListResponse> GetGatewaySubDeviceListOutcome;
                typedef std::future<GetGatewaySubDeviceListOutcome> GetGatewaySubDeviceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetGatewaySubDeviceListRequest&, GetGatewaySubDeviceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGatewaySubDeviceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetLoRaGatewayListResponse> GetLoRaGatewayListOutcome;
                typedef std::future<GetLoRaGatewayListOutcome> GetLoRaGatewayListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetLoRaGatewayListRequest&, GetLoRaGatewayListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLoRaGatewayListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPositionSpaceListResponse> GetPositionSpaceListOutcome;
                typedef std::future<GetPositionSpaceListOutcome> GetPositionSpaceListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetPositionSpaceListRequest&, GetPositionSpaceListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPositionSpaceListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetProjectListResponse> GetProjectListOutcome;
                typedef std::future<GetProjectListOutcome> GetProjectListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetProjectListRequest&, GetProjectListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetProjectListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetStudioProductListResponse> GetStudioProductListOutcome;
                typedef std::future<GetStudioProductListOutcome> GetStudioProductListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetStudioProductListRequest&, GetStudioProductListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStudioProductListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTWeCallActiveStatusResponse> GetTWeCallActiveStatusOutcome;
                typedef std::future<GetTWeCallActiveStatusOutcome> GetTWeCallActiveStatusOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetTWeCallActiveStatusRequest&, GetTWeCallActiveStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTWeCallActiveStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTWeTalkAIBotListResponse> GetTWeTalkAIBotListOutcome;
                typedef std::future<GetTWeTalkAIBotListOutcome> GetTWeTalkAIBotListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetTWeTalkAIBotListRequest&, GetTWeTalkAIBotListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTWeTalkAIBotListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTWeTalkProductConfigListResponse> GetTWeTalkProductConfigListOutcome;
                typedef std::future<GetTWeTalkProductConfigListOutcome> GetTWeTalkProductConfigListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetTWeTalkProductConfigListRequest&, GetTWeTalkProductConfigListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTWeTalkProductConfigListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTWeTalkProductConfigListV2Response> GetTWeTalkProductConfigListV2Outcome;
                typedef std::future<GetTWeTalkProductConfigListV2Outcome> GetTWeTalkProductConfigListV2OutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetTWeTalkProductConfigListV2Request&, GetTWeTalkProductConfigListV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTWeTalkProductConfigListV2AsyncHandler;
                typedef Outcome<Core::Error, Model::GetTopicRuleListResponse> GetTopicRuleListOutcome;
                typedef std::future<GetTopicRuleListOutcome> GetTopicRuleListOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetTopicRuleListRequest&, GetTopicRuleListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTopicRuleListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetWechatDeviceTicketResponse> GetWechatDeviceTicketOutcome;
                typedef std::future<GetWechatDeviceTicketOutcome> GetWechatDeviceTicketOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::GetWechatDeviceTicketRequest&, GetWechatDeviceTicketOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetWechatDeviceTicketAsyncHandler;
                typedef Outcome<Core::Error, Model::InheritCloudStorageUserResponse> InheritCloudStorageUserOutcome;
                typedef std::future<InheritCloudStorageUserOutcome> InheritCloudStorageUserOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::InheritCloudStorageUserRequest&, InheritCloudStorageUserOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InheritCloudStorageUserAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeAISearchServiceResponse> InvokeAISearchServiceOutcome;
                typedef std::future<InvokeAISearchServiceOutcome> InvokeAISearchServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::InvokeAISearchServiceRequest&, InvokeAISearchServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeAISearchServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeCloudStorageAIServiceTaskResponse> InvokeCloudStorageAIServiceTaskOutcome;
                typedef std::future<InvokeCloudStorageAIServiceTaskOutcome> InvokeCloudStorageAIServiceTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::InvokeCloudStorageAIServiceTaskRequest&, InvokeCloudStorageAIServiceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeCloudStorageAIServiceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeExternalSourceAIServiceTaskResponse> InvokeExternalSourceAIServiceTaskOutcome;
                typedef std::future<InvokeExternalSourceAIServiceTaskOutcome> InvokeExternalSourceAIServiceTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::InvokeExternalSourceAIServiceTaskRequest&, InvokeExternalSourceAIServiceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeExternalSourceAIServiceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeTWeSeeRecognitionTaskResponse> InvokeTWeSeeRecognitionTaskOutcome;
                typedef std::future<InvokeTWeSeeRecognitionTaskOutcome> InvokeTWeSeeRecognitionTaskOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::InvokeTWeSeeRecognitionTaskRequest&, InvokeTWeSeeRecognitionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeTWeSeeRecognitionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeTWeSeeRecognitionTaskWithFileResponse> InvokeTWeSeeRecognitionTaskWithFileOutcome;
                typedef std::future<InvokeTWeSeeRecognitionTaskWithFileOutcome> InvokeTWeSeeRecognitionTaskWithFileOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::InvokeTWeSeeRecognitionTaskWithFileRequest&, InvokeTWeSeeRecognitionTaskWithFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeTWeSeeRecognitionTaskWithFileAsyncHandler;
                typedef Outcome<Core::Error, Model::InvokeVideosKeywordsAnalyzerResponse> InvokeVideosKeywordsAnalyzerOutcome;
                typedef std::future<InvokeVideosKeywordsAnalyzerOutcome> InvokeVideosKeywordsAnalyzerOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::InvokeVideosKeywordsAnalyzerRequest&, InvokeVideosKeywordsAnalyzerOutcome, const std::shared_ptr<const AsyncCallerContext>&)> InvokeVideosKeywordsAnalyzerAsyncHandler;
                typedef Outcome<Core::Error, Model::ListEventHistoryResponse> ListEventHistoryOutcome;
                typedef std::future<ListEventHistoryOutcome> ListEventHistoryOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListEventHistoryRequest&, ListEventHistoryOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListEventHistoryAsyncHandler;
                typedef Outcome<Core::Error, Model::ListFirmwaresResponse> ListFirmwaresOutcome;
                typedef std::future<ListFirmwaresOutcome> ListFirmwaresOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListFirmwaresRequest&, ListFirmwaresOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListFirmwaresAsyncHandler;
                typedef Outcome<Core::Error, Model::ListOtaModulesResponse> ListOtaModulesOutcome;
                typedef std::future<ListOtaModulesOutcome> ListOtaModulesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListOtaModulesRequest&, ListOtaModulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListOtaModulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListProductOtaModulesResponse> ListProductOtaModulesOutcome;
                typedef std::future<ListProductOtaModulesOutcome> ListProductOtaModulesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListProductOtaModulesRequest&, ListProductOtaModulesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListProductOtaModulesAsyncHandler;
                typedef Outcome<Core::Error, Model::ListTopicPolicyResponse> ListTopicPolicyOutcome;
                typedef std::future<ListTopicPolicyOutcome> ListTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ListTopicPolicyRequest&, ListTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ListTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyApplicationResponse> ModifyApplicationOutcome;
                typedef std::future<ModifyApplicationOutcome> ModifyApplicationOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyApplicationRequest&, ModifyApplicationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyApplicationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudStorageAIServiceResponse> ModifyCloudStorageAIServiceOutcome;
                typedef std::future<ModifyCloudStorageAIServiceOutcome> ModifyCloudStorageAIServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyCloudStorageAIServiceRequest&, ModifyCloudStorageAIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudStorageAIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCloudStorageAIServiceCallbackResponse> ModifyCloudStorageAIServiceCallbackOutcome;
                typedef std::future<ModifyCloudStorageAIServiceCallbackOutcome> ModifyCloudStorageAIServiceCallbackOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyCloudStorageAIServiceCallbackRequest&, ModifyCloudStorageAIServiceCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCloudStorageAIServiceCallbackAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyFenceBindResponse> ModifyFenceBindOutcome;
                typedef std::future<ModifyFenceBindOutcome> ModifyFenceBindOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyFenceBindRequest&, ModifyFenceBindOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyFenceBindAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoRaFrequencyResponse> ModifyLoRaFrequencyOutcome;
                typedef std::future<ModifyLoRaFrequencyOutcome> ModifyLoRaFrequencyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyLoRaFrequencyRequest&, ModifyLoRaFrequencyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoRaFrequencyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyLoRaGatewayResponse> ModifyLoRaGatewayOutcome;
                typedef std::future<ModifyLoRaGatewayOutcome> ModifyLoRaGatewayOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyLoRaGatewayRequest&, ModifyLoRaGatewayOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyLoRaGatewayAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyModelDefinitionResponse> ModifyModelDefinitionOutcome;
                typedef std::future<ModifyModelDefinitionOutcome> ModifyModelDefinitionOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyModelDefinitionRequest&, ModifyModelDefinitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyModelDefinitionAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPositionFenceResponse> ModifyPositionFenceOutcome;
                typedef std::future<ModifyPositionFenceOutcome> ModifyPositionFenceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyPositionFenceRequest&, ModifyPositionFenceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPositionFenceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPositionSpaceResponse> ModifyPositionSpaceOutcome;
                typedef std::future<ModifyPositionSpaceOutcome> ModifyPositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyPositionSpaceRequest&, ModifyPositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProductCloudStorageAIServiceResponse> ModifyProductCloudStorageAIServiceOutcome;
                typedef std::future<ModifyProductCloudStorageAIServiceOutcome> ModifyProductCloudStorageAIServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyProductCloudStorageAIServiceRequest&, ModifyProductCloudStorageAIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProductCloudStorageAIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyProjectResponse> ModifyProjectOutcome;
                typedef std::future<ModifyProjectOutcome> ModifyProjectOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyProjectRequest&, ModifyProjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyProjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifySpacePropertyResponse> ModifySpacePropertyOutcome;
                typedef std::future<ModifySpacePropertyOutcome> ModifySpacePropertyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifySpacePropertyRequest&, ModifySpacePropertyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifySpacePropertyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyStudioProductResponse> ModifyStudioProductOutcome;
                typedef std::future<ModifyStudioProductOutcome> ModifyStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyStudioProductRequest&, ModifyStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTWeSeeConfigResponse> ModifyTWeSeeConfigOutcome;
                typedef std::future<ModifyTWeSeeConfigOutcome> ModifyTWeSeeConfigOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTWeSeeConfigRequest&, ModifyTWeSeeConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTWeSeeConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTWeTalkAIBotResponse> ModifyTWeTalkAIBotOutcome;
                typedef std::future<ModifyTWeTalkAIBotOutcome> ModifyTWeTalkAIBotOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTWeTalkAIBotRequest&, ModifyTWeTalkAIBotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTWeTalkAIBotAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTWeTalkProductConfigResponse> ModifyTWeTalkProductConfigOutcome;
                typedef std::future<ModifyTWeTalkProductConfigOutcome> ModifyTWeTalkProductConfigOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTWeTalkProductConfigRequest&, ModifyTWeTalkProductConfigOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTWeTalkProductConfigAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTWeTalkProductConfigV2Response> ModifyTWeTalkProductConfigV2Outcome;
                typedef std::future<ModifyTWeTalkProductConfigV2Outcome> ModifyTWeTalkProductConfigV2OutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTWeTalkProductConfigV2Request&, ModifyTWeTalkProductConfigV2Outcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTWeTalkProductConfigV2AsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicPolicyResponse> ModifyTopicPolicyOutcome;
                typedef std::future<ModifyTopicPolicyOutcome> ModifyTopicPolicyOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTopicPolicyRequest&, ModifyTopicPolicyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicPolicyAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyTopicRuleResponse> ModifyTopicRuleOutcome;
                typedef std::future<ModifyTopicRuleOutcome> ModifyTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ModifyTopicRuleRequest&, ModifyTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::PauseTWeCallDeviceResponse> PauseTWeCallDeviceOutcome;
                typedef std::future<PauseTWeCallDeviceOutcome> PauseTWeCallDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PauseTWeCallDeviceRequest&, PauseTWeCallDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PauseTWeCallDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishBroadcastMessageResponse> PublishBroadcastMessageOutcome;
                typedef std::future<PublishBroadcastMessageOutcome> PublishBroadcastMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishBroadcastMessageRequest&, PublishBroadcastMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishBroadcastMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishFirmwareUpdateMessageResponse> PublishFirmwareUpdateMessageOutcome;
                typedef std::future<PublishFirmwareUpdateMessageOutcome> PublishFirmwareUpdateMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishFirmwareUpdateMessageRequest&, PublishFirmwareUpdateMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishFirmwareUpdateMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishMessageResponse> PublishMessageOutcome;
                typedef std::future<PublishMessageOutcome> PublishMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishMessageRequest&, PublishMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::PublishRRPCMessageResponse> PublishRRPCMessageOutcome;
                typedef std::future<PublishRRPCMessageOutcome> PublishRRPCMessageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::PublishRRPCMessageRequest&, PublishRRPCMessageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> PublishRRPCMessageAsyncHandler;
                typedef Outcome<Core::Error, Model::ReleaseStudioProductResponse> ReleaseStudioProductOutcome;
                typedef std::future<ReleaseStudioProductOutcome> ReleaseStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ReleaseStudioProductRequest&, ReleaseStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReleaseStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::RemoveUserByRoomIdFromTRTCResponse> RemoveUserByRoomIdFromTRTCOutcome;
                typedef std::future<RemoveUserByRoomIdFromTRTCOutcome> RemoveUserByRoomIdFromTRTCOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::RemoveUserByRoomIdFromTRTCRequest&, RemoveUserByRoomIdFromTRTCOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RemoveUserByRoomIdFromTRTCAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetCloudStorageResponse> ResetCloudStorageOutcome;
                typedef std::future<ResetCloudStorageOutcome> ResetCloudStorageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ResetCloudStorageRequest&, ResetCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetCloudStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetCloudStorageAIServiceResponse> ResetCloudStorageAIServiceOutcome;
                typedef std::future<ResetCloudStorageAIServiceOutcome> ResetCloudStorageAIServiceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ResetCloudStorageAIServiceRequest&, ResetCloudStorageAIServiceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetCloudStorageAIServiceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetCloudStorageEventResponse> ResetCloudStorageEventOutcome;
                typedef std::future<ResetCloudStorageEventOutcome> ResetCloudStorageEventOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ResetCloudStorageEventRequest&, ResetCloudStorageEventOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetCloudStorageEventAsyncHandler;
                typedef Outcome<Core::Error, Model::ResetTWeCallDeviceResponse> ResetTWeCallDeviceOutcome;
                typedef std::future<ResetTWeCallDeviceOutcome> ResetTWeCallDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ResetTWeCallDeviceRequest&, ResetTWeCallDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResetTWeCallDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::ResumeWeCallDeviceResponse> ResumeWeCallDeviceOutcome;
                typedef std::future<ResumeWeCallDeviceOutcome> ResumeWeCallDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::ResumeWeCallDeviceRequest&, ResumeWeCallDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ResumeWeCallDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchPositionSpaceResponse> SearchPositionSpaceOutcome;
                typedef std::future<SearchPositionSpaceOutcome> SearchPositionSpaceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchPositionSpaceRequest&, SearchPositionSpaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchPositionSpaceAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchStudioProductResponse> SearchStudioProductOutcome;
                typedef std::future<SearchStudioProductOutcome> SearchStudioProductOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchStudioProductRequest&, SearchStudioProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchStudioProductAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchTopicRuleResponse> SearchTopicRuleOutcome;
                typedef std::future<SearchTopicRuleOutcome> SearchTopicRuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::SearchTopicRuleRequest&, SearchTopicRuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchTopicRuleAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferCloudStorageResponse> TransferCloudStorageOutcome;
                typedef std::future<TransferCloudStorageOutcome> TransferCloudStorageOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::TransferCloudStorageRequest&, TransferCloudStorageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferCloudStorageAsyncHandler;
                typedef Outcome<Core::Error, Model::TransferTWeCallDeviceResponse> TransferTWeCallDeviceOutcome;
                typedef std::future<TransferTWeCallDeviceOutcome> TransferTWeCallDeviceOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::TransferTWeCallDeviceRequest&, TransferTWeCallDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TransferTWeCallDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindDevicesResponse> UnbindDevicesOutcome;
                typedef std::future<UnbindDevicesOutcome> UnbindDevicesOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UnbindDevicesRequest&, UnbindDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindProductsResponse> UnbindProductsOutcome;
                typedef std::future<UnbindProductsOutcome> UnbindProductsOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UnbindProductsRequest&, UnbindProductsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindProductsAsyncHandler;
                typedef Outcome<Core::Error, Model::UnbindTWeTalkAIBotResponse> UnbindTWeTalkAIBotOutcome;
                typedef std::future<UnbindTWeTalkAIBotOutcome> UnbindTWeTalkAIBotOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UnbindTWeTalkAIBotRequest&, UnbindTWeTalkAIBotOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UnbindTWeTalkAIBotAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceTWeCallAuthorizeStatusResponse> UpdateDeviceTWeCallAuthorizeStatusOutcome;
                typedef std::future<UpdateDeviceTWeCallAuthorizeStatusOutcome> UpdateDeviceTWeCallAuthorizeStatusOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateDeviceTWeCallAuthorizeStatusRequest&, UpdateDeviceTWeCallAuthorizeStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceTWeCallAuthorizeStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDevicesEnableStateResponse> UpdateDevicesEnableStateOutcome;
                typedef std::future<UpdateDevicesEnableStateOutcome> UpdateDevicesEnableStateOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateDevicesEnableStateRequest&, UpdateDevicesEnableStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDevicesEnableStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateFirmwareResponse> UpdateFirmwareOutcome;
                typedef std::future<UpdateFirmwareOutcome> UpdateFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateFirmwareRequest&, UpdateFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateFirmwareAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOtaModuleResponse> UpdateOtaModuleOutcome;
                typedef std::future<UpdateOtaModuleOutcome> UpdateOtaModuleOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateOtaModuleRequest&, UpdateOtaModuleOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOtaModuleAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateOtaTaskStatusResponse> UpdateOtaTaskStatusOutcome;
                typedef std::future<UpdateOtaTaskStatusOutcome> UpdateOtaTaskStatusOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UpdateOtaTaskStatusRequest&, UpdateOtaTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateOtaTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadFirmwareResponse> UploadFirmwareOutcome;
                typedef std::future<UploadFirmwareOutcome> UploadFirmwareOutcomeCallable;
                typedef std::function<void(const IotexplorerClient*, const Model::UploadFirmwareRequest&, UploadFirmwareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadFirmwareAsyncHandler;



                /**
                 *激活
                 * @param req ActivateTWeCallLicenseRequest
                 * @return ActivateTWeCallLicenseOutcome
                 */
                ActivateTWeCallLicenseOutcome ActivateTWeCallLicense(const Model::ActivateTWeCallLicenseRequest &request);
                void ActivateTWeCallLicenseAsync(const Model::ActivateTWeCallLicenseRequest& request, const ActivateTWeCallLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ActivateTWeCallLicenseOutcomeCallable ActivateTWeCallLicenseCallable(const Model::ActivateTWeCallLicenseRequest& request);

                /**
                 *批量同步执行 TWeSee 语义理解任务
                 * @param req BatchCreateTWeSeeRecognitionTaskRequest
                 * @return BatchCreateTWeSeeRecognitionTaskOutcome
                 */
                BatchCreateTWeSeeRecognitionTaskOutcome BatchCreateTWeSeeRecognitionTask(const Model::BatchCreateTWeSeeRecognitionTaskRequest &request);
                void BatchCreateTWeSeeRecognitionTaskAsync(const Model::BatchCreateTWeSeeRecognitionTaskRequest& request, const BatchCreateTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchCreateTWeSeeRecognitionTaskOutcomeCallable BatchCreateTWeSeeRecognitionTaskCallable(const Model::BatchCreateTWeSeeRecognitionTaskRequest& request);

                /**
                 *批量同步执行 TWeSee 语义理解任务
                 * @param req BatchInvokeTWeSeeRecognitionTaskRequest
                 * @return BatchInvokeTWeSeeRecognitionTaskOutcome
                 */
                BatchInvokeTWeSeeRecognitionTaskOutcome BatchInvokeTWeSeeRecognitionTask(const Model::BatchInvokeTWeSeeRecognitionTaskRequest &request);
                void BatchInvokeTWeSeeRecognitionTaskAsync(const Model::BatchInvokeTWeSeeRecognitionTaskRequest& request, const BatchInvokeTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchInvokeTWeSeeRecognitionTaskOutcomeCallable BatchInvokeTWeSeeRecognitionTaskCallable(const Model::BatchInvokeTWeSeeRecognitionTaskRequest& request);

                /**
                 *本接口（BatchUpdateFirmware）用于批量更新设备固件
                 * @param req BatchUpdateFirmwareRequest
                 * @return BatchUpdateFirmwareOutcome
                 */
                BatchUpdateFirmwareOutcome BatchUpdateFirmware(const Model::BatchUpdateFirmwareRequest &request);
                void BatchUpdateFirmwareAsync(const Model::BatchUpdateFirmwareRequest& request, const BatchUpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BatchUpdateFirmwareOutcomeCallable BatchUpdateFirmwareCallable(const Model::BatchUpdateFirmwareRequest& request);

                /**
                 *绑定云存用户
                 * @param req BindCloudStorageUserRequest
                 * @return BindCloudStorageUserOutcome
                 */
                BindCloudStorageUserOutcome BindCloudStorageUser(const Model::BindCloudStorageUserRequest &request);
                void BindCloudStorageUserAsync(const Model::BindCloudStorageUserRequest& request, const BindCloudStorageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindCloudStorageUserOutcomeCallable BindCloudStorageUserCallable(const Model::BindCloudStorageUserRequest& request);

                /**
                 *批量绑定子设备
                 * @param req BindDevicesRequest
                 * @return BindDevicesOutcome
                 */
                BindDevicesOutcome BindDevices(const Model::BindDevicesRequest &request);
                void BindDevicesAsync(const Model::BindDevicesRequest& request, const BindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindDevicesOutcomeCallable BindDevicesCallable(const Model::BindDevicesRequest& request);

                /**
                 *批量绑定子产品。
                 * @param req BindProductsRequest
                 * @return BindProductsOutcome
                 */
                BindProductsOutcome BindProducts(const Model::BindProductsRequest &request);
                void BindProductsAsync(const Model::BindProductsRequest& request, const BindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindProductsOutcomeCallable BindProductsCallable(const Model::BindProductsRequest& request);

                /**
                 *用于绑定一个产品和智能体。
                 * @param req BindTWeTalkAIBotRequest
                 * @return BindTWeTalkAIBotOutcome
                 */
                BindTWeTalkAIBotOutcome BindTWeTalkAIBot(const Model::BindTWeTalkAIBotRequest &request);
                void BindTWeTalkAIBotAsync(const Model::BindTWeTalkAIBotRequest& request, const BindTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BindTWeTalkAIBotOutcomeCallable BindTWeTalkAIBotCallable(const Model::BindTWeTalkAIBotRequest& request);

                /**
                 *提供给用户异步调用设备行为的能力
                 * @param req CallDeviceActionAsyncRequest
                 * @return CallDeviceActionAsyncOutcome
                 */
                CallDeviceActionAsyncOutcome CallDeviceActionAsync(const Model::CallDeviceActionAsyncRequest &request);
                void CallDeviceActionAsyncAsync(const Model::CallDeviceActionAsyncRequest& request, const CallDeviceActionAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallDeviceActionAsyncOutcomeCallable CallDeviceActionAsyncCallable(const Model::CallDeviceActionAsyncRequest& request);

                /**
                 *为用户提供同步调用设备行为的能力。
                 * @param req CallDeviceActionSyncRequest
                 * @return CallDeviceActionSyncOutcome
                 */
                CallDeviceActionSyncOutcome CallDeviceActionSync(const Model::CallDeviceActionSyncRequest &request);
                void CallDeviceActionSyncAsync(const Model::CallDeviceActionSyncRequest& request, const CallDeviceActionSyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CallDeviceActionSyncOutcomeCallable CallDeviceActionSyncCallable(const Model::CallDeviceActionSyncRequest& request);

                /**
                 *p2p路线切换（此接口目前处于内测接口，可以联系申请加白 ）
                 * @param req ChangeP2PRouteRequest
                 * @return ChangeP2PRouteOutcome
                 */
                ChangeP2PRouteOutcome ChangeP2PRoute(const Model::ChangeP2PRouteRequest &request);
                void ChangeP2PRouteAsync(const Model::ChangeP2PRouteRequest& request, const ChangeP2PRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeP2PRouteOutcomeCallable ChangeP2PRouteCallable(const Model::ChangeP2PRouteRequest& request);

                /**
                 *本接口（CheckFirmwareUpdate）用于查询设备可升级固件版本
                 * @param req CheckFirmwareUpdateRequest
                 * @return CheckFirmwareUpdateOutcome
                 */
                CheckFirmwareUpdateOutcome CheckFirmwareUpdate(const Model::CheckFirmwareUpdateRequest &request);
                void CheckFirmwareUpdateAsync(const Model::CheckFirmwareUpdateRequest& request, const CheckFirmwareUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CheckFirmwareUpdateOutcomeCallable CheckFirmwareUpdateCallable(const Model::CheckFirmwareUpdateRequest& request);

                /**
                 *根据设备产品ID、设备名称，设置控制设备的属性数据。
                 * @param req ControlDeviceDataRequest
                 * @return ControlDeviceDataOutcome
                 */
                ControlDeviceDataOutcome ControlDeviceData(const Model::ControlDeviceDataRequest &request);
                void ControlDeviceDataAsync(const Model::ControlDeviceDataRequest& request, const ControlDeviceDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ControlDeviceDataOutcomeCallable ControlDeviceDataCallable(const Model::ControlDeviceDataRequest& request);

                /**
                 *创建视频语义异步搜索任务
                 * @param req CreateAISearchTaskAsyncRequest
                 * @return CreateAISearchTaskAsyncOutcome
                 */
                CreateAISearchTaskAsyncOutcome CreateAISearchTaskAsync(const Model::CreateAISearchTaskAsyncRequest &request);
                void CreateAISearchTaskAsyncAsync(const Model::CreateAISearchTaskAsyncRequest& request, const CreateAISearchTaskAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAISearchTaskAsyncOutcomeCallable CreateAISearchTaskAsyncCallable(const Model::CreateAISearchTaskAsyncRequest& request);

                /**
                 *用于新建批量生产设备
                 * @param req CreateBatchProductionRequest
                 * @return CreateBatchProductionOutcome
                 */
                CreateBatchProductionOutcome CreateBatchProduction(const Model::CreateBatchProductionRequest &request);
                void CreateBatchProductionAsync(const Model::CreateBatchProductionRequest& request, const CreateBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateBatchProductionOutcomeCallable CreateBatchProductionCallable(const Model::CreateBatchProductionRequest& request);

                /**
                 *开通设备云存AI分析服务
                 * @param req CreateCloudStorageAIServiceRequest
                 * @return CreateCloudStorageAIServiceOutcome
                 */
                CreateCloudStorageAIServiceOutcome CreateCloudStorageAIService(const Model::CreateCloudStorageAIServiceRequest &request);
                void CreateCloudStorageAIServiceAsync(const Model::CreateCloudStorageAIServiceRequest& request, const CreateCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudStorageAIServiceOutcomeCallable CreateCloudStorageAIServiceCallable(const Model::CreateCloudStorageAIServiceRequest& request);

                /**
                 *创建设备云存 AI 分析任务
                 * @param req CreateCloudStorageAIServiceTaskRequest
                 * @return CreateCloudStorageAIServiceTaskOutcome
                 */
                CreateCloudStorageAIServiceTaskOutcome CreateCloudStorageAIServiceTask(const Model::CreateCloudStorageAIServiceTaskRequest &request);
                void CreateCloudStorageAIServiceTaskAsync(const Model::CreateCloudStorageAIServiceTaskRequest& request, const CreateCloudStorageAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCloudStorageAIServiceTaskOutcomeCallable CreateCloudStorageAIServiceTaskCallable(const Model::CreateCloudStorageAIServiceTaskRequest& request);

                /**
                 *创建设备
                 * @param req CreateDeviceRequest
                 * @return CreateDeviceOutcome
                 */
                CreateDeviceOutcome CreateDevice(const Model::CreateDeviceRequest &request);
                void CreateDeviceAsync(const Model::CreateDeviceRequest& request, const CreateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceOutcomeCallable CreateDeviceCallable(const Model::CreateDeviceRequest& request);

                /**
                 *创建设备通道
                 * @param req CreateDeviceChannelRequest
                 * @return CreateDeviceChannelOutcome
                 */
                CreateDeviceChannelOutcome CreateDeviceChannel(const Model::CreateDeviceChannelRequest &request);
                void CreateDeviceChannelAsync(const Model::CreateDeviceChannelRequest& request, const CreateDeviceChannelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceChannelOutcomeCallable CreateDeviceChannelCallable(const Model::CreateDeviceChannelRequest& request);

                /**
                 *创建设备SDP应答
                 * @param req CreateDeviceSDPAnswerRequest
                 * @return CreateDeviceSDPAnswerOutcome
                 */
                CreateDeviceSDPAnswerOutcome CreateDeviceSDPAnswer(const Model::CreateDeviceSDPAnswerRequest &request);
                void CreateDeviceSDPAnswerAsync(const Model::CreateDeviceSDPAnswerRequest& request, const CreateDeviceSDPAnswerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceSDPAnswerOutcomeCallable CreateDeviceSDPAnswerCallable(const Model::CreateDeviceSDPAnswerRequest& request);

                /**
                 *创建外部视频 AI 分析任务
                 * @param req CreateExternalSourceAIServiceTaskRequest
                 * @return CreateExternalSourceAIServiceTaskOutcome
                 */
                CreateExternalSourceAIServiceTaskOutcome CreateExternalSourceAIServiceTask(const Model::CreateExternalSourceAIServiceTaskRequest &request);
                void CreateExternalSourceAIServiceTaskAsync(const Model::CreateExternalSourceAIServiceTaskRequest& request, const CreateExternalSourceAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateExternalSourceAIServiceTaskOutcomeCallable CreateExternalSourceAIServiceTaskCallable(const Model::CreateExternalSourceAIServiceTaskRequest& request);

                /**
                 *> 创建围栏绑定信息。
                 * @param req CreateFenceBindRequest
                 * @return CreateFenceBindOutcome
                 */
                CreateFenceBindOutcome CreateFenceBind(const Model::CreateFenceBindRequest &request);
                void CreateFenceBindAsync(const Model::CreateFenceBindRequest& request, const CreateFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFenceBindOutcomeCallable CreateFenceBindCallable(const Model::CreateFenceBindRequest& request);

                /**
                 *开通云存卡服务
                 * @param req CreateFreeCloudStorageRequest
                 * @return CreateFreeCloudStorageOutcome
                 */
                CreateFreeCloudStorageOutcome CreateFreeCloudStorage(const Model::CreateFreeCloudStorageRequest &request);
                void CreateFreeCloudStorageAsync(const Model::CreateFreeCloudStorageRequest& request, const CreateFreeCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFreeCloudStorageOutcomeCallable CreateFreeCloudStorageCallable(const Model::CreateFreeCloudStorageRequest& request);

                /**
                 *开通云存服务
                 * @param req CreateIotVideoCloudStorageRequest
                 * @return CreateIotVideoCloudStorageOutcome
                 */
                CreateIotVideoCloudStorageOutcome CreateIotVideoCloudStorage(const Model::CreateIotVideoCloudStorageRequest &request);
                void CreateIotVideoCloudStorageAsync(const Model::CreateIotVideoCloudStorageRequest& request, const CreateIotVideoCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateIotVideoCloudStorageOutcomeCallable CreateIotVideoCloudStorageCallable(const Model::CreateIotVideoCloudStorageRequest& request);

                /**
                 *创建 LoRa 自定义频点
                 * @param req CreateLoRaFrequencyRequest
                 * @return CreateLoRaFrequencyOutcome
                 */
                CreateLoRaFrequencyOutcome CreateLoRaFrequency(const Model::CreateLoRaFrequencyRequest &request);
                void CreateLoRaFrequencyAsync(const Model::CreateLoRaFrequencyRequest& request, const CreateLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoRaFrequencyOutcomeCallable CreateLoRaFrequencyCallable(const Model::CreateLoRaFrequencyRequest& request);

                /**
                 *创建新 LoRa 网关设备接口
                 * @param req CreateLoRaGatewayRequest
                 * @return CreateLoRaGatewayOutcome
                 */
                CreateLoRaGatewayOutcome CreateLoRaGateway(const Model::CreateLoRaGatewayRequest &request);
                void CreateLoRaGatewayAsync(const Model::CreateLoRaGatewayRequest& request, const CreateLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateLoRaGatewayOutcomeCallable CreateLoRaGatewayCallable(const Model::CreateLoRaGatewayRequest& request);

                /**
                 *本接口（CreateOtaModule）用于新建OTA模块
                 * @param req CreateOtaModuleRequest
                 * @return CreateOtaModuleOutcome
                 */
                CreateOtaModuleOutcome CreateOtaModule(const Model::CreateOtaModuleRequest &request);
                void CreateOtaModuleAsync(const Model::CreateOtaModuleRequest& request, const CreateOtaModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateOtaModuleOutcomeCallable CreateOtaModuleCallable(const Model::CreateOtaModuleRequest& request);

                /**
                 *创建围栏。
                 * @param req CreatePositionFenceRequest
                 * @return CreatePositionFenceOutcome
                 */
                CreatePositionFenceOutcome CreatePositionFence(const Model::CreatePositionFenceRequest &request);
                void CreatePositionFenceAsync(const Model::CreatePositionFenceRequest& request, const CreatePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePositionFenceOutcomeCallable CreatePositionFenceCallable(const Model::CreatePositionFenceRequest& request);

                /**
                 *创建位置空间。
                 * @param req CreatePositionSpaceRequest
                 * @return CreatePositionSpaceOutcome
                 */
                CreatePositionSpaceOutcome CreatePositionSpace(const Model::CreatePositionSpaceRequest &request);
                void CreatePositionSpaceAsync(const Model::CreatePositionSpaceRequest& request, const CreatePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePositionSpaceOutcomeCallable CreatePositionSpaceCallable(const Model::CreatePositionSpaceRequest& request);

                /**
                 *为用户提供新建项目的能力，用于集中管理产品和应用。
                 * @param req CreateProjectRequest
                 * @return CreateProjectOutcome
                 */
                CreateProjectOutcome CreateProject(const Model::CreateProjectRequest &request);
                void CreateProjectAsync(const Model::CreateProjectRequest& request, const CreateProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateProjectOutcomeCallable CreateProjectCallable(const Model::CreateProjectRequest& request);

                /**
                 *为用户提供新建产品的能力，用于管理用户的设备
                 * @param req CreateStudioProductRequest
                 * @return CreateStudioProductOutcome
                 */
                CreateStudioProductOutcome CreateStudioProduct(const Model::CreateStudioProductRequest &request);
                void CreateStudioProductAsync(const Model::CreateStudioProductRequest& request, const CreateStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateStudioProductOutcomeCallable CreateStudioProductCallable(const Model::CreateStudioProductRequest& request);

                /**
                 *创建TRTC通话参数
                 * @param req CreateTRTCSignaturesWithRoomIdRequest
                 * @return CreateTRTCSignaturesWithRoomIdOutcome
                 */
                CreateTRTCSignaturesWithRoomIdOutcome CreateTRTCSignaturesWithRoomId(const Model::CreateTRTCSignaturesWithRoomIdRequest &request);
                void CreateTRTCSignaturesWithRoomIdAsync(const Model::CreateTRTCSignaturesWithRoomIdRequest& request, const CreateTRTCSignaturesWithRoomIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTRTCSignaturesWithRoomIdOutcomeCallable CreateTRTCSignaturesWithRoomIdCallable(const Model::CreateTRTCSignaturesWithRoomIdRequest& request);

                /**
                 *创建 TWeSee 语义理解任务
                 * @param req CreateTWeSeeRecognitionTaskRequest
                 * @return CreateTWeSeeRecognitionTaskOutcome
                 */
                CreateTWeSeeRecognitionTaskOutcome CreateTWeSeeRecognitionTask(const Model::CreateTWeSeeRecognitionTaskRequest &request);
                void CreateTWeSeeRecognitionTaskAsync(const Model::CreateTWeSeeRecognitionTaskRequest& request, const CreateTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTWeSeeRecognitionTaskOutcomeCallable CreateTWeSeeRecognitionTaskCallable(const Model::CreateTWeSeeRecognitionTaskRequest& request);

                /**
                 *同步执行 TWeSee 语义理解任务
                 * @param req CreateTWeSeeRecognitionTaskWithFileRequest
                 * @return CreateTWeSeeRecognitionTaskWithFileOutcome
                 */
                CreateTWeSeeRecognitionTaskWithFileOutcome CreateTWeSeeRecognitionTaskWithFile(const Model::CreateTWeSeeRecognitionTaskWithFileRequest &request);
                void CreateTWeSeeRecognitionTaskWithFileAsync(const Model::CreateTWeSeeRecognitionTaskWithFileRequest& request, const CreateTWeSeeRecognitionTaskWithFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTWeSeeRecognitionTaskWithFileOutcomeCallable CreateTWeSeeRecognitionTaskWithFileCallable(const Model::CreateTWeSeeRecognitionTaskWithFileRequest& request);

                /**
                 *开通 TWeSee 后付费服务
                 * @param req CreateTWeSeeServiceRequest
                 * @return CreateTWeSeeServiceOutcome
                 */
                CreateTWeSeeServiceOutcome CreateTWeSeeService(const Model::CreateTWeSeeServiceRequest &request);
                void CreateTWeSeeServiceAsync(const Model::CreateTWeSeeServiceRequest& request, const CreateTWeSeeServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTWeSeeServiceOutcomeCallable CreateTWeSeeServiceCallable(const Model::CreateTWeSeeServiceRequest& request);

                /**
                 *用于新增TWeTalk智能体。
                 * @param req CreateTWeTalkAIBotRequest
                 * @return CreateTWeTalkAIBotOutcome
                 */
                CreateTWeTalkAIBotOutcome CreateTWeTalkAIBot(const Model::CreateTWeTalkAIBotRequest &request);
                void CreateTWeTalkAIBotAsync(const Model::CreateTWeTalkAIBotRequest& request, const CreateTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTWeTalkAIBotOutcomeCallable CreateTWeTalkAIBotCallable(const Model::CreateTWeTalkAIBotRequest& request);

                /**
                 *用于配置TWeTalk服务连接产品配置信息。
                 * @param req CreateTWeTalkProductConfigRequest
                 * @return CreateTWeTalkProductConfigOutcome
                 */
                CreateTWeTalkProductConfigOutcome CreateTWeTalkProductConfig(const Model::CreateTWeTalkProductConfigRequest &request);
                void CreateTWeTalkProductConfigAsync(const Model::CreateTWeTalkProductConfigRequest& request, const CreateTWeTalkProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTWeTalkProductConfigOutcomeCallable CreateTWeTalkProductConfigCallable(const Model::CreateTWeTalkProductConfigRequest& request);

                /**
                 *用于配置TWeTalk服务连接产品配置信息。
                 * @param req CreateTWeTalkProductConfigV2Request
                 * @return CreateTWeTalkProductConfigV2Outcome
                 */
                CreateTWeTalkProductConfigV2Outcome CreateTWeTalkProductConfigV2(const Model::CreateTWeTalkProductConfigV2Request &request);
                void CreateTWeTalkProductConfigV2Async(const Model::CreateTWeTalkProductConfigV2Request& request, const CreateTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTWeTalkProductConfigV2OutcomeCallable CreateTWeTalkProductConfigV2Callable(const Model::CreateTWeTalkProductConfigV2Request& request);

                /**
                 *本接口（CreateTopicPolicy）用于创建一个Topic
                 * @param req CreateTopicPolicyRequest
                 * @return CreateTopicPolicyOutcome
                 */
                CreateTopicPolicyOutcome CreateTopicPolicy(const Model::CreateTopicPolicyRequest &request);
                void CreateTopicPolicyAsync(const Model::CreateTopicPolicyRequest& request, const CreateTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicPolicyOutcomeCallable CreateTopicPolicyCallable(const Model::CreateTopicPolicyRequest& request);

                /**
                 *创建规则
                 * @param req CreateTopicRuleRequest
                 * @return CreateTopicRuleOutcome
                 */
                CreateTopicRuleOutcome CreateTopicRule(const Model::CreateTopicRuleRequest &request);
                void CreateTopicRuleAsync(const Model::CreateTopicRuleRequest& request, const CreateTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateTopicRuleOutcomeCallable CreateTopicRuleCallable(const Model::CreateTopicRuleRequest& request);

                /**
                 *删除云存事件
                 * @param req DeleteCloudStorageEventRequest
                 * @return DeleteCloudStorageEventOutcome
                 */
                DeleteCloudStorageEventOutcome DeleteCloudStorageEvent(const Model::DeleteCloudStorageEventRequest &request);
                void DeleteCloudStorageEventAsync(const Model::DeleteCloudStorageEventRequest& request, const DeleteCloudStorageEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCloudStorageEventOutcomeCallable DeleteCloudStorageEventCallable(const Model::DeleteCloudStorageEventRequest& request);

                /**
                 *删除设备
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *批量删除设备
                 * @param req DeleteDevicesRequest
                 * @return DeleteDevicesOutcome
                 */
                DeleteDevicesOutcome DeleteDevices(const Model::DeleteDevicesRequest &request);
                void DeleteDevicesAsync(const Model::DeleteDevicesRequest& request, const DeleteDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDevicesOutcomeCallable DeleteDevicesCallable(const Model::DeleteDevicesRequest& request);

                /**
                 *删除围栏绑定信息。
                 * @param req DeleteFenceBindRequest
                 * @return DeleteFenceBindOutcome
                 */
                DeleteFenceBindOutcome DeleteFenceBind(const Model::DeleteFenceBindRequest &request);
                void DeleteFenceBindAsync(const Model::DeleteFenceBindRequest& request, const DeleteFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFenceBindOutcomeCallable DeleteFenceBindCallable(const Model::DeleteFenceBindRequest& request);

                /**
                 *提供删除LoRa自定义频点的能力
                 * @param req DeleteLoRaFrequencyRequest
                 * @return DeleteLoRaFrequencyOutcome
                 */
                DeleteLoRaFrequencyOutcome DeleteLoRaFrequency(const Model::DeleteLoRaFrequencyRequest &request);
                void DeleteLoRaFrequencyAsync(const Model::DeleteLoRaFrequencyRequest& request, const DeleteLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoRaFrequencyOutcomeCallable DeleteLoRaFrequencyCallable(const Model::DeleteLoRaFrequencyRequest& request);

                /**
                 *删除  LoRa 网关的接口
                 * @param req DeleteLoRaGatewayRequest
                 * @return DeleteLoRaGatewayOutcome
                 */
                DeleteLoRaGatewayOutcome DeleteLoRaGateway(const Model::DeleteLoRaGatewayRequest &request);
                void DeleteLoRaGatewayAsync(const Model::DeleteLoRaGatewayRequest& request, const DeleteLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteLoRaGatewayOutcomeCallable DeleteLoRaGatewayCallable(const Model::DeleteLoRaGatewayRequest& request);

                /**
                 *本接口（DeleteOtaModule）用于删除OTA模块
                 * @param req DeleteOtaModuleRequest
                 * @return DeleteOtaModuleOutcome
                 */
                DeleteOtaModuleOutcome DeleteOtaModule(const Model::DeleteOtaModuleRequest &request);
                void DeleteOtaModuleAsync(const Model::DeleteOtaModuleRequest& request, const DeleteOtaModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteOtaModuleOutcomeCallable DeleteOtaModuleCallable(const Model::DeleteOtaModuleRequest& request);

                /**
                 *删除围栏。
                 * @param req DeletePositionFenceRequest
                 * @return DeletePositionFenceOutcome
                 */
                DeletePositionFenceOutcome DeletePositionFence(const Model::DeletePositionFenceRequest &request);
                void DeletePositionFenceAsync(const Model::DeletePositionFenceRequest& request, const DeletePositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePositionFenceOutcomeCallable DeletePositionFenceCallable(const Model::DeletePositionFenceRequest& request);

                /**
                 *删除位置空间。
                 * @param req DeletePositionSpaceRequest
                 * @return DeletePositionSpaceOutcome
                 */
                DeletePositionSpaceOutcome DeletePositionSpace(const Model::DeletePositionSpaceRequest &request);
                void DeletePositionSpaceAsync(const Model::DeletePositionSpaceRequest& request, const DeletePositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePositionSpaceOutcomeCallable DeletePositionSpaceCallable(const Model::DeletePositionSpaceRequest& request);

                /**
                 *提供删除某个项目的能力。
                 * @param req DeleteProjectRequest
                 * @return DeleteProjectOutcome
                 */
                DeleteProjectOutcome DeleteProject(const Model::DeleteProjectRequest &request);
                void DeleteProjectAsync(const Model::DeleteProjectRequest& request, const DeleteProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteProjectOutcomeCallable DeleteProjectCallable(const Model::DeleteProjectRequest& request);

                /**
                 *提供删除某个项目下产品的能力
                 * @param req DeleteStudioProductRequest
                 * @return DeleteStudioProductOutcome
                 */
                DeleteStudioProductOutcome DeleteStudioProduct(const Model::DeleteStudioProductRequest &request);
                void DeleteStudioProductAsync(const Model::DeleteStudioProductRequest& request, const DeleteStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteStudioProductOutcomeCallable DeleteStudioProductCallable(const Model::DeleteStudioProductRequest& request);

                /**
                 *用于删除TWeTalk智能体。
                 * @param req DeleteTWeTalkAIBotRequest
                 * @return DeleteTWeTalkAIBotOutcome
                 */
                DeleteTWeTalkAIBotOutcome DeleteTWeTalkAIBot(const Model::DeleteTWeTalkAIBotRequest &request);
                void DeleteTWeTalkAIBotAsync(const Model::DeleteTWeTalkAIBotRequest& request, const DeleteTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTWeTalkAIBotOutcomeCallable DeleteTWeTalkAIBotCallable(const Model::DeleteTWeTalkAIBotRequest& request);

                /**
                 *用于删除配置TWeTalk服务连接产品配置信息。
                 * @param req DeleteTWeTalkProductConfigV2Request
                 * @return DeleteTWeTalkProductConfigV2Outcome
                 */
                DeleteTWeTalkProductConfigV2Outcome DeleteTWeTalkProductConfigV2(const Model::DeleteTWeTalkProductConfigV2Request &request);
                void DeleteTWeTalkProductConfigV2Async(const Model::DeleteTWeTalkProductConfigV2Request& request, const DeleteTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTWeTalkProductConfigV2OutcomeCallable DeleteTWeTalkProductConfigV2Callable(const Model::DeleteTWeTalkProductConfigV2Request& request);

                /**
                 *本接口（DeleteTopicPolicy）用于删除Topic
                 * @param req DeleteTopicPolicyRequest
                 * @return DeleteTopicPolicyOutcome
                 */
                DeleteTopicPolicyOutcome DeleteTopicPolicy(const Model::DeleteTopicPolicyRequest &request);
                void DeleteTopicPolicyAsync(const Model::DeleteTopicPolicyRequest& request, const DeleteTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicPolicyOutcomeCallable DeleteTopicPolicyCallable(const Model::DeleteTopicPolicyRequest& request);

                /**
                 *删除规则。
                 * @param req DeleteTopicRuleRequest
                 * @return DeleteTopicRuleOutcome
                 */
                DeleteTopicRuleOutcome DeleteTopicRule(const Model::DeleteTopicRuleRequest &request);
                void DeleteTopicRuleAsync(const Model::DeleteTopicRuleRequest& request, const DeleteTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteTopicRuleOutcomeCallable DeleteTopicRuleCallable(const Model::DeleteTopicRuleRequest& request);

                /**
                 *获取视频语义异步搜索任务详情
                 * @param req DescribeAISearchTaskAsyncRequest
                 * @return DescribeAISearchTaskAsyncOutcome
                 */
                DescribeAISearchTaskAsyncOutcome DescribeAISearchTaskAsync(const Model::DescribeAISearchTaskAsyncRequest &request);
                void DescribeAISearchTaskAsyncAsync(const Model::DescribeAISearchTaskAsyncRequest& request, const DescribeAISearchTaskAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAISearchTaskAsyncOutcomeCallable DescribeAISearchTaskAsyncCallable(const Model::DescribeAISearchTaskAsyncRequest& request);

                /**
                 *获取设备激活详情
                 * @param req DescribeActivateDeviceRequest
                 * @return DescribeActivateDeviceOutcome
                 */
                DescribeActivateDeviceOutcome DescribeActivateDevice(const Model::DescribeActivateDeviceRequest &request);
                void DescribeActivateDeviceAsync(const Model::DescribeActivateDeviceRequest& request, const DescribeActivateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActivateDeviceOutcomeCallable DescribeActivateDeviceCallable(const Model::DescribeActivateDeviceRequest& request);

                /**
                 *获取增值服务激活码详情
                 * @param req DescribeActivateLicenseServiceRequest
                 * @return DescribeActivateLicenseServiceOutcome
                 */
                DescribeActivateLicenseServiceOutcome DescribeActivateLicenseService(const Model::DescribeActivateLicenseServiceRequest &request);
                void DescribeActivateLicenseServiceAsync(const Model::DescribeActivateLicenseServiceRequest& request, const DescribeActivateLicenseServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeActivateLicenseServiceOutcomeCallable DescribeActivateLicenseServiceCallable(const Model::DescribeActivateLicenseServiceRequest& request);

                /**
                 *获取量产详情信息。
                 * @param req DescribeBatchProductionRequest
                 * @return DescribeBatchProductionOutcome
                 */
                DescribeBatchProductionOutcome DescribeBatchProduction(const Model::DescribeBatchProductionRequest &request);
                void DescribeBatchProductionAsync(const Model::DescribeBatchProductionRequest& request, const DescribeBatchProductionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBatchProductionOutcomeCallable DescribeBatchProductionCallable(const Model::DescribeBatchProductionRequest& request);

                /**
                 *获取网关产品已经绑定的子产品
                 * @param req DescribeBindedProductsRequest
                 * @return DescribeBindedProductsOutcome
                 */
                DescribeBindedProductsOutcome DescribeBindedProducts(const Model::DescribeBindedProductsRequest &request);
                void DescribeBindedProductsAsync(const Model::DescribeBindedProductsRequest& request, const DescribeBindedProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeBindedProductsOutcomeCallable DescribeBindedProductsCallable(const Model::DescribeBindedProductsRequest& request);

                /**
                 *获取设备云存服务详情
                 * @param req DescribeCloudStorageRequest
                 * @return DescribeCloudStorageOutcome
                 */
                DescribeCloudStorageOutcome DescribeCloudStorage(const Model::DescribeCloudStorageRequest &request);
                void DescribeCloudStorageAsync(const Model::DescribeCloudStorageRequest& request, const DescribeCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageOutcomeCallable DescribeCloudStorageCallable(const Model::DescribeCloudStorageRequest& request);

                /**
                 *查询指定设备的云存 AI 服务开通状态与参数配置
                 * @param req DescribeCloudStorageAIServiceRequest
                 * @return DescribeCloudStorageAIServiceOutcome
                 */
                DescribeCloudStorageAIServiceOutcome DescribeCloudStorageAIService(const Model::DescribeCloudStorageAIServiceRequest &request);
                void DescribeCloudStorageAIServiceAsync(const Model::DescribeCloudStorageAIServiceRequest& request, const DescribeCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageAIServiceOutcomeCallable DescribeCloudStorageAIServiceCallable(const Model::DescribeCloudStorageAIServiceRequest& request);

                /**
                 *查询云存AI分析回调配置
                 * @param req DescribeCloudStorageAIServiceCallbackRequest
                 * @return DescribeCloudStorageAIServiceCallbackOutcome
                 */
                DescribeCloudStorageAIServiceCallbackOutcome DescribeCloudStorageAIServiceCallback(const Model::DescribeCloudStorageAIServiceCallbackRequest &request);
                void DescribeCloudStorageAIServiceCallbackAsync(const Model::DescribeCloudStorageAIServiceCallbackRequest& request, const DescribeCloudStorageAIServiceCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageAIServiceCallbackOutcomeCallable DescribeCloudStorageAIServiceCallbackCallable(const Model::DescribeCloudStorageAIServiceCallbackRequest& request);

                /**
                 *查询指定的云存 AI 分析任务
                 * @param req DescribeCloudStorageAIServiceTaskRequest
                 * @return DescribeCloudStorageAIServiceTaskOutcome
                 */
                DescribeCloudStorageAIServiceTaskOutcome DescribeCloudStorageAIServiceTask(const Model::DescribeCloudStorageAIServiceTaskRequest &request);
                void DescribeCloudStorageAIServiceTaskAsync(const Model::DescribeCloudStorageAIServiceTaskRequest& request, const DescribeCloudStorageAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageAIServiceTaskOutcomeCallable DescribeCloudStorageAIServiceTaskCallable(const Model::DescribeCloudStorageAIServiceTaskRequest& request);

                /**
                 *查询指定设备的云存 AI 分析任务列表
                 * @param req DescribeCloudStorageAIServiceTasksRequest
                 * @return DescribeCloudStorageAIServiceTasksOutcome
                 */
                DescribeCloudStorageAIServiceTasksOutcome DescribeCloudStorageAIServiceTasks(const Model::DescribeCloudStorageAIServiceTasksRequest &request);
                void DescribeCloudStorageAIServiceTasksAsync(const Model::DescribeCloudStorageAIServiceTasksRequest& request, const DescribeCloudStorageAIServiceTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageAIServiceTasksOutcomeCallable DescribeCloudStorageAIServiceTasksCallable(const Model::DescribeCloudStorageAIServiceTasksRequest& request);

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
                 *拉取云存事件列表
                 * @param req DescribeCloudStorageEventsWithAITasksRequest
                 * @return DescribeCloudStorageEventsWithAITasksOutcome
                 */
                DescribeCloudStorageEventsWithAITasksOutcome DescribeCloudStorageEventsWithAITasks(const Model::DescribeCloudStorageEventsWithAITasksRequest &request);
                void DescribeCloudStorageEventsWithAITasksAsync(const Model::DescribeCloudStorageEventsWithAITasksRequest& request, const DescribeCloudStorageEventsWithAITasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageEventsWithAITasksOutcomeCallable DescribeCloudStorageEventsWithAITasksCallable(const Model::DescribeCloudStorageEventsWithAITasksRequest& request);

                /**
                 *拉取多个云存事件缩略图
                 * @param req DescribeCloudStorageMultiThumbnailRequest
                 * @return DescribeCloudStorageMultiThumbnailOutcome
                 */
                DescribeCloudStorageMultiThumbnailOutcome DescribeCloudStorageMultiThumbnail(const Model::DescribeCloudStorageMultiThumbnailRequest &request);
                void DescribeCloudStorageMultiThumbnailAsync(const Model::DescribeCloudStorageMultiThumbnailRequest& request, const DescribeCloudStorageMultiThumbnailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageMultiThumbnailOutcomeCallable DescribeCloudStorageMultiThumbnailCallable(const Model::DescribeCloudStorageMultiThumbnailRequest& request);

                /**
                 *查询云存服务详情
                 * @param req DescribeCloudStorageOrderRequest
                 * @return DescribeCloudStorageOrderOutcome
                 */
                DescribeCloudStorageOrderOutcome DescribeCloudStorageOrder(const Model::DescribeCloudStorageOrderRequest &request);
                void DescribeCloudStorageOrderAsync(const Model::DescribeCloudStorageOrderRequest& request, const DescribeCloudStorageOrderAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageOrderOutcomeCallable DescribeCloudStorageOrderCallable(const Model::DescribeCloudStorageOrderRequest& request);

                /**
                 *获取云存套餐包消耗详细记录
                 * @param req DescribeCloudStoragePackageConsumeDetailsRequest
                 * @return DescribeCloudStoragePackageConsumeDetailsOutcome
                 */
                DescribeCloudStoragePackageConsumeDetailsOutcome DescribeCloudStoragePackageConsumeDetails(const Model::DescribeCloudStoragePackageConsumeDetailsRequest &request);
                void DescribeCloudStoragePackageConsumeDetailsAsync(const Model::DescribeCloudStoragePackageConsumeDetailsRequest& request, const DescribeCloudStoragePackageConsumeDetailsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStoragePackageConsumeDetailsOutcomeCallable DescribeCloudStoragePackageConsumeDetailsCallable(const Model::DescribeCloudStoragePackageConsumeDetailsRequest& request);

                /**
                 *获取云存套餐包消耗统计
                 * @param req DescribeCloudStoragePackageConsumeStatsRequest
                 * @return DescribeCloudStoragePackageConsumeStatsOutcome
                 */
                DescribeCloudStoragePackageConsumeStatsOutcome DescribeCloudStoragePackageConsumeStats(const Model::DescribeCloudStoragePackageConsumeStatsRequest &request);
                void DescribeCloudStoragePackageConsumeStatsAsync(const Model::DescribeCloudStoragePackageConsumeStatsRequest& request, const DescribeCloudStoragePackageConsumeStatsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStoragePackageConsumeStatsOutcomeCallable DescribeCloudStoragePackageConsumeStatsCallable(const Model::DescribeCloudStoragePackageConsumeStatsRequest& request);

                /**
                 *获取设备图片流数据
                 * @param req DescribeCloudStorageStreamDataRequest
                 * @return DescribeCloudStorageStreamDataOutcome
                 */
                DescribeCloudStorageStreamDataOutcome DescribeCloudStorageStreamData(const Model::DescribeCloudStorageStreamDataRequest &request);
                void DescribeCloudStorageStreamDataAsync(const Model::DescribeCloudStorageStreamDataRequest& request, const DescribeCloudStorageStreamDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageStreamDataOutcomeCallable DescribeCloudStorageStreamDataCallable(const Model::DescribeCloudStorageStreamDataRequest& request);

                /**
                 *拉取云存事件缩略图
                 * @param req DescribeCloudStorageThumbnailRequest
                 * @return DescribeCloudStorageThumbnailOutcome
                 */
                DescribeCloudStorageThumbnailOutcome DescribeCloudStorageThumbnail(const Model::DescribeCloudStorageThumbnailRequest &request);
                void DescribeCloudStorageThumbnailAsync(const Model::DescribeCloudStorageThumbnailRequest& request, const DescribeCloudStorageThumbnailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageThumbnailOutcomeCallable DescribeCloudStorageThumbnailCallable(const Model::DescribeCloudStorageThumbnailRequest& request);

                /**
                 *批量拉取云存事件缩略图
                 * @param req DescribeCloudStorageThumbnailListRequest
                 * @return DescribeCloudStorageThumbnailListOutcome
                 */
                DescribeCloudStorageThumbnailListOutcome DescribeCloudStorageThumbnailList(const Model::DescribeCloudStorageThumbnailListRequest &request);
                void DescribeCloudStorageThumbnailListAsync(const Model::DescribeCloudStorageThumbnailListRequest& request, const DescribeCloudStorageThumbnailListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageThumbnailListOutcomeCallable DescribeCloudStorageThumbnailListCallable(const Model::DescribeCloudStorageThumbnailListRequest& request);

                /**
                 *获取某一天云存时间轴
                 * @param req DescribeCloudStorageTimeRequest
                 * @return DescribeCloudStorageTimeOutcome
                 */
                DescribeCloudStorageTimeOutcome DescribeCloudStorageTime(const Model::DescribeCloudStorageTimeRequest &request);
                void DescribeCloudStorageTimeAsync(const Model::DescribeCloudStorageTimeRequest& request, const DescribeCloudStorageTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageTimeOutcomeCallable DescribeCloudStorageTimeCallable(const Model::DescribeCloudStorageTimeRequest& request);

                /**
                 *拉取云存用户列表
                 * @param req DescribeCloudStorageUsersRequest
                 * @return DescribeCloudStorageUsersOutcome
                 */
                DescribeCloudStorageUsersOutcome DescribeCloudStorageUsers(const Model::DescribeCloudStorageUsersRequest &request);
                void DescribeCloudStorageUsersAsync(const Model::DescribeCloudStorageUsersRequest& request, const DescribeCloudStorageUsersAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCloudStorageUsersOutcomeCallable DescribeCloudStorageUsersCallable(const Model::DescribeCloudStorageUsersRequest& request);

                /**
                 *获取云存上报统计信息
                 * @param req DescribeCsReportCountDataInfoRequest
                 * @return DescribeCsReportCountDataInfoOutcome
                 */
                DescribeCsReportCountDataInfoOutcome DescribeCsReportCountDataInfo(const Model::DescribeCsReportCountDataInfoRequest &request);
                void DescribeCsReportCountDataInfoAsync(const Model::DescribeCsReportCountDataInfoRequest& request, const DescribeCsReportCountDataInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCsReportCountDataInfoOutcomeCallable DescribeCsReportCountDataInfoCallable(const Model::DescribeCsReportCountDataInfoRequest& request);

                /**
                 *用于查看某个设备的详细信息
                 * @param req DescribeDeviceRequest
                 * @return DescribeDeviceOutcome
                 */
                DescribeDeviceOutcome DescribeDevice(const Model::DescribeDeviceRequest &request);
                void DescribeDeviceAsync(const Model::DescribeDeviceRequest& request, const DescribeDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceOutcomeCallable DescribeDeviceCallable(const Model::DescribeDeviceRequest& request);

                /**
                 *查询设备绑定的网关设备
                 * @param req DescribeDeviceBindGatewayRequest
                 * @return DescribeDeviceBindGatewayOutcome
                 */
                DescribeDeviceBindGatewayOutcome DescribeDeviceBindGateway(const Model::DescribeDeviceBindGatewayRequest &request);
                void DescribeDeviceBindGatewayAsync(const Model::DescribeDeviceBindGatewayRequest& request, const DescribeDeviceBindGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceBindGatewayOutcomeCallable DescribeDeviceBindGatewayCallable(const Model::DescribeDeviceBindGatewayRequest& request);

                /**
                 *根据设备产品ID、设备名称，获取设备上报的属性数据。
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
                 *获取设备固件信息
                 * @param req DescribeDeviceFirmWareRequest
                 * @return DescribeDeviceFirmWareOutcome
                 */
                DescribeDeviceFirmWareOutcome DescribeDeviceFirmWare(const Model::DescribeDeviceFirmWareRequest &request);
                void DescribeDeviceFirmWareAsync(const Model::DescribeDeviceFirmWareRequest& request, const DescribeDeviceFirmWareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceFirmWareOutcomeCallable DescribeDeviceFirmWareCallable(const Model::DescribeDeviceFirmWareRequest& request);

                /**
                 *获取设备当前固件信息
                 * @param req DescribeDeviceFirmwaresRequest
                 * @return DescribeDeviceFirmwaresOutcome
                 */
                DescribeDeviceFirmwaresOutcome DescribeDeviceFirmwares(const Model::DescribeDeviceFirmwaresRequest &request);
                void DescribeDeviceFirmwaresAsync(const Model::DescribeDeviceFirmwaresRequest& request, const DescribeDeviceFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceFirmwaresOutcomeCallable DescribeDeviceFirmwaresCallable(const Model::DescribeDeviceFirmwaresRequest& request);

                /**
                 *根据设备信息拉取有效套餐列表
                 * @param req DescribeDevicePackagesRequest
                 * @return DescribeDevicePackagesOutcome
                 */
                DescribeDevicePackagesOutcome DescribeDevicePackages(const Model::DescribeDevicePackagesRequest &request);
                void DescribeDevicePackagesAsync(const Model::DescribeDevicePackagesRequest& request, const DescribeDevicePackagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePackagesOutcomeCallable DescribeDevicePackagesCallable(const Model::DescribeDevicePackagesRequest& request);

                /**
                 *获取设备位置列表
                 * @param req DescribeDevicePositionListRequest
                 * @return DescribeDevicePositionListOutcome
                 */
                DescribeDevicePositionListOutcome DescribeDevicePositionList(const Model::DescribeDevicePositionListRequest &request);
                void DescribeDevicePositionListAsync(const Model::DescribeDevicePositionListRequest& request, const DescribeDevicePositionListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicePositionListOutcomeCallable DescribeDevicePositionListCallable(const Model::DescribeDevicePositionListRequest& request);

                /**
                 *获取围栏绑定信息列表。
                 * @param req DescribeFenceBindListRequest
                 * @return DescribeFenceBindListOutcome
                 */
                DescribeFenceBindListOutcome DescribeFenceBindList(const Model::DescribeFenceBindListRequest &request);
                void DescribeFenceBindListAsync(const Model::DescribeFenceBindListRequest& request, const DescribeFenceBindListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFenceBindListOutcomeCallable DescribeFenceBindListCallable(const Model::DescribeFenceBindListRequest& request);

                /**
                 *获取围栏告警事件列表。
                 * @param req DescribeFenceEventListRequest
                 * @return DescribeFenceEventListOutcome
                 */
                DescribeFenceEventListOutcome DescribeFenceEventList(const Model::DescribeFenceEventListRequest &request);
                void DescribeFenceEventListAsync(const Model::DescribeFenceEventListRequest& request, const DescribeFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFenceEventListOutcomeCallable DescribeFenceEventListCallable(const Model::DescribeFenceEventListRequest& request);

                /**
                 *查询固件信息
                 * @param req DescribeFirmwareRequest
                 * @return DescribeFirmwareOutcome
                 */
                DescribeFirmwareOutcome DescribeFirmware(const Model::DescribeFirmwareRequest &request);
                void DescribeFirmwareAsync(const Model::DescribeFirmwareRequest& request, const DescribeFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareOutcomeCallable DescribeFirmwareCallable(const Model::DescribeFirmwareRequest& request);

                /**
                 *查询固件升级任务列表
                 * @param req DescribeFirmwareTaskRequest
                 * @return DescribeFirmwareTaskOutcome
                 */
                DescribeFirmwareTaskOutcome DescribeFirmwareTask(const Model::DescribeFirmwareTaskRequest &request);
                void DescribeFirmwareTaskAsync(const Model::DescribeFirmwareTaskRequest& request, const DescribeFirmwareTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskOutcomeCallable DescribeFirmwareTaskCallable(const Model::DescribeFirmwareTaskRequest& request);

                /**
                 *查询固件升级任务的设备列表
                 * @param req DescribeFirmwareTaskDevicesRequest
                 * @return DescribeFirmwareTaskDevicesOutcome
                 */
                DescribeFirmwareTaskDevicesOutcome DescribeFirmwareTaskDevices(const Model::DescribeFirmwareTaskDevicesRequest &request);
                void DescribeFirmwareTaskDevicesAsync(const Model::DescribeFirmwareTaskDevicesRequest& request, const DescribeFirmwareTaskDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTaskDevicesOutcomeCallable DescribeFirmwareTaskDevicesCallable(const Model::DescribeFirmwareTaskDevicesRequest& request);

                /**
                 *搜索固件升级任务列表
                 * @param req DescribeFirmwareTasksRequest
                 * @return DescribeFirmwareTasksOutcome
                 */
                DescribeFirmwareTasksOutcome DescribeFirmwareTasks(const Model::DescribeFirmwareTasksRequest &request);
                void DescribeFirmwareTasksAsync(const Model::DescribeFirmwareTasksRequest& request, const DescribeFirmwareTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareTasksOutcomeCallable DescribeFirmwareTasksCallable(const Model::DescribeFirmwareTasksRequest& request);

                /**
                 *本接口（DescribeFirmwareUpdateStatus）用于查询设备固件升级状态及进度。
                 * @param req DescribeFirmwareUpdateStatusRequest
                 * @return DescribeFirmwareUpdateStatusOutcome
                 */
                DescribeFirmwareUpdateStatusOutcome DescribeFirmwareUpdateStatus(const Model::DescribeFirmwareUpdateStatusRequest &request);
                void DescribeFirmwareUpdateStatusAsync(const Model::DescribeFirmwareUpdateStatusRequest& request, const DescribeFirmwareUpdateStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFirmwareUpdateStatusOutcomeCallable DescribeFirmwareUpdateStatusCallable(const Model::DescribeFirmwareUpdateStatusRequest& request);

                /**
                 *查询云存卡套餐信息
                 * @param req DescribeFreeCloudStorageNumRequest
                 * @return DescribeFreeCloudStorageNumOutcome
                 */
                DescribeFreeCloudStorageNumOutcome DescribeFreeCloudStorageNum(const Model::DescribeFreeCloudStorageNumRequest &request);
                void DescribeFreeCloudStorageNumAsync(const Model::DescribeFreeCloudStorageNumRequest& request, const DescribeFreeCloudStorageNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFreeCloudStorageNumOutcomeCallable DescribeFreeCloudStorageNumCallable(const Model::DescribeFreeCloudStorageNumRequest& request);

                /**
                 *获取网关绑定的子设备列表
                 * @param req DescribeGatewayBindDevicesRequest
                 * @return DescribeGatewayBindDevicesOutcome
                 */
                DescribeGatewayBindDevicesOutcome DescribeGatewayBindDevices(const Model::DescribeGatewayBindDevicesRequest &request);
                void DescribeGatewayBindDevicesAsync(const Model::DescribeGatewayBindDevicesRequest& request, const DescribeGatewayBindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewayBindDevicesOutcomeCallable DescribeGatewayBindDevicesCallable(const Model::DescribeGatewayBindDevicesRequest& request);

                /**
                 *查询绑定到家庭的网关设备的子设备列表
                 * @param req DescribeGatewaySubDeviceListRequest
                 * @return DescribeGatewaySubDeviceListOutcome
                 */
                DescribeGatewaySubDeviceListOutcome DescribeGatewaySubDeviceList(const Model::DescribeGatewaySubDeviceListRequest &request);
                void DescribeGatewaySubDeviceListAsync(const Model::DescribeGatewaySubDeviceListRequest& request, const DescribeGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewaySubDeviceListOutcomeCallable DescribeGatewaySubDeviceListCallable(const Model::DescribeGatewaySubDeviceListRequest& request);

                /**
                 *用于获取网关可绑定或解绑的子产品。
                 * @param req DescribeGatewaySubProductsRequest
                 * @return DescribeGatewaySubProductsOutcome
                 */
                DescribeGatewaySubProductsOutcome DescribeGatewaySubProducts(const Model::DescribeGatewaySubProductsRequest &request);
                void DescribeGatewaySubProductsAsync(const Model::DescribeGatewaySubProductsRequest& request, const DescribeGatewaySubProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeGatewaySubProductsOutcomeCallable DescribeGatewaySubProductsCallable(const Model::DescribeGatewaySubProductsRequest& request);

                /**
                 *公共实例过期时间 0001-01-01T00:00:00Z，公共实例是永久有效
                 * @param req DescribeInstanceRequest
                 * @return DescribeInstanceOutcome
                 */
                DescribeInstanceOutcome DescribeInstance(const Model::DescribeInstanceRequest &request);
                void DescribeInstanceAsync(const Model::DescribeInstanceRequest& request, const DescribeInstanceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeInstanceOutcomeCallable DescribeInstanceCallable(const Model::DescribeInstanceRequest& request);

                /**
                 *提供查询LoRa自定义频点详情的能力
                 * @param req DescribeLoRaFrequencyRequest
                 * @return DescribeLoRaFrequencyOutcome
                 */
                DescribeLoRaFrequencyOutcome DescribeLoRaFrequency(const Model::DescribeLoRaFrequencyRequest &request);
                void DescribeLoRaFrequencyAsync(const Model::DescribeLoRaFrequencyRequest& request, const DescribeLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLoRaFrequencyOutcomeCallable DescribeLoRaFrequencyCallable(const Model::DescribeLoRaFrequencyRequest& request);

                /**
                 *查询产品配置的数据模板信息
                 * @param req DescribeModelDefinitionRequest
                 * @return DescribeModelDefinitionOutcome
                 */
                DescribeModelDefinitionOutcome DescribeModelDefinition(const Model::DescribeModelDefinitionRequest &request);
                void DescribeModelDefinitionAsync(const Model::DescribeModelDefinitionRequest& request, const DescribeModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeModelDefinitionOutcomeCallable DescribeModelDefinitionCallable(const Model::DescribeModelDefinitionRequest& request);

                /**
                 *当前p2p线路
                 * @param req DescribeP2PRouteRequest
                 * @return DescribeP2PRouteOutcome
                 */
                DescribeP2PRouteOutcome DescribeP2PRoute(const Model::DescribeP2PRouteRequest &request);
                void DescribeP2PRouteAsync(const Model::DescribeP2PRouteRequest& request, const DescribeP2PRouteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeP2PRouteOutcomeCallable DescribeP2PRouteCallable(const Model::DescribeP2PRouteRequest& request);

                /**
                 *查询套餐消耗记录详情
                 * @param req DescribePackageConsumeTaskRequest
                 * @return DescribePackageConsumeTaskOutcome
                 */
                DescribePackageConsumeTaskOutcome DescribePackageConsumeTask(const Model::DescribePackageConsumeTaskRequest &request);
                void DescribePackageConsumeTaskAsync(const Model::DescribePackageConsumeTaskRequest& request, const DescribePackageConsumeTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackageConsumeTaskOutcomeCallable DescribePackageConsumeTaskCallable(const Model::DescribePackageConsumeTaskRequest& request);

                /**
                 *查询套餐消耗记录列表
                 * @param req DescribePackageConsumeTasksRequest
                 * @return DescribePackageConsumeTasksOutcome
                 */
                DescribePackageConsumeTasksOutcome DescribePackageConsumeTasks(const Model::DescribePackageConsumeTasksRequest &request);
                void DescribePackageConsumeTasksAsync(const Model::DescribePackageConsumeTasksRequest& request, const DescribePackageConsumeTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePackageConsumeTasksOutcomeCallable DescribePackageConsumeTasksCallable(const Model::DescribePackageConsumeTasksRequest& request);

                /**
                 *获取围栏列表
                 * @param req DescribePositionFenceListRequest
                 * @return DescribePositionFenceListOutcome
                 */
                DescribePositionFenceListOutcome DescribePositionFenceList(const Model::DescribePositionFenceListRequest &request);
                void DescribePositionFenceListAsync(const Model::DescribePositionFenceListRequest& request, const DescribePositionFenceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePositionFenceListOutcomeCallable DescribePositionFenceListCallable(const Model::DescribePositionFenceListRequest& request);

                /**
                 *查询指定产品的云存 AI 服务开通状态
                 * @param req DescribeProductCloudStorageAIServiceRequest
                 * @return DescribeProductCloudStorageAIServiceOutcome
                 */
                DescribeProductCloudStorageAIServiceOutcome DescribeProductCloudStorageAIService(const Model::DescribeProductCloudStorageAIServiceRequest &request);
                void DescribeProductCloudStorageAIServiceAsync(const Model::DescribeProductCloudStorageAIServiceRequest& request, const DescribeProductCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProductCloudStorageAIServiceOutcomeCallable DescribeProductCloudStorageAIServiceCallable(const Model::DescribeProductCloudStorageAIServiceRequest& request);

                /**
                 *查询项目详情
                 * @param req DescribeProjectRequest
                 * @return DescribeProjectOutcome
                 */
                DescribeProjectOutcome DescribeProject(const Model::DescribeProjectRequest &request);
                void DescribeProjectAsync(const Model::DescribeProjectRequest& request, const DescribeProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeProjectOutcomeCallable DescribeProjectCallable(const Model::DescribeProjectRequest& request);

                /**
                 *获取位置空间中围栏告警事件列表。
                 * @param req DescribeSpaceFenceEventListRequest
                 * @return DescribeSpaceFenceEventListOutcome
                 */
                DescribeSpaceFenceEventListOutcome DescribeSpaceFenceEventList(const Model::DescribeSpaceFenceEventListRequest &request);
                void DescribeSpaceFenceEventListAsync(const Model::DescribeSpaceFenceEventListRequest& request, const DescribeSpaceFenceEventListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSpaceFenceEventListOutcomeCallable DescribeSpaceFenceEventListCallable(const Model::DescribeSpaceFenceEventListRequest& request);

                /**
                 *提供查看产品详细信息的能力，包括产品的ID、数据协议、认证类型等重要参数
                 * @param req DescribeStudioProductRequest
                 * @return DescribeStudioProductOutcome
                 */
                DescribeStudioProductOutcome DescribeStudioProduct(const Model::DescribeStudioProductRequest &request);
                void DescribeStudioProductAsync(const Model::DescribeStudioProductRequest& request, const DescribeStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeStudioProductOutcomeCallable DescribeStudioProductCallable(const Model::DescribeStudioProductRequest& request);

                /**
                 *本接口（DescribeSubscribedTopicPolicy）用于获取设备已订阅Topic列表
                 * @param req DescribeSubscribedTopicPolicyRequest
                 * @return DescribeSubscribedTopicPolicyOutcome
                 */
                DescribeSubscribedTopicPolicyOutcome DescribeSubscribedTopicPolicy(const Model::DescribeSubscribedTopicPolicyRequest &request);
                void DescribeSubscribedTopicPolicyAsync(const Model::DescribeSubscribedTopicPolicyRequest& request, const DescribeSubscribedTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSubscribedTopicPolicyOutcomeCallable DescribeSubscribedTopicPolicyCallable(const Model::DescribeSubscribedTopicPolicyRequest& request);

                /**
                 *拉取 TWeSee 配置
                 * @param req DescribeTWeSeeConfigRequest
                 * @return DescribeTWeSeeConfigOutcome
                 */
                DescribeTWeSeeConfigOutcome DescribeTWeSeeConfig(const Model::DescribeTWeSeeConfigRequest &request);
                void DescribeTWeSeeConfigAsync(const Model::DescribeTWeSeeConfigRequest& request, const DescribeTWeSeeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTWeSeeConfigOutcomeCallable DescribeTWeSeeConfigCallable(const Model::DescribeTWeSeeConfigRequest& request);

                /**
                 *查询 TWeSee 语义理解任务
                 * @param req DescribeTWeSeeRecognitionTaskRequest
                 * @return DescribeTWeSeeRecognitionTaskOutcome
                 */
                DescribeTWeSeeRecognitionTaskOutcome DescribeTWeSeeRecognitionTask(const Model::DescribeTWeSeeRecognitionTaskRequest &request);
                void DescribeTWeSeeRecognitionTaskAsync(const Model::DescribeTWeSeeRecognitionTaskRequest& request, const DescribeTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTWeSeeRecognitionTaskOutcomeCallable DescribeTWeSeeRecognitionTaskCallable(const Model::DescribeTWeSeeRecognitionTaskRequest& request);

                /**
                 *用于查询TWeTalk智能体详情。
                 * @param req DescribeTWeTalkAIBotRequest
                 * @return DescribeTWeTalkAIBotOutcome
                 */
                DescribeTWeTalkAIBotOutcome DescribeTWeTalkAIBot(const Model::DescribeTWeTalkAIBotRequest &request);
                void DescribeTWeTalkAIBotAsync(const Model::DescribeTWeTalkAIBotRequest& request, const DescribeTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTWeTalkAIBotOutcomeCallable DescribeTWeTalkAIBotCallable(const Model::DescribeTWeTalkAIBotRequest& request);

                /**
                 *用于获取TWeTalk服务连接产品配置信息。
                 * @param req DescribeTWeTalkProductConfigRequest
                 * @return DescribeTWeTalkProductConfigOutcome
                 */
                DescribeTWeTalkProductConfigOutcome DescribeTWeTalkProductConfig(const Model::DescribeTWeTalkProductConfigRequest &request);
                void DescribeTWeTalkProductConfigAsync(const Model::DescribeTWeTalkProductConfigRequest& request, const DescribeTWeTalkProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTWeTalkProductConfigOutcomeCallable DescribeTWeTalkProductConfigCallable(const Model::DescribeTWeTalkProductConfigRequest& request);

                /**
                 *用于查询TWeTalk服务连接产品配置信息。
                 * @param req DescribeTWeTalkProductConfigV2Request
                 * @return DescribeTWeTalkProductConfigV2Outcome
                 */
                DescribeTWeTalkProductConfigV2Outcome DescribeTWeTalkProductConfigV2(const Model::DescribeTWeTalkProductConfigV2Request &request);
                void DescribeTWeTalkProductConfigV2Async(const Model::DescribeTWeTalkProductConfigV2Request& request, const DescribeTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTWeTalkProductConfigV2OutcomeCallable DescribeTWeTalkProductConfigV2Callable(const Model::DescribeTWeTalkProductConfigV2Request& request);

                /**
                 *本接口（DescribeTopicPolicy）用于查看Topic详细信息
                 * @param req DescribeTopicPolicyRequest
                 * @return DescribeTopicPolicyOutcome
                 */
                DescribeTopicPolicyOutcome DescribeTopicPolicy(const Model::DescribeTopicPolicyRequest &request);
                void DescribeTopicPolicyAsync(const Model::DescribeTopicPolicyRequest& request, const DescribeTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicPolicyOutcomeCallable DescribeTopicPolicyCallable(const Model::DescribeTopicPolicyRequest& request);

                /**
                 *获取规则信息
                 * @param req DescribeTopicRuleRequest
                 * @return DescribeTopicRuleOutcome
                 */
                DescribeTopicRuleOutcome DescribeTopicRule(const Model::DescribeTopicRuleRequest &request);
                void DescribeTopicRuleAsync(const Model::DescribeTopicRuleRequest& request, const DescribeTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTopicRuleOutcomeCallable DescribeTopicRuleCallable(const Model::DescribeTopicRuleRequest& request);

                /**
                 *获取未绑定的设备列表
                 * @param req DescribeUnbindedDevicesRequest
                 * @return DescribeUnbindedDevicesOutcome
                 */
                DescribeUnbindedDevicesOutcome DescribeUnbindedDevices(const Model::DescribeUnbindedDevicesRequest &request);
                void DescribeUnbindedDevicesAsync(const Model::DescribeUnbindedDevicesRequest& request, const DescribeUnbindedDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeUnbindedDevicesOutcomeCallable DescribeUnbindedDevicesCallable(const Model::DescribeUnbindedDevicesRequest& request);

                /**
                 *用于查询视频激活码统计概览
                 * @param req DescribeVideoLicenseRequest
                 * @return DescribeVideoLicenseOutcome
                 */
                DescribeVideoLicenseOutcome DescribeVideoLicense(const Model::DescribeVideoLicenseRequest &request);
                void DescribeVideoLicenseAsync(const Model::DescribeVideoLicenseRequest& request, const DescribeVideoLicenseAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVideoLicenseOutcomeCallable DescribeVideoLicenseCallable(const Model::DescribeVideoLicenseRequest& request);

                /**
                 *直接绑定设备和家庭
                 * @param req DirectBindDeviceInFamilyRequest
                 * @return DirectBindDeviceInFamilyOutcome
                 */
                DirectBindDeviceInFamilyOutcome DirectBindDeviceInFamily(const Model::DirectBindDeviceInFamilyRequest &request);
                void DirectBindDeviceInFamilyAsync(const Model::DirectBindDeviceInFamilyRequest& request, const DirectBindDeviceInFamilyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DirectBindDeviceInFamilyOutcomeCallable DirectBindDeviceInFamilyCallable(const Model::DirectBindDeviceInFamilyRequest& request);

                /**
                 *禁用规则
                 * @param req DisableTopicRuleRequest
                 * @return DisableTopicRuleOutcome
                 */
                DisableTopicRuleOutcome DisableTopicRule(const Model::DisableTopicRuleRequest &request);
                void DisableTopicRuleAsync(const Model::DisableTopicRuleRequest& request, const DisableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DisableTopicRuleOutcomeCallable DisableTopicRuleCallable(const Model::DisableTopicRuleRequest& request);

                /**
                 *解散TRTC房间
                 * @param req DismissRoomByStrRoomIdFromTRTCRequest
                 * @return DismissRoomByStrRoomIdFromTRTCOutcome
                 */
                DismissRoomByStrRoomIdFromTRTCOutcome DismissRoomByStrRoomIdFromTRTC(const Model::DismissRoomByStrRoomIdFromTRTCRequest &request);
                void DismissRoomByStrRoomIdFromTRTCAsync(const Model::DismissRoomByStrRoomIdFromTRTCRequest& request, const DismissRoomByStrRoomIdFromTRTCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DismissRoomByStrRoomIdFromTRTCOutcomeCallable DismissRoomByStrRoomIdFromTRTCCallable(const Model::DismissRoomByStrRoomIdFromTRTCRequest& request);

                /**
                 *启用规则
                 * @param req EnableTopicRuleRequest
                 * @return EnableTopicRuleOutcome
                 */
                EnableTopicRuleOutcome EnableTopicRule(const Model::EnableTopicRuleRequest &request);
                void EnableTopicRuleAsync(const Model::EnableTopicRuleRequest& request, const EnableTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                EnableTopicRuleOutcomeCallable EnableTopicRuleCallable(const Model::EnableTopicRuleRequest& request);

                /**
                 *无
                 * @param req GenSingleDeviceSignatureOfPublicRequest
                 * @return GenSingleDeviceSignatureOfPublicOutcome
                 */
                GenSingleDeviceSignatureOfPublicOutcome GenSingleDeviceSignatureOfPublic(const Model::GenSingleDeviceSignatureOfPublicRequest &request);
                void GenSingleDeviceSignatureOfPublicAsync(const Model::GenSingleDeviceSignatureOfPublicRequest& request, const GenSingleDeviceSignatureOfPublicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenSingleDeviceSignatureOfPublicOutcomeCallable GenSingleDeviceSignatureOfPublicCallable(const Model::GenSingleDeviceSignatureOfPublicRequest& request);

                /**
                 *获取云存 AI 分析任务输出文件的下载地址
                 * @param req GenerateCloudStorageAIServiceTaskFileURLRequest
                 * @return GenerateCloudStorageAIServiceTaskFileURLOutcome
                 */
                GenerateCloudStorageAIServiceTaskFileURLOutcome GenerateCloudStorageAIServiceTaskFileURL(const Model::GenerateCloudStorageAIServiceTaskFileURLRequest &request);
                void GenerateCloudStorageAIServiceTaskFileURLAsync(const Model::GenerateCloudStorageAIServiceTaskFileURLRequest& request, const GenerateCloudStorageAIServiceTaskFileURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateCloudStorageAIServiceTaskFileURLOutcomeCallable GenerateCloudStorageAIServiceTaskFileURLCallable(const Model::GenerateCloudStorageAIServiceTaskFileURLRequest& request);

                /**
                 *获取视频防盗链播放URL
                 * @param req GenerateSignedVideoURLRequest
                 * @return GenerateSignedVideoURLOutcome
                 */
                GenerateSignedVideoURLOutcome GenerateSignedVideoURL(const Model::GenerateSignedVideoURLRequest &request);
                void GenerateSignedVideoURLAsync(const Model::GenerateSignedVideoURLRequest& request, const GenerateSignedVideoURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateSignedVideoURLOutcomeCallable GenerateSignedVideoURLCallable(const Model::GenerateSignedVideoURLRequest& request);

                /**
                 *查询小程序列表
                 * @param req GetAuthMiniProgramAppListRequest
                 * @return GetAuthMiniProgramAppListOutcome
                 */
                GetAuthMiniProgramAppListOutcome GetAuthMiniProgramAppList(const Model::GetAuthMiniProgramAppListRequest &request);
                void GetAuthMiniProgramAppListAsync(const Model::GetAuthMiniProgramAppListRequest& request, const GetAuthMiniProgramAppListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAuthMiniProgramAppListOutcomeCallable GetAuthMiniProgramAppListCallable(const Model::GetAuthMiniProgramAppListRequest& request);

                /**
                 *列出量产数据列表信息。
                 * @param req GetBatchProductionsListRequest
                 * @return GetBatchProductionsListOutcome
                 */
                GetBatchProductionsListOutcome GetBatchProductionsList(const Model::GetBatchProductionsListRequest &request);
                void GetBatchProductionsListAsync(const Model::GetBatchProductionsListRequest& request, const GetBatchProductionsListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetBatchProductionsListOutcomeCallable GetBatchProductionsListCallable(const Model::GetBatchProductionsListRequest& request);

                /**
                 *本接口（GetCOSURL）用于获取固件COS存储的上传请求URL地址
                 * @param req GetCOSURLRequest
                 * @return GetCOSURLOutcome
                 */
                GetCOSURLOutcome GetCOSURL(const Model::GetCOSURLRequest &request);
                void GetCOSURLAsync(const Model::GetCOSURLRequest& request, const GetCOSURLAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCOSURLOutcomeCallable GetCOSURLCallable(const Model::GetCOSURLRequest& request);

                /**
                 *用于查询某个产品下的设备列表
                 * @param req GetDeviceListRequest
                 * @return GetDeviceListOutcome
                 */
                GetDeviceListOutcome GetDeviceList(const Model::GetDeviceListRequest &request);
                void GetDeviceListAsync(const Model::GetDeviceListRequest& request, const GetDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceListOutcomeCallable GetDeviceListCallable(const Model::GetDeviceListRequest& request);

                /**
                 *获取设备历史位置
                 * @param req GetDeviceLocationHistoryRequest
                 * @return GetDeviceLocationHistoryOutcome
                 */
                GetDeviceLocationHistoryOutcome GetDeviceLocationHistory(const Model::GetDeviceLocationHistoryRequest &request);
                void GetDeviceLocationHistoryAsync(const Model::GetDeviceLocationHistoryRequest& request, const GetDeviceLocationHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceLocationHistoryOutcomeCallable GetDeviceLocationHistoryCallable(const Model::GetDeviceLocationHistoryRequest& request);

                /**
                 *拉取设备统计汇总数据
                 * @param req GetDeviceSumStatisticsRequest
                 * @return GetDeviceSumStatisticsOutcome
                 */
                GetDeviceSumStatisticsOutcome GetDeviceSumStatistics(const Model::GetDeviceSumStatisticsRequest &request);
                void GetDeviceSumStatisticsAsync(const Model::GetDeviceSumStatisticsRequest& request, const GetDeviceSumStatisticsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceSumStatisticsOutcomeCallable GetDeviceSumStatisticsCallable(const Model::GetDeviceSumStatisticsRequest& request);

                /**
                 *用于获取设备绑定的用户列表
                 * @param req GetFamilyDeviceUserListRequest
                 * @return GetFamilyDeviceUserListOutcome
                 */
                GetFamilyDeviceUserListOutcome GetFamilyDeviceUserList(const Model::GetFamilyDeviceUserListRequest &request);
                void GetFamilyDeviceUserListAsync(const Model::GetFamilyDeviceUserListRequest& request, const GetFamilyDeviceUserListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFamilyDeviceUserListOutcomeCallable GetFamilyDeviceUserListCallable(const Model::GetFamilyDeviceUserListRequest& request);

                /**
                 *获取指定网关设备的子设备列表
                 * @param req GetGatewaySubDeviceListRequest
                 * @return GetGatewaySubDeviceListOutcome
                 */
                GetGatewaySubDeviceListOutcome GetGatewaySubDeviceList(const Model::GetGatewaySubDeviceListRequest &request);
                void GetGatewaySubDeviceListAsync(const Model::GetGatewaySubDeviceListRequest& request, const GetGatewaySubDeviceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGatewaySubDeviceListOutcomeCallable GetGatewaySubDeviceListCallable(const Model::GetGatewaySubDeviceListRequest& request);

                /**
                 *获取 LoRa 网关列表接口
                 * @param req GetLoRaGatewayListRequest
                 * @return GetLoRaGatewayListOutcome
                 */
                GetLoRaGatewayListOutcome GetLoRaGatewayList(const Model::GetLoRaGatewayListRequest &request);
                void GetLoRaGatewayListAsync(const Model::GetLoRaGatewayListRequest& request, const GetLoRaGatewayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLoRaGatewayListOutcomeCallable GetLoRaGatewayListCallable(const Model::GetLoRaGatewayListRequest& request);

                /**
                 *获取位置空间列表
                 * @param req GetPositionSpaceListRequest
                 * @return GetPositionSpaceListOutcome
                 */
                GetPositionSpaceListOutcome GetPositionSpaceList(const Model::GetPositionSpaceListRequest &request);
                void GetPositionSpaceListAsync(const Model::GetPositionSpaceListRequest& request, const GetPositionSpaceListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPositionSpaceListOutcomeCallable GetPositionSpaceListCallable(const Model::GetPositionSpaceListRequest& request);

                /**
                 *提供查询用户所创建的项目列表查询功能。
                 * @param req GetProjectListRequest
                 * @return GetProjectListOutcome
                 */
                GetProjectListOutcome GetProjectList(const Model::GetProjectListRequest &request);
                void GetProjectListAsync(const Model::GetProjectListRequest& request, const GetProjectListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetProjectListOutcomeCallable GetProjectListCallable(const Model::GetProjectListRequest& request);

                /**
                 *提供查询某个项目下所有产品信息的能力。
                 * @param req GetStudioProductListRequest
                 * @return GetStudioProductListOutcome
                 */
                GetStudioProductListOutcome GetStudioProductList(const Model::GetStudioProductListRequest &request);
                void GetStudioProductListAsync(const Model::GetStudioProductListRequest& request, const GetStudioProductListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetStudioProductListOutcomeCallable GetStudioProductListCallable(const Model::GetStudioProductListRequest& request);

                /**
                 *查询激活状态
                 * @param req GetTWeCallActiveStatusRequest
                 * @return GetTWeCallActiveStatusOutcome
                 */
                GetTWeCallActiveStatusOutcome GetTWeCallActiveStatus(const Model::GetTWeCallActiveStatusRequest &request);
                void GetTWeCallActiveStatusAsync(const Model::GetTWeCallActiveStatusRequest& request, const GetTWeCallActiveStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTWeCallActiveStatusOutcomeCallable GetTWeCallActiveStatusCallable(const Model::GetTWeCallActiveStatusRequest& request);

                /**
                 *用于查询TWeTalk智能体列表。
                 * @param req GetTWeTalkAIBotListRequest
                 * @return GetTWeTalkAIBotListOutcome
                 */
                GetTWeTalkAIBotListOutcome GetTWeTalkAIBotList(const Model::GetTWeTalkAIBotListRequest &request);
                void GetTWeTalkAIBotListAsync(const Model::GetTWeTalkAIBotListRequest& request, const GetTWeTalkAIBotListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTWeTalkAIBotListOutcomeCallable GetTWeTalkAIBotListCallable(const Model::GetTWeTalkAIBotListRequest& request);

                /**
                 *用于获取TWeTalk服务连接产品配置信息列表。
                 * @param req GetTWeTalkProductConfigListRequest
                 * @return GetTWeTalkProductConfigListOutcome
                 */
                GetTWeTalkProductConfigListOutcome GetTWeTalkProductConfigList(const Model::GetTWeTalkProductConfigListRequest &request);
                void GetTWeTalkProductConfigListAsync(const Model::GetTWeTalkProductConfigListRequest& request, const GetTWeTalkProductConfigListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTWeTalkProductConfigListOutcomeCallable GetTWeTalkProductConfigListCallable(const Model::GetTWeTalkProductConfigListRequest& request);

                /**
                 *用于查询TWeTalk服务连接产品配置信息。
                 * @param req GetTWeTalkProductConfigListV2Request
                 * @return GetTWeTalkProductConfigListV2Outcome
                 */
                GetTWeTalkProductConfigListV2Outcome GetTWeTalkProductConfigListV2(const Model::GetTWeTalkProductConfigListV2Request &request);
                void GetTWeTalkProductConfigListV2Async(const Model::GetTWeTalkProductConfigListV2Request& request, const GetTWeTalkProductConfigListV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTWeTalkProductConfigListV2OutcomeCallable GetTWeTalkProductConfigListV2Callable(const Model::GetTWeTalkProductConfigListV2Request& request);

                /**
                 *获取规则列表
                 * @param req GetTopicRuleListRequest
                 * @return GetTopicRuleListOutcome
                 */
                GetTopicRuleListOutcome GetTopicRuleList(const Model::GetTopicRuleListRequest &request);
                void GetTopicRuleListAsync(const Model::GetTopicRuleListRequest& request, const GetTopicRuleListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTopicRuleListOutcomeCallable GetTopicRuleListCallable(const Model::GetTopicRuleListRequest& request);

                /**
                 *查询微信设备授权票据
                 * @param req GetWechatDeviceTicketRequest
                 * @return GetWechatDeviceTicketOutcome
                 */
                GetWechatDeviceTicketOutcome GetWechatDeviceTicket(const Model::GetWechatDeviceTicketRequest &request);
                void GetWechatDeviceTicketAsync(const Model::GetWechatDeviceTicketRequest& request, const GetWechatDeviceTicketAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetWechatDeviceTicketOutcomeCallable GetWechatDeviceTicketCallable(const Model::GetWechatDeviceTicketRequest& request);

                /**
                 *继承云存用户
                 * @param req InheritCloudStorageUserRequest
                 * @return InheritCloudStorageUserOutcome
                 */
                InheritCloudStorageUserOutcome InheritCloudStorageUser(const Model::InheritCloudStorageUserRequest &request);
                void InheritCloudStorageUserAsync(const Model::InheritCloudStorageUserRequest& request, const InheritCloudStorageUserAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InheritCloudStorageUserOutcomeCallable InheritCloudStorageUserCallable(const Model::InheritCloudStorageUserRequest& request);

                /**
                 *视频语义搜索
                 * @param req InvokeAISearchServiceRequest
                 * @return InvokeAISearchServiceOutcome
                 */
                InvokeAISearchServiceOutcome InvokeAISearchService(const Model::InvokeAISearchServiceRequest &request);
                void InvokeAISearchServiceAsync(const Model::InvokeAISearchServiceRequest& request, const InvokeAISearchServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeAISearchServiceOutcomeCallable InvokeAISearchServiceCallable(const Model::InvokeAISearchServiceRequest& request);

                /**
                 *同步执行设备云存 AI 分析任务
                 * @param req InvokeCloudStorageAIServiceTaskRequest
                 * @return InvokeCloudStorageAIServiceTaskOutcome
                 */
                InvokeCloudStorageAIServiceTaskOutcome InvokeCloudStorageAIServiceTask(const Model::InvokeCloudStorageAIServiceTaskRequest &request);
                void InvokeCloudStorageAIServiceTaskAsync(const Model::InvokeCloudStorageAIServiceTaskRequest& request, const InvokeCloudStorageAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeCloudStorageAIServiceTaskOutcomeCallable InvokeCloudStorageAIServiceTaskCallable(const Model::InvokeCloudStorageAIServiceTaskRequest& request);

                /**
                 *创建外部视频 AI 分析任务
                 * @param req InvokeExternalSourceAIServiceTaskRequest
                 * @return InvokeExternalSourceAIServiceTaskOutcome
                 */
                InvokeExternalSourceAIServiceTaskOutcome InvokeExternalSourceAIServiceTask(const Model::InvokeExternalSourceAIServiceTaskRequest &request);
                void InvokeExternalSourceAIServiceTaskAsync(const Model::InvokeExternalSourceAIServiceTaskRequest& request, const InvokeExternalSourceAIServiceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeExternalSourceAIServiceTaskOutcomeCallable InvokeExternalSourceAIServiceTaskCallable(const Model::InvokeExternalSourceAIServiceTaskRequest& request);

                /**
                 *同步执行 TWeSee 语义理解任务
                 * @param req InvokeTWeSeeRecognitionTaskRequest
                 * @return InvokeTWeSeeRecognitionTaskOutcome
                 */
                InvokeTWeSeeRecognitionTaskOutcome InvokeTWeSeeRecognitionTask(const Model::InvokeTWeSeeRecognitionTaskRequest &request);
                void InvokeTWeSeeRecognitionTaskAsync(const Model::InvokeTWeSeeRecognitionTaskRequest& request, const InvokeTWeSeeRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeTWeSeeRecognitionTaskOutcomeCallable InvokeTWeSeeRecognitionTaskCallable(const Model::InvokeTWeSeeRecognitionTaskRequest& request);

                /**
                 *上传文件并同步执行 TWeSee 语义理解任务
                 * @param req InvokeTWeSeeRecognitionTaskWithFileRequest
                 * @return InvokeTWeSeeRecognitionTaskWithFileOutcome
                 */
                InvokeTWeSeeRecognitionTaskWithFileOutcome InvokeTWeSeeRecognitionTaskWithFile(const Model::InvokeTWeSeeRecognitionTaskWithFileRequest &request);
                void InvokeTWeSeeRecognitionTaskWithFileAsync(const Model::InvokeTWeSeeRecognitionTaskWithFileRequest& request, const InvokeTWeSeeRecognitionTaskWithFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeTWeSeeRecognitionTaskWithFileOutcomeCallable InvokeTWeSeeRecognitionTaskWithFileCallable(const Model::InvokeTWeSeeRecognitionTaskWithFileRequest& request);

                /**
                 *获取某个时间段的视频内容关键字
                 * @param req InvokeVideosKeywordsAnalyzerRequest
                 * @return InvokeVideosKeywordsAnalyzerOutcome
                 */
                InvokeVideosKeywordsAnalyzerOutcome InvokeVideosKeywordsAnalyzer(const Model::InvokeVideosKeywordsAnalyzerRequest &request);
                void InvokeVideosKeywordsAnalyzerAsync(const Model::InvokeVideosKeywordsAnalyzerRequest& request, const InvokeVideosKeywordsAnalyzerAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                InvokeVideosKeywordsAnalyzerOutcomeCallable InvokeVideosKeywordsAnalyzerCallable(const Model::InvokeVideosKeywordsAnalyzerRequest& request);

                /**
                 *获取设备的历史事件
                 * @param req ListEventHistoryRequest
                 * @return ListEventHistoryOutcome
                 */
                ListEventHistoryOutcome ListEventHistory(const Model::ListEventHistoryRequest &request);
                void ListEventHistoryAsync(const Model::ListEventHistoryRequest& request, const ListEventHistoryAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListEventHistoryOutcomeCallable ListEventHistoryCallable(const Model::ListEventHistoryRequest& request);

                /**
                 *本接口（ListFirmwares）用于获取固件列表
                 * @param req ListFirmwaresRequest
                 * @return ListFirmwaresOutcome
                 */
                ListFirmwaresOutcome ListFirmwares(const Model::ListFirmwaresRequest &request);
                void ListFirmwaresAsync(const Model::ListFirmwaresRequest& request, const ListFirmwaresAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListFirmwaresOutcomeCallable ListFirmwaresCallable(const Model::ListFirmwaresRequest& request);

                /**
                 *本接口（ListOtaModules）用于获取OTA模块列表
                 * @param req ListOtaModulesRequest
                 * @return ListOtaModulesOutcome
                 */
                ListOtaModulesOutcome ListOtaModules(const Model::ListOtaModulesRequest &request);
                void ListOtaModulesAsync(const Model::ListOtaModulesRequest& request, const ListOtaModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListOtaModulesOutcomeCallable ListOtaModulesCallable(const Model::ListOtaModulesRequest& request);

                /**
                 *本接口（ListProductOtaModules）用于获取产品OTA模块列表
                 * @param req ListProductOtaModulesRequest
                 * @return ListProductOtaModulesOutcome
                 */
                ListProductOtaModulesOutcome ListProductOtaModules(const Model::ListProductOtaModulesRequest &request);
                void ListProductOtaModulesAsync(const Model::ListProductOtaModulesRequest& request, const ListProductOtaModulesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListProductOtaModulesOutcomeCallable ListProductOtaModulesCallable(const Model::ListProductOtaModulesRequest& request);

                /**
                 *本接口（ListTopicPolicy）用于获取Topic列表
                 * @param req ListTopicPolicyRequest
                 * @return ListTopicPolicyOutcome
                 */
                ListTopicPolicyOutcome ListTopicPolicy(const Model::ListTopicPolicyRequest &request);
                void ListTopicPolicyAsync(const Model::ListTopicPolicyRequest& request, const ListTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ListTopicPolicyOutcomeCallable ListTopicPolicyCallable(const Model::ListTopicPolicyRequest& request);

                /**
                 *更新应用信息
                 * @param req ModifyApplicationRequest
                 * @return ModifyApplicationOutcome
                 */
                ModifyApplicationOutcome ModifyApplication(const Model::ModifyApplicationRequest &request);
                void ModifyApplicationAsync(const Model::ModifyApplicationRequest& request, const ModifyApplicationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyApplicationOutcomeCallable ModifyApplicationCallable(const Model::ModifyApplicationRequest& request);

                /**
                 *修改指定设备的云存 AI 服务参数配置
                 * @param req ModifyCloudStorageAIServiceRequest
                 * @return ModifyCloudStorageAIServiceOutcome
                 */
                ModifyCloudStorageAIServiceOutcome ModifyCloudStorageAIService(const Model::ModifyCloudStorageAIServiceRequest &request);
                void ModifyCloudStorageAIServiceAsync(const Model::ModifyCloudStorageAIServiceRequest& request, const ModifyCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudStorageAIServiceOutcomeCallable ModifyCloudStorageAIServiceCallable(const Model::ModifyCloudStorageAIServiceRequest& request);

                /**
                 *修改云存AI分析回调配置
                 * @param req ModifyCloudStorageAIServiceCallbackRequest
                 * @return ModifyCloudStorageAIServiceCallbackOutcome
                 */
                ModifyCloudStorageAIServiceCallbackOutcome ModifyCloudStorageAIServiceCallback(const Model::ModifyCloudStorageAIServiceCallbackRequest &request);
                void ModifyCloudStorageAIServiceCallbackAsync(const Model::ModifyCloudStorageAIServiceCallbackRequest& request, const ModifyCloudStorageAIServiceCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCloudStorageAIServiceCallbackOutcomeCallable ModifyCloudStorageAIServiceCallbackCallable(const Model::ModifyCloudStorageAIServiceCallbackRequest& request);

                /**
                 *更新围栏绑定信息。
                 * @param req ModifyFenceBindRequest
                 * @return ModifyFenceBindOutcome
                 */
                ModifyFenceBindOutcome ModifyFenceBind(const Model::ModifyFenceBindRequest &request);
                void ModifyFenceBindAsync(const Model::ModifyFenceBindRequest& request, const ModifyFenceBindAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyFenceBindOutcomeCallable ModifyFenceBindCallable(const Model::ModifyFenceBindRequest& request);

                /**
                 *修改LoRa自定义频点
                 * @param req ModifyLoRaFrequencyRequest
                 * @return ModifyLoRaFrequencyOutcome
                 */
                ModifyLoRaFrequencyOutcome ModifyLoRaFrequency(const Model::ModifyLoRaFrequencyRequest &request);
                void ModifyLoRaFrequencyAsync(const Model::ModifyLoRaFrequencyRequest& request, const ModifyLoRaFrequencyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoRaFrequencyOutcomeCallable ModifyLoRaFrequencyCallable(const Model::ModifyLoRaFrequencyRequest& request);

                /**
                 *修改 LoRa 网关信息
                 * @param req ModifyLoRaGatewayRequest
                 * @return ModifyLoRaGatewayOutcome
                 */
                ModifyLoRaGatewayOutcome ModifyLoRaGateway(const Model::ModifyLoRaGatewayRequest &request);
                void ModifyLoRaGatewayAsync(const Model::ModifyLoRaGatewayRequest& request, const ModifyLoRaGatewayAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyLoRaGatewayOutcomeCallable ModifyLoRaGatewayCallable(const Model::ModifyLoRaGatewayRequest& request);

                /**
                 *提供修改产品的数据模板的能力
                 * @param req ModifyModelDefinitionRequest
                 * @return ModifyModelDefinitionOutcome
                 */
                ModifyModelDefinitionOutcome ModifyModelDefinition(const Model::ModifyModelDefinitionRequest &request);
                void ModifyModelDefinitionAsync(const Model::ModifyModelDefinitionRequest& request, const ModifyModelDefinitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyModelDefinitionOutcomeCallable ModifyModelDefinitionCallable(const Model::ModifyModelDefinitionRequest& request);

                /**
                 *更新围栏。
                 * @param req ModifyPositionFenceRequest
                 * @return ModifyPositionFenceOutcome
                 */
                ModifyPositionFenceOutcome ModifyPositionFence(const Model::ModifyPositionFenceRequest &request);
                void ModifyPositionFenceAsync(const Model::ModifyPositionFenceRequest& request, const ModifyPositionFenceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPositionFenceOutcomeCallable ModifyPositionFenceCallable(const Model::ModifyPositionFenceRequest& request);

                /**
                 *更新位置空间。
                 * @param req ModifyPositionSpaceRequest
                 * @return ModifyPositionSpaceOutcome
                 */
                ModifyPositionSpaceOutcome ModifyPositionSpace(const Model::ModifyPositionSpaceRequest &request);
                void ModifyPositionSpaceAsync(const Model::ModifyPositionSpaceRequest& request, const ModifyPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPositionSpaceOutcomeCallable ModifyPositionSpaceCallable(const Model::ModifyPositionSpaceRequest& request);

                /**
                 *修改指定产品的云存 AI 服务开通状态
                 * @param req ModifyProductCloudStorageAIServiceRequest
                 * @return ModifyProductCloudStorageAIServiceOutcome
                 */
                ModifyProductCloudStorageAIServiceOutcome ModifyProductCloudStorageAIService(const Model::ModifyProductCloudStorageAIServiceRequest &request);
                void ModifyProductCloudStorageAIServiceAsync(const Model::ModifyProductCloudStorageAIServiceRequest& request, const ModifyProductCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProductCloudStorageAIServiceOutcomeCallable ModifyProductCloudStorageAIServiceCallable(const Model::ModifyProductCloudStorageAIServiceRequest& request);

                /**
                 *修改项目。
                 * @param req ModifyProjectRequest
                 * @return ModifyProjectOutcome
                 */
                ModifyProjectOutcome ModifyProject(const Model::ModifyProjectRequest &request);
                void ModifyProjectAsync(const Model::ModifyProjectRequest& request, const ModifyProjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyProjectOutcomeCallable ModifyProjectCallable(const Model::ModifyProjectRequest& request);

                /**
                 *更新位置空间产品属性
                 * @param req ModifySpacePropertyRequest
                 * @return ModifySpacePropertyOutcome
                 */
                ModifySpacePropertyOutcome ModifySpaceProperty(const Model::ModifySpacePropertyRequest &request);
                void ModifySpacePropertyAsync(const Model::ModifySpacePropertyRequest& request, const ModifySpacePropertyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifySpacePropertyOutcomeCallable ModifySpacePropertyCallable(const Model::ModifySpacePropertyRequest& request);

                /**
                 *提供修改产品的名称和描述等信息的能力，对于已发布产品不允许进行修改。
                 * @param req ModifyStudioProductRequest
                 * @return ModifyStudioProductOutcome
                 */
                ModifyStudioProductOutcome ModifyStudioProduct(const Model::ModifyStudioProductRequest &request);
                void ModifyStudioProductAsync(const Model::ModifyStudioProductRequest& request, const ModifyStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyStudioProductOutcomeCallable ModifyStudioProductCallable(const Model::ModifyStudioProductRequest& request);

                /**
                 *修改 TWeSee 配置
                 * @param req ModifyTWeSeeConfigRequest
                 * @return ModifyTWeSeeConfigOutcome
                 */
                ModifyTWeSeeConfigOutcome ModifyTWeSeeConfig(const Model::ModifyTWeSeeConfigRequest &request);
                void ModifyTWeSeeConfigAsync(const Model::ModifyTWeSeeConfigRequest& request, const ModifyTWeSeeConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTWeSeeConfigOutcomeCallable ModifyTWeSeeConfigCallable(const Model::ModifyTWeSeeConfigRequest& request);

                /**
                 *用于修改TWeTalk智能体。
                 * @param req ModifyTWeTalkAIBotRequest
                 * @return ModifyTWeTalkAIBotOutcome
                 */
                ModifyTWeTalkAIBotOutcome ModifyTWeTalkAIBot(const Model::ModifyTWeTalkAIBotRequest &request);
                void ModifyTWeTalkAIBotAsync(const Model::ModifyTWeTalkAIBotRequest& request, const ModifyTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTWeTalkAIBotOutcomeCallable ModifyTWeTalkAIBotCallable(const Model::ModifyTWeTalkAIBotRequest& request);

                /**
                 *用于修改TWeTalk服务连接产品配置信息。
                 * @param req ModifyTWeTalkProductConfigRequest
                 * @return ModifyTWeTalkProductConfigOutcome
                 */
                ModifyTWeTalkProductConfigOutcome ModifyTWeTalkProductConfig(const Model::ModifyTWeTalkProductConfigRequest &request);
                void ModifyTWeTalkProductConfigAsync(const Model::ModifyTWeTalkProductConfigRequest& request, const ModifyTWeTalkProductConfigAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTWeTalkProductConfigOutcomeCallable ModifyTWeTalkProductConfigCallable(const Model::ModifyTWeTalkProductConfigRequest& request);

                /**
                 *用于修改配置TWeTalk服务连接产品配置信息。
                 * @param req ModifyTWeTalkProductConfigV2Request
                 * @return ModifyTWeTalkProductConfigV2Outcome
                 */
                ModifyTWeTalkProductConfigV2Outcome ModifyTWeTalkProductConfigV2(const Model::ModifyTWeTalkProductConfigV2Request &request);
                void ModifyTWeTalkProductConfigV2Async(const Model::ModifyTWeTalkProductConfigV2Request& request, const ModifyTWeTalkProductConfigV2AsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTWeTalkProductConfigV2OutcomeCallable ModifyTWeTalkProductConfigV2Callable(const Model::ModifyTWeTalkProductConfigV2Request& request);

                /**
                 *本接口（UpdateTopicPolicy）用于更新Topic信息
                 * @param req ModifyTopicPolicyRequest
                 * @return ModifyTopicPolicyOutcome
                 */
                ModifyTopicPolicyOutcome ModifyTopicPolicy(const Model::ModifyTopicPolicyRequest &request);
                void ModifyTopicPolicyAsync(const Model::ModifyTopicPolicyRequest& request, const ModifyTopicPolicyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicPolicyOutcomeCallable ModifyTopicPolicyCallable(const Model::ModifyTopicPolicyRequest& request);

                /**
                 *修改规则
                 * @param req ModifyTopicRuleRequest
                 * @return ModifyTopicRuleOutcome
                 */
                ModifyTopicRuleOutcome ModifyTopicRule(const Model::ModifyTopicRuleRequest &request);
                void ModifyTopicRuleAsync(const Model::ModifyTopicRuleRequest& request, const ModifyTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyTopicRuleOutcomeCallable ModifyTopicRuleCallable(const Model::ModifyTopicRuleRequest& request);

                /**
                 *暂停设备
                 * @param req PauseTWeCallDeviceRequest
                 * @return PauseTWeCallDeviceOutcome
                 */
                PauseTWeCallDeviceOutcome PauseTWeCallDevice(const Model::PauseTWeCallDeviceRequest &request);
                void PauseTWeCallDeviceAsync(const Model::PauseTWeCallDeviceRequest& request, const PauseTWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PauseTWeCallDeviceOutcomeCallable PauseTWeCallDeviceCallable(const Model::PauseTWeCallDeviceRequest& request);

                /**
                 *发布广播消息、发布RRPC消息属于早期服务，目前已停止维护，需要从官网下线。

发布广播消息
                 * @param req PublishBroadcastMessageRequest
                 * @return PublishBroadcastMessageOutcome
                 */
                PublishBroadcastMessageOutcome PublishBroadcastMessage(const Model::PublishBroadcastMessageRequest &request);
                void PublishBroadcastMessageAsync(const Model::PublishBroadcastMessageRequest& request, const PublishBroadcastMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishBroadcastMessageOutcomeCallable PublishBroadcastMessageCallable(const Model::PublishBroadcastMessageRequest& request);

                /**
                 *本接口（PublishFirmwareUpdateMessage）用于用户确认升级后，云端向设备发起固件升级请求。
                 * @param req PublishFirmwareUpdateMessageRequest
                 * @return PublishFirmwareUpdateMessageOutcome
                 */
                PublishFirmwareUpdateMessageOutcome PublishFirmwareUpdateMessage(const Model::PublishFirmwareUpdateMessageRequest &request);
                void PublishFirmwareUpdateMessageAsync(const Model::PublishFirmwareUpdateMessageRequest& request, const PublishFirmwareUpdateMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishFirmwareUpdateMessageOutcomeCallable PublishFirmwareUpdateMessageCallable(const Model::PublishFirmwareUpdateMessageRequest& request);

                /**
                 *本接口（PublishMessage）用于使用自定义透传协议进行设备远控
                 * @param req PublishMessageRequest
                 * @return PublishMessageOutcome
                 */
                PublishMessageOutcome PublishMessage(const Model::PublishMessageRequest &request);
                void PublishMessageAsync(const Model::PublishMessageRequest& request, const PublishMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishMessageOutcomeCallable PublishMessageCallable(const Model::PublishMessageRequest& request);

                /**
                 *发布广播消息、发布RRPC消息属于早期服务，目前已停止维护，需要从官网下线。

下发RRPC消息
                 * @param req PublishRRPCMessageRequest
                 * @return PublishRRPCMessageOutcome
                 */
                PublishRRPCMessageOutcome PublishRRPCMessage(const Model::PublishRRPCMessageRequest &request);
                void PublishRRPCMessageAsync(const Model::PublishRRPCMessageRequest& request, const PublishRRPCMessageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                PublishRRPCMessageOutcomeCallable PublishRRPCMessageCallable(const Model::PublishRRPCMessageRequest& request);

                /**
                 *产品开发完成并测试通过后，通过发布产品将产品设置为发布状态
                 * @param req ReleaseStudioProductRequest
                 * @return ReleaseStudioProductOutcome
                 */
                ReleaseStudioProductOutcome ReleaseStudioProduct(const Model::ReleaseStudioProductRequest &request);
                void ReleaseStudioProductAsync(const Model::ReleaseStudioProductRequest& request, const ReleaseStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReleaseStudioProductOutcomeCallable ReleaseStudioProductCallable(const Model::ReleaseStudioProductRequest& request);

                /**
                 *TRTC操作，将用户从房间移出
                 * @param req RemoveUserByRoomIdFromTRTCRequest
                 * @return RemoveUserByRoomIdFromTRTCOutcome
                 */
                RemoveUserByRoomIdFromTRTCOutcome RemoveUserByRoomIdFromTRTC(const Model::RemoveUserByRoomIdFromTRTCRequest &request);
                void RemoveUserByRoomIdFromTRTCAsync(const Model::RemoveUserByRoomIdFromTRTCRequest& request, const RemoveUserByRoomIdFromTRTCAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RemoveUserByRoomIdFromTRTCOutcomeCallable RemoveUserByRoomIdFromTRTCCallable(const Model::RemoveUserByRoomIdFromTRTCRequest& request);

                /**
                 *重置云存服务
                 * @param req ResetCloudStorageRequest
                 * @return ResetCloudStorageOutcome
                 */
                ResetCloudStorageOutcome ResetCloudStorage(const Model::ResetCloudStorageRequest &request);
                void ResetCloudStorageAsync(const Model::ResetCloudStorageRequest& request, const ResetCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetCloudStorageOutcomeCallable ResetCloudStorageCallable(const Model::ResetCloudStorageRequest& request);

                /**
                 *重置指定设备的云存 AI 服务
                 * @param req ResetCloudStorageAIServiceRequest
                 * @return ResetCloudStorageAIServiceOutcome
                 */
                ResetCloudStorageAIServiceOutcome ResetCloudStorageAIService(const Model::ResetCloudStorageAIServiceRequest &request);
                void ResetCloudStorageAIServiceAsync(const Model::ResetCloudStorageAIServiceRequest& request, const ResetCloudStorageAIServiceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetCloudStorageAIServiceOutcomeCallable ResetCloudStorageAIServiceCallable(const Model::ResetCloudStorageAIServiceRequest& request);

                /**
                 *重置云存事件
                 * @param req ResetCloudStorageEventRequest
                 * @return ResetCloudStorageEventOutcome
                 */
                ResetCloudStorageEventOutcome ResetCloudStorageEvent(const Model::ResetCloudStorageEventRequest &request);
                void ResetCloudStorageEventAsync(const Model::ResetCloudStorageEventRequest& request, const ResetCloudStorageEventAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetCloudStorageEventOutcomeCallable ResetCloudStorageEventCallable(const Model::ResetCloudStorageEventRequest& request);

                /**
                 *重置设备
                 * @param req ResetTWeCallDeviceRequest
                 * @return ResetTWeCallDeviceOutcome
                 */
                ResetTWeCallDeviceOutcome ResetTWeCallDevice(const Model::ResetTWeCallDeviceRequest &request);
                void ResetTWeCallDeviceAsync(const Model::ResetTWeCallDeviceRequest& request, const ResetTWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResetTWeCallDeviceOutcomeCallable ResetTWeCallDeviceCallable(const Model::ResetTWeCallDeviceRequest& request);

                /**
                 *恢复设备
                 * @param req ResumeWeCallDeviceRequest
                 * @return ResumeWeCallDeviceOutcome
                 */
                ResumeWeCallDeviceOutcome ResumeWeCallDevice(const Model::ResumeWeCallDeviceRequest &request);
                void ResumeWeCallDeviceAsync(const Model::ResumeWeCallDeviceRequest& request, const ResumeWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ResumeWeCallDeviceOutcomeCallable ResumeWeCallDeviceCallable(const Model::ResumeWeCallDeviceRequest& request);

                /**
                 *搜索位置空间
                 * @param req SearchPositionSpaceRequest
                 * @return SearchPositionSpaceOutcome
                 */
                SearchPositionSpaceOutcome SearchPositionSpace(const Model::SearchPositionSpaceRequest &request);
                void SearchPositionSpaceAsync(const Model::SearchPositionSpaceRequest& request, const SearchPositionSpaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchPositionSpaceOutcomeCallable SearchPositionSpaceCallable(const Model::SearchPositionSpaceRequest& request);

                /**
                 *提供根据产品名称查找产品的能力
                 * @param req SearchStudioProductRequest
                 * @return SearchStudioProductOutcome
                 */
                SearchStudioProductOutcome SearchStudioProduct(const Model::SearchStudioProductRequest &request);
                void SearchStudioProductAsync(const Model::SearchStudioProductRequest& request, const SearchStudioProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchStudioProductOutcomeCallable SearchStudioProductCallable(const Model::SearchStudioProductRequest& request);

                /**
                 *搜索规则
                 * @param req SearchTopicRuleRequest
                 * @return SearchTopicRuleOutcome
                 */
                SearchTopicRuleOutcome SearchTopicRule(const Model::SearchTopicRuleRequest &request);
                void SearchTopicRuleAsync(const Model::SearchTopicRuleRequest& request, const SearchTopicRuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchTopicRuleOutcomeCallable SearchTopicRuleCallable(const Model::SearchTopicRuleRequest& request);

                /**
                 *转移云存服务
                 * @param req TransferCloudStorageRequest
                 * @return TransferCloudStorageOutcome
                 */
                TransferCloudStorageOutcome TransferCloudStorage(const Model::TransferCloudStorageRequest &request);
                void TransferCloudStorageAsync(const Model::TransferCloudStorageRequest& request, const TransferCloudStorageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferCloudStorageOutcomeCallable TransferCloudStorageCallable(const Model::TransferCloudStorageRequest& request);

                /**
                 *转移设备
                 * @param req TransferTWeCallDeviceRequest
                 * @return TransferTWeCallDeviceOutcome
                 */
                TransferTWeCallDeviceOutcome TransferTWeCallDevice(const Model::TransferTWeCallDeviceRequest &request);
                void TransferTWeCallDeviceAsync(const Model::TransferTWeCallDeviceRequest& request, const TransferTWeCallDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TransferTWeCallDeviceOutcomeCallable TransferTWeCallDeviceCallable(const Model::TransferTWeCallDeviceRequest& request);

                /**
                 *批量解绑子设备
                 * @param req UnbindDevicesRequest
                 * @return UnbindDevicesOutcome
                 */
                UnbindDevicesOutcome UnbindDevices(const Model::UnbindDevicesRequest &request);
                void UnbindDevicesAsync(const Model::UnbindDevicesRequest& request, const UnbindDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindDevicesOutcomeCallable UnbindDevicesCallable(const Model::UnbindDevicesRequest& request);

                /**
                 *批量解绑子产品。
                 * @param req UnbindProductsRequest
                 * @return UnbindProductsOutcome
                 */
                UnbindProductsOutcome UnbindProducts(const Model::UnbindProductsRequest &request);
                void UnbindProductsAsync(const Model::UnbindProductsRequest& request, const UnbindProductsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindProductsOutcomeCallable UnbindProductsCallable(const Model::UnbindProductsRequest& request);

                /**
                 *用于解除一个产品和智能体的绑定。
                 * @param req UnbindTWeTalkAIBotRequest
                 * @return UnbindTWeTalkAIBotOutcome
                 */
                UnbindTWeTalkAIBotOutcome UnbindTWeTalkAIBot(const Model::UnbindTWeTalkAIBotRequest &request);
                void UnbindTWeTalkAIBotAsync(const Model::UnbindTWeTalkAIBotRequest& request, const UnbindTWeTalkAIBotAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UnbindTWeTalkAIBotOutcomeCallable UnbindTWeTalkAIBotCallable(const Model::UnbindTWeTalkAIBotRequest& request);

                /**
                 *更新用户对设备的TweCall授权状态
                 * @param req UpdateDeviceTWeCallAuthorizeStatusRequest
                 * @return UpdateDeviceTWeCallAuthorizeStatusOutcome
                 */
                UpdateDeviceTWeCallAuthorizeStatusOutcome UpdateDeviceTWeCallAuthorizeStatus(const Model::UpdateDeviceTWeCallAuthorizeStatusRequest &request);
                void UpdateDeviceTWeCallAuthorizeStatusAsync(const Model::UpdateDeviceTWeCallAuthorizeStatusRequest& request, const UpdateDeviceTWeCallAuthorizeStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceTWeCallAuthorizeStatusOutcomeCallable UpdateDeviceTWeCallAuthorizeStatusCallable(const Model::UpdateDeviceTWeCallAuthorizeStatusRequest& request);

                /**
                 *批量禁用启用设备
                 * @param req UpdateDevicesEnableStateRequest
                 * @return UpdateDevicesEnableStateOutcome
                 */
                UpdateDevicesEnableStateOutcome UpdateDevicesEnableState(const Model::UpdateDevicesEnableStateRequest &request);
                void UpdateDevicesEnableStateAsync(const Model::UpdateDevicesEnableStateRequest& request, const UpdateDevicesEnableStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDevicesEnableStateOutcomeCallable UpdateDevicesEnableStateCallable(const Model::UpdateDevicesEnableStateRequest& request);

                /**
                 *本接口（UpdateFirmware）用于对指定设备发起固件升级请求
                 * @param req UpdateFirmwareRequest
                 * @return UpdateFirmwareOutcome
                 */
                UpdateFirmwareOutcome UpdateFirmware(const Model::UpdateFirmwareRequest &request);
                void UpdateFirmwareAsync(const Model::UpdateFirmwareRequest& request, const UpdateFirmwareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateFirmwareOutcomeCallable UpdateFirmwareCallable(const Model::UpdateFirmwareRequest& request);

                /**
                 *本接口（UpdateOtaModule）用于修改OTA模块
                 * @param req UpdateOtaModuleRequest
                 * @return UpdateOtaModuleOutcome
                 */
                UpdateOtaModuleOutcome UpdateOtaModule(const Model::UpdateOtaModuleRequest &request);
                void UpdateOtaModuleAsync(const Model::UpdateOtaModuleRequest& request, const UpdateOtaModuleAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOtaModuleOutcomeCallable UpdateOtaModuleCallable(const Model::UpdateOtaModuleRequest& request);

                /**
                 *本接口（UpdateOtaTask）当固件升级大任务处于没有在全部成功的状态时，可修改为取消状态，取消部分或全部设备的升级;或其它允许的可修改的状态。
                 * @param req UpdateOtaTaskStatusRequest
                 * @return UpdateOtaTaskStatusOutcome
                 */
                UpdateOtaTaskStatusOutcome UpdateOtaTaskStatus(const Model::UpdateOtaTaskStatusRequest &request);
                void UpdateOtaTaskStatusAsync(const Model::UpdateOtaTaskStatusRequest& request, const UpdateOtaTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateOtaTaskStatusOutcomeCallable UpdateOtaTaskStatusCallable(const Model::UpdateOtaTaskStatusRequest& request);

                /**
                 *本接口（UploadFirmware）用于创建设备固件版本信息，在平台用于固件版本升级、固件资源下发等。
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

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_IOTEXPLORERCLIENT_H_
