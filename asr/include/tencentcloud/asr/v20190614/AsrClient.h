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

#ifndef TENCENTCLOUD_ASR_V20190614_ASRCLIENT_H_
#define TENCENTCLOUD_ASR_V20190614_ASRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/asr/v20190614/model/CloseAsyncRecognitionTaskRequest.h>
#include <tencentcloud/asr/v20190614/model/CloseAsyncRecognitionTaskResponse.h>
#include <tencentcloud/asr/v20190614/model/CreateAsrKeyWordLibRequest.h>
#include <tencentcloud/asr/v20190614/model/CreateAsrKeyWordLibResponse.h>
#include <tencentcloud/asr/v20190614/model/CreateAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/CreateAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/CreateAsyncRecognitionTaskRequest.h>
#include <tencentcloud/asr/v20190614/model/CreateAsyncRecognitionTaskResponse.h>
#include <tencentcloud/asr/v20190614/model/CreateCustomizationRequest.h>
#include <tencentcloud/asr/v20190614/model/CreateCustomizationResponse.h>
#include <tencentcloud/asr/v20190614/model/CreateRecTaskRequest.h>
#include <tencentcloud/asr/v20190614/model/CreateRecTaskResponse.h>
#include <tencentcloud/asr/v20190614/model/DeleteAsrKeyWordLibRequest.h>
#include <tencentcloud/asr/v20190614/model/DeleteAsrKeyWordLibResponse.h>
#include <tencentcloud/asr/v20190614/model/DeleteAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/DeleteAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/DeleteCustomizationRequest.h>
#include <tencentcloud/asr/v20190614/model/DeleteCustomizationResponse.h>
#include <tencentcloud/asr/v20190614/model/DescribeAsyncRecognitionTasksRequest.h>
#include <tencentcloud/asr/v20190614/model/DescribeAsyncRecognitionTasksResponse.h>
#include <tencentcloud/asr/v20190614/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/asr/v20190614/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/asr/v20190614/model/DownloadAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/DownloadAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/DownloadCustomizationRequest.h>
#include <tencentcloud/asr/v20190614/model/DownloadCustomizationResponse.h>
#include <tencentcloud/asr/v20190614/model/GetAsrKeyWordLibListRequest.h>
#include <tencentcloud/asr/v20190614/model/GetAsrKeyWordLibListResponse.h>
#include <tencentcloud/asr/v20190614/model/GetAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/GetAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/GetAsrVocabListRequest.h>
#include <tencentcloud/asr/v20190614/model/GetAsrVocabListResponse.h>
#include <tencentcloud/asr/v20190614/model/GetCustomizationListRequest.h>
#include <tencentcloud/asr/v20190614/model/GetCustomizationListResponse.h>
#include <tencentcloud/asr/v20190614/model/GetModelInfoRequest.h>
#include <tencentcloud/asr/v20190614/model/GetModelInfoResponse.h>
#include <tencentcloud/asr/v20190614/model/GetUsageByDateRequest.h>
#include <tencentcloud/asr/v20190614/model/GetUsageByDateResponse.h>
#include <tencentcloud/asr/v20190614/model/ModifyCustomizationRequest.h>
#include <tencentcloud/asr/v20190614/model/ModifyCustomizationResponse.h>
#include <tencentcloud/asr/v20190614/model/ModifyCustomizationStateRequest.h>
#include <tencentcloud/asr/v20190614/model/ModifyCustomizationStateResponse.h>
#include <tencentcloud/asr/v20190614/model/SentenceRecognitionRequest.h>
#include <tencentcloud/asr/v20190614/model/SentenceRecognitionResponse.h>
#include <tencentcloud/asr/v20190614/model/SetVocabStateRequest.h>
#include <tencentcloud/asr/v20190614/model/SetVocabStateResponse.h>
#include <tencentcloud/asr/v20190614/model/UpdateAsrKeyWordLibRequest.h>
#include <tencentcloud/asr/v20190614/model/UpdateAsrKeyWordLibResponse.h>
#include <tencentcloud/asr/v20190614/model/UpdateAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/UpdateAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintCompareRequest.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintCompareResponse.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintCountRequest.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintCountResponse.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintDeleteRequest.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintDeleteResponse.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintEnrollRequest.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintEnrollResponse.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintGroupVerifyRequest.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintGroupVerifyResponse.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintUpdateRequest.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintUpdateResponse.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintVerifyRequest.h>
#include <tencentcloud/asr/v20190614/model/VoicePrintVerifyResponse.h>


namespace TencentCloud
{
    namespace Asr
    {
        namespace V20190614
        {
            class AsrClient : public AbstractClient
            {
            public:
                AsrClient(const Credential &credential, const std::string &region);
                AsrClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CloseAsyncRecognitionTaskResponse> CloseAsyncRecognitionTaskOutcome;
                typedef std::future<CloseAsyncRecognitionTaskOutcome> CloseAsyncRecognitionTaskOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CloseAsyncRecognitionTaskRequest&, CloseAsyncRecognitionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CloseAsyncRecognitionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAsrKeyWordLibResponse> CreateAsrKeyWordLibOutcome;
                typedef std::future<CreateAsrKeyWordLibOutcome> CreateAsrKeyWordLibOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CreateAsrKeyWordLibRequest&, CreateAsrKeyWordLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsrKeyWordLibAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAsrVocabResponse> CreateAsrVocabOutcome;
                typedef std::future<CreateAsrVocabOutcome> CreateAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CreateAsrVocabRequest&, CreateAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsrVocabAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateAsyncRecognitionTaskResponse> CreateAsyncRecognitionTaskOutcome;
                typedef std::future<CreateAsyncRecognitionTaskOutcome> CreateAsyncRecognitionTaskOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CreateAsyncRecognitionTaskRequest&, CreateAsyncRecognitionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsyncRecognitionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateCustomizationResponse> CreateCustomizationOutcome;
                typedef std::future<CreateCustomizationOutcome> CreateCustomizationOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CreateCustomizationRequest&, CreateCustomizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCustomizationAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateRecTaskResponse> CreateRecTaskOutcome;
                typedef std::future<CreateRecTaskOutcome> CreateRecTaskOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CreateRecTaskRequest&, CreateRecTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAsrKeyWordLibResponse> DeleteAsrKeyWordLibOutcome;
                typedef std::future<DeleteAsrKeyWordLibOutcome> DeleteAsrKeyWordLibOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DeleteAsrKeyWordLibRequest&, DeleteAsrKeyWordLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsrKeyWordLibAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteAsrVocabResponse> DeleteAsrVocabOutcome;
                typedef std::future<DeleteAsrVocabOutcome> DeleteAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DeleteAsrVocabRequest&, DeleteAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsrVocabAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCustomizationResponse> DeleteCustomizationOutcome;
                typedef std::future<DeleteCustomizationOutcome> DeleteCustomizationOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DeleteCustomizationRequest&, DeleteCustomizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCustomizationAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAsyncRecognitionTasksResponse> DescribeAsyncRecognitionTasksOutcome;
                typedef std::future<DescribeAsyncRecognitionTasksOutcome> DescribeAsyncRecognitionTasksOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DescribeAsyncRecognitionTasksRequest&, DescribeAsyncRecognitionTasksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAsyncRecognitionTasksAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadAsrVocabResponse> DownloadAsrVocabOutcome;
                typedef std::future<DownloadAsrVocabOutcome> DownloadAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DownloadAsrVocabRequest&, DownloadAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadAsrVocabAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadCustomizationResponse> DownloadCustomizationOutcome;
                typedef std::future<DownloadCustomizationOutcome> DownloadCustomizationOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DownloadCustomizationRequest&, DownloadCustomizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadCustomizationAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAsrKeyWordLibListResponse> GetAsrKeyWordLibListOutcome;
                typedef std::future<GetAsrKeyWordLibListOutcome> GetAsrKeyWordLibListOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::GetAsrKeyWordLibListRequest&, GetAsrKeyWordLibListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAsrKeyWordLibListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAsrVocabResponse> GetAsrVocabOutcome;
                typedef std::future<GetAsrVocabOutcome> GetAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::GetAsrVocabRequest&, GetAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAsrVocabAsyncHandler;
                typedef Outcome<Core::Error, Model::GetAsrVocabListResponse> GetAsrVocabListOutcome;
                typedef std::future<GetAsrVocabListOutcome> GetAsrVocabListOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::GetAsrVocabListRequest&, GetAsrVocabListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAsrVocabListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetCustomizationListResponse> GetCustomizationListOutcome;
                typedef std::future<GetCustomizationListOutcome> GetCustomizationListOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::GetCustomizationListRequest&, GetCustomizationListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetCustomizationListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetModelInfoResponse> GetModelInfoOutcome;
                typedef std::future<GetModelInfoOutcome> GetModelInfoOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::GetModelInfoRequest&, GetModelInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetModelInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUsageByDateResponse> GetUsageByDateOutcome;
                typedef std::future<GetUsageByDateOutcome> GetUsageByDateOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::GetUsageByDateRequest&, GetUsageByDateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUsageByDateAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomizationResponse> ModifyCustomizationOutcome;
                typedef std::future<ModifyCustomizationOutcome> ModifyCustomizationOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::ModifyCustomizationRequest&, ModifyCustomizationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizationAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyCustomizationStateResponse> ModifyCustomizationStateOutcome;
                typedef std::future<ModifyCustomizationStateOutcome> ModifyCustomizationStateOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::ModifyCustomizationStateRequest&, ModifyCustomizationStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyCustomizationStateAsyncHandler;
                typedef Outcome<Core::Error, Model::SentenceRecognitionResponse> SentenceRecognitionOutcome;
                typedef std::future<SentenceRecognitionOutcome> SentenceRecognitionOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::SentenceRecognitionRequest&, SentenceRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SentenceRecognitionAsyncHandler;
                typedef Outcome<Core::Error, Model::SetVocabStateResponse> SetVocabStateOutcome;
                typedef std::future<SetVocabStateOutcome> SetVocabStateOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::SetVocabStateRequest&, SetVocabStateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SetVocabStateAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAsrKeyWordLibResponse> UpdateAsrKeyWordLibOutcome;
                typedef std::future<UpdateAsrKeyWordLibOutcome> UpdateAsrKeyWordLibOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::UpdateAsrKeyWordLibRequest&, UpdateAsrKeyWordLibOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAsrKeyWordLibAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateAsrVocabResponse> UpdateAsrVocabOutcome;
                typedef std::future<UpdateAsrVocabOutcome> UpdateAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::UpdateAsrVocabRequest&, UpdateAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAsrVocabAsyncHandler;
                typedef Outcome<Core::Error, Model::VoicePrintCompareResponse> VoicePrintCompareOutcome;
                typedef std::future<VoicePrintCompareOutcome> VoicePrintCompareOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::VoicePrintCompareRequest&, VoicePrintCompareOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoicePrintCompareAsyncHandler;
                typedef Outcome<Core::Error, Model::VoicePrintCountResponse> VoicePrintCountOutcome;
                typedef std::future<VoicePrintCountOutcome> VoicePrintCountOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::VoicePrintCountRequest&, VoicePrintCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoicePrintCountAsyncHandler;
                typedef Outcome<Core::Error, Model::VoicePrintDeleteResponse> VoicePrintDeleteOutcome;
                typedef std::future<VoicePrintDeleteOutcome> VoicePrintDeleteOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::VoicePrintDeleteRequest&, VoicePrintDeleteOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoicePrintDeleteAsyncHandler;
                typedef Outcome<Core::Error, Model::VoicePrintEnrollResponse> VoicePrintEnrollOutcome;
                typedef std::future<VoicePrintEnrollOutcome> VoicePrintEnrollOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::VoicePrintEnrollRequest&, VoicePrintEnrollOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoicePrintEnrollAsyncHandler;
                typedef Outcome<Core::Error, Model::VoicePrintGroupVerifyResponse> VoicePrintGroupVerifyOutcome;
                typedef std::future<VoicePrintGroupVerifyOutcome> VoicePrintGroupVerifyOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::VoicePrintGroupVerifyRequest&, VoicePrintGroupVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoicePrintGroupVerifyAsyncHandler;
                typedef Outcome<Core::Error, Model::VoicePrintUpdateResponse> VoicePrintUpdateOutcome;
                typedef std::future<VoicePrintUpdateOutcome> VoicePrintUpdateOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::VoicePrintUpdateRequest&, VoicePrintUpdateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoicePrintUpdateAsyncHandler;
                typedef Outcome<Core::Error, Model::VoicePrintVerifyResponse> VoicePrintVerifyOutcome;
                typedef std::future<VoicePrintVerifyOutcome> VoicePrintVerifyOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::VoicePrintVerifyRequest&, VoicePrintVerifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VoicePrintVerifyAsyncHandler;



                /**
                 *本接口用于关闭语音流异步识别任务。
                 * @param req CloseAsyncRecognitionTaskRequest
                 * @return CloseAsyncRecognitionTaskOutcome
                 */
                CloseAsyncRecognitionTaskOutcome CloseAsyncRecognitionTask(const Model::CloseAsyncRecognitionTaskRequest &request);
                void CloseAsyncRecognitionTaskAsync(const Model::CloseAsyncRecognitionTaskRequest& request, const CloseAsyncRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CloseAsyncRecognitionTaskOutcomeCallable CloseAsyncRecognitionTaskCallable(const Model::CloseAsyncRecognitionTaskRequest& request);

                /**
                 *用户通过本接口进行关键字词表的创建。
<br>•   默认每个用户最多可创建30个关键字词表。
<br>•   每个关键词词表最多可添加100个词，每个词最多5个汉字或15个字符。
<br>•   词表通过本地文件形式上传。
<br>•   本地文件必须为UTF-8编码格式，每行仅添加一个词且不能包含标点和特殊字符。
                 * @param req CreateAsrKeyWordLibRequest
                 * @return CreateAsrKeyWordLibOutcome
                 */
                CreateAsrKeyWordLibOutcome CreateAsrKeyWordLib(const Model::CreateAsrKeyWordLibRequest &request);
                void CreateAsrKeyWordLibAsync(const Model::CreateAsrKeyWordLibRequest& request, const CreateAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAsrKeyWordLibOutcomeCallable CreateAsrKeyWordLibCallable(const Model::CreateAsrKeyWordLibRequest& request);

                /**
                 *用户通过本接口进行热词表的创建。
<br>•   默认最多可创建30个热词表。
<br>•   每个热词表最多可添加1000个词，每个词最长10个汉字或30个英文字符，不能超出限制。
<br>•   热词表可以通过数组或者本地文件形式上传。
<br>•   本地文件必须为UTF-8编码格式，每行仅添加一个热词且不能包含标点和特殊字符。
<br>•   热词权重取值范围为[1,11]之间的整数或者100，权重越大代表该词被识别出来的概率越大。
<br>• 注意:  热词权重设置为11时，当前热词将升级为超级热词，建议仅将重要且必须生效的热词设置到11，设置过多权重为11的热词将影响整体字准率。
                 * @param req CreateAsrVocabRequest
                 * @return CreateAsrVocabOutcome
                 */
                CreateAsrVocabOutcome CreateAsrVocab(const Model::CreateAsrVocabRequest &request);
                void CreateAsrVocabAsync(const Model::CreateAsrVocabRequest& request, const CreateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAsrVocabOutcomeCallable CreateAsrVocabCallable(const Model::CreateAsrVocabRequest& request);

                /**
                 *本接口用于对语音流进行准实时识别，通过异步回调来返回识别结果。适用于直播审核等场景。
<br>• 支持rtmp、rtsp等流媒体协议，以及各类基于http协议的直播流(不支持hls)
<br>• 音频流时长无限制，服务会自动拉取音频流数据，若连续10分钟拉不到流数据时，服务会终止识别任务
<br>• 服务通过回调的方式来提供识别结果，用户需要提供CallbackUrl。回调时机为一小段话(最长15秒)回调一次。
<br>• 签名方法参考 [公共参数](https://cloud.tencent.com/document/api/1093/35640) 中签名方法v3。
<br>• 默认单账号限制并发数为20路，如您有提高并发限制的需求，请提[工单](https://console.cloud.tencent.com/workorder/category)进行咨询。
                 * @param req CreateAsyncRecognitionTaskRequest
                 * @return CreateAsyncRecognitionTaskOutcome
                 */
                CreateAsyncRecognitionTaskOutcome CreateAsyncRecognitionTask(const Model::CreateAsyncRecognitionTaskRequest &request);
                void CreateAsyncRecognitionTaskAsync(const Model::CreateAsyncRecognitionTaskRequest& request, const CreateAsyncRecognitionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAsyncRecognitionTaskOutcomeCallable CreateAsyncRecognitionTaskCallable(const Model::CreateAsyncRecognitionTaskRequest& request);

                /**
                 *用户使用该接口可以创建自学习模型，以供识别调用。

注意：调用该接口后，模型会自动训练。新建模型成功后，调用ModifyCustomizationState接口修改为上线状态，即可在识别请求中使用对应模型ID。
                 * @param req CreateCustomizationRequest
                 * @return CreateCustomizationOutcome
                 */
                CreateCustomizationOutcome CreateCustomization(const Model::CreateCustomizationRequest &request);
                void CreateCustomizationAsync(const Model::CreateCustomizationRequest& request, const CreateCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCustomizationOutcomeCallable CreateCustomizationCallable(const Model::CreateCustomizationRequest& request);

                /**
                 *本接口可对较长的录音文件进行识别。如希望直接使用带界面的语音识别产品，请访问[产品体验中心](https://console.cloud.tencent.com/asr/demonstrate)。产品计费标准请查阅 [计费概述（在线版）](https://cloud.tencent.com/document/product/1093/35686)
• 接口默认限频：20次/秒。此处仅限制任务提交频次，与识别结果返回时效无关
• 返回时效：异步回调，非实时返回。最长3小时返回识别结果，**大多数情况下，1小时的音频1-3分钟即可完成识别**。请注意：上述返回时长不含音频下载时延，且30分钟内发送超过1000小时录音或2万条任务的情况除外
• 音频格式：wav、mp3、m4a、flv、mp4、wma、3gp、amr、aac、ogg-opus、flac
• 支持语言：在本页面上搜索 **EngineModelType**，或前往 [产品功能](https://cloud.tencent.com/document/product/1093/35682) 查看
• 音频提交方式：本接口支持**音频 URL 、本地音频文件**两种请求方式。推荐使用 [腾讯云COS](https://cloud.tencent.com/document/product/436/38484) 来存储、生成URL并提交任务，此种方式将不产生外网和流量下行费用，可节约成本、提升任务速度（可参考COS预签名指南：[使用预签名 URL 访问 COS](https://cloud.tencent.com/document/product/436/68284) ，获取COS预签名url）
• 音频限制：音频 URL 时长不能大于5小时，文件大小不超过1GB；本地音频文件不能大于5MB
• 如何获取识别结果：支持**回调或轮询**的方式获取结果，具体请参考 [录音文件识别结果查询](https://cloud.tencent.com/document/product/1093/37822)
• 识别结果有效时间：识别结果在服务端保存24小时
• 签名方法参考 [公共参数](https://cloud.tencent.com/document/api/1093/35640) 中签名方法 v3
                 * @param req CreateRecTaskRequest
                 * @return CreateRecTaskOutcome
                 */
                CreateRecTaskOutcome CreateRecTask(const Model::CreateRecTaskRequest &request);
                void CreateRecTaskAsync(const Model::CreateRecTaskRequest& request, const CreateRecTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecTaskOutcomeCallable CreateRecTaskCallable(const Model::CreateRecTaskRequest& request);

                /**
                 *用户通过本接口进行关键词表的删除。
                 * @param req DeleteAsrKeyWordLibRequest
                 * @return DeleteAsrKeyWordLibOutcome
                 */
                DeleteAsrKeyWordLibOutcome DeleteAsrKeyWordLib(const Model::DeleteAsrKeyWordLibRequest &request);
                void DeleteAsrKeyWordLibAsync(const Model::DeleteAsrKeyWordLibRequest& request, const DeleteAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAsrKeyWordLibOutcomeCallable DeleteAsrKeyWordLibCallable(const Model::DeleteAsrKeyWordLibRequest& request);

                /**
                 *用户通过本接口进行热词表的删除。
                 * @param req DeleteAsrVocabRequest
                 * @return DeleteAsrVocabOutcome
                 */
                DeleteAsrVocabOutcome DeleteAsrVocab(const Model::DeleteAsrVocabRequest &request);
                void DeleteAsrVocabAsync(const Model::DeleteAsrVocabRequest& request, const DeleteAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAsrVocabOutcomeCallable DeleteAsrVocabCallable(const Model::DeleteAsrVocabRequest& request);

                /**
                 *用户通过该接口可以删除自学习模型
                 * @param req DeleteCustomizationRequest
                 * @return DeleteCustomizationOutcome
                 */
                DeleteCustomizationOutcome DeleteCustomization(const Model::DeleteCustomizationRequest &request);
                void DeleteCustomizationAsync(const Model::DeleteCustomizationRequest& request, const DeleteCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCustomizationOutcomeCallable DeleteCustomizationCallable(const Model::DeleteCustomizationRequest& request);

                /**
                 *本接口用于查询当前在运行的语音流异步识别任务列表。
<br>•   签名方法参考 [公共参数](https://cloud.tencent.com/document/api/1093/35640) 中签名方法v3。
                 * @param req DescribeAsyncRecognitionTasksRequest
                 * @return DescribeAsyncRecognitionTasksOutcome
                 */
                DescribeAsyncRecognitionTasksOutcome DescribeAsyncRecognitionTasks(const Model::DescribeAsyncRecognitionTasksRequest &request);
                void DescribeAsyncRecognitionTasksAsync(const Model::DescribeAsyncRecognitionTasksRequest& request, const DescribeAsyncRecognitionTasksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAsyncRecognitionTasksOutcomeCallable DescribeAsyncRecognitionTasksCallable(const Model::DescribeAsyncRecognitionTasksRequest& request);

                /**
                 *调用录音文件识别请求接口后，有回调和轮询两种方式获取识别结果。
• **注意任务有效期为24小时，超过24小时的任务请不要再查询，且不要依赖TaskId作为业务唯一ID，不同日期可能出现重复TaskId。**
• 当采用回调方式时，识别完成后会将结果通过 POST 请求的形式通知到用户在请求时填写的回调 URL，具体请参见[ 录音识别结果回调 ](https://cloud.tencent.com/document/product/1093/52632)。
• 当采用轮询方式时，需要主动提交任务ID来轮询识别结果，共有任务成功、等待、执行中和失败四种结果，具体信息请参见下文说明。
•   请求方法为 HTTP POST , Content-Type为"application/json; charset=utf-8"
•   签名方法参考 [公共参数](https://cloud.tencent.com/document/api/1093/35640) 中签名方法v3。
•   默认接口请求频率限制：50次/秒，如您有提高请求频率限制的需求，请提[工单](https://console.cloud.tencent.com/workorder/category)进行咨询。
                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *用户通过本接口进行热词表的下载，获得词表权重文件形式的 base64 值，文件形式为通过 “|” 分割的词和权重，即 word|weight 的形式。
                 * @param req DownloadAsrVocabRequest
                 * @return DownloadAsrVocabOutcome
                 */
                DownloadAsrVocabOutcome DownloadAsrVocab(const Model::DownloadAsrVocabRequest &request);
                void DownloadAsrVocabAsync(const Model::DownloadAsrVocabRequest& request, const DownloadAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadAsrVocabOutcomeCallable DownloadAsrVocabCallable(const Model::DownloadAsrVocabRequest& request);

                /**
                 *用户通过该接口可以下载自学习模型的语料
                 * @param req DownloadCustomizationRequest
                 * @return DownloadCustomizationOutcome
                 */
                DownloadCustomizationOutcome DownloadCustomization(const Model::DownloadCustomizationRequest &request);
                void DownloadCustomizationAsync(const Model::DownloadCustomizationRequest& request, const DownloadCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadCustomizationOutcomeCallable DownloadCustomizationCallable(const Model::DownloadCustomizationRequest& request);

                /**
                 *用户通过该接口，可获得所有的关键词表及其信息。
                 * @param req GetAsrKeyWordLibListRequest
                 * @return GetAsrKeyWordLibListOutcome
                 */
                GetAsrKeyWordLibListOutcome GetAsrKeyWordLibList(const Model::GetAsrKeyWordLibListRequest &request);
                void GetAsrKeyWordLibListAsync(const Model::GetAsrKeyWordLibListRequest& request, const GetAsrKeyWordLibListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAsrKeyWordLibListOutcomeCallable GetAsrKeyWordLibListCallable(const Model::GetAsrKeyWordLibListRequest& request);

                /**
                 *用户根据词表的ID可以获取对应的热词表信息
                 * @param req GetAsrVocabRequest
                 * @return GetAsrVocabOutcome
                 */
                GetAsrVocabOutcome GetAsrVocab(const Model::GetAsrVocabRequest &request);
                void GetAsrVocabAsync(const Model::GetAsrVocabRequest& request, const GetAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAsrVocabOutcomeCallable GetAsrVocabCallable(const Model::GetAsrVocabRequest& request);

                /**
                 *用户通过该接口，可获得所有的热词表及其信息。
                 * @param req GetAsrVocabListRequest
                 * @return GetAsrVocabListOutcome
                 */
                GetAsrVocabListOutcome GetAsrVocabList(const Model::GetAsrVocabListRequest &request);
                void GetAsrVocabListAsync(const Model::GetAsrVocabListRequest& request, const GetAsrVocabListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAsrVocabListOutcomeCallable GetAsrVocabListCallable(const Model::GetAsrVocabListRequest& request);

                /**
                 *查询自学习模型列表
                 * @param req GetCustomizationListRequest
                 * @return GetCustomizationListOutcome
                 */
                GetCustomizationListOutcome GetCustomizationList(const Model::GetCustomizationListRequest &request);
                void GetCustomizationListAsync(const Model::GetCustomizationListRequest& request, const GetCustomizationListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetCustomizationListOutcomeCallable GetCustomizationListCallable(const Model::GetCustomizationListRequest& request);

                /**
                 *通过自学习模型id获取自学习模型详细信息
                 * @param req GetModelInfoRequest
                 * @return GetModelInfoOutcome
                 */
                GetModelInfoOutcome GetModelInfo(const Model::GetModelInfoRequest &request);
                void GetModelInfoAsync(const Model::GetModelInfoRequest& request, const GetModelInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetModelInfoOutcomeCallable GetModelInfoCallable(const Model::GetModelInfoRequest& request);

                /**
                 *查询用户用量
                 * @param req GetUsageByDateRequest
                 * @return GetUsageByDateOutcome
                 */
                GetUsageByDateOutcome GetUsageByDate(const Model::GetUsageByDateRequest &request);
                void GetUsageByDateAsync(const Model::GetUsageByDateRequest& request, const GetUsageByDateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUsageByDateOutcomeCallable GetUsageByDateCallable(const Model::GetUsageByDateRequest& request);

                /**
                 *用户通过该接口可以更新自学习模型，如模型名称、模型类型、模型语料。
                 * @param req ModifyCustomizationRequest
                 * @return ModifyCustomizationOutcome
                 */
                ModifyCustomizationOutcome ModifyCustomization(const Model::ModifyCustomizationRequest &request);
                void ModifyCustomizationAsync(const Model::ModifyCustomizationRequest& request, const ModifyCustomizationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomizationOutcomeCallable ModifyCustomizationCallable(const Model::ModifyCustomizationRequest& request);

                /**
                 *通过该接口，用户可以修改自学习模型状态，上下线自学习模型
                 * @param req ModifyCustomizationStateRequest
                 * @return ModifyCustomizationStateOutcome
                 */
                ModifyCustomizationStateOutcome ModifyCustomizationState(const Model::ModifyCustomizationStateRequest &request);
                void ModifyCustomizationStateAsync(const Model::ModifyCustomizationStateRequest& request, const ModifyCustomizationStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyCustomizationStateOutcomeCallable ModifyCustomizationStateCallable(const Model::ModifyCustomizationStateRequest& request);

                /**
                 *本接口用于对60秒之内的短音频文件进行识别。
•   支持中文普通话、英语、粤语、日语、越南语、马来语、印度尼西亚语、菲律宾语、泰语、葡萄牙语、土耳其语、阿拉伯语、印地语、法语、德语、上海话、四川话、武汉话、贵阳话、昆明话、西安话、郑州话、太原话、兰州话、银川话、西宁话、南京话、合肥话、南昌话、长沙话、苏州话、杭州话、济南话、天津话、石家庄话、黑龙江话、吉林话、辽宁话。
•   支持本地语音文件上传和语音URL上传两种请求方式，音频时长不能超过60s，音频文件大小不能超过3MB。推荐使用 [腾讯云COS](https://cloud.tencent.com/document/product/436/38484) 来存储音频、生成URL并提交请求，此种方式会走内网下载音频，极大降低整体请求时延；并且不会产生外网和流量下行费用，可节约成本（可参考COS预签名指南：[使用预签名 URL 访问 COS](https://cloud.tencent.com/document/product/436/68284) ，获取COS预签名url）
•   音频格式支持wav、pcm、ogg-opus、speex、silk、mp3、m4a、aac、 amr。
•   请求方法为 HTTP POST , Content-Type为"application/json; charset=utf-8"
•   签名方法参考 [公共参数](https://cloud.tencent.com/document/api/1093/35640) 中签名方法v3。
•   默认接口请求频率限制：30次/秒，如您有提高请求频率限制的需求，请[前往购买](https://buy.cloud.tencent.com/asr)。
                 * @param req SentenceRecognitionRequest
                 * @return SentenceRecognitionOutcome
                 */
                SentenceRecognitionOutcome SentenceRecognition(const Model::SentenceRecognitionRequest &request);
                void SentenceRecognitionAsync(const Model::SentenceRecognitionRequest& request, const SentenceRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SentenceRecognitionOutcomeCallable SentenceRecognitionCallable(const Model::SentenceRecognitionRequest& request);

                /**
                 *用户通过该接口可以设置热词表的默认状态。初始状态为0，用户可设置状态为1，即为默认状态。默认状态表示用户在请求识别时，如不设置热词表ID，则默认使用状态为1的热词表。
                 * @param req SetVocabStateRequest
                 * @return SetVocabStateOutcome
                 */
                SetVocabStateOutcome SetVocabState(const Model::SetVocabStateRequest &request);
                void SetVocabStateAsync(const Model::SetVocabStateRequest& request, const SetVocabStateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SetVocabStateOutcomeCallable SetVocabStateCallable(const Model::SetVocabStateRequest& request);

                /**
                 *用户通过本接口进行对应的关键词表信息更新。
                 * @param req UpdateAsrKeyWordLibRequest
                 * @return UpdateAsrKeyWordLibOutcome
                 */
                UpdateAsrKeyWordLibOutcome UpdateAsrKeyWordLib(const Model::UpdateAsrKeyWordLibRequest &request);
                void UpdateAsrKeyWordLibAsync(const Model::UpdateAsrKeyWordLibRequest& request, const UpdateAsrKeyWordLibAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAsrKeyWordLibOutcomeCallable UpdateAsrKeyWordLibCallable(const Model::UpdateAsrKeyWordLibRequest& request);

                /**
                 *用户通过本接口进行对应的词表信息更新。
                 * @param req UpdateAsrVocabRequest
                 * @return UpdateAsrVocabOutcome
                 */
                UpdateAsrVocabOutcome UpdateAsrVocab(const Model::UpdateAsrVocabRequest &request);
                void UpdateAsrVocabAsync(const Model::UpdateAsrVocabRequest& request, const UpdateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAsrVocabOutcomeCallable UpdateAsrVocabCallable(const Model::UpdateAsrVocabRequest& request);

                /**
                 *通过比对两段音频内说话人的声纹，得到一个打分，可通过打分判断两段音频声纹相似度,  打分区间[0 - 100]。 音频要求：16k采样率， 16bit位深，pcm或者wav格式， 单声道，总时长不超过30秒的音频，base64编码数据大小不超过2M，音频内容只有一个说话人声音，并且尽可能清晰，这样结果更加准确。
                 * @param req VoicePrintCompareRequest
                 * @return VoicePrintCompareOutcome
                 */
                VoicePrintCompareOutcome VoicePrintCompare(const Model::VoicePrintCompareRequest &request);
                void VoicePrintCompareAsync(const Model::VoicePrintCompareRequest& request, const VoicePrintCompareAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoicePrintCompareOutcomeCallable VoicePrintCompareCallable(const Model::VoicePrintCompareRequest& request);

                /**
                 *统计并返回注册的说话人id总数
                 * @param req VoicePrintCountRequest
                 * @return VoicePrintCountOutcome
                 */
                VoicePrintCountOutcome VoicePrintCount(const Model::VoicePrintCountRequest &request);
                void VoicePrintCountAsync(const Model::VoicePrintCountRequest& request, const VoicePrintCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoicePrintCountOutcomeCallable VoicePrintCountCallable(const Model::VoicePrintCountRequest& request);

                /**
                 *本接口用于以删除已经注册的说话人信息（删除之后，原有的说话人ID和说话人音频数据都会失效）
                 * @param req VoicePrintDeleteRequest
                 * @return VoicePrintDeleteOutcome
                 */
                VoicePrintDeleteOutcome VoicePrintDelete(const Model::VoicePrintDeleteRequest &request);
                void VoicePrintDeleteAsync(const Model::VoicePrintDeleteRequest& request, const VoicePrintDeleteAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoicePrintDeleteOutcomeCallable VoicePrintDeleteCallable(const Model::VoicePrintDeleteRequest& request);

                /**
                 *说话人注册接口用于注册一个指定音频，生成一个唯一的说话人id，后续可通过说话人验证接口验证其它音频和已有的说话人ID匹配度，注册时可指定说话人昵称，方便标识说话人ID，  说话人昵称可重复配置。 
（注: 一个appid最多可以注册1000个说话人ID，一个说话人ID仅支持一条音频注册，后续可通过更新接口进行更新）

使用须知
支持的输入格式：编码文件(PCM, WAV)、16 bit采样位数、单声道（mono）。

支持的音频采样率：16000 Hz。
                 * @param req VoicePrintEnrollRequest
                 * @return VoicePrintEnrollOutcome
                 */
                VoicePrintEnrollOutcome VoicePrintEnroll(const Model::VoicePrintEnrollRequest &request);
                void VoicePrintEnrollAsync(const Model::VoicePrintEnrollRequest& request, const VoicePrintEnrollAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoicePrintEnrollOutcomeCallable VoicePrintEnrollCallable(const Model::VoicePrintEnrollRequest& request);

                /**
                 *说话人验证1:N接口，可以通过传入一段说话人音频，并且指定已存在的groupId, 和返回topN,  接口返回groupId内所有声纹和传入音频声纹比对打分TopN的结果。
                 * @param req VoicePrintGroupVerifyRequest
                 * @return VoicePrintGroupVerifyOutcome
                 */
                VoicePrintGroupVerifyOutcome VoicePrintGroupVerify(const Model::VoicePrintGroupVerifyRequest &request);
                void VoicePrintGroupVerifyAsync(const Model::VoicePrintGroupVerifyRequest& request, const VoicePrintGroupVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoicePrintGroupVerifyOutcomeCallable VoicePrintGroupVerifyCallable(const Model::VoicePrintGroupVerifyRequest& request);

                /**
                 *本接口用于更新和覆盖已注册的音频数据和说话人昵称，更新后原有的音频数据将失效。
                 * @param req VoicePrintUpdateRequest
                 * @return VoicePrintUpdateOutcome
                 */
                VoicePrintUpdateOutcome VoicePrintUpdate(const Model::VoicePrintUpdateRequest &request);
                void VoicePrintUpdateAsync(const Model::VoicePrintUpdateRequest& request, const VoicePrintUpdateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoicePrintUpdateOutcomeCallable VoicePrintUpdateCallable(const Model::VoicePrintUpdateRequest& request);

                /**
                 *本接口用于校验传入音频与已注册音频的匹配程度，通过指定说话人ID（VoicePrintId）和一段音频进行音频和说话人的匹配度判断
                 * @param req VoicePrintVerifyRequest
                 * @return VoicePrintVerifyOutcome
                 */
                VoicePrintVerifyOutcome VoicePrintVerify(const Model::VoicePrintVerifyRequest &request);
                void VoicePrintVerifyAsync(const Model::VoicePrintVerifyRequest& request, const VoicePrintVerifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VoicePrintVerifyOutcomeCallable VoicePrintVerifyCallable(const Model::VoicePrintVerifyRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_ASRCLIENT_H_
