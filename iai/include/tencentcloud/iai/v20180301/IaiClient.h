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

#ifndef TENCENTCLOUD_IAI_V20180301_IAICLIENT_H_
#define TENCENTCLOUD_IAI_V20180301_IAICLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iai/v20180301/model/AnalyzeDenseLandmarksRequest.h>
#include <tencentcloud/iai/v20180301/model/AnalyzeDenseLandmarksResponse.h>
#include <tencentcloud/iai/v20180301/model/AnalyzeFaceRequest.h>
#include <tencentcloud/iai/v20180301/model/AnalyzeFaceResponse.h>
#include <tencentcloud/iai/v20180301/model/CompareFaceRequest.h>
#include <tencentcloud/iai/v20180301/model/CompareFaceResponse.h>
#include <tencentcloud/iai/v20180301/model/CopyPersonRequest.h>
#include <tencentcloud/iai/v20180301/model/CopyPersonResponse.h>
#include <tencentcloud/iai/v20180301/model/CreateFaceRequest.h>
#include <tencentcloud/iai/v20180301/model/CreateFaceResponse.h>
#include <tencentcloud/iai/v20180301/model/CreateGroupRequest.h>
#include <tencentcloud/iai/v20180301/model/CreateGroupResponse.h>
#include <tencentcloud/iai/v20180301/model/CreatePersonRequest.h>
#include <tencentcloud/iai/v20180301/model/CreatePersonResponse.h>
#include <tencentcloud/iai/v20180301/model/DeleteFaceRequest.h>
#include <tencentcloud/iai/v20180301/model/DeleteFaceResponse.h>
#include <tencentcloud/iai/v20180301/model/DeleteGroupRequest.h>
#include <tencentcloud/iai/v20180301/model/DeleteGroupResponse.h>
#include <tencentcloud/iai/v20180301/model/DeletePersonRequest.h>
#include <tencentcloud/iai/v20180301/model/DeletePersonResponse.h>
#include <tencentcloud/iai/v20180301/model/DeletePersonFromGroupRequest.h>
#include <tencentcloud/iai/v20180301/model/DeletePersonFromGroupResponse.h>
#include <tencentcloud/iai/v20180301/model/DetectFaceRequest.h>
#include <tencentcloud/iai/v20180301/model/DetectFaceResponse.h>
#include <tencentcloud/iai/v20180301/model/DetectFaceAttributesRequest.h>
#include <tencentcloud/iai/v20180301/model/DetectFaceAttributesResponse.h>
#include <tencentcloud/iai/v20180301/model/DetectLiveFaceRequest.h>
#include <tencentcloud/iai/v20180301/model/DetectLiveFaceResponse.h>
#include <tencentcloud/iai/v20180301/model/GetGroupInfoRequest.h>
#include <tencentcloud/iai/v20180301/model/GetGroupInfoResponse.h>
#include <tencentcloud/iai/v20180301/model/GetGroupListRequest.h>
#include <tencentcloud/iai/v20180301/model/GetGroupListResponse.h>
#include <tencentcloud/iai/v20180301/model/GetPersonBaseInfoRequest.h>
#include <tencentcloud/iai/v20180301/model/GetPersonBaseInfoResponse.h>
#include <tencentcloud/iai/v20180301/model/GetPersonGroupInfoRequest.h>
#include <tencentcloud/iai/v20180301/model/GetPersonGroupInfoResponse.h>
#include <tencentcloud/iai/v20180301/model/GetPersonListRequest.h>
#include <tencentcloud/iai/v20180301/model/GetPersonListResponse.h>
#include <tencentcloud/iai/v20180301/model/GetPersonListNumRequest.h>
#include <tencentcloud/iai/v20180301/model/GetPersonListNumResponse.h>
#include <tencentcloud/iai/v20180301/model/GetUpgradeGroupFaceModelVersionJobListRequest.h>
#include <tencentcloud/iai/v20180301/model/GetUpgradeGroupFaceModelVersionJobListResponse.h>
#include <tencentcloud/iai/v20180301/model/GetUpgradeGroupFaceModelVersionResultRequest.h>
#include <tencentcloud/iai/v20180301/model/GetUpgradeGroupFaceModelVersionResultResponse.h>
#include <tencentcloud/iai/v20180301/model/ModifyGroupRequest.h>
#include <tencentcloud/iai/v20180301/model/ModifyGroupResponse.h>
#include <tencentcloud/iai/v20180301/model/ModifyPersonBaseInfoRequest.h>
#include <tencentcloud/iai/v20180301/model/ModifyPersonBaseInfoResponse.h>
#include <tencentcloud/iai/v20180301/model/ModifyPersonGroupInfoRequest.h>
#include <tencentcloud/iai/v20180301/model/ModifyPersonGroupInfoResponse.h>
#include <tencentcloud/iai/v20180301/model/RevertGroupFaceModelVersionRequest.h>
#include <tencentcloud/iai/v20180301/model/RevertGroupFaceModelVersionResponse.h>
#include <tencentcloud/iai/v20180301/model/SearchFacesRequest.h>
#include <tencentcloud/iai/v20180301/model/SearchFacesResponse.h>
#include <tencentcloud/iai/v20180301/model/SearchFacesReturnsByGroupRequest.h>
#include <tencentcloud/iai/v20180301/model/SearchFacesReturnsByGroupResponse.h>
#include <tencentcloud/iai/v20180301/model/SearchPersonsRequest.h>
#include <tencentcloud/iai/v20180301/model/SearchPersonsResponse.h>
#include <tencentcloud/iai/v20180301/model/SearchPersonsReturnsByGroupRequest.h>
#include <tencentcloud/iai/v20180301/model/SearchPersonsReturnsByGroupResponse.h>
#include <tencentcloud/iai/v20180301/model/UpgradeGroupFaceModelVersionRequest.h>
#include <tencentcloud/iai/v20180301/model/UpgradeGroupFaceModelVersionResponse.h>
#include <tencentcloud/iai/v20180301/model/VerifyFaceRequest.h>
#include <tencentcloud/iai/v20180301/model/VerifyFaceResponse.h>
#include <tencentcloud/iai/v20180301/model/VerifyPersonRequest.h>
#include <tencentcloud/iai/v20180301/model/VerifyPersonResponse.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            class IaiClient : public AbstractClient
            {
            public:
                IaiClient(const Credential &credential, const std::string &region);
                IaiClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AnalyzeDenseLandmarksResponse> AnalyzeDenseLandmarksOutcome;
                typedef std::future<AnalyzeDenseLandmarksOutcome> AnalyzeDenseLandmarksOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::AnalyzeDenseLandmarksRequest&, AnalyzeDenseLandmarksOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeDenseLandmarksAsyncHandler;
                typedef Outcome<Core::Error, Model::AnalyzeFaceResponse> AnalyzeFaceOutcome;
                typedef std::future<AnalyzeFaceOutcome> AnalyzeFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::AnalyzeFaceRequest&, AnalyzeFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AnalyzeFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CompareFaceResponse> CompareFaceOutcome;
                typedef std::future<CompareFaceOutcome> CompareFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CompareFaceRequest&, CompareFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CompareFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CopyPersonResponse> CopyPersonOutcome;
                typedef std::future<CopyPersonOutcome> CopyPersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CopyPersonRequest&, CopyPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CopyPersonAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFaceResponse> CreateFaceOutcome;
                typedef std::future<CreateFaceOutcome> CreateFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CreateFaceRequest&, CreateFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateGroupResponse> CreateGroupOutcome;
                typedef std::future<CreateGroupOutcome> CreateGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CreateGroupRequest&, CreateGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePersonResponse> CreatePersonOutcome;
                typedef std::future<CreatePersonOutcome> CreatePersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::CreatePersonRequest&, CreatePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePersonAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteFaceResponse> DeleteFaceOutcome;
                typedef std::future<DeleteFaceOutcome> DeleteFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeleteFaceRequest&, DeleteFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteGroupResponse> DeleteGroupOutcome;
                typedef std::future<DeleteGroupOutcome> DeleteGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeleteGroupRequest&, DeleteGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonResponse> DeletePersonOutcome;
                typedef std::future<DeletePersonOutcome> DeletePersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeletePersonRequest&, DeletePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonFromGroupResponse> DeletePersonFromGroupOutcome;
                typedef std::future<DeletePersonFromGroupOutcome> DeletePersonFromGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DeletePersonFromGroupRequest&, DeletePersonFromGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonFromGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectFaceResponse> DetectFaceOutcome;
                typedef std::future<DetectFaceOutcome> DetectFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DetectFaceRequest&, DetectFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectFaceAttributesResponse> DetectFaceAttributesOutcome;
                typedef std::future<DetectFaceAttributesOutcome> DetectFaceAttributesOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DetectFaceAttributesRequest&, DetectFaceAttributesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectFaceAttributesAsyncHandler;
                typedef Outcome<Core::Error, Model::DetectLiveFaceResponse> DetectLiveFaceOutcome;
                typedef std::future<DetectLiveFaceOutcome> DetectLiveFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::DetectLiveFaceRequest&, DetectLiveFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DetectLiveFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupInfoResponse> GetGroupInfoOutcome;
                typedef std::future<GetGroupInfoOutcome> GetGroupInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetGroupInfoRequest&, GetGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetGroupListResponse> GetGroupListOutcome;
                typedef std::future<GetGroupListOutcome> GetGroupListOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetGroupListRequest&, GetGroupListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetGroupListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPersonBaseInfoResponse> GetPersonBaseInfoOutcome;
                typedef std::future<GetPersonBaseInfoOutcome> GetPersonBaseInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonBaseInfoRequest&, GetPersonBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonBaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPersonGroupInfoResponse> GetPersonGroupInfoOutcome;
                typedef std::future<GetPersonGroupInfoOutcome> GetPersonGroupInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonGroupInfoRequest&, GetPersonGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPersonListResponse> GetPersonListOutcome;
                typedef std::future<GetPersonListOutcome> GetPersonListOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonListRequest&, GetPersonListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetPersonListNumResponse> GetPersonListNumOutcome;
                typedef std::future<GetPersonListNumOutcome> GetPersonListNumOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetPersonListNumRequest&, GetPersonListNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetPersonListNumAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUpgradeGroupFaceModelVersionJobListResponse> GetUpgradeGroupFaceModelVersionJobListOutcome;
                typedef std::future<GetUpgradeGroupFaceModelVersionJobListOutcome> GetUpgradeGroupFaceModelVersionJobListOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetUpgradeGroupFaceModelVersionJobListRequest&, GetUpgradeGroupFaceModelVersionJobListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeGroupFaceModelVersionJobListAsyncHandler;
                typedef Outcome<Core::Error, Model::GetUpgradeGroupFaceModelVersionResultResponse> GetUpgradeGroupFaceModelVersionResultOutcome;
                typedef std::future<GetUpgradeGroupFaceModelVersionResultOutcome> GetUpgradeGroupFaceModelVersionResultOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::GetUpgradeGroupFaceModelVersionResultRequest&, GetUpgradeGroupFaceModelVersionResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetUpgradeGroupFaceModelVersionResultAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyGroupResponse> ModifyGroupOutcome;
                typedef std::future<ModifyGroupOutcome> ModifyGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::ModifyGroupRequest&, ModifyGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonBaseInfoResponse> ModifyPersonBaseInfoOutcome;
                typedef std::future<ModifyPersonBaseInfoOutcome> ModifyPersonBaseInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::ModifyPersonBaseInfoRequest&, ModifyPersonBaseInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonBaseInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonGroupInfoResponse> ModifyPersonGroupInfoOutcome;
                typedef std::future<ModifyPersonGroupInfoOutcome> ModifyPersonGroupInfoOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::ModifyPersonGroupInfoRequest&, ModifyPersonGroupInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonGroupInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::RevertGroupFaceModelVersionResponse> RevertGroupFaceModelVersionOutcome;
                typedef std::future<RevertGroupFaceModelVersionOutcome> RevertGroupFaceModelVersionOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::RevertGroupFaceModelVersionRequest&, RevertGroupFaceModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RevertGroupFaceModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchFacesResponse> SearchFacesOutcome;
                typedef std::future<SearchFacesOutcome> SearchFacesOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchFacesRequest&, SearchFacesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchFacesAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchFacesReturnsByGroupResponse> SearchFacesReturnsByGroupOutcome;
                typedef std::future<SearchFacesReturnsByGroupOutcome> SearchFacesReturnsByGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchFacesReturnsByGroupRequest&, SearchFacesReturnsByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchFacesReturnsByGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchPersonsResponse> SearchPersonsOutcome;
                typedef std::future<SearchPersonsOutcome> SearchPersonsOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchPersonsRequest&, SearchPersonsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchPersonsAsyncHandler;
                typedef Outcome<Core::Error, Model::SearchPersonsReturnsByGroupResponse> SearchPersonsReturnsByGroupOutcome;
                typedef std::future<SearchPersonsReturnsByGroupOutcome> SearchPersonsReturnsByGroupOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::SearchPersonsReturnsByGroupRequest&, SearchPersonsReturnsByGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> SearchPersonsReturnsByGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::UpgradeGroupFaceModelVersionResponse> UpgradeGroupFaceModelVersionOutcome;
                typedef std::future<UpgradeGroupFaceModelVersionOutcome> UpgradeGroupFaceModelVersionOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::UpgradeGroupFaceModelVersionRequest&, UpgradeGroupFaceModelVersionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpgradeGroupFaceModelVersionAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyFaceResponse> VerifyFaceOutcome;
                typedef std::future<VerifyFaceOutcome> VerifyFaceOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::VerifyFaceRequest&, VerifyFaceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyFaceAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyPersonResponse> VerifyPersonOutcome;
                typedef std::future<VerifyPersonOutcome> VerifyPersonOutcomeCallable;
                typedef std::function<void(const IaiClient*, const Model::VerifyPersonRequest&, VerifyPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyPersonAsyncHandler;



                /**
                 *对请求图片进行五官定位（也称人脸关键点定位），获得人脸的精准信息，返回多达888点关键信息，对五官和脸部轮廓进行精确定位。
                 * @param req AnalyzeDenseLandmarksRequest
                 * @return AnalyzeDenseLandmarksOutcome
                 */
                AnalyzeDenseLandmarksOutcome AnalyzeDenseLandmarks(const Model::AnalyzeDenseLandmarksRequest &request);
                void AnalyzeDenseLandmarksAsync(const Model::AnalyzeDenseLandmarksRequest& request, const AnalyzeDenseLandmarksAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AnalyzeDenseLandmarksOutcomeCallable AnalyzeDenseLandmarksCallable(const Model::AnalyzeDenseLandmarksRequest& request);

                /**
                 *对请求图片进行五官定位（也称人脸关键点定位），计算构成人脸轮廓的 90 个点，包括眉毛（左右各 8 点）、眼睛（左右各 8 点）、鼻子（13 点）、嘴巴（22 点）、脸型轮廓（21 点）、眼珠[或瞳孔]（2点）。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req AnalyzeFaceRequest
                 * @return AnalyzeFaceOutcome
                 */
                AnalyzeFaceOutcome AnalyzeFace(const Model::AnalyzeFaceRequest &request);
                void AnalyzeFaceAsync(const Model::AnalyzeFaceRequest& request, const AnalyzeFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AnalyzeFaceOutcomeCallable AnalyzeFaceCallable(const Model::AnalyzeFaceRequest& request);

                /**
                 *对两张图片中的人脸进行相似度比对，返回人脸相似度分数。

若您需要判断 “此人是否是某人”，即验证某张图片中的人是否是已知身份的某人，如常见的人脸登录场景，建议使用[人脸验证](https://cloud.tencent.com/document/product/867/32806)或[人员验证](https://cloud.tencent.com/document/product/867/38879)接口。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req CompareFaceRequest
                 * @return CompareFaceOutcome
                 */
                CompareFaceOutcome CompareFace(const Model::CompareFaceRequest &request);
                void CompareFaceAsync(const Model::CompareFaceRequest& request, const CompareFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CompareFaceOutcomeCallable CompareFaceCallable(const Model::CompareFaceRequest& request);

                /**
                 *将已存在于某人员库的人员复制到其他人员库，该人员的描述信息不会被复制。单个人员最多只能同时存在100个人员库中。
>     
- 注：若该人员创建时算法模型版本为2.0，复制到非2.0算法模型版本的Group中时，复制操作将会失败。
                 * @param req CopyPersonRequest
                 * @return CopyPersonOutcome
                 */
                CopyPersonOutcome CopyPerson(const Model::CopyPersonRequest &request);
                void CopyPersonAsync(const Model::CopyPersonRequest& request, const CopyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CopyPersonOutcomeCallable CopyPersonCallable(const Model::CopyPersonRequest& request);

                /**
                 *将一组人脸图片添加到一个人员中。一个人员最多允许包含 5 张图片。若该人员存在多个人员库中，所有人员库中该人员图片均会增加。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req CreateFaceRequest
                 * @return CreateFaceOutcome
                 */
                CreateFaceOutcome CreateFace(const Model::CreateFaceRequest &request);
                void CreateFaceAsync(const Model::CreateFaceRequest& request, const CreateFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFaceOutcomeCallable CreateFaceCallable(const Model::CreateFaceRequest& request);

                /**
                 *用于创建一个空的人员库，如果人员库已存在返回错误。
可根据需要创建自定义描述字段，用于辅助描述该人员库下的人员信息。

1个APPID下最多创建10万个人员库（Group）、最多包含5000万张人脸（Face）。

不同算法模型版本（FaceModelVersion）的人员库（Group）最多可包含人脸（Face）数不同。算法模型版本为2.0的人员库最多包含100万张人脸，算法模型版本为3.0的人员库最多可包含300万张人脸。
                 * @param req CreateGroupRequest
                 * @return CreateGroupOutcome
                 */
                CreateGroupOutcome CreateGroup(const Model::CreateGroupRequest &request);
                void CreateGroupAsync(const Model::CreateGroupRequest& request, const CreateGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateGroupOutcomeCallable CreateGroupCallable(const Model::CreateGroupRequest& request);

                /**
                 *创建人员，添加人脸、姓名、性别及其他相关信息。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req CreatePersonRequest
                 * @return CreatePersonOutcome
                 */
                CreatePersonOutcome CreatePerson(const Model::CreatePersonRequest &request);
                void CreatePersonAsync(const Model::CreatePersonRequest& request, const CreatePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePersonOutcomeCallable CreatePersonCallable(const Model::CreatePersonRequest& request);

                /**
                 *删除一个人员下的人脸图片。如果该人员只有一张人脸图片，则返回错误。
                 * @param req DeleteFaceRequest
                 * @return DeleteFaceOutcome
                 */
                DeleteFaceOutcome DeleteFace(const Model::DeleteFaceRequest &request);
                void DeleteFaceAsync(const Model::DeleteFaceRequest& request, const DeleteFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteFaceOutcomeCallable DeleteFaceCallable(const Model::DeleteFaceRequest& request);

                /**
                 *删除该人员库及包含的所有的人员。同时，人员对应的所有人脸信息将被删除。若某人员同时存在多个人员库中，该人员不会被删除，但属于该人员库中的自定义描述字段信息会被删除，属于其他人员库的自定义描述字段信息不受影响。

                 * @param req DeleteGroupRequest
                 * @return DeleteGroupOutcome
                 */
                DeleteGroupOutcome DeleteGroup(const Model::DeleteGroupRequest &request);
                void DeleteGroupAsync(const Model::DeleteGroupRequest& request, const DeleteGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteGroupOutcomeCallable DeleteGroupCallable(const Model::DeleteGroupRequest& request);

                /**
                 *删除该人员信息，此操作会导致所有人员库均删除此人员。同时，该人员的所有人脸信息将被删除。
                 * @param req DeletePersonRequest
                 * @return DeletePersonOutcome
                 */
                DeletePersonOutcome DeletePerson(const Model::DeletePersonRequest &request);
                void DeletePersonAsync(const Model::DeletePersonRequest& request, const DeletePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonOutcomeCallable DeletePersonCallable(const Model::DeletePersonRequest& request);

                /**
                 *从某人员库中删除人员，此操作仅影响该人员库。若该人员仅存在于指定的人员库中，该人员将被删除，其所有的人脸信息也将被删除。
                 * @param req DeletePersonFromGroupRequest
                 * @return DeletePersonFromGroupOutcome
                 */
                DeletePersonFromGroupOutcome DeletePersonFromGroup(const Model::DeletePersonFromGroupRequest &request);
                void DeletePersonFromGroupAsync(const Model::DeletePersonFromGroupRequest& request, const DeletePersonFromGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonFromGroupOutcomeCallable DeletePersonFromGroupCallable(const Model::DeletePersonFromGroupRequest& request);

                /**
                 *检测给定图片中的人脸（Face）的位置、相应的面部属性和人脸质量信息，位置包括 (x，y，w，h)，面部属性包括性别（gender）、年龄（age）、表情（expression）、魅力（beauty）、眼镜（glass）、发型（hair）、口罩（mask）和姿态 (pitch，roll，yaw)，人脸质量信息包括整体质量分（score）、模糊分（sharpness）、光照分（brightness）和五官遮挡分（completeness）。

 
其中，人脸质量信息主要用于评价输入的人脸图片的质量。在使用人脸识别服务时，建议您对输入的人脸图片进行质量检测，提升后续业务处理的效果。该功能的应用场景包括：

1） 人员库[创建人员](https://cloud.tencent.com/document/product/867/32793)/[增加人脸](https://cloud.tencent.com/document/product/867/32795)：保证人员人脸信息的质量，便于后续的业务处理。

2） [人脸搜索](https://cloud.tencent.com/document/product/867/32798)：保证输入的图片质量，快速准确匹配到对应的人员。

3） [人脸验证](https://cloud.tencent.com/document/product/867/32806)：保证人脸信息的质量，避免明明是本人却认证不通过的情况。

4） [人脸融合](https://cloud.tencent.com/product/facefusion)：保证上传的人脸质量，人脸融合的效果更好。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectFaceRequest
                 * @return DetectFaceOutcome
                 */
                DetectFaceOutcome DetectFace(const Model::DetectFaceRequest &request);
                void DetectFaceAsync(const Model::DetectFaceRequest& request, const DetectFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectFaceOutcomeCallable DetectFaceCallable(const Model::DetectFaceRequest& request);

                /**
                 *检测给定图片中的人脸（Face）的位置、相应的面部属性和人脸质量信息，位置包括 (x，y，w，h)，面部属性包括性别（gender）、年龄（age）、表情（expression）、魅力（beauty）、眼镜（glass）、发型（hair）、口罩（mask）和姿态 (pitch，roll，yaw)，人脸质量信息包括整体质量分（score）、模糊分（sharpness）、光照分（brightness）和五官遮挡分（completeness）。

 
其中，人脸质量信息主要用于评价输入的人脸图片的质量。在使用人脸识别服务时，建议您对输入的人脸图片进行质量检测，提升后续业务处理的效果。该功能的应用场景包括：

1） 人员库[创建人员](https://cloud.tencent.com/document/product/867/32793)/[增加人脸](https://cloud.tencent.com/document/product/867/32795)：保证人员人脸信息的质量，便于后续的业务处理。

2） [人脸搜索](https://cloud.tencent.com/document/product/867/32798)：保证输入的图片质量，快速准确匹配到对应的人员。

3） [人脸验证](https://cloud.tencent.com/document/product/867/32806)：保证人脸信息的质量，避免明明是本人却认证不通过的情况。

4） [人脸融合](https://cloud.tencent.com/product/facefusion)：保证上传的人脸质量，人脸融合的效果更好。

>     
- 本接口是[人脸检测与分析](https://cloud.tencent.com/document/product/867/32800)的升级，具体在于：

1.本接口可以指定需要计算返回的人脸属性，避免无效计算，降低耗时；

2.本接口支持更多属性细项数，也会持续增加更多功能。

请您使用本接口完成相应的人脸检测与属性分析需求。

- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req DetectFaceAttributesRequest
                 * @return DetectFaceAttributesOutcome
                 */
                DetectFaceAttributesOutcome DetectFaceAttributes(const Model::DetectFaceAttributesRequest &request);
                void DetectFaceAttributesAsync(const Model::DetectFaceAttributesRequest& request, const DetectFaceAttributesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectFaceAttributesOutcomeCallable DetectFaceAttributesCallable(const Model::DetectFaceAttributesRequest& request);

                /**
                 *用于对用户上传的静态图片进行人脸活体检测。与动态活体检测的区别是：静态活体检测中，用户不需要通过唇语或摇头眨眼等动作来识别。

静态活体检测适用于手机自拍的场景，或对防攻击要求不高的场景。如果对活体检测有更高安全性要求，请使用[人脸核身·云智慧眼](https://cloud.tencent.com/product/faceid)产品。

>     
- 图片的宽高比请接近3：4，不符合宽高比的图片返回的分值不具备参考意义。本接口适用于类手机自拍场景，非类手机自拍照返回的分值不具备参考意义。

>     
- 使用过程中建议正对摄像头，不要距离太远，使面部可以完整地显示在识别的框内，识别过程中不要移动设备或遮挡面部。不要选择光线过强或过弱的环境进行面部识别，识别时不要添加任何滤镜。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。

## 调用次数计费（资源包）
|资源包规格|100万次|1000万次|5000万次|1亿次|
|-|-|-|-|-|
|人脸静态活体检测|1800元|17400元|75000元|110000元|

## 调用次数计费（后付费）
|月接口调用总量|0<调用量≤300万|300万<调用量≤1500万|调用量>1500万|
|-|-|-|-|
|人脸静态活体检测|0.0019元/次|0.0017元/次|0.0013元/次|
                 * @param req DetectLiveFaceRequest
                 * @return DetectLiveFaceOutcome
                 */
                DetectLiveFaceOutcome DetectLiveFace(const Model::DetectLiveFaceRequest &request);
                void DetectLiveFaceAsync(const Model::DetectLiveFaceRequest& request, const DetectLiveFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DetectLiveFaceOutcomeCallable DetectLiveFaceCallable(const Model::DetectLiveFaceRequest& request);

                /**
                 *获取人员库信息。
                 * @param req GetGroupInfoRequest
                 * @return GetGroupInfoOutcome
                 */
                GetGroupInfoOutcome GetGroupInfo(const Model::GetGroupInfoRequest &request);
                void GetGroupInfoAsync(const Model::GetGroupInfoRequest& request, const GetGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupInfoOutcomeCallable GetGroupInfoCallable(const Model::GetGroupInfoRequest& request);

                /**
                 *获取人员库列表。
                 * @param req GetGroupListRequest
                 * @return GetGroupListOutcome
                 */
                GetGroupListOutcome GetGroupList(const Model::GetGroupListRequest &request);
                void GetGroupListAsync(const Model::GetGroupListRequest& request, const GetGroupListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetGroupListOutcomeCallable GetGroupListCallable(const Model::GetGroupListRequest& request);

                /**
                 *获取指定人员的信息，包括姓名、性别、人脸等。
                 * @param req GetPersonBaseInfoRequest
                 * @return GetPersonBaseInfoOutcome
                 */
                GetPersonBaseInfoOutcome GetPersonBaseInfo(const Model::GetPersonBaseInfoRequest &request);
                void GetPersonBaseInfoAsync(const Model::GetPersonBaseInfoRequest& request, const GetPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonBaseInfoOutcomeCallable GetPersonBaseInfoCallable(const Model::GetPersonBaseInfoRequest& request);

                /**
                 *获取指定人员的信息，包括加入的人员库、描述内容等。
                 * @param req GetPersonGroupInfoRequest
                 * @return GetPersonGroupInfoOutcome
                 */
                GetPersonGroupInfoOutcome GetPersonGroupInfo(const Model::GetPersonGroupInfoRequest &request);
                void GetPersonGroupInfoAsync(const Model::GetPersonGroupInfoRequest& request, const GetPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonGroupInfoOutcomeCallable GetPersonGroupInfoCallable(const Model::GetPersonGroupInfoRequest& request);

                /**
                 *获取指定人员库中的人员列表。
                 * @param req GetPersonListRequest
                 * @return GetPersonListOutcome
                 */
                GetPersonListOutcome GetPersonList(const Model::GetPersonListRequest &request);
                void GetPersonListAsync(const Model::GetPersonListRequest& request, const GetPersonListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonListOutcomeCallable GetPersonListCallable(const Model::GetPersonListRequest& request);

                /**
                 *获取指定人员库中人员数量。
                 * @param req GetPersonListNumRequest
                 * @return GetPersonListNumOutcome
                 */
                GetPersonListNumOutcome GetPersonListNum(const Model::GetPersonListNumRequest &request);
                void GetPersonListNumAsync(const Model::GetPersonListNumRequest& request, const GetPersonListNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetPersonListNumOutcomeCallable GetPersonListNumCallable(const Model::GetPersonListNumRequest& request);

                /**
                 *避免官网歧义

获取人员库升级任务列表

                 * @param req GetUpgradeGroupFaceModelVersionJobListRequest
                 * @return GetUpgradeGroupFaceModelVersionJobListOutcome
                 */
                GetUpgradeGroupFaceModelVersionJobListOutcome GetUpgradeGroupFaceModelVersionJobList(const Model::GetUpgradeGroupFaceModelVersionJobListRequest &request);
                void GetUpgradeGroupFaceModelVersionJobListAsync(const Model::GetUpgradeGroupFaceModelVersionJobListRequest& request, const GetUpgradeGroupFaceModelVersionJobListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUpgradeGroupFaceModelVersionJobListOutcomeCallable GetUpgradeGroupFaceModelVersionJobListCallable(const Model::GetUpgradeGroupFaceModelVersionJobListRequest& request);

                /**
                 *避免官网歧义

人员库升级结果查询

                 * @param req GetUpgradeGroupFaceModelVersionResultRequest
                 * @return GetUpgradeGroupFaceModelVersionResultOutcome
                 */
                GetUpgradeGroupFaceModelVersionResultOutcome GetUpgradeGroupFaceModelVersionResult(const Model::GetUpgradeGroupFaceModelVersionResultRequest &request);
                void GetUpgradeGroupFaceModelVersionResultAsync(const Model::GetUpgradeGroupFaceModelVersionResultRequest& request, const GetUpgradeGroupFaceModelVersionResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetUpgradeGroupFaceModelVersionResultOutcomeCallable GetUpgradeGroupFaceModelVersionResultCallable(const Model::GetUpgradeGroupFaceModelVersionResultRequest& request);

                /**
                 *修改人员库名称、备注、自定义描述字段名称。
                 * @param req ModifyGroupRequest
                 * @return ModifyGroupOutcome
                 */
                ModifyGroupOutcome ModifyGroup(const Model::ModifyGroupRequest &request);
                void ModifyGroupAsync(const Model::ModifyGroupRequest& request, const ModifyGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyGroupOutcomeCallable ModifyGroupCallable(const Model::ModifyGroupRequest& request);

                /**
                 *修改人员信息，包括名称、性别等。人员名称和性别修改会同步到包含该人员的所有人员库。
                 * @param req ModifyPersonBaseInfoRequest
                 * @return ModifyPersonBaseInfoOutcome
                 */
                ModifyPersonBaseInfoOutcome ModifyPersonBaseInfo(const Model::ModifyPersonBaseInfoRequest &request);
                void ModifyPersonBaseInfoAsync(const Model::ModifyPersonBaseInfoRequest& request, const ModifyPersonBaseInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonBaseInfoOutcomeCallable ModifyPersonBaseInfoCallable(const Model::ModifyPersonBaseInfoRequest& request);

                /**
                 *修改指定人员库人员描述内容。
                 * @param req ModifyPersonGroupInfoRequest
                 * @return ModifyPersonGroupInfoOutcome
                 */
                ModifyPersonGroupInfoOutcome ModifyPersonGroupInfo(const Model::ModifyPersonGroupInfoRequest &request);
                void ModifyPersonGroupInfoAsync(const Model::ModifyPersonGroupInfoRequest& request, const ModifyPersonGroupInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonGroupInfoOutcomeCallable ModifyPersonGroupInfoCallable(const Model::ModifyPersonGroupInfoRequest& request);

                /**
                 *此接口文档早已废弃，为了避免官网18版本存留歧义，需要下线

本接口用于回滚人员库的人脸识别算法模型版本。单个人员库有且仅有一次回滚机会。

回滚操作会在10s内生效，回滚操作中，您对人员库的操作可能会失效。
                 * @param req RevertGroupFaceModelVersionRequest
                 * @return RevertGroupFaceModelVersionOutcome
                 */
                RevertGroupFaceModelVersionOutcome RevertGroupFaceModelVersion(const Model::RevertGroupFaceModelVersionRequest &request);
                void RevertGroupFaceModelVersionAsync(const Model::RevertGroupFaceModelVersionRequest& request, const RevertGroupFaceModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RevertGroupFaceModelVersionOutcomeCallable RevertGroupFaceModelVersionCallable(const Model::RevertGroupFaceModelVersionRequest& request);

                /**
                 *用于对一张待识别的人脸图片，在一个或多个人员库中识别出最相似的 TopK 人员，识别结果按照相似度从大到小排序。

支持一次性识别图片中的最多 10 张人脸，支持一次性跨 100 个人员库（Group）搜索。

单次搜索的人员库人脸总数量和人员库的算法模型版本（FaceModelVersion）相关。算法模型版本为2.0的人员库，单次搜索人员库人脸总数量不得超过 100 万张；算法模型版本为3.0的人员库，单次搜索人员库人脸总数量不得超过 300 万张。

与[人员搜索](https://cloud.tencent.com/document/product/867/38881)及[人员搜索按库返回](https://cloud.tencent.com/document/product/867/38880)接口不同的是，本接口将该人员（Person）下的每个人脸（Face）都作为单独个体进行验证，而人员搜索及人员搜索按库返回接口 会将该人员（Person）下的所有人脸（Face）进行融合特征处理，即若某个Person下有4张 Face，本接口会将4张 Face 的特征进行融合处理，生成对应这个 Person 的特征，使搜索更加准确。


本接口需与[人员库管理相关接口](https://cloud.tencent.com/document/product/867/32794)结合使用。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req SearchFacesRequest
                 * @return SearchFacesOutcome
                 */
                SearchFacesOutcome SearchFaces(const Model::SearchFacesRequest &request);
                void SearchFacesAsync(const Model::SearchFacesRequest& request, const SearchFacesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchFacesOutcomeCallable SearchFacesCallable(const Model::SearchFacesRequest& request);

                /**
                 *用于对一张待识别的人脸图片，在一个或多个人员库中识别出最相似的 TopK 人员，按照**人员库的维度**以人员相似度从大到小顺序排列。

支持一次性识别图片中的最多 10 张人脸，支持跨人员库（Group）搜索。

单次搜索的人员库人脸总数量和人员库的算法模型版本（FaceModelVersion）相关。算法模型版本为2.0的人员库，单次搜索人员库人脸总数量不得超过 100 万张；算法模型版本为3.0的人员库，单次搜索人员库人脸总数量不得超过 300 万张。

与[人员搜索](https://cloud.tencent.com/document/product/867/38881)及[人员搜索按库返回](https://cloud.tencent.com/document/product/867/38880)接口不同的是，本接口将该人员（Person）下的每个人脸（Face）都作为单独个体进行验证，而[人员搜索](https://cloud.tencent.com/document/product/867/38881)及[人员搜索按库返回](https://cloud.tencent.com/document/product/867/38880)接口 会将该人员（Person）下的所有人脸（Face）进行融合特征处理，即若某个Person下有4张 Face，本接口会将4张 Face 的特征进行融合处理，生成对应这个 Person 的特征，使搜索更加准确。

本接口需与[人员库管理相关接口](https://cloud.tencent.com/document/product/867/32794)结合使用。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。


                 * @param req SearchFacesReturnsByGroupRequest
                 * @return SearchFacesReturnsByGroupOutcome
                 */
                SearchFacesReturnsByGroupOutcome SearchFacesReturnsByGroup(const Model::SearchFacesReturnsByGroupRequest &request);
                void SearchFacesReturnsByGroupAsync(const Model::SearchFacesReturnsByGroupRequest& request, const SearchFacesReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchFacesReturnsByGroupOutcomeCallable SearchFacesReturnsByGroupCallable(const Model::SearchFacesReturnsByGroupRequest& request);

                /**
                 *用于对一张待识别的人脸图片，在一个或多个人员库中识别出最相似的 TopK 人员，按照相似度从大到小排列。

支持一次性识别图片中的最多 10 张人脸，支持一次性跨 100 个人员库（Group）搜索。

单次搜索的人员库人脸总数量和人员库的算法模型版本（FaceModelVersion）相关。算法模型版本为2.0的人员库，单次搜索人员库人脸总数量不得超过 100 万张；算法模型版本为3.0的人员库，单次搜索人员库人脸总数量不得超过 300 万张。

本接口会将该人员（Person）下的所有人脸（Face）进行融合特征处理，即若某个 Person 下有4张 Face ，本接口会将4张 Face 的特征进行融合处理，生成对应这个 Person 的特征，使人员搜索（确定待识别的人脸图片是某人）更加准确。而[人脸搜索](https://cloud.tencent.com/document/product/867/32798)及[人脸搜索按库返回接口](https://cloud.tencent.com/document/product/867/38882)将该人员（Person）下的每个人脸（Face）都作为单独个体进行搜索。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
- 仅支持算法模型版本（FaceModelVersion）为3.0的人员库。
                 * @param req SearchPersonsRequest
                 * @return SearchPersonsOutcome
                 */
                SearchPersonsOutcome SearchPersons(const Model::SearchPersonsRequest &request);
                void SearchPersonsAsync(const Model::SearchPersonsRequest& request, const SearchPersonsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchPersonsOutcomeCallable SearchPersonsCallable(const Model::SearchPersonsRequest& request);

                /**
                 *用于对一张待识别的人脸图片，在一个或多个人员库中识别出最相似的 TopK 人员，按照**人员库的维度**以人员相似度从大到小顺序排列。

支持一次性识别图片中的最多 10 张人脸，支持跨人员库（Group）搜索。

单次搜索的人员库人脸总数量和人员库的算法模型版本（FaceModelVersion）相关。算法模型版本为2.0的人员库，单次搜索人员库人脸总数量不得超过 100 万张；算法模型版本为3.0的人员库，单次搜索人员库人脸总数量不得超过 300 万张。

本接口会将该人员（Person）下的所有人脸（Face）进行融合特征处理，即若某个 Person 下有4张 Face ，本接口会将4张 Face 的特征进行融合处理，生成对应这个 Person 的特征，使人员搜索（确定待识别的人脸图片是某人）更加准确。而[人脸搜索](https://cloud.tencent.com/document/product/867/32798)及[人脸搜索按库返回接口](https://cloud.tencent.com/document/product/867/38882)将该人员（Person）下的每个人脸（Face）都作为单独个体进行搜索。
>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
- 仅支持算法模型版本（FaceModelVersion）为3.0的人员库。
                 * @param req SearchPersonsReturnsByGroupRequest
                 * @return SearchPersonsReturnsByGroupOutcome
                 */
                SearchPersonsReturnsByGroupOutcome SearchPersonsReturnsByGroup(const Model::SearchPersonsReturnsByGroupRequest &request);
                void SearchPersonsReturnsByGroupAsync(const Model::SearchPersonsReturnsByGroupRequest& request, const SearchPersonsReturnsByGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                SearchPersonsReturnsByGroupOutcomeCallable SearchPersonsReturnsByGroupCallable(const Model::SearchPersonsReturnsByGroupRequest& request);

                /**
                 *接口已经不使用了，需要下线掉，以免留在官网产生歧义

升级人员库。升级过程中，人员库仍然为原算法版本，人员库相关操作仍然支持。升级完成后，人员库为新算法版本。
单个人员库有且仅支持一次回滚操作。
注：此处QPS限制为10。
                 * @param req UpgradeGroupFaceModelVersionRequest
                 * @return UpgradeGroupFaceModelVersionOutcome
                 */
                UpgradeGroupFaceModelVersionOutcome UpgradeGroupFaceModelVersion(const Model::UpgradeGroupFaceModelVersionRequest &request);
                void UpgradeGroupFaceModelVersionAsync(const Model::UpgradeGroupFaceModelVersionRequest& request, const UpgradeGroupFaceModelVersionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpgradeGroupFaceModelVersionOutcomeCallable UpgradeGroupFaceModelVersionCallable(const Model::UpgradeGroupFaceModelVersionRequest& request);

                /**
                 *给定一张人脸图片和一个 PersonId，判断图片中的人和 PersonId 对应的人是否为同一人。PersonId 请参考[人员库管理相关接口](https://cloud.tencent.com/document/product/867/32794)。 

与[人脸比对](https://cloud.tencent.com/document/product/867/32802)接口不同的是，人脸验证用于判断 “此人是否是此人”，“此人”的信息已存于人员库中，“此人”可能存在多张人脸图片；而[人脸比对](https://cloud.tencent.com/document/product/867/32802)用于判断两张人脸的相似度。

与[人员验证](https://cloud.tencent.com/document/product/867/38879)接口不同的是，人脸验证将该人员（Person）下的每个人脸（Face）都作为单独个体进行验证，而[人员验证](https://cloud.tencent.com/document/product/867/38879)会将该人员（Person）下的所有人脸（Face）进行融合特征处理，即若某个 Person下有4张 Face，人员验证接口会将4张 Face 的特征进行融合处理，生成对应这个 Person 的特征，使人员验证（确定待识别的人脸图片是某人员）更加准确。

>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
                 * @param req VerifyFaceRequest
                 * @return VerifyFaceOutcome
                 */
                VerifyFaceOutcome VerifyFace(const Model::VerifyFaceRequest &request);
                void VerifyFaceAsync(const Model::VerifyFaceRequest& request, const VerifyFaceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyFaceOutcomeCallable VerifyFaceCallable(const Model::VerifyFaceRequest& request);

                /**
                 *给定一张人脸图片和一个 PersonId，判断图片中的人和 PersonId 对应的人是否为同一人。PersonId 请参考[人员库管理相关接口](https://cloud.tencent.com/document/product/867/32794)。
本接口会将该人员（Person）下的所有人脸（Face）进行融合特征处理，即若某个Person下有4张 Face，本接口会将4张 Face 的特征进行融合处理，生成对应这个 Person 的特征，使人员验证（确定待识别的人脸图片是某人员）更加准确。

 和人脸比对相关接口不同的是，人脸验证相关接口用于判断 “此人是否是此人”，“此人”的信息已存于人员库中，“此人”可能存在多张人脸图片；而人脸比对相关接口用于判断两张人脸的相似度。


>     
- 公共参数中的签名方式请使用V3版本，即配置SignatureMethod参数为TC3-HMAC-SHA256。
- 仅支持算法模型版本（FaceModelVersion）为3.0的人员库。
                 * @param req VerifyPersonRequest
                 * @return VerifyPersonOutcome
                 */
                VerifyPersonOutcome VerifyPerson(const Model::VerifyPersonRequest &request);
                void VerifyPersonAsync(const Model::VerifyPersonRequest& request, const VerifyPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyPersonOutcomeCallable VerifyPersonCallable(const Model::VerifyPersonRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_IAICLIENT_H_
