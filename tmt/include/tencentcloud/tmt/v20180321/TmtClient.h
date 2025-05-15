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
#include <tencentcloud/tmt/v20180321/model/FileTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/FileTranslateResponse.h>
#include <tencentcloud/tmt/v20180321/model/GetFileTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/GetFileTranslateResponse.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateRequest.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateResponse.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateLLMRequest.h>
#include <tencentcloud/tmt/v20180321/model/ImageTranslateLLMResponse.h>
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

                typedef Outcome<Core::Error, Model::FileTranslateResponse> FileTranslateOutcome;
                typedef std::future<FileTranslateOutcome> FileTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::FileTranslateRequest&, FileTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FileTranslateAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFileTranslateResponse> GetFileTranslateOutcome;
                typedef std::future<GetFileTranslateOutcome> GetFileTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::GetFileTranslateRequest&, GetFileTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFileTranslateAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageTranslateResponse> ImageTranslateOutcome;
                typedef std::future<ImageTranslateOutcome> ImageTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::ImageTranslateRequest&, ImageTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageTranslateAsyncHandler;
                typedef Outcome<Core::Error, Model::ImageTranslateLLMResponse> ImageTranslateLLMOutcome;
                typedef std::future<ImageTranslateLLMOutcome> ImageTranslateLLMOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::ImageTranslateLLMRequest&, ImageTranslateLLMOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageTranslateLLMAsyncHandler;
                typedef Outcome<Core::Error, Model::LanguageDetectResponse> LanguageDetectOutcome;
                typedef std::future<LanguageDetectOutcome> LanguageDetectOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::LanguageDetectRequest&, LanguageDetectOutcome, const std::shared_ptr<const AsyncCallerContext>&)> LanguageDetectAsyncHandler;
                typedef Outcome<Core::Error, Model::SpeechTranslateResponse> SpeechTranslateOutcome;
                typedef std::future<SpeechTranslateOutcome> SpeechTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::SpeechTranslateRequest&, SpeechTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SpeechTranslateAsyncHandler;
                typedef Outcome<Core::Error, Model::TextTranslateResponse> TextTranslateOutcome;
                typedef std::future<TextTranslateOutcome> TextTranslateOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::TextTranslateRequest&, TextTranslateOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslateAsyncHandler;
                typedef Outcome<Core::Error, Model::TextTranslateBatchResponse> TextTranslateBatchOutcome;
                typedef std::future<TextTranslateBatchOutcome> TextTranslateBatchOutcomeCallable;
                typedef std::function<void(const TmtClient*, const Model::TextTranslateBatchRequest&, TextTranslateBatchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TextTranslateBatchAsyncHandler;



                /**
                 *提交文档原文内容，输出任务ID， 支持原文为单一语种文档（如出现多语言文档，仅支持以选定的源语言相关内容翻译）,文件格式有pdf、docx、pptx、xlsx，支持的文本格式有txt、xml、html、markdown、properties。任务翻译数据可保存7天，7天后不再返回任务数据。请注意保存。
                 * @param req FileTranslateRequest
                 * @return FileTranslateOutcome
                 */
                FileTranslateOutcome FileTranslate(const Model::FileTranslateRequest &request);
                void FileTranslateAsync(const Model::FileTranslateRequest& request, const FileTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FileTranslateOutcomeCallable FileTranslateCallable(const Model::FileTranslateRequest& request);

                /**
                 *在调用文档翻译请求接口后，有回调和轮询两种方式获取识别结果。
•当采用回调方式时，翻译完成后会将结果通过 POST 请求的形式通知到用户在请求时填写的回调 URL，具体请参见[文件翻译回调说明](https://cloud.tencent.com/document/product/551/91138)。
• 当采用轮询方式时，需要主动提交任务ID来轮询识别结果，共有任务成功、等待、执行中和失败四种结果，具体信息请参见参数说明。
                 * @param req GetFileTranslateRequest
                 * @return GetFileTranslateOutcome
                 */
                GetFileTranslateOutcome GetFileTranslate(const Model::GetFileTranslateRequest &request);
                void GetFileTranslateAsync(const Model::GetFileTranslateRequest& request, const GetFileTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFileTranslateOutcomeCallable GetFileTranslateCallable(const Model::GetFileTranslateRequest& request);

                /**
                 *提供13种语言的图片翻译服务，可自动识别图片中的文本内容并翻译成目标语言，识别后的文本按行翻译，后续会提供可按段落翻译的版本。<br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源 部分。
                 * @param req ImageTranslateRequest
                 * @return ImageTranslateOutcome
                 */
                ImageTranslateOutcome ImageTranslate(const Model::ImageTranslateRequest &request);
                void ImageTranslateAsync(const Model::ImageTranslateRequest& request, const ImageTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageTranslateOutcomeCallable ImageTranslateCallable(const Model::ImageTranslateRequest& request);

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
待识别和翻译的音频文件可以是 pcm、mp3和speex 格式，其中支持流式传输的只有pcm格式，pcm采样率要求16kHz、位深16bit、单声道，音频内语音清晰。<br/>
如果采用流式传输的方式，要求每个分片时长200ms~500ms；如果采用非流式的传输方式，要求音频时长不超过8s。注意最后一个分片的IsEnd参数设置为1。<br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源部分。
                 * @param req SpeechTranslateRequest
                 * @return SpeechTranslateOutcome
                 */
                SpeechTranslateOutcome SpeechTranslate(const Model::SpeechTranslateRequest &request);
                void SpeechTranslateAsync(const Model::SpeechTranslateRequest& request, const SpeechTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SpeechTranslateOutcomeCallable SpeechTranslateCallable(const Model::SpeechTranslateRequest& request);

                /**
                 *腾讯翻译为合作伙伴提供文本翻译、文档翻译、交互翻译、AI同传等多种机器翻译服务，具有toB多行业解决方案。作为WMT世界机器翻译大赛冠军，翻译准确度值得信赖，其中，交互翻译能力是业界领先技术；腾讯同传是AI同传业界标杆。<br />
提示：对于一般开发者，我们建议优先使用SDK接入简化开发。SDK使用介绍请直接查看 5. 开发者资源 部分。
                 * @param req TextTranslateRequest
                 * @return TextTranslateOutcome
                 */
                TextTranslateOutcome TextTranslate(const Model::TextTranslateRequest &request);
                void TextTranslateAsync(const Model::TextTranslateRequest& request, const TextTranslateAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TextTranslateOutcomeCallable TextTranslateCallable(const Model::TextTranslateRequest& request);

                /**
                 *批量翻译文本的接口
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
