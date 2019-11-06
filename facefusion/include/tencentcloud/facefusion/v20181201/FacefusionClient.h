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

#ifndef TENCENTCLOUD_FACEFUSION_V20181201_FACEFUSIONCLIENT_H_
#define TENCENTCLOUD_FACEFUSION_V20181201_FACEFUSIONCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/facefusion/v20181201/model/FaceFusionRequest.h>
#include <tencentcloud/facefusion/v20181201/model/FaceFusionResponse.h>
#include <tencentcloud/facefusion/v20181201/model/FuseFaceRequest.h>
#include <tencentcloud/facefusion/v20181201/model/FuseFaceResponse.h>


namespace TencentCloud
{
    namespace Facefusion
    {
        namespace V20181201
        {
            class FacefusionClient : public AbstractClient
            {
            public:
                FacefusionClient(const Credential &credential, const std::string &region);
                FacefusionClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::FaceFusionResponse> FaceFusionOutcome;
                typedef std::future<FaceFusionOutcome> FaceFusionOutcomeCallable;
                typedef std::function<void(const FacefusionClient*, const Model::FaceFusionRequest&, FaceFusionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FaceFusionAsyncHandler;
                typedef Outcome<Error, Model::FuseFaceResponse> FuseFaceOutcome;
                typedef std::future<FuseFaceOutcome> FuseFaceOutcomeCallable;
                typedef std::function<void(const FacefusionClient*, const Model::FuseFaceRequest&, FuseFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FuseFaceAsyncHandler;



                /**
                 *本接口用于人脸融合，用户上传人脸图片，获取与模板融合后的人脸图片。未发布的活动请求频率限制为1次/秒，已发布的活动请求频率限制50次/秒。如有需要提高活动的请求频率限制，请在控制台中申请。
>     
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req FaceFusionRequest
                 * @return FaceFusionOutcome
                 */
                FaceFusionOutcome FaceFusion(const Model::FaceFusionRequest &request);
                void FaceFusionAsync(const Model::FaceFusionRequest& request, const FaceFusionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FaceFusionOutcomeCallable FaceFusionCallable(const Model::FaceFusionRequest& request);

                /**
                 *本接口用于单脸、多脸融合，用户上传人脸图片，获取与模板融合后的人脸图片。查看 <a href="https://cloud.tencent.com/document/product/670/38247" target="_blank">选脸融合接入指引</a>。

未发布的活动请求频率限制为1次/秒，已发布的活动请求频率限制50次/秒。如有需要提高活动的请求频率限制，请在控制台中申请。
>
- 公共参数中的签名方式必须指定为V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req FuseFaceRequest
                 * @return FuseFaceOutcome
                 */
                FuseFaceOutcome FuseFace(const Model::FuseFaceRequest &request);
                void FuseFaceAsync(const Model::FuseFaceRequest& request, const FuseFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FuseFaceOutcomeCallable FuseFaceCallable(const Model::FuseFaceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FACEFUSION_V20181201_FACEFUSIONCLIENT_H_
