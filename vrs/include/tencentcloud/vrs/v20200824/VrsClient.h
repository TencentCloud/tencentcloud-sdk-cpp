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

#ifndef TENCENTCLOUD_VRS_V20200824_VRSCLIENT_H_
#define TENCENTCLOUD_VRS_V20200824_VRSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/vrs/v20200824/model/CancelVRSTaskRequest.h>
#include <tencentcloud/vrs/v20200824/model/CancelVRSTaskResponse.h>
#include <tencentcloud/vrs/v20200824/model/CreateVRSTaskRequest.h>
#include <tencentcloud/vrs/v20200824/model/CreateVRSTaskResponse.h>
#include <tencentcloud/vrs/v20200824/model/DescribeVRSTaskStatusRequest.h>
#include <tencentcloud/vrs/v20200824/model/DescribeVRSTaskStatusResponse.h>
#include <tencentcloud/vrs/v20200824/model/DetectEnvAndSoundQualityRequest.h>
#include <tencentcloud/vrs/v20200824/model/DetectEnvAndSoundQualityResponse.h>
#include <tencentcloud/vrs/v20200824/model/DownloadVRSModelRequest.h>
#include <tencentcloud/vrs/v20200824/model/DownloadVRSModelResponse.h>
#include <tencentcloud/vrs/v20200824/model/GetTrainingTextRequest.h>
#include <tencentcloud/vrs/v20200824/model/GetTrainingTextResponse.h>
#include <tencentcloud/vrs/v20200824/model/GetVRSVoiceTypeInfoRequest.h>
#include <tencentcloud/vrs/v20200824/model/GetVRSVoiceTypeInfoResponse.h>
#include <tencentcloud/vrs/v20200824/model/GetVRSVoiceTypesRequest.h>
#include <tencentcloud/vrs/v20200824/model/GetVRSVoiceTypesResponse.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            class VrsClient : public AbstractClient
            {
            public:
                VrsClient(const Credential &credential, const std::string &region);
                VrsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CancelVRSTaskResponse> CancelVRSTaskOutcome;
                typedef std::future<CancelVRSTaskOutcome> CancelVRSTaskOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::CancelVRSTaskRequest&, CancelVRSTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelVRSTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateVRSTaskResponse> CreateVRSTaskOutcome;
                typedef std::future<CreateVRSTaskOutcome> CreateVRSTaskOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::CreateVRSTaskRequest&, CreateVRSTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateVRSTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeVRSTaskStatusResponse> DescribeVRSTaskStatusOutcome;
                typedef std::future<DescribeVRSTaskStatusOutcome> DescribeVRSTaskStatusOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::DescribeVRSTaskStatusRequest&, DescribeVRSTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeVRSTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectEnvAndSoundQualityResponse> DetectEnvAndSoundQualityOutcome;
                typedef std::future<DetectEnvAndSoundQualityOutcome> DetectEnvAndSoundQualityOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::DetectEnvAndSoundQualityRequest&, DetectEnvAndSoundQualityOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectEnvAndSoundQualityAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadVRSModelResponse> DownloadVRSModelOutcome;
                typedef std::future<DownloadVRSModelOutcome> DownloadVRSModelOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::DownloadVRSModelRequest&, DownloadVRSModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadVRSModelAsyncHandler;
                typedef Outcome<Core::Error, Model::GetTrainingTextResponse> GetTrainingTextOutcome;
                typedef std::future<GetTrainingTextOutcome> GetTrainingTextOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::GetTrainingTextRequest&, GetTrainingTextOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetTrainingTextAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVRSVoiceTypeInfoResponse> GetVRSVoiceTypeInfoOutcome;
                typedef std::future<GetVRSVoiceTypeInfoOutcome> GetVRSVoiceTypeInfoOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::GetVRSVoiceTypeInfoRequest&, GetVRSVoiceTypeInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVRSVoiceTypeInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVRSVoiceTypesResponse> GetVRSVoiceTypesOutcome;
                typedef std::future<GetVRSVoiceTypesOutcome> GetVRSVoiceTypesOutcomeCallable;
                typedef std::function<void(const VrsClient*, const Model::GetVRSVoiceTypesRequest&, GetVRSVoiceTypesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVRSVoiceTypesAsyncHandler;



                /**
                 *声音复刻取消任务接口
                 * @param req CancelVRSTaskRequest
                 * @return CancelVRSTaskOutcome
                 */
                CancelVRSTaskOutcome CancelVRSTask(const Model::CancelVRSTaskRequest &request);
                void CancelVRSTaskAsync(const Model::CancelVRSTaskRequest& request, const CancelVRSTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelVRSTaskOutcomeCallable CancelVRSTaskCallable(const Model::CancelVRSTaskRequest& request);

                /**
                 *本接口服务对提交音频进行声音复刻任务创建接口，异步返回复刻结果。
• 请求方法为 HTTP POST , Content-Type为"application/json; charset=utf-8"
• 签名方法参考 公共参数 中签名方法v3。
                 * @param req CreateVRSTaskRequest
                 * @return CreateVRSTaskOutcome
                 */
                CreateVRSTaskOutcome CreateVRSTask(const Model::CreateVRSTaskRequest &request);
                void CreateVRSTaskAsync(const Model::CreateVRSTaskRequest& request, const CreateVRSTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateVRSTaskOutcomeCallable CreateVRSTaskCallable(const Model::CreateVRSTaskRequest& request);

                /**
                 *在调用声音复刻创建任务请求接口后，有回调和轮询两种方式获取识别结果。（注意：回调方式目前仅支持轻量版声音复刻）
• 当采用回调方式时，识别完成后会将结果通过 POST 请求的形式通知到用户在请求时填写的回调 URL，具体请参见 [“声音复刻任务创建接口”](https://cloud.tencent.com/document/product/1283/90064) CallbackUrl参数说明 。
• 当采用轮询方式时，需要主动提交任务ID来轮询识别结果，共有任务成功、等待、执行中和失败四种结果，具体信息请参见下文说明。
• 请求方法为 HTTP POST , Content-Type为"application/json; charset=utf-8"
• 签名方法参考 公共参数 中签名方法v3。
                 * @param req DescribeVRSTaskStatusRequest
                 * @return DescribeVRSTaskStatusOutcome
                 */
                DescribeVRSTaskStatusOutcome DescribeVRSTaskStatus(const Model::DescribeVRSTaskStatusRequest &request);
                void DescribeVRSTaskStatusAsync(const Model::DescribeVRSTaskStatusRequest& request, const DescribeVRSTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeVRSTaskStatusOutcomeCallable DescribeVRSTaskStatusCallable(const Model::DescribeVRSTaskStatusRequest& request);

                /**
                 *本接口用于检测音频的环境和音频质量。
对于一句话声音复刻，音频时长需大于3s，小于15s，文件大小不能超过2MB，音频需为单声道，位深为16bit。建议格式：wav、单声道、采样率48kHz或24kHz 
• 请求方法为 HTTP POST , Content-Type为"application/json; charset=utf-8"
• 签名方法参考 公共参数 中签名方法v3。
                 * @param req DetectEnvAndSoundQualityRequest
                 * @return DetectEnvAndSoundQualityOutcome
                 */
                DetectEnvAndSoundQualityOutcome DetectEnvAndSoundQuality(const Model::DetectEnvAndSoundQualityRequest &request);
                void DetectEnvAndSoundQualityAsync(const Model::DetectEnvAndSoundQualityRequest& request, const DetectEnvAndSoundQualityAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectEnvAndSoundQualityOutcomeCallable DetectEnvAndSoundQualityCallable(const Model::DetectEnvAndSoundQualityRequest& request);

                /**
                 *下载声音复刻离线模型
                 * @param req DownloadVRSModelRequest
                 * @return DownloadVRSModelOutcome
                 */
                DownloadVRSModelOutcome DownloadVRSModel(const Model::DownloadVRSModelRequest &request);
                void DownloadVRSModelAsync(const Model::DownloadVRSModelRequest& request, const DownloadVRSModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadVRSModelOutcomeCallable DownloadVRSModelCallable(const Model::DownloadVRSModelRequest& request);

                /**
                 *本接口用于获取声音复刻训练文本信息。
 请求方法为 HTTP POST , Content-Type为"application/json; charset=utf-8"
• 签名方法参考 公共参数 中签名方法v3。
• 当复刻类型为一句话声音复刻时，生成的TextId有效期为7天，且在成功创建一次复刻任务后失效。
                 * @param req GetTrainingTextRequest
                 * @return GetTrainingTextOutcome
                 */
                GetTrainingTextOutcome GetTrainingText(const Model::GetTrainingTextRequest &request);
                void GetTrainingTextAsync(const Model::GetTrainingTextRequest& request, const GetTrainingTextAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetTrainingTextOutcomeCallable GetTrainingTextCallable(const Model::GetTrainingTextRequest& request);

                /**
                 *该接口用于查询复刻音色详细信息。
                 * @param req GetVRSVoiceTypeInfoRequest
                 * @return GetVRSVoiceTypeInfoOutcome
                 */
                GetVRSVoiceTypeInfoOutcome GetVRSVoiceTypeInfo(const Model::GetVRSVoiceTypeInfoRequest &request);
                void GetVRSVoiceTypeInfoAsync(const Model::GetVRSVoiceTypeInfoRequest& request, const GetVRSVoiceTypeInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVRSVoiceTypeInfoOutcomeCallable GetVRSVoiceTypeInfoCallable(const Model::GetVRSVoiceTypeInfoRequest& request);

                /**
                 *查询复刻音色
                 * @param req GetVRSVoiceTypesRequest
                 * @return GetVRSVoiceTypesOutcome
                 */
                GetVRSVoiceTypesOutcome GetVRSVoiceTypes(const Model::GetVRSVoiceTypesRequest &request);
                void GetVRSVoiceTypesAsync(const Model::GetVRSVoiceTypesRequest& request, const GetVRSVoiceTypesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVRSVoiceTypesOutcomeCallable GetVRSVoiceTypesCallable(const Model::GetVRSVoiceTypesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_VRSCLIENT_H_
