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

#ifndef TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_
#define TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateResponse.h>
#include <tencentcloud/tmt/v20180321/model/LanguageDetectRequest.h>
#include <tencentcloud/tmt/v20180321/model/LanguageDetectResponse.h>
#include <tencentcloud/tmt/v20180321/model/SpeechTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/SpeechTranslateResponse.h>
#include <tencentcloud/tmt/v20180321/model/TextTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/TextTranslateResponse.h>
#include <tencentcloud/tmt/v20180321/model/TextTranslateBatchRequest.h>
#include <tencentcloud/tmt/v20180321/model/TextTranslateBatchResponse.h>


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

                typedef Outcome<Error, Model::ImageTranslateResponse> ImageTranslateOutcome;
                typedef std::future<ImageTranslateOutcome> ImageTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::ImageTranslateRequest&, ImageTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageTranslateAsyncHandler;
                typedef Outcome<Error, Model::LanguageDetectResponse> LanguageDetectOutcome;
                typedef std::future<LanguageDetectOutcome> LanguageDetectOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::LanguageDetectRequest&, LanguageDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LanguageDetectAsyncHandler;
                typedef Outcome<Error, Model::SpeechTranslateResponse> SpeechTranslateOutcome;
                typedef std::future<SpeechTranslateOutcome> SpeechTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::SpeechTranslateRequest&, SpeechTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SpeechTranslateAsyncHandler;
                typedef Outcome<Error, Model::TextTranslateResponse> TextTranslateOutcome;
                typedef std::future<TextTranslateOutcome> TextTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::TextTranslateRequest&, TextTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslateAsyncHandler;
                typedef Outcome<Error, Model::TextTranslateBatchResponse> TextTranslateBatchOutcome;
                typedef std::future<TextTranslateBatchOutcome> TextTranslateBatchOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::TextTranslateBatchRequest&, TextTranslateBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslateBatchAsyncHandler;



                /**
                 *提供中文到英文、英文到中文两种语言的图片翻译服务，可自动识别图片中的文本内容并翻译成目标语言，识别后的文本按行翻译，后续会提供可按段落翻译的版本。<br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源 部分。
                 * @param req ImageTranslateRequest
                 * @return ImageTranslateOutcome
                 */
                ImageTranslateOutcome ImageTranslate(const Model::ImageTranslateRequest &request);
                void ImageTranslateAsync(const Model::ImageTranslateRequest& request, const ImageTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageTranslateOutcomeCallable ImageTranslateCallable(const Model::ImageTranslateRequest& request);

                /**
                 *可自动识别文本内容的语言种类，轻量高效，无需额外实现判断方式，使面向客户的服务体验更佳。 <br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源 部分。
                 * @param req LanguageDetectRequest
                 * @return LanguageDetectOutcome
                 */
                LanguageDetectOutcome LanguageDetect(const Model::LanguageDetectRequest &request);
                void LanguageDetectAsync(const Model::LanguageDetectRequest& request, const LanguageDetectAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                LanguageDetectOutcomeCallable LanguageDetectCallable(const Model::LanguageDetectRequest& request);

                /**
                 *本接口提供上传音频，将音频进行语音识别并翻译成文本的服务，目前开放中英互译的语音翻译服务。
待识别和翻译的音频文件可以是 pcm、mp3和speex 格式，pcm采样率要求16kHz、位深16bit、单声道，音频内语音清晰。<br/>
如果采用流式传输的方式，要求每个分片时长200ms~500ms；如果采用非流式的传输方式，要求音频时长不超过8s。注意最后一个分片的IsEnd参数设置为1。<br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源部分。

                 * @param req SpeechTranslateRequest
                 * @return SpeechTranslateOutcome
                 */
                SpeechTranslateOutcome SpeechTranslate(const Model::SpeechTranslateRequest &request);
                void SpeechTranslateAsync(const Model::SpeechTranslateRequest& request, const SpeechTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SpeechTranslateOutcomeCallable SpeechTranslateCallable(const Model::SpeechTranslateRequest& request);

                /**
                 *提供中文到英文、英文到中文的等多种语言的文本内容翻译服务， 经过大数据语料库、多种解码算法、翻译引擎深度优化，在新闻文章、生活口语等不同语言场景中都有深厚积累，翻译结果专业评价处于行业领先水平。<br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源 部分。

                 * @param req TextTranslateRequest
                 * @return TextTranslateOutcome
                 */
                TextTranslateOutcome TextTranslate(const Model::TextTranslateRequest &request);
                void TextTranslateAsync(const Model::TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextTranslateOutcomeCallable TextTranslateCallable(const Model::TextTranslateRequest& request);

                /**
                 *文本翻译的批量接口
                 * @param req TextTranslateBatchRequest
                 * @return TextTranslateBatchOutcome
                 */
                TextTranslateBatchOutcome TextTranslateBatch(const Model::TextTranslateBatchRequest &request);
                void TextTranslateBatchAsync(const Model::TextTranslateBatchRequest& request, const TextTranslateBatchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextTranslateBatchOutcomeCallable TextTranslateBatchCallable(const Model::TextTranslateBatchRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TMT_V20180321_TMTCLIENT_H_
