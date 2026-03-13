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

#ifndef TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_
#define TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateLLMRequest.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateLLMResponse.h>
#include <tencentcloud/tmt/v20180321/model/TextTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/TextTranslateResponse.h>


namespace TencentCloud
{
    namespace Tmt
    {
        namespace V20180321
        {
            class TmtClient : public AbstractClient
            {
            public:
                TmtClient(const Credential &credential, const std::string &region);
                TmtClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ImageTranslateLLMResponse> ImageTranslateLLMOutcome;
                typedef std::future<ImageTranslateLLMOutcome> ImageTranslateLLMOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::ImageTranslateLLMRequest&, ImageTranslateLLMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageTranslateLLMAsyncHandler;
                typedef Outcome<Core::Error, Model::TextTranslateResponse> TextTranslateOutcome;
                typedef std::future<TextTranslateOutcome> TextTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::TextTranslateRequest&, TextTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslateAsyncHandler;



                /**
                 *提供18种语言的图片翻译服务，可自动识别图片中的文本内容并翻译成目标语言，识别后的文本按行翻译，后续会提供可按段落翻译的版本。

- 输入图片格式：png、jpg、jpeg等常用图片格式，不支持gif动图。
- 输出图片格式：jpg。

提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源 部分。
                 * @param req ImageTranslateLLMRequest
                 * @return ImageTranslateLLMOutcome
                 */
                ImageTranslateLLMOutcome ImageTranslateLLM(const Model::ImageTranslateLLMRequest &request);
                void ImageTranslateLLMAsync(const Model::ImageTranslateLLMRequest& request, const ImageTranslateLLMAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageTranslateLLMOutcomeCallable ImageTranslateLLMCallable(const Model::ImageTranslateLLMRequest& request);

                /**
                 *腾讯翻译为合作伙伴提供文本翻译、文档翻译、交互翻译、AI同传等多种机器翻译服务，具有toB多行业解决方案。作为WMT世界机器翻译大赛冠军，翻译准确度值得信赖，其中，交互翻译能力是业界领先技术；腾讯同传是AI同传业界标杆。<br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源 部分。
                 * @param req TextTranslateRequest
                 * @return TextTranslateOutcome
                 */
                TextTranslateOutcome TextTranslate(const Model::TextTranslateRequest &request);
                void TextTranslateAsync(const Model::TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextTranslateOutcomeCallable TextTranslateCallable(const Model::TextTranslateRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_
