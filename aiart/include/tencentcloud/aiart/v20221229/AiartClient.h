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
#include <tencentcloud/aiart/v20221229/model/ChangeClothesRequest.h>
#include <tencentcloud/aiart/v20221229/model/ChangeClothesResponse.h>
#include <tencentcloud/aiart/v20221229/model/GenerateAvatarRequest.h>
#include <tencentcloud/aiart/v20221229/model/GenerateAvatarResponse.h>
#include <tencentcloud/aiart/v20221229/model/ImageInpaintingRemovalRequest.h>
#include <tencentcloud/aiart/v20221229/model/ImageInpaintingRemovalResponse.h>
#include <tencentcloud/aiart/v20221229/model/ImageOutpaintingRequest.h>
#include <tencentcloud/aiart/v20221229/model/ImageOutpaintingResponse.h>
#include <tencentcloud/aiart/v20221229/model/ImageToImageRequest.h>
#include <tencentcloud/aiart/v20221229/model/ImageToImageResponse.h>
#include <tencentcloud/aiart/v20221229/model/QueryDrawPortraitJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/QueryDrawPortraitJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/QueryGlamPicJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/QueryGlamPicJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/QueryMemeJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/QueryMemeJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/QueryTextToImageProJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/QueryTextToImageProJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/QueryTrainPortraitModelJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/QueryTrainPortraitModelJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/RefineImageRequest.h>
#include <tencentcloud/aiart/v20221229/model/RefineImageResponse.h>
#include <tencentcloud/aiart/v20221229/model/ReplaceBackgroundRequest.h>
#include <tencentcloud/aiart/v20221229/model/ReplaceBackgroundResponse.h>
#include <tencentcloud/aiart/v20221229/model/SketchToImageRequest.h>
#include <tencentcloud/aiart/v20221229/model/SketchToImageResponse.h>
#include <tencentcloud/aiart/v20221229/model/SubmitDrawPortraitJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/SubmitDrawPortraitJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/SubmitGlamPicJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/SubmitGlamPicJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/SubmitMemeJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/SubmitMemeJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/SubmitTextToImageProJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/SubmitTextToImageProJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/SubmitTrainPortraitModelJobRequest.h>
#include <tencentcloud/aiart/v20221229/model/SubmitTrainPortraitModelJobResponse.h>
#include <tencentcloud/aiart/v20221229/model/TextToImageRequest.h>
#include <tencentcloud/aiart/v20221229/model/TextToImageResponse.h>
#include <tencentcloud/aiart/v20221229/model/UploadTrainPortraitImagesRequest.h>
#include <tencentcloud/aiart/v20221229/model/UploadTrainPortraitImagesResponse.h>


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

                typedef Outcome<Core::Error, Model::ChangeClothesResponse> ChangeClothesOutcome;
                typedef std::future<ChangeClothesOutcome> ChangeClothesOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::ChangeClothesRequest&, ChangeClothesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeClothesAsyncHandler;
                typedef Outcome<Core::Error, Model::GenerateAvatarResponse> GenerateAvatarOutcome;
                typedef std::future<GenerateAvatarOutcome> GenerateAvatarOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::GenerateAvatarRequest&, GenerateAvatarOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GenerateAvatarAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageInpaintingRemovalResponse> ImageInpaintingRemovalOutcome;
                typedef std::future<ImageInpaintingRemovalOutcome> ImageInpaintingRemovalOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::ImageInpaintingRemovalRequest&, ImageInpaintingRemovalOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageInpaintingRemovalAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageOutpaintingResponse> ImageOutpaintingOutcome;
                typedef std::future<ImageOutpaintingOutcome> ImageOutpaintingOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::ImageOutpaintingRequest&, ImageOutpaintingOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageOutpaintingAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageToImageResponse> ImageToImageOutcome;
                typedef std::future<ImageToImageOutcome> ImageToImageOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::ImageToImageRequest&, ImageToImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageToImageAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryDrawPortraitJobResponse> QueryDrawPortraitJobOutcome;
                typedef std::future<QueryDrawPortraitJobOutcome> QueryDrawPortraitJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::QueryDrawPortraitJobRequest&, QueryDrawPortraitJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryDrawPortraitJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryGlamPicJobResponse> QueryGlamPicJobOutcome;
                typedef std::future<QueryGlamPicJobOutcome> QueryGlamPicJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::QueryGlamPicJobRequest&, QueryGlamPicJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryGlamPicJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryMemeJobResponse> QueryMemeJobOutcome;
                typedef std::future<QueryMemeJobOutcome> QueryMemeJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::QueryMemeJobRequest&, QueryMemeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryMemeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTextToImageProJobResponse> QueryTextToImageProJobOutcome;
                typedef std::future<QueryTextToImageProJobOutcome> QueryTextToImageProJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::QueryTextToImageProJobRequest&, QueryTextToImageProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTextToImageProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryTrainPortraitModelJobResponse> QueryTrainPortraitModelJobOutcome;
                typedef std::future<QueryTrainPortraitModelJobOutcome> QueryTrainPortraitModelJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::QueryTrainPortraitModelJobRequest&, QueryTrainPortraitModelJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryTrainPortraitModelJobAsyncHandler;
                typedef Outcome<Core::Error, Model::RefineImageResponse> RefineImageOutcome;
                typedef std::future<RefineImageOutcome> RefineImageOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::RefineImageRequest&, RefineImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RefineImageAsyncHandler;
                typedef Outcome<Core::Error, Model::ReplaceBackgroundResponse> ReplaceBackgroundOutcome;
                typedef std::future<ReplaceBackgroundOutcome> ReplaceBackgroundOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::ReplaceBackgroundRequest&, ReplaceBackgroundOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReplaceBackgroundAsyncHandler;
                typedef Outcome<Core::Error, Model::SketchToImageResponse> SketchToImageOutcome;
                typedef std::future<SketchToImageOutcome> SketchToImageOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::SketchToImageRequest&, SketchToImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SketchToImageAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitDrawPortraitJobResponse> SubmitDrawPortraitJobOutcome;
                typedef std::future<SubmitDrawPortraitJobOutcome> SubmitDrawPortraitJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::SubmitDrawPortraitJobRequest&, SubmitDrawPortraitJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitDrawPortraitJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitGlamPicJobResponse> SubmitGlamPicJobOutcome;
                typedef std::future<SubmitGlamPicJobOutcome> SubmitGlamPicJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::SubmitGlamPicJobRequest&, SubmitGlamPicJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitGlamPicJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitMemeJobResponse> SubmitMemeJobOutcome;
                typedef std::future<SubmitMemeJobOutcome> SubmitMemeJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::SubmitMemeJobRequest&, SubmitMemeJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitMemeJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTextToImageProJobResponse> SubmitTextToImageProJobOutcome;
                typedef std::future<SubmitTextToImageProJobOutcome> SubmitTextToImageProJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::SubmitTextToImageProJobRequest&, SubmitTextToImageProJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTextToImageProJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SubmitTrainPortraitModelJobResponse> SubmitTrainPortraitModelJobOutcome;
                typedef std::future<SubmitTrainPortraitModelJobOutcome> SubmitTrainPortraitModelJobOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::SubmitTrainPortraitModelJobRequest&, SubmitTrainPortraitModelJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SubmitTrainPortraitModelJobAsyncHandler;
                typedef Outcome<Core::Error, Model::TextToImageResponse> TextToImageOutcome;
                typedef std::future<TextToImageOutcome> TextToImageOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::TextToImageRequest&, TextToImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToImageAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadTrainPortraitImagesResponse> UploadTrainPortraitImagesOutcome;
                typedef std::future<UploadTrainPortraitImagesOutcome> UploadTrainPortraitImagesOutcomeCallable;
                typedef std::function<void(const AiartClient*, const Model::UploadTrainPortraitImagesRequest&, UploadTrainPortraitImagesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadTrainPortraitImagesAsyncHandler;



                /**
                 *上传正面全身模特照和服装平铺图，生成模特换装后的图片。
生成的换装图片分辨率和模特照分辨率一致。
模特换装默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req ChangeClothesRequest
                 * @return ChangeClothesOutcome
                 */
                ChangeClothesOutcome ChangeClothes(const Model::ChangeClothesRequest &request);
                void ChangeClothesAsync(const Model::ChangeClothesRequest& request, const ChangeClothesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeClothesOutcomeCallable ChangeClothesCallable(const Model::ChangeClothesRequest& request);

                /**
                 *百变头像接口将根据输入的人像照片，生成风格百变的头像。
百变头像默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req GenerateAvatarRequest
                 * @return GenerateAvatarOutcome
                 */
                GenerateAvatarOutcome GenerateAvatar(const Model::GenerateAvatarRequest &request);
                void GenerateAvatarAsync(const Model::GenerateAvatarRequest& request, const GenerateAvatarAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GenerateAvatarOutcomeCallable GenerateAvatarCallable(const Model::GenerateAvatarRequest& request);

                /**
                 *局部消除接口通过图像 mask 指定需要消除的人、物、文字等区域，在选定区域对图像内容进行消除与重绘补全。
默认提供1个并发，代表最多能同时处理1个已提交的任务。
                 * @param req ImageInpaintingRemovalRequest
                 * @return ImageInpaintingRemovalOutcome
                 */
                ImageInpaintingRemovalOutcome ImageInpaintingRemoval(const Model::ImageInpaintingRemovalRequest &request);
                void ImageInpaintingRemovalAsync(const Model::ImageInpaintingRemovalRequest& request, const ImageInpaintingRemovalAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageInpaintingRemovalOutcomeCallable ImageInpaintingRemovalCallable(const Model::ImageInpaintingRemovalRequest& request);

                /**
                 *扩图接口支持对输入图像按指定宽高比实现智能扩图。
默认提供1个并发，代表最多能同时处理1个已提交的任务。
                 * @param req ImageOutpaintingRequest
                 * @return ImageOutpaintingOutcome
                 */
                ImageOutpaintingOutcome ImageOutpainting(const Model::ImageOutpaintingRequest &request);
                void ImageOutpaintingAsync(const Model::ImageOutpaintingRequest& request, const ImageOutpaintingAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageOutpaintingOutcomeCallable ImageOutpaintingCallable(const Model::ImageOutpaintingRequest& request);

                /**
                 *图像风格化（图生图）接口提供生成式的图生图风格转化能力，将根据输入的图像及文本描述，智能生成风格转化后的图像。建议避免输入人像过小、姿势复杂、人数较多的人像图片。
图像风格化（图生图）默认提供3个并发任务数，代表最多能同时处理3个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req ImageToImageRequest
                 * @return ImageToImageOutcome
                 */
                ImageToImageOutcome ImageToImage(const Model::ImageToImageRequest &request);
                void ImageToImageAsync(const Model::ImageToImageRequest& request, const ImageToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageToImageOutcomeCallable ImageToImageCallable(const Model::ImageToImageRequest& request);

                /**
                 *AI 写真分为上传训练图片、训练写真模型（可选跳过）、生成写真图片3个环节，需要依次调用对应接口。
生成图片分为提交任务和查询任务2个接口：

- 提交生成写真图片任务：选择风格模板，提交一个生成写真图片异步任务，根据写真模型 ID 生成写真图片，获得任务 ID。
- 查询生成写真图片任务：根据任务 ID 查询生成图片任务的处理状态、处理结果。

每个写真模型自训练完成起1年内有效，有效期内可使用写真模型 ID 生成图片，期满后需要重新训练。
                 * @param req QueryDrawPortraitJobRequest
                 * @return QueryDrawPortraitJobOutcome
                 */
                QueryDrawPortraitJobOutcome QueryDrawPortraitJob(const Model::QueryDrawPortraitJobRequest &request);
                void QueryDrawPortraitJobAsync(const Model::QueryDrawPortraitJobRequest& request, const QueryDrawPortraitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryDrawPortraitJobOutcomeCallable QueryDrawPortraitJobCallable(const Model::QueryDrawPortraitJobRequest& request);

                /**
                 *AI 美照接口将根据模板为用户生成精美照片。分为提交任务和查询任务2个接口。
- 提交任务：提交一个美照生成异步任务，获得任务 ID。
- 查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。

AI 美照默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req QueryGlamPicJobRequest
                 * @return QueryGlamPicJobOutcome
                 */
                QueryGlamPicJobOutcome QueryGlamPicJob(const Model::QueryGlamPicJobRequest &request);
                void QueryGlamPicJobAsync(const Model::QueryGlamPicJobRequest& request, const QueryGlamPicJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryGlamPicJobOutcomeCallable QueryGlamPicJobCallable(const Model::QueryGlamPicJobRequest& request);

                /**
                 *表情动图生成接口将静态照片制作成动态的表情包。分为提交任务和查询任务2个接口。
- 提交任务：提交一个表情动图生成异步任务，获得任务 ID。
- 查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。

表情动图生成默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req QueryMemeJobRequest
                 * @return QueryMemeJobOutcome
                 */
                QueryMemeJobOutcome QueryMemeJob(const Model::QueryMemeJobRequest &request);
                void QueryMemeJobAsync(const Model::QueryMemeJobRequest& request, const QueryMemeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryMemeJobOutcomeCallable QueryMemeJobCallable(const Model::QueryMemeJobRequest& request);

                /**
                 *本接口已迁移至腾讯混元大模型-混元生图，即将停止此处维护，可切换至 [混元生图 API](https://cloud.tencent.com/document/product/1729/105970) 继续使用。
文生图（高级版）接口基于高级版文生图大模型，将根据输入的文本描述，智能生成与之相关的结果图。分为提交任务和查询任务2个接口。
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
                 *AI 写真分为上传训练图片、训练写真模型（可选跳过）、生成写真图片3个环节，需要依次调用对应接口。
如果选择免训练模式无需调用本接口。
训练模型分为提交任务和查询任务2个接口：

- 提交训练写真模型任务：完成上传图片后，提交一个训练写真模型异步任务，根据写真模型 ID 开始训练模型。
- 查询训练写真模型任务：根据写真模型 ID 查询训练任务的处理状态、处理结果。

每个写真模型自训练完成起1年内有效，有效期内可使用写真模型 ID 生成图片，期满后需要重新训练。
                 * @param req QueryTrainPortraitModelJobRequest
                 * @return QueryTrainPortraitModelJobOutcome
                 */
                QueryTrainPortraitModelJobOutcome QueryTrainPortraitModelJob(const Model::QueryTrainPortraitModelJobRequest &request);
                void QueryTrainPortraitModelJobAsync(const Model::QueryTrainPortraitModelJobRequest& request, const QueryTrainPortraitModelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryTrainPortraitModelJobOutcomeCallable QueryTrainPortraitModelJobCallable(const Model::QueryTrainPortraitModelJobRequest& request);

                /**
                 *将图像变清晰，增强图像细节。变清晰后的图片将保持原图比例，长边为2048。
默认提供1个并发，代表最多能同时处理1个已提交的任务。
                 * @param req RefineImageRequest
                 * @return RefineImageOutcome
                 */
                RefineImageOutcome RefineImage(const Model::RefineImageRequest &request);
                void RefineImageAsync(const Model::RefineImageRequest& request, const RefineImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RefineImageOutcomeCallable RefineImageCallable(const Model::RefineImageRequest& request);

                /**
                 *商品背景生成接口根据指定的背景描述 Prompt，将商品图中的原背景替换为自定义的新背景并保留商品主体形象，实现商品背景的自由生成与更换。

商品背景生成默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req ReplaceBackgroundRequest
                 * @return ReplaceBackgroundOutcome
                 */
                ReplaceBackgroundOutcome ReplaceBackground(const Model::ReplaceBackgroundRequest &request);
                void ReplaceBackgroundAsync(const Model::ReplaceBackgroundRequest& request, const ReplaceBackgroundAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReplaceBackgroundOutcomeCallable ReplaceBackgroundCallable(const Model::ReplaceBackgroundRequest& request);

                /**
                 *线稿生图接口支持上传一张黑白线稿图，按照指定的主体对象以及样式、颜色、材质、风格等的文本描述prompt ，对线稿图进行色彩填充与细节描绘，得到一张完整绘制的图像。生成图分辨率默认为1024:1024。
线稿生图默认提供1个并发任务数，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req SketchToImageRequest
                 * @return SketchToImageOutcome
                 */
                SketchToImageOutcome SketchToImage(const Model::SketchToImageRequest &request);
                void SketchToImageAsync(const Model::SketchToImageRequest& request, const SketchToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SketchToImageOutcomeCallable SketchToImageCallable(const Model::SketchToImageRequest& request);

                /**
                 *AI 写真分为上传训练图片、训练写真模型（可选跳过）、生成写真图片3个环节，需要依次调用对应接口。
生成图片分为提交任务和查询任务2个接口：

- 提交生成写真图片任务：选择风格模板，提交一个生成写真图片异步任务，根据写真模型 ID 生成写真图片，获得任务 ID。
- 查询生成写真图片任务：根据任务 ID 查询生成图片任务的处理状态、处理结果。

每个写真模型自训练完成起1年内有效，有效期内可使用写真模型 ID 生成图片，期满后需要重新训练。
提交生成写真图片任务默认提供1个并发。
                 * @param req SubmitDrawPortraitJobRequest
                 * @return SubmitDrawPortraitJobOutcome
                 */
                SubmitDrawPortraitJobOutcome SubmitDrawPortraitJob(const Model::SubmitDrawPortraitJobRequest &request);
                void SubmitDrawPortraitJobAsync(const Model::SubmitDrawPortraitJobRequest& request, const SubmitDrawPortraitJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitDrawPortraitJobOutcomeCallable SubmitDrawPortraitJobCallable(const Model::SubmitDrawPortraitJobRequest& request);

                /**
                 *AI 美照接口将根据模板为用户生成精美照片。分为提交任务和查询任务2个接口。
- 提交任务：提交一个美照生成异步任务，获得任务 ID。
- 查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。

AI 美照默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req SubmitGlamPicJobRequest
                 * @return SubmitGlamPicJobOutcome
                 */
                SubmitGlamPicJobOutcome SubmitGlamPicJob(const Model::SubmitGlamPicJobRequest &request);
                void SubmitGlamPicJobAsync(const Model::SubmitGlamPicJobRequest& request, const SubmitGlamPicJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitGlamPicJobOutcomeCallable SubmitGlamPicJobCallable(const Model::SubmitGlamPicJobRequest& request);

                /**
                 *表情动图生成接口将静态照片制作成动态的表情包。分为提交任务和查询任务2个接口。

- 提交任务：提交一个表情动图生成异步任务，获得任务 ID。
- 查询任务：根据任务 ID 查询任务的处理状态、处理结果，任务处理完成后可获得生成图像结果。

表情动图生成默认提供1个并发，代表最多能同时处理1个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req SubmitMemeJobRequest
                 * @return SubmitMemeJobOutcome
                 */
                SubmitMemeJobOutcome SubmitMemeJob(const Model::SubmitMemeJobRequest &request);
                void SubmitMemeJobAsync(const Model::SubmitMemeJobRequest& request, const SubmitMemeJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitMemeJobOutcomeCallable SubmitMemeJobCallable(const Model::SubmitMemeJobRequest& request);

                /**
                 *本接口已迁移至腾讯混元大模型-混元生图，即将停止此处维护，可切换至 [混元生图 API](https://cloud.tencent.com/document/product/1729/105969) 继续使用。
文生图（高级版）接口基于高级版文生图大模型，将根据输入的文本描述，智能生成与之相关的结果图。分为提交任务和查询任务2个接口。
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
                 *AI 写真分为上传训练图片、训练写真模型（可选跳过）、生成写真图片3个环节，需要依次调用对应接口。
如果选择免训练模式无需调用本接口。
训练模型分为提交任务和查询任务2个接口：
- 提交训练写真模型任务：完成上传图片后，提交一个训练写真模型异步任务，根据写真模型 ID 开始训练模型。
- 查询训练写真模型任务：根据写真模型 ID 查询训练任务的处理状态、处理结果。

每个写真模型自训练完成起1年内有效，有效期内可使用写真模型 ID 生成图片，期满后需要重新训练。
提交训练写真模型任务按并发计费，无默认并发额度。
                 * @param req SubmitTrainPortraitModelJobRequest
                 * @return SubmitTrainPortraitModelJobOutcome
                 */
                SubmitTrainPortraitModelJobOutcome SubmitTrainPortraitModelJob(const Model::SubmitTrainPortraitModelJobRequest &request);
                void SubmitTrainPortraitModelJobAsync(const Model::SubmitTrainPortraitModelJobRequest& request, const SubmitTrainPortraitModelJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SubmitTrainPortraitModelJobOutcomeCallable SubmitTrainPortraitModelJobCallable(const Model::SubmitTrainPortraitModelJobRequest& request);

                /**
                 ***本接口已迁移至腾讯混元大模型-文生图轻量版，即将停止此处维护，可切换至 [文生图轻量版 API](https://cloud.tencent.com/document/product/1729/108738) 继续使用。**

智能文生图接口基于文生图（标准版）模型，将根据输入的文本描述，智能生成与之相关的结果图。

智能文生图默认提供3个并发任务数，代表最多能同时处理3个已提交的任务，上一个任务处理完毕后才能开始处理下一个任务。
                 * @param req TextToImageRequest
                 * @return TextToImageOutcome
                 */
                TextToImageOutcome TextToImage(const Model::TextToImageRequest &request);
                void TextToImageAsync(const Model::TextToImageRequest& request, const TextToImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToImageOutcomeCallable TextToImageCallable(const Model::TextToImageRequest& request);

                /**
                 *AI 写真分为上传训练图片、训练写真模型（可选跳过）、生成写真图片3个环节，需要依次调用对应接口。
本接口用于上传人像图片并指定对应的写真模型 ID。上传的图片要求是同一个人，建议上传单人、正脸、脸部区域占比较大、脸部清晰无遮挡、无大角度偏转、无夸张表情的图片。
可选模式：
- 常规训练模式：上传20 - 25张图片用于模型训练，完成训练后可生成写真图片。
- 快速训练模式：仅需上传1张图片用于模型训练，训练速度更快，完成训练后可生成写真图片。
- 免训练模式：仅需上传1张图片，跳过训练环节，直接生成写真图片。

上传写真训练图片默认提供1个并发。
                 * @param req UploadTrainPortraitImagesRequest
                 * @return UploadTrainPortraitImagesOutcome
                 */
                UploadTrainPortraitImagesOutcome UploadTrainPortraitImages(const Model::UploadTrainPortraitImagesRequest &request);
                void UploadTrainPortraitImagesAsync(const Model::UploadTrainPortraitImagesRequest& request, const UploadTrainPortraitImagesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadTrainPortraitImagesOutcomeCallable UploadTrainPortraitImagesCallable(const Model::UploadTrainPortraitImagesRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_AIARTCLIENT_H_
