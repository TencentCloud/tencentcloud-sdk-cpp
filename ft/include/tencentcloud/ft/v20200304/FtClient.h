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

#ifndef TENCENTCLOUD_FT_V20200304_FTCLIENT_H_
#define TENCENTCLOUD_FT_V20200304_FTCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ft/v20200304/model/ChangeAgePicRequest.h>
#include <tencentcloud/ft/v20200304/model/ChangeAgePicResponse.h>
#include <tencentcloud/ft/v20200304/model/SwapGenderPicRequest.h>
#include <tencentcloud/ft/v20200304/model/SwapGenderPicResponse.h>


namespace TencentCloud
{
    namespace Ft
    {
        namespace V20200304
        {
            class FtClient : public AbstractClient
            {
            public:
                FtClient(const Credential &credential, const std::string &region);
                FtClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Error, Model::ChangeAgePicResponse> ChangeAgePicOutcome;
                typedef std::future<ChangeAgePicOutcome> ChangeAgePicOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::ChangeAgePicRequest&, ChangeAgePicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAgePicAsyncHandler;
                typedef Outcome<Error, Model::SwapGenderPicResponse> SwapGenderPicOutcome;
                typedef std::future<SwapGenderPicOutcome> SwapGenderPicOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::SwapGenderPicRequest&, SwapGenderPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwapGenderPicAsyncHandler;



                /**
                 *用户上传一张人脸图片，基于人脸编辑与生成算法，输出一张人脸变老或变年轻的图片，支持实现人脸不同年龄的变化。（目前暂只支持10岁，后续放开再通知） 
                 * @param req ChangeAgePicRequest
                 * @return ChangeAgePicOutcome
                 */
                ChangeAgePicOutcome ChangeAgePic(const Model::ChangeAgePicRequest &request);
                void ChangeAgePicAsync(const Model::ChangeAgePicRequest& request, const ChangeAgePicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeAgePicOutcomeCallable ChangeAgePicCallable(const Model::ChangeAgePicRequest& request);

                /**
                 *用户上传一张人脸图片，基于人脸编辑与生成算法，输出一张人脸性别转换的图片。男变女可实现美颜、淡妆、加刘海和长发的效果；女变男可实现加胡须、变短发的效果。 
                 * @param req SwapGenderPicRequest
                 * @return SwapGenderPicOutcome
                 */
                SwapGenderPicOutcome SwapGenderPic(const Model::SwapGenderPicRequest &request);
                void SwapGenderPicAsync(const Model::SwapGenderPicRequest& request, const SwapGenderPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SwapGenderPicOutcomeCallable SwapGenderPicCallable(const Model::SwapGenderPicRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_FT_V20200304_FTCLIENT_H_
