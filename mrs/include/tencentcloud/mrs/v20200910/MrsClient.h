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

#ifndef TENCENTCLOUD_MRS_V20200910_MRSCLIENT_H_
#define TENCENTCLOUD_MRS_V20200910_MRSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mrs/v20200910/model/DrugInstructionObjectRequest.h>
#include <tencentcloud/mrs/v20200910/model/DrugInstructionObjectResponse.h>
#include <tencentcloud/mrs/v20200910/model/ImageMaskRequest.h>
#include <tencentcloud/mrs/v20200910/model/ImageMaskResponse.h>
#include <tencentcloud/mrs/v20200910/model/ImageMaskAsyncRequest.h>
#include <tencentcloud/mrs/v20200910/model/ImageMaskAsyncResponse.h>
#include <tencentcloud/mrs/v20200910/model/ImageMaskAsyncGetResultRequest.h>
#include <tencentcloud/mrs/v20200910/model/ImageMaskAsyncGetResultResponse.h>
#include <tencentcloud/mrs/v20200910/model/ImageToClassRequest.h>
#include <tencentcloud/mrs/v20200910/model/ImageToClassResponse.h>
#include <tencentcloud/mrs/v20200910/model/ImageToObjectRequest.h>
#include <tencentcloud/mrs/v20200910/model/ImageToObjectResponse.h>
#include <tencentcloud/mrs/v20200910/model/TextToClassRequest.h>
#include <tencentcloud/mrs/v20200910/model/TextToClassResponse.h>
#include <tencentcloud/mrs/v20200910/model/TextToObjectRequest.h>
#include <tencentcloud/mrs/v20200910/model/TextToObjectResponse.h>
#include <tencentcloud/mrs/v20200910/model/TurnPDFToObjectRequest.h>
#include <tencentcloud/mrs/v20200910/model/TurnPDFToObjectResponse.h>
#include <tencentcloud/mrs/v20200910/model/TurnPDFToObjectAsyncRequest.h>
#include <tencentcloud/mrs/v20200910/model/TurnPDFToObjectAsyncResponse.h>
#include <tencentcloud/mrs/v20200910/model/TurnPDFToObjectAsyncGetResultRequest.h>
#include <tencentcloud/mrs/v20200910/model/TurnPDFToObjectAsyncGetResultResponse.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            class MrsClient : public AbstractClient
            {
            public:
                MrsClient(const Credential &credential, const std::string &region);
                MrsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DrugInstructionObjectResponse> DrugInstructionObjectOutcome;
                typedef std::future<DrugInstructionObjectOutcome> DrugInstructionObjectOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::DrugInstructionObjectRequest&, DrugInstructionObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DrugInstructionObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageMaskResponse> ImageMaskOutcome;
                typedef std::future<ImageMaskOutcome> ImageMaskOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ImageMaskRequest&, ImageMaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageMaskAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageMaskAsyncResponse> ImageMaskAsyncOutcome;
                typedef std::future<ImageMaskAsyncOutcome> ImageMaskAsyncOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ImageMaskAsyncRequest&, ImageMaskAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageMaskAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageMaskAsyncGetResultResponse> ImageMaskAsyncGetResultOutcome;
                typedef std::future<ImageMaskAsyncGetResultOutcome> ImageMaskAsyncGetResultOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ImageMaskAsyncGetResultRequest&, ImageMaskAsyncGetResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageMaskAsyncGetResultAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageToClassResponse> ImageToClassOutcome;
                typedef std::future<ImageToClassOutcome> ImageToClassOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ImageToClassRequest&, ImageToClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageToClassAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageToObjectResponse> ImageToObjectOutcome;
                typedef std::future<ImageToObjectOutcome> ImageToObjectOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ImageToObjectRequest&, ImageToObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageToObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::TextToClassResponse> TextToClassOutcome;
                typedef std::future<TextToClassOutcome> TextToClassOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::TextToClassRequest&, TextToClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToClassAsyncHandler;
                typedef Outcome<Core::Error, Model::TextToObjectResponse> TextToObjectOutcome;
                typedef std::future<TextToObjectOutcome> TextToObjectOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::TextToObjectRequest&, TextToObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::TurnPDFToObjectResponse> TurnPDFToObjectOutcome;
                typedef std::future<TurnPDFToObjectOutcome> TurnPDFToObjectOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::TurnPDFToObjectRequest&, TurnPDFToObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TurnPDFToObjectAsyncHandler;
                typedef Outcome<Core::Error, Model::TurnPDFToObjectAsyncResponse> TurnPDFToObjectAsyncOutcome;
                typedef std::future<TurnPDFToObjectAsyncOutcome> TurnPDFToObjectAsyncOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::TurnPDFToObjectAsyncRequest&, TurnPDFToObjectAsyncOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TurnPDFToObjectAsyncAsyncHandler;
                typedef Outcome<Core::Error, Model::TurnPDFToObjectAsyncGetResultResponse> TurnPDFToObjectAsyncGetResultOutcome;
                typedef std::future<TurnPDFToObjectAsyncGetResultOutcome> TurnPDFToObjectAsyncGetResultOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::TurnPDFToObjectAsyncGetResultRequest&, TurnPDFToObjectAsyncGetResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TurnPDFToObjectAsyncGetResultAsyncHandler;



                /**
                 *药品说明书PDF文件结构化
                 * @param req DrugInstructionObjectRequest
                 * @return DrugInstructionObjectOutcome
                 */
                DrugInstructionObjectOutcome DrugInstructionObject(const Model::DrugInstructionObjectRequest &request);
                void DrugInstructionObjectAsync(const Model::DrugInstructionObjectRequest& request, const DrugInstructionObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DrugInstructionObjectOutcomeCallable DrugInstructionObjectCallable(const Model::DrugInstructionObjectRequest& request);

                /**
                 *医疗报告图片脱敏接口
                 * @param req ImageMaskRequest
                 * @return ImageMaskOutcome
                 */
                ImageMaskOutcome ImageMask(const Model::ImageMaskRequest &request);
                void ImageMaskAsync(const Model::ImageMaskRequest& request, const ImageMaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageMaskOutcomeCallable ImageMaskCallable(const Model::ImageMaskRequest& request);

                /**
                 *图片脱敏-异步接口
短时间大批量调用（例如>100上传/10分钟），如果遇到错误码“FalledOperation.AsyncQueueFullError”，请于数分钟后再次尝试提交。
                 * @param req ImageMaskAsyncRequest
                 * @return ImageMaskAsyncOutcome
                 */
                ImageMaskAsyncOutcome ImageMaskAsync(const Model::ImageMaskAsyncRequest &request);
                void ImageMaskAsyncAsync(const Model::ImageMaskAsyncRequest& request, const ImageMaskAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageMaskAsyncOutcomeCallable ImageMaskAsyncCallable(const Model::ImageMaskAsyncRequest& request);

                /**
                 *图片脱敏-异步获取结果接口
请于上传请求后24小时内获取结果。
                 * @param req ImageMaskAsyncGetResultRequest
                 * @return ImageMaskAsyncGetResultOutcome
                 */
                ImageMaskAsyncGetResultOutcome ImageMaskAsyncGetResult(const Model::ImageMaskAsyncGetResultRequest &request);
                void ImageMaskAsyncGetResultAsync(const Model::ImageMaskAsyncGetResultRequest& request, const ImageMaskAsyncGetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageMaskAsyncGetResultOutcomeCallable ImageMaskAsyncGetResultCallable(const Model::ImageMaskAsyncGetResultRequest& request);

                /**
                 *图片分类
                 * @param req ImageToClassRequest
                 * @return ImageToClassOutcome
                 */
                ImageToClassOutcome ImageToClass(const Model::ImageToClassRequest &request);
                void ImageToClassAsync(const Model::ImageToClassRequest& request, const ImageToClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageToClassOutcomeCallable ImageToClassCallable(const Model::ImageToClassRequest& request);

                /**
                 *图片转结构化对象
                 * @param req ImageToObjectRequest
                 * @return ImageToObjectOutcome
                 */
                ImageToObjectOutcome ImageToObject(const Model::ImageToObjectRequest &request);
                void ImageToObjectAsync(const Model::ImageToObjectRequest& request, const ImageToObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageToObjectOutcomeCallable ImageToObjectCallable(const Model::ImageToObjectRequest& request);

                /**
                 *文本分类

适用场景：经过腾讯医疗专用 OCR 从图片识别之后的文本，并且需要加上每个字符的坐标信息，才可以调用此接口。通过其它 OCR 识别的文本可能不适配。医院的 XML 格式文本也不适配，XML 文件需要经过特殊转换才能直接调用此接口。单次调用传入的文本不宜超过 2000 字。如有需要调用此接口，建议先咨询产品团队。
                 * @param req TextToClassRequest
                 * @return TextToClassOutcome
                 */
                TextToClassOutcome TextToClass(const Model::TextToClassRequest &request);
                void TextToClassAsync(const Model::TextToClassRequest& request, const TextToClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToClassOutcomeCallable TextToClassCallable(const Model::TextToClassRequest& request);

                /**
                 *文本转结构化对象。

适用场景：经过腾讯医疗专用 OCR 从图片识别之后的文本，可以调用此接口。通过其它 OCR 识别的文本可能不适配。医院的 XML 格式文本也不适配，XML 文件需要经过特殊转换才能直接调用此接口。单次调用传入的文本不宜超过 2000 字。
                 * @param req TextToObjectRequest
                 * @return TextToObjectOutcome
                 */
                TextToObjectOutcome TextToObject(const Model::TextToObjectRequest &request);
                void TextToObjectAsync(const Model::TextToObjectRequest& request, const TextToObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToObjectOutcomeCallable TextToObjectCallable(const Model::TextToObjectRequest& request);

                /**
                 *将PDF格式的体检报告文件结构化，解析关键信息。
注意：该接口是按照体检报告 PDF 页面数量统计次数，不是按照 PDF 文件数量统计次数。通过该接口传入的报告必须是体检报告，非体检报告可能无法正确解析。
                 * @param req TurnPDFToObjectRequest
                 * @return TurnPDFToObjectOutcome
                 */
                TurnPDFToObjectOutcome TurnPDFToObject(const Model::TurnPDFToObjectRequest &request);
                void TurnPDFToObjectAsync(const Model::TurnPDFToObjectRequest& request, const TurnPDFToObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TurnPDFToObjectOutcomeCallable TurnPDFToObjectCallable(const Model::TurnPDFToObjectRequest& request);

                /**
                 *体检报告PDF文件结构化-异步接口
                 * @param req TurnPDFToObjectAsyncRequest
                 * @return TurnPDFToObjectAsyncOutcome
                 */
                TurnPDFToObjectAsyncOutcome TurnPDFToObjectAsync(const Model::TurnPDFToObjectAsyncRequest &request);
                void TurnPDFToObjectAsyncAsync(const Model::TurnPDFToObjectAsyncRequest& request, const TurnPDFToObjectAsyncAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TurnPDFToObjectAsyncOutcomeCallable TurnPDFToObjectAsyncCallable(const Model::TurnPDFToObjectAsyncRequest& request);

                /**
                 *体检报告PDF文件结构化异步获取结果接口
                 * @param req TurnPDFToObjectAsyncGetResultRequest
                 * @return TurnPDFToObjectAsyncGetResultOutcome
                 */
                TurnPDFToObjectAsyncGetResultOutcome TurnPDFToObjectAsyncGetResult(const Model::TurnPDFToObjectAsyncGetResultRequest &request);
                void TurnPDFToObjectAsyncGetResultAsync(const Model::TurnPDFToObjectAsyncGetResultRequest& request, const TurnPDFToObjectAsyncGetResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TurnPDFToObjectAsyncGetResultOutcomeCallable TurnPDFToObjectAsyncGetResultCallable(const Model::TurnPDFToObjectAsyncGetResultRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MRSCLIENT_H_
