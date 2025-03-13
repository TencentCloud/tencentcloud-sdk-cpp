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

#ifndef TENCENTCLOUD_FMU_V20191213_FMUCLIENT_H_
#define TENCENTCLOUD_FMU_V20191213_FMUCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/fmu/v20191213/model/BeautifyPicRequest.h>
#include <tencentcloud/fmu/v20191213/model/BeautifyPicResponse.h>
#include <tencentcloud/fmu/v20191213/model/CreateModelRequest.h>
#include <tencentcloud/fmu/v20191213/model/CreateModelResponse.h>
#include <tencentcloud/fmu/v20191213/model/DeleteModelRequest.h>
#include <tencentcloud/fmu/v20191213/model/DeleteModelResponse.h>
#include <tencentcloud/fmu/v20191213/model/GetModelListRequest.h>
#include <tencentcloud/fmu/v20191213/model/GetModelListResponse.h>
#include <tencentcloud/fmu/v20191213/model/StyleImageRequest.h>
#include <tencentcloud/fmu/v20191213/model/StyleImageResponse.h>
#include <tencentcloud/fmu/v20191213/model/StyleImageProRequest.h>
#include <tencentcloud/fmu/v20191213/model/StyleImageProResponse.h>
#include <tencentcloud/fmu/v20191213/model/TryLipstickPicRequest.h>
#include <tencentcloud/fmu/v20191213/model/TryLipstickPicResponse.h>


namespace TencentCloud
{
    namespace Fmu
    {
        namespace V20191213
        {
            class FmuClient : public AbstractClient
            {
            public:
                FmuClient(const Credential &credential, const std::string &region);
                FmuClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::BeautifyPicResponse> BeautifyPicOutcome;
                typedef std::future<BeautifyPicOutcome> BeautifyPicOutcomeCallable;
                typedef std::function<void(const FmuClient*, const Model::BeautifyPicRequest&, BeautifyPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BeautifyPicAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateModelResponse> CreateModelOutcome;
                typedef std::future<CreateModelOutcome> CreateModelOutcomeCallable;
                typedef std::function<void(const FmuClient*, const Model::CreateModelRequest&, CreateModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateModelAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteModelResponse> DeleteModelOutcome;
                typedef std::future<DeleteModelOutcome> DeleteModelOutcomeCallable;
                typedef std::function<void(const FmuClient*, const Model::DeleteModelRequest&, DeleteModelOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteModelAsyncHandler;
                typedef Outcome<Core::Error, Model::GetModelListResponse> GetModelListOutcome;
                typedef std::future<GetModelListOutcome> GetModelListOutcomeCallable;
                typedef std::function<void(const FmuClient*, const Model::GetModelListRequest&, GetModelListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetModelListAsyncHandler;
                typedef Outcome<Core::Error, Model::StyleImageResponse> StyleImageOutcome;
                typedef std::future<StyleImageOutcome> StyleImageOutcomeCallable;
                typedef std::function<void(const FmuClient*, const Model::StyleImageRequest&, StyleImageOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StyleImageAsyncHandler;
                typedef Outcome<Core::Error, Model::StyleImageProResponse> StyleImageProOutcome;
                typedef std::future<StyleImageProOutcome> StyleImageProOutcomeCallable;
                typedef std::function<void(const FmuClient*, const Model::StyleImageProRequest&, StyleImageProOutcome, const std::shared_ptr<const AsyncCallerContext>&)> StyleImageProAsyncHandler;
                typedef Outcome<Core::Error, Model::TryLipstickPicResponse> TryLipstickPicOutcome;
                typedef std::future<TryLipstickPicOutcome> TryLipstickPicOutcomeCallable;
                typedef std::function<void(const FmuClient*, const Model::TryLipstickPicRequest&, TryLipstickPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> TryLipstickPicAsyncHandler;



                /**
                 *用户上传一张人脸图片（最多能处理一张图片中最大的五张人脸信息），精准定位五官，实现美肤、亮肤、祛痘等美颜功能。
                 * @param req BeautifyPicRequest
                 * @return BeautifyPicOutcome
                 */
                BeautifyPicOutcome BeautifyPic(const Model::BeautifyPicRequest &request);
                void BeautifyPicAsync(const Model::BeautifyPicRequest& request, const BeautifyPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BeautifyPicOutcomeCallable BeautifyPicCallable(const Model::BeautifyPicRequest& request);

                /**
                 *在使用LUT素材的modelid实现试唇色前，您需要先上传 LUT 格式的cube文件注册唇色ID。查看 [LUT文件的使用说明](https://cloud.tencent.com/document/product/1172/41701)。

注：您也可以直接使用 [试唇色接口](https://cloud.tencent.com/document/product/1172/40706)，通过输入RGBA模型数值的方式指定唇色，更简单易用。
                 * @param req CreateModelRequest
                 * @return CreateModelOutcome
                 */
                CreateModelOutcome CreateModel(const Model::CreateModelRequest &request);
                void CreateModelAsync(const Model::CreateModelRequest& request, const CreateModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateModelOutcomeCallable CreateModelCallable(const Model::CreateModelRequest& request);

                /**
                 *删除已注册的唇色素材。
                 * @param req DeleteModelRequest
                 * @return DeleteModelOutcome
                 */
                DeleteModelOutcome DeleteModel(const Model::DeleteModelRequest &request);
                void DeleteModelAsync(const Model::DeleteModelRequest& request, const DeleteModelAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteModelOutcomeCallable DeleteModelCallable(const Model::DeleteModelRequest& request);

                /**
                 *查询已注册的唇色素材。
                 * @param req GetModelListRequest
                 * @return GetModelListOutcome
                 */
                GetModelListOutcome GetModelList(const Model::GetModelListRequest &request);
                void GetModelListAsync(const Model::GetModelListRequest& request, const GetModelListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetModelListOutcomeCallable GetModelListCallable(const Model::GetModelListRequest& request);

                /**
                 *上传一张照片，输出滤镜处理后的图片。
                 * @param req StyleImageRequest
                 * @return StyleImageOutcome
                 */
                StyleImageOutcome StyleImage(const Model::StyleImageRequest &request);
                void StyleImageAsync(const Model::StyleImageRequest& request, const StyleImageAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StyleImageOutcomeCallable StyleImageCallable(const Model::StyleImageRequest& request);

                /**
                 *上传一张照片，输出滤镜处理后的图片。
                 * @param req StyleImageProRequest
                 * @return StyleImageProOutcome
                 */
                StyleImageProOutcome StyleImagePro(const Model::StyleImageProRequest &request);
                void StyleImageProAsync(const Model::StyleImageProRequest& request, const StyleImageProAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                StyleImageProOutcomeCallable StyleImageProCallable(const Model::StyleImageProRequest& request);

                /**
                 *对图片中的人脸嘴唇进行着色，最多支持同时对一张图中的3张人脸进行试唇色。

您可以通过事先注册在腾讯云的唇色素材（LUT文件）改变图片中的人脸唇色，也可以输入RGBA模型数值。

为了更好的效果，建议您使用事先注册在腾讯云的唇色素材（LUT文件）。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req TryLipstickPicRequest
                 * @return TryLipstickPicOutcome
                 */
                TryLipstickPicOutcome TryLipstickPic(const Model::TryLipstickPicRequest &request);
                void TryLipstickPicAsync(const Model::TryLipstickPicRequest& request, const TryLipstickPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                TryLipstickPicOutcomeCallable TryLipstickPicCallable(const Model::TryLipstickPicRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FMU_V20191213_FMUCLIENT_H_
