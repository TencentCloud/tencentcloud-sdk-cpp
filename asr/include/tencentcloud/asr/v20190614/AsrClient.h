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
#include <tencentcloud/asr/v20190614/model/CreateAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/CreateAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/CreateRecTaskRequest.h>
#include <tencentcloud/asr/v20190614/model/CreateRecTaskResponse.h>
#include <tencentcloud/asr/v20190614/model/DeleteAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/DeleteAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/DescribeTaskStatusRequest.h>
#include <tencentcloud/asr/v20190614/model/DescribeTaskStatusResponse.h>
#include <tencentcloud/asr/v20190614/model/GetAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/GetAsrVocabResponse.h>
#include <tencentcloud/asr/v20190614/model/SentenceRecognitionRequest.h>
#include <tencentcloud/asr/v20190614/model/SentenceRecognitionResponse.h>
#include <tencentcloud/asr/v20190614/model/UpdateAsrVocabRequest.h>
#include <tencentcloud/asr/v20190614/model/UpdateAsrVocabResponse.h>


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

                typedef Outcome<Error, Model::CreateAsrVocabResponse> CreateAsrVocabOutcome;
                typedef std::future<CreateAsrVocabOutcome> CreateAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CreateAsrVocabRequest&, CreateAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAsrVocabAsyncHandler;
                typedef Outcome<Error, Model::CreateRecTaskResponse> CreateRecTaskOutcome;
                typedef std::future<CreateRecTaskOutcome> CreateRecTaskOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::CreateRecTaskRequest&, CreateRecTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateRecTaskAsyncHandler;
                typedef Outcome<Error, Model::DeleteAsrVocabResponse> DeleteAsrVocabOutcome;
                typedef std::future<DeleteAsrVocabOutcome> DeleteAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DeleteAsrVocabRequest&, DeleteAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteAsrVocabAsyncHandler;
                typedef Outcome<Error, Model::DescribeTaskStatusResponse> DescribeTaskStatusOutcome;
                typedef std::future<DescribeTaskStatusOutcome> DescribeTaskStatusOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::DescribeTaskStatusRequest&, DescribeTaskStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTaskStatusAsyncHandler;
                typedef Outcome<Error, Model::GetAsrVocabResponse> GetAsrVocabOutcome;
                typedef std::future<GetAsrVocabOutcome> GetAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::GetAsrVocabRequest&, GetAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetAsrVocabAsyncHandler;
                typedef Outcome<Error, Model::SentenceRecognitionResponse> SentenceRecognitionOutcome;
                typedef std::future<SentenceRecognitionOutcome> SentenceRecognitionOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::SentenceRecognitionRequest&, SentenceRecognitionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SentenceRecognitionAsyncHandler;
                typedef Outcome<Error, Model::UpdateAsrVocabResponse> UpdateAsrVocabOutcome;
                typedef std::future<UpdateAsrVocabOutcome> UpdateAsrVocabOutcomeCallable;
                typedef std::function<void(const AsrClient*, const Model::UpdateAsrVocabRequest&, UpdateAsrVocabOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateAsrVocabAsyncHandler;



                /**
                 *用户通过本接口进行热词表的创建。
<br>•   默认最多可创建30个热词表。
<br>•   每个热词表最多可添加128个词，每个词最长10个字，不能超出限制。
<br>•   热词表可以通过数组或者本地文件形式上传。
<br>•   本地文件必须为UTF-8编码格式，每行仅添加一个热词且不能包含标点和特殊字符。
<br>•   热词权重取值范围为[1,10]之间的整数，权重越大代表该词被识别出来的概率越大。
                 * @param req CreateAsrVocabRequest
                 * @return CreateAsrVocabOutcome
                 */
                CreateAsrVocabOutcome CreateAsrVocab(const Model::CreateAsrVocabRequest &request);
                void CreateAsrVocabAsync(const Model::CreateAsrVocabRequest& request, const CreateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAsrVocabOutcomeCallable CreateAsrVocabCallable(const Model::CreateAsrVocabRequest& request);

                /**
                 *本接口服务对录音时长1小时以内的录音文件进行识别，异步返回识别全部结果。
<br>• 接口是 HTTP RESTful 形式
<br>• 接口支持wav、mp3、silk、amr、m4a等主流音频格式
<br>• 支持语音 URL 和本地语音文件两种请求方式
<br>• 本地语音文件上传的文件不能大于5MB，语音 URL的音频时长不能长于1小时
<br>• 支持中文普通话、英语和粤语。
<br>• 支持回调或轮询的方式获取结果，结果获取请参考[ 录音文件识别结果查询](https://cloud.tencent.com/document/product/1093/37822)。
                 * @param req CreateRecTaskRequest
                 * @return CreateRecTaskOutcome
                 */
                CreateRecTaskOutcome CreateRecTask(const Model::CreateRecTaskRequest &request);
                void CreateRecTaskAsync(const Model::CreateRecTaskRequest& request, const CreateRecTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateRecTaskOutcomeCallable CreateRecTaskCallable(const Model::CreateRecTaskRequest& request);

                /**
                 *用户通过本接口进行热词表的删除。
                 * @param req DeleteAsrVocabRequest
                 * @return DeleteAsrVocabOutcome
                 */
                DeleteAsrVocabOutcome DeleteAsrVocab(const Model::DeleteAsrVocabRequest &request);
                void DeleteAsrVocabAsync(const Model::DeleteAsrVocabRequest& request, const DeleteAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteAsrVocabOutcomeCallable DeleteAsrVocabCallable(const Model::DeleteAsrVocabRequest& request);

                /**
                 *在调用录音文件识别请求接口后，有回调和轮询两种方式获取识别结果。
<br>• 当采用回调方式时，识别完成后会将结果通过 POST 请求的形式通知到用户在请求时填写的回调 URL，具体请参见[ 录音识别结果回调 ](https://cloud.tencent.com/document/product/1093/37139#callback)。
<br>• 当采用轮询方式时，需要主动提交任务ID来轮询识别结果，共有任务成功、等待、执行中和失败四种结果，具体信息请参见下文说明。

                 * @param req DescribeTaskStatusRequest
                 * @return DescribeTaskStatusOutcome
                 */
                DescribeTaskStatusOutcome DescribeTaskStatus(const Model::DescribeTaskStatusRequest &request);
                void DescribeTaskStatusAsync(const Model::DescribeTaskStatusRequest& request, const DescribeTaskStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTaskStatusOutcomeCallable DescribeTaskStatusCallable(const Model::DescribeTaskStatusRequest& request);

                /**
                 *用户根据词表的ID可以获取对应的热词表信息
                 * @param req GetAsrVocabRequest
                 * @return GetAsrVocabOutcome
                 */
                GetAsrVocabOutcome GetAsrVocab(const Model::GetAsrVocabRequest &request);
                void GetAsrVocabAsync(const Model::GetAsrVocabRequest& request, const GetAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetAsrVocabOutcomeCallable GetAsrVocabCallable(const Model::GetAsrVocabRequest& request);

                /**
                 *本接口用于对60秒之内的短音频文件进行识别。
<br>•   支持中文普通话、英语、粤语。
<br>•   支持本地语音文件上传和语音URL上传两种请求方式。
<br>•   音频格式支持wav、mp3；采样率支持8000Hz或者16000Hz；采样精度支持16bits；声道支持单声道。
<br>•   当音频文件通过请求中body内容上传时，请求大小不能超过600KB；当音频以URL方式传输时，音频时长不可超过60s。
<br>•   所有请求参数放在POST请求的body中，编码类型采用x-www-form-urlencoded，参数进行urlencode编码后传输。
                 * @param req SentenceRecognitionRequest
                 * @return SentenceRecognitionOutcome
                 */
                SentenceRecognitionOutcome SentenceRecognition(const Model::SentenceRecognitionRequest &request);
                void SentenceRecognitionAsync(const Model::SentenceRecognitionRequest& request, const SentenceRecognitionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SentenceRecognitionOutcomeCallable SentenceRecognitionCallable(const Model::SentenceRecognitionRequest& request);

                /**
                 *用户通过本接口进行对应的词表信息更新。
                 * @param req UpdateAsrVocabRequest
                 * @return UpdateAsrVocabOutcome
                 */
                UpdateAsrVocabOutcome UpdateAsrVocab(const Model::UpdateAsrVocabRequest &request);
                void UpdateAsrVocabAsync(const Model::UpdateAsrVocabRequest& request, const UpdateAsrVocabAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateAsrVocabOutcomeCallable UpdateAsrVocabCallable(const Model::UpdateAsrVocabRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_ASR_V20190614_ASRCLIENT_H_
