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

#ifndef TENCENTCLOUD_AIART_V20221229_AIARTCLIENT_H_
#define TENCENTCLOUD_AIART_V20221229_AIARTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/aiart/v20221229/model/ImageToImageRequest.h>
#include <tencentcloud/aiart/v20221229/model/ImageToImageResponse.h>
#include <tencentcloud/aiart/v20221229/model/QueryTextToImageProJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/QueryTextToImageProJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/SubmitTextToImageProJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/SubmitTextToImageProJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/TextToImageRequest.h>
#include <tencentcloud/aiart/v20221229/model/TextToImageResponse.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            class AiartClient : public AbstractClient
            {
            public:
                AiartClient(const Credential &credential, const std::string &region);
                AiartClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ImageToImageResponse> ImageToImageOutcome;
                typedef std::future<ImageToImageOutcome> ImageToImageOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::ImageToImageRequest&, ImageToImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageToImageAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTextToImageProJobResponse> QueryTextToImageProJobOutcome;
                typedef std::future<QueryTextToImageProJobOutcome> QueryTextToImageProJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::QueryTextToImageProJobRequest&, QueryTextToImageProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTextToImageProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTextToImageProJobResponse> SubmitTextToImageProJobOutcome;
                typedef std::future<SubmitTextToImageProJobOutcome> SubmitTextToImageProJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::SubmitTextToImageProJobRequest&, SubmitTextToImageProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextToImageProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::TextToImageResponse> TextToImageOutcome;
                typedef std::future<TextToImageOutcome> TextToImageOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::TextToImageRequest&, TextToImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToImageAsyncHandler;



                /**
                 *智能图生图接口将根据输入的图片及辅助描述文本，智能生成与之相关的结果图。
输入：单边分辨率小于2000、转成 Base64 字符串后小于 5MB 的图片，建议同时输入描述文本。
输出：对应风格及分辨率的 AI 生成图。
可支持的风格详见 [智能图生图风格列表](https://cloud.tencent.com/document/product/1668/86250)，请将列表中的“风格编号”传入 Styles 数组，建议选择一种风格。

请求频率限制为1次/秒。
                 * @param req ImageToImageRequest
                 * @return ImageToImageOutcome
                 */
                ImageToImageOutcome ImageToImage(const Model::ImageToImageRequest &request);
                void ImageToImageAsync(const Model::ImageToImageRequest& request, const ImageToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageToImageOutcomeCallable ImageToImageCallable(const Model::ImageToImageRequest& request);

                /**
                 *文生图（高级版）接口基于高级版文生图大模型，将根据输入的文本描述，智能生成与之相关的结果图。分为提交任务和查询任务2个接口。
提交任务：输入文本等，提交一个文生图（高级版）异步任务，获得任务 ID。
查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。
并发任务数（并发）说明：并发任务数指能同时处理的任务数量。文生图（高级版）默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req QueryTextToImageProJobRequest
                 * @return QueryTextToImageProJobOutcome
                 */
                QueryTextToImageProJobOutcome QueryTextToImageProJob(const Model::QueryTextToImageProJobRequest &request);
                void QueryTextToImageProJobAsync(const Model::QueryTextToImageProJobRequest& request, const QueryTextToImageProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTextToImageProJobOutcomeCallable QueryTextToImageProJobCallable(const Model::QueryTextToImageProJobRequest& request);

                /**
                 *文生图（高级版）接口基于高级版文生图大模型，将根据输入的文本描述，智能生成与之相关的结果图。分为提交任务和查询任务2个接口。
提交任务：输入文本等，提交一个文生图（高级版）异步任务，获得任务 ID。
查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。
并发任务数（并发）说明：并发任务数指能同时处理的任务数量。文生图（高级版）默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req SubmitTextToImageProJobRequest
                 * @return SubmitTextToImageProJobOutcome
                 */
                SubmitTextToImageProJobOutcome SubmitTextToImageProJob(const Model::SubmitTextToImageProJobRequest &request);
                void SubmitTextToImageProJobAsync(const Model::SubmitTextToImageProJobRequest& request, const SubmitTextToImageProJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTextToImageProJobOutcomeCallable SubmitTextToImageProJobCallable(const Model::SubmitTextToImageProJobRequest& request);

                /**
                 *智能文生图接口将根据输入的描述文本，智能生成与之相关的结果图。
输入：256个字符以内的描述性文本，推荐使用中文。
输出：对应风格及分辨率的 AI 生成图。
可支持的风格详见 [智能文生图风格列表](https://cloud.tencent.com/document/product/1668/86249)，请将列表中的“风格编号”传入 Styles 数组，建议选择一种风格。

请求频率限制为1次/秒。
                 * @param req TextToImageRequest
                 * @return TextToImageOutcome
                 */
                TextToImageOutcome TextToImage(const Model::TextToImageRequest &request);
                void TextToImageAsync(const Model::TextToImageRequest& request, const TextToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToImageOutcomeCallable TextToImageCallable(const Model::TextToImageRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_AIARTCLIENT_H_
