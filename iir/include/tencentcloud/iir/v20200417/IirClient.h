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

#ifndef TENCENTCLOUD_IIR_V20200417_IIRCLIENT_H_
#define TENCENTCLOUD_IIR_V20200417_IIRCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iir/v20200417/model/RecognizeProductRequest.h>
#include <tencentcloud/iir/v20200417/model/RecognizeProductResponse.h>


namespace TencentCloud
{
    namespace Iir
    {
        namespace V20200417
        {
            class IirClient : public AbstractClient
            {
            public:
                IirClient(const Credential &credential, const std::string &region);
                IirClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::RecognizeProductResponse> RecognizeProductOutcome;
                typedef std::future<RecognizeProductOutcome> RecognizeProductOutcomeCallable;
                typedef std::function<void(const IirClient*, const Model::RecognizeProductRequest&, RecognizeProductOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RecognizeProductAsyncHandler;



                /**
                 *商品识别，使用微信扫一扫识物同款技术，基于人工智能技术、海量训练图片、亿级商品库，可以实现全覆盖、细粒度、高准确率的商品识别和商品推荐功能。 本服务可以识别出图片中的主体位置、主体商品类型，覆盖亿级SKU，输出具体商品的价格、型号等详细信息。 客户无需自建商品库，即可快速实现商品识别、拍照搜商品等功能。

目前“商品识别”为公测服务，需要申请、开通后方可使用。请在[服务开通申请表](https://cloud.tencent.com/apply/p/y1q2mnf0vdl) 中填写详细信息和需求，如果通过审核，我们将会在2个工作日内与您联系，并开通服务。 公测期间，本服务免费提供最高2QPS，收费模式和标准会在正式版上线前通过站内信、短信通知客户。如果需要提升并发，请与我们联系洽谈。

注意：本文档为公测版本，仅适用于功能体验和测试，正式业务接入请等待正式版。正式版的输入、输出可能会与公测版存在少量差异。
                 * @param req RecognizeProductRequest
                 * @return RecognizeProductOutcome
                 */
                RecognizeProductOutcome RecognizeProduct(const Model::RecognizeProductRequest &request);
                void RecognizeProductAsync(const Model::RecognizeProductRequest& request, const RecognizeProductAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RecognizeProductOutcomeCallable RecognizeProductCallable(const Model::RecognizeProductRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IIR_V20200417_IIRCLIENT_H_
