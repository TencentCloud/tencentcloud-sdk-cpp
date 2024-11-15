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
#include <tencentcloud/ft/v20200304/model/CancelFaceMorphJobRequest.h>
#include <tencentcloud/ft/v20200304/model/CancelFaceMorphJobResponse.h>
#include <tencentcloud/ft/v20200304/model/ChangeAgePicRequest.h>
#include <tencentcloud/ft/v20200304/model/ChangeAgePicResponse.h>
#include <tencentcloud/ft/v20200304/model/FaceCartoonPicRequest.h>
#include <tencentcloud/ft/v20200304/model/FaceCartoonPicResponse.h>
#include <tencentcloud/ft/v20200304/model/MorphFaceRequest.h>
#include <tencentcloud/ft/v20200304/model/MorphFaceResponse.h>
#include <tencentcloud/ft/v20200304/model/QueryFaceMorphJobRequest.h>
#include <tencentcloud/ft/v20200304/model/QueryFaceMorphJobResponse.h>
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

                typedef Outcome<Core::Error, Model::CancelFaceMorphJobResponse> CancelFaceMorphJobOutcome;
                typedef std::future<CancelFaceMorphJobOutcome> CancelFaceMorphJobOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::CancelFaceMorphJobRequest&, CancelFaceMorphJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CancelFaceMorphJobAsyncHandler;
                typedef Outcome<Core::Error, Model::ChangeAgePicResponse> ChangeAgePicOutcome;
                typedef std::future<ChangeAgePicOutcome> ChangeAgePicOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::ChangeAgePicRequest&, ChangeAgePicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ChangeAgePicAsyncHandler;
                typedef Outcome<Core::Error, Model::FaceCartoonPicResponse> FaceCartoonPicOutcome;
                typedef std::future<FaceCartoonPicOutcome> FaceCartoonPicOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::FaceCartoonPicRequest&, FaceCartoonPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> FaceCartoonPicAsyncHandler;
                typedef Outcome<Core::Error, Model::MorphFaceResponse> MorphFaceOutcome;
                typedef std::future<MorphFaceOutcome> MorphFaceOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::MorphFaceRequest&, MorphFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> MorphFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::QueryFaceMorphJobResponse> QueryFaceMorphJobOutcome;
                typedef std::future<QueryFaceMorphJobOutcome> QueryFaceMorphJobOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::QueryFaceMorphJobRequest&, QueryFaceMorphJobOutcome, const std::shared_ptr<const AsyncCallerContext>&)> QueryFaceMorphJobAsyncHandler;
                typedef Outcome<Core::Error, Model::SwapGenderPicResponse> SwapGenderPicOutcome;
                typedef std::future<SwapGenderPicOutcome> SwapGenderPicOutcomeCallable;
                typedef std::function<void(const FtClient*, const Model::SwapGenderPicRequest&, SwapGenderPicOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SwapGenderPicAsyncHandler;



                /**
                 *撤销人像渐变任务请求
                 * @param req CancelFaceMorphJobRequest
                 * @return CancelFaceMorphJobOutcome
                 */
                CancelFaceMorphJobOutcome CancelFaceMorphJob(const Model::CancelFaceMorphJobRequest &request);
                void CancelFaceMorphJobAsync(const Model::CancelFaceMorphJobRequest& request, const CancelFaceMorphJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CancelFaceMorphJobOutcomeCallable CancelFaceMorphJobCallable(const Model::CancelFaceMorphJobRequest& request);

                /**
                 *用户上传一张人脸图片，基于人脸编辑与生成算法，输出一张人脸变老或变年轻的图片，支持实现人脸不同年龄的变化。
                 * @param req ChangeAgePicRequest
                 * @return ChangeAgePicOutcome
                 */
                ChangeAgePicOutcome ChangeAgePic(const Model::ChangeAgePicRequest &request);
                void ChangeAgePicAsync(const Model::ChangeAgePicRequest& request, const ChangeAgePicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ChangeAgePicOutcomeCallable ChangeAgePicCallable(const Model::ChangeAgePicRequest& request);

                /**
                 *输入一张人脸照片，生成个性化的二次元动漫形象，可用于打造个性头像、趣味活动、特效类应用等场景，提升社交娱乐的体验。
                 * @param req FaceCartoonPicRequest
                 * @return FaceCartoonPicOutcome
                 */
                FaceCartoonPicOutcome FaceCartoonPic(const Model::FaceCartoonPicRequest &request);
                void FaceCartoonPicAsync(const Model::FaceCartoonPicRequest& request, const FaceCartoonPicAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                FaceCartoonPicOutcomeCallable FaceCartoonPicCallable(const Model::FaceCartoonPicRequest& request);

                /**
                 *输入2-5张人脸照片，生成一段以人脸为焦点的渐变视频或GIF图，支持自定义图片播放速度、视频每秒传输帧数，可用于短视频、表情包、创意H5等应用场景，丰富静态图片的玩法。
                 * @param req MorphFaceRequest
                 * @return MorphFaceOutcome
                 */
                MorphFaceOutcome MorphFace(const Model::MorphFaceRequest &request);
                void MorphFaceAsync(const Model::MorphFaceRequest& request, const MorphFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                MorphFaceOutcomeCallable MorphFaceCallable(const Model::MorphFaceRequest& request);

                /**
                 *查询人像渐变处理进度
                 * @param req QueryFaceMorphJobRequest
                 * @return QueryFaceMorphJobOutcome
                 */
                QueryFaceMorphJobOutcome QueryFaceMorphJob(const Model::QueryFaceMorphJobRequest &request);
                void QueryFaceMorphJobAsync(const Model::QueryFaceMorphJobRequest& request, const QueryFaceMorphJobAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                QueryFaceMorphJobOutcomeCallable QueryFaceMorphJobCallable(const Model::QueryFaceMorphJobRequest& request);

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
