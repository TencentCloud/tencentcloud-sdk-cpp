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

#ifndef TENCENTCLOUD_IMS_V20200713_IMSCLIENT_H_
#define TENCENTCLOUD_IMS_V20200713_IMSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ims/v20200713/model/ImageModerationRequest.h>
#include <tencentcloud/ims/v20200713/model/ImageModerationResponse.h>


namespace TencentCloud
{
    namespace Ims
    {
        namespace V20200713
        {
            class ImsClient : public AbstractClient
            {
            public:
                ImsClient(const Credential &credential, const std::string &region);
                ImsClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::ImageModerationResponse> ImageModerationOutcome;
                typedef std::future<ImageModerationOutcome> ImageModerationOutcomeCallable;
                typedef std::function<void(const ImsClient*, const Model::ImageModerationRequest&, ImageModerationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ImageModerationAsyncHandler;



                /**
                 *图片同步检测服务（Image Moderation, IM）能自动扫描图片，识别可能令人反感、不安全或不适宜的内容，同时支持用户配置图片黑名单，打击自定义识别类型的图片。

<div class="rno-api-explorer" style="margin-bottom:20px">
    <div class="rno-api-explorer-inner">
        <div class="rno-api-explorer-hd">
            <div class="rno-api-explorer-title">
                关于版本迭代的描述
            </div>
        </div>
        <div class="rno-api-explorer-body">
            <div class="rno-api-explorer-cont">
                <p>当前页面版本为图片内容安全2020版本，2020.11.3日前接入的图片内容安全接口为2019版本，在此时间前接入的用户可直接访问以下链接进行维护操作：<a href="https://cloud.tencent.com/document/product/1125/38206" target="_blank">图片内容安全-2019版本</a></p>
                <p>2020版本相对2019版本进行了升级，支持更灵活的多场景业务策略配置以及更丰富的识别回调信息，满足不同业务的识别需求，建议按照2020版本接入指引进行接口升级；同时，2019版本也会持续维护直至用户不再使用为止。</p>
            </div>
        </div>
    </div>
</div>
                 * @param req ImageModerationRequest
                 * @return ImageModerationOutcome
                 */
                ImageModerationOutcome ImageModeration(const Model::ImageModerationRequest &request);
                void ImageModerationAsync(const Model::ImageModerationRequest& request, const ImageModerationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ImageModerationOutcomeCallable ImageModerationCallable(const Model::ImageModerationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IMS_V20200713_IMSCLIENT_H_
