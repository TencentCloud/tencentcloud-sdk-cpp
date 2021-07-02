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
#include <tencentcloud/mrs/v20200910/model/ImageToClassRequest.h>
#include <tencentcloud/mrs/v20200910/model/ImageToClassResponse.h>
#include <tencentcloud/mrs/v20200910/model/ImageToObjectRequest.h>
#include <tencentcloud/mrs/v20200910/model/ImageToObjectResponse.h>
#include <tencentcloud/mrs/v20200910/model/ReportImageStructuredRequest.h>
#include <tencentcloud/mrs/v20200910/model/ReportImageStructuredResponse.h>
#include <tencentcloud/mrs/v20200910/model/ReportTextStructuredRequest.h>
#include <tencentcloud/mrs/v20200910/model/ReportTextStructuredResponse.h>
#include <tencentcloud/mrs/v20200910/model/TextToClassRequest.h>
#include <tencentcloud/mrs/v20200910/model/TextToClassResponse.h>
#include <tencentcloud/mrs/v20200910/model/TextToObjectRequest.h>
#include <tencentcloud/mrs/v20200910/model/TextToObjectResponse.h>


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

                typedef Outcome<Error, Model::ImageToClassResponse> ImageToClassOutcome;
                typedef std::future<ImageToClassOutcome> ImageToClassOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ImageToClassRequest&, ImageToClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageToClassAsyncHandler;
                typedef Outcome<Error, Model::ImageToObjectResponse> ImageToObjectOutcome;
                typedef std::future<ImageToObjectOutcome> ImageToObjectOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ImageToObjectRequest&, ImageToObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageToObjectAsyncHandler;
                typedef Outcome<Error, Model::ReportImageStructuredResponse> ReportImageStructuredOutcome;
                typedef std::future<ReportImageStructuredOutcome> ReportImageStructuredOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ReportImageStructuredRequest&, ReportImageStructuredOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportImageStructuredAsyncHandler;
                typedef Outcome<Error, Model::ReportTextStructuredResponse> ReportTextStructuredOutcome;
                typedef std::future<ReportTextStructuredOutcome> ReportTextStructuredOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::ReportTextStructuredRequest&, ReportTextStructuredOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ReportTextStructuredAsyncHandler;
                typedef Outcome<Error, Model::TextToClassResponse> TextToClassOutcome;
                typedef std::future<TextToClassOutcome> TextToClassOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::TextToClassRequest&, TextToClassOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToClassAsyncHandler;
                typedef Outcome<Error, Model::TextToObjectResponse> TextToObjectOutcome;
                typedef std::future<TextToObjectOutcome> TextToObjectOutcomeCallable;
                typedef std::function<void(const MrsClient*, const Model::TextToObjectRequest&, TextToObjectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextToObjectAsyncHandler;



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
                 *接口没有流量

将输入的图片类型报告结构化
                 * @param req ReportImageStructuredRequest
                 * @return ReportImageStructuredOutcome
                 */
                ReportImageStructuredOutcome ReportImageStructured(const Model::ReportImageStructuredRequest &request);
                void ReportImageStructuredAsync(const Model::ReportImageStructuredRequest& request, const ReportImageStructuredAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportImageStructuredOutcomeCallable ReportImageStructuredCallable(const Model::ReportImageStructuredRequest& request);

                /**
                 *接口还未上线

将输入的医疗报告文本内容进行结构化输出
                 * @param req ReportTextStructuredRequest
                 * @return ReportTextStructuredOutcome
                 */
                ReportTextStructuredOutcome ReportTextStructured(const Model::ReportTextStructuredRequest &request);
                void ReportTextStructuredAsync(const Model::ReportTextStructuredRequest& request, const ReportTextStructuredAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ReportTextStructuredOutcomeCallable ReportTextStructuredCallable(const Model::ReportTextStructuredRequest& request);

                /**
                 *文本分类
                 * @param req TextToClassRequest
                 * @return TextToClassOutcome
                 */
                TextToClassOutcome TextToClass(const Model::TextToClassRequest &request);
                void TextToClassAsync(const Model::TextToClassRequest& request, const TextToClassAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToClassOutcomeCallable TextToClassCallable(const Model::TextToClassRequest& request);

                /**
                 *文本转结构化对象
                 * @param req TextToObjectRequest
                 * @return TextToObjectOutcome
                 */
                TextToObjectOutcome TextToObject(const Model::TextToObjectRequest &request);
                void TextToObjectAsync(const Model::TextToObjectRequest& request, const TextToObjectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextToObjectOutcomeCallable TextToObjectCallable(const Model::TextToObjectRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MRSCLIENT_H_
