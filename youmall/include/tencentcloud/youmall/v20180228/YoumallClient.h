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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_YOUMALLCLIENT_H_
#define TENCENTCLOUD_YOUMALL_V20180228_YOUMALLCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/youmall/v20180228/model/CreateAccountRequest.h>
#include <tencentcloud/youmall/v20180228/model/CreateAccountResponse.h>
#include <tencentcloud/youmall/v20180228/model/CreateFacePictureRequest.h>
#include <tencentcloud/youmall/v20180228/model/CreateFacePictureResponse.h>
#include <tencentcloud/youmall/v20180228/model/DeletePersonFeatureRequest.h>
#include <tencentcloud/youmall/v20180228/model/DeletePersonFeatureResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeCameraPersonRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeCameraPersonResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeClusterPersonArrivedMallRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeClusterPersonArrivedMallResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeClusterPersonTraceRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeClusterPersonTraceResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeFaceIdByTempIdRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeFaceIdByTempIdResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeHistoryNetworkInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeHistoryNetworkInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeNetworkInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeNetworkInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonArrivedMallRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonArrivedMallResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonInfoByFacePictureRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonInfoByFacePictureResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonTraceRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonTraceResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonTraceDetailRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonTraceDetailResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonVisitInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribePersonVisitInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeShopHourTrafficInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeShopHourTrafficInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeShopInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeShopInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeShopTrafficInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeShopTrafficInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeTrajectoryDataRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeTrajectoryDataResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowAgeInfoByZoneIdRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowAgeInfoByZoneIdResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowAndStayTimeRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowAndStayTimeResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowDailyByZoneIdRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowDailyByZoneIdResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderInfoByZoneIdRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowGenderInfoByZoneIdResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowHourlyByZoneIdRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneFlowHourlyByZoneIdResponse.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneTrafficInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/DescribeZoneTrafficInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/ModifyPersonFeatureInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/ModifyPersonFeatureInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/ModifyPersonTagInfoRequest.h>
#include <tencentcloud/youmall/v20180228/model/ModifyPersonTagInfoResponse.h>
#include <tencentcloud/youmall/v20180228/model/ModifyPersonTypeRequest.h>
#include <tencentcloud/youmall/v20180228/model/ModifyPersonTypeResponse.h>
#include <tencentcloud/youmall/v20180228/model/RegisterCallbackRequest.h>
#include <tencentcloud/youmall/v20180228/model/RegisterCallbackResponse.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            class YoumallClient : public AbstractClient
            {
            public:
                YoumallClient(const Credential &credential, const std::string &region);
                YoumallClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateAccountResponse> CreateAccountOutcome;
                typedef std::future<CreateAccountOutcome> CreateAccountOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::CreateAccountRequest&, CreateAccountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateAccountAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateFacePictureResponse> CreateFacePictureOutcome;
                typedef std::future<CreateFacePictureOutcome> CreateFacePictureOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::CreateFacePictureRequest&, CreateFacePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateFacePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DeletePersonFeatureResponse> DeletePersonFeatureOutcome;
                typedef std::future<DeletePersonFeatureOutcome> DeletePersonFeatureOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DeletePersonFeatureRequest&, DeletePersonFeatureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeletePersonFeatureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCameraPersonResponse> DescribeCameraPersonOutcome;
                typedef std::future<DescribeCameraPersonOutcome> DescribeCameraPersonOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeCameraPersonRequest&, DescribeCameraPersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCameraPersonAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPersonArrivedMallResponse> DescribeClusterPersonArrivedMallOutcome;
                typedef std::future<DescribeClusterPersonArrivedMallOutcome> DescribeClusterPersonArrivedMallOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeClusterPersonArrivedMallRequest&, DescribeClusterPersonArrivedMallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPersonArrivedMallAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeClusterPersonTraceResponse> DescribeClusterPersonTraceOutcome;
                typedef std::future<DescribeClusterPersonTraceOutcome> DescribeClusterPersonTraceOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeClusterPersonTraceRequest&, DescribeClusterPersonTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeClusterPersonTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeFaceIdByTempIdResponse> DescribeFaceIdByTempIdOutcome;
                typedef std::future<DescribeFaceIdByTempIdOutcome> DescribeFaceIdByTempIdOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeFaceIdByTempIdRequest&, DescribeFaceIdByTempIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeFaceIdByTempIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeHistoryNetworkInfoResponse> DescribeHistoryNetworkInfoOutcome;
                typedef std::future<DescribeHistoryNetworkInfoOutcome> DescribeHistoryNetworkInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeHistoryNetworkInfoRequest&, DescribeHistoryNetworkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeHistoryNetworkInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeNetworkInfoResponse> DescribeNetworkInfoOutcome;
                typedef std::future<DescribeNetworkInfoOutcome> DescribeNetworkInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeNetworkInfoRequest&, DescribeNetworkInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeNetworkInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonResponse> DescribePersonOutcome;
                typedef std::future<DescribePersonOutcome> DescribePersonOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribePersonRequest&, DescribePersonOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonArrivedMallResponse> DescribePersonArrivedMallOutcome;
                typedef std::future<DescribePersonArrivedMallOutcome> DescribePersonArrivedMallOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribePersonArrivedMallRequest&, DescribePersonArrivedMallOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonArrivedMallAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonInfoResponse> DescribePersonInfoOutcome;
                typedef std::future<DescribePersonInfoOutcome> DescribePersonInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribePersonInfoRequest&, DescribePersonInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonInfoByFacePictureResponse> DescribePersonInfoByFacePictureOutcome;
                typedef std::future<DescribePersonInfoByFacePictureOutcome> DescribePersonInfoByFacePictureOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribePersonInfoByFacePictureRequest&, DescribePersonInfoByFacePictureOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonInfoByFacePictureAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonTraceResponse> DescribePersonTraceOutcome;
                typedef std::future<DescribePersonTraceOutcome> DescribePersonTraceOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribePersonTraceRequest&, DescribePersonTraceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonTraceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonTraceDetailResponse> DescribePersonTraceDetailOutcome;
                typedef std::future<DescribePersonTraceDetailOutcome> DescribePersonTraceDetailOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribePersonTraceDetailRequest&, DescribePersonTraceDetailOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonTraceDetailAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePersonVisitInfoResponse> DescribePersonVisitInfoOutcome;
                typedef std::future<DescribePersonVisitInfoOutcome> DescribePersonVisitInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribePersonVisitInfoRequest&, DescribePersonVisitInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePersonVisitInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShopHourTrafficInfoResponse> DescribeShopHourTrafficInfoOutcome;
                typedef std::future<DescribeShopHourTrafficInfoOutcome> DescribeShopHourTrafficInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeShopHourTrafficInfoRequest&, DescribeShopHourTrafficInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShopHourTrafficInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShopInfoResponse> DescribeShopInfoOutcome;
                typedef std::future<DescribeShopInfoOutcome> DescribeShopInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeShopInfoRequest&, DescribeShopInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShopInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeShopTrafficInfoResponse> DescribeShopTrafficInfoOutcome;
                typedef std::future<DescribeShopTrafficInfoOutcome> DescribeShopTrafficInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeShopTrafficInfoRequest&, DescribeShopTrafficInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeShopTrafficInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeTrajectoryDataResponse> DescribeTrajectoryDataOutcome;
                typedef std::future<DescribeTrajectoryDataOutcome> DescribeTrajectoryDataOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeTrajectoryDataRequest&, DescribeTrajectoryDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeTrajectoryDataAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneFlowAgeInfoByZoneIdResponse> DescribeZoneFlowAgeInfoByZoneIdOutcome;
                typedef std::future<DescribeZoneFlowAgeInfoByZoneIdOutcome> DescribeZoneFlowAgeInfoByZoneIdOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeZoneFlowAgeInfoByZoneIdRequest&, DescribeZoneFlowAgeInfoByZoneIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneFlowAgeInfoByZoneIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneFlowAndStayTimeResponse> DescribeZoneFlowAndStayTimeOutcome;
                typedef std::future<DescribeZoneFlowAndStayTimeOutcome> DescribeZoneFlowAndStayTimeOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeZoneFlowAndStayTimeRequest&, DescribeZoneFlowAndStayTimeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneFlowAndStayTimeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneFlowDailyByZoneIdResponse> DescribeZoneFlowDailyByZoneIdOutcome;
                typedef std::future<DescribeZoneFlowDailyByZoneIdOutcome> DescribeZoneFlowDailyByZoneIdOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeZoneFlowDailyByZoneIdRequest&, DescribeZoneFlowDailyByZoneIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneFlowDailyByZoneIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneFlowGenderAvrStayTimeByZoneIdResponse> DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome;
                typedef std::future<DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome> DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest&, DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneFlowGenderAvrStayTimeByZoneIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneFlowGenderInfoByZoneIdResponse> DescribeZoneFlowGenderInfoByZoneIdOutcome;
                typedef std::future<DescribeZoneFlowGenderInfoByZoneIdOutcome> DescribeZoneFlowGenderInfoByZoneIdOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeZoneFlowGenderInfoByZoneIdRequest&, DescribeZoneFlowGenderInfoByZoneIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneFlowGenderInfoByZoneIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneFlowHourlyByZoneIdResponse> DescribeZoneFlowHourlyByZoneIdOutcome;
                typedef std::future<DescribeZoneFlowHourlyByZoneIdOutcome> DescribeZoneFlowHourlyByZoneIdOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeZoneFlowHourlyByZoneIdRequest&, DescribeZoneFlowHourlyByZoneIdOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneFlowHourlyByZoneIdAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeZoneTrafficInfoResponse> DescribeZoneTrafficInfoOutcome;
                typedef std::future<DescribeZoneTrafficInfoOutcome> DescribeZoneTrafficInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::DescribeZoneTrafficInfoRequest&, DescribeZoneTrafficInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeZoneTrafficInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonFeatureInfoResponse> ModifyPersonFeatureInfoOutcome;
                typedef std::future<ModifyPersonFeatureInfoOutcome> ModifyPersonFeatureInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::ModifyPersonFeatureInfoRequest&, ModifyPersonFeatureInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonFeatureInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonTagInfoResponse> ModifyPersonTagInfoOutcome;
                typedef std::future<ModifyPersonTagInfoOutcome> ModifyPersonTagInfoOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::ModifyPersonTagInfoRequest&, ModifyPersonTagInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonTagInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::ModifyPersonTypeResponse> ModifyPersonTypeOutcome;
                typedef std::future<ModifyPersonTypeOutcome> ModifyPersonTypeOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::ModifyPersonTypeRequest&, ModifyPersonTypeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ModifyPersonTypeAsyncHandler;
                typedef Outcome<Core::Error, Model::RegisterCallbackResponse> RegisterCallbackOutcome;
                typedef std::future<RegisterCallbackOutcome> RegisterCallbackOutcomeCallable;
                typedef std::function<void(const YoumallClient*, const Model::RegisterCallbackRequest&, RegisterCallbackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> RegisterCallbackAsyncHandler;



                /**
                 *创建集团门店管理员账号
                 * @param req CreateAccountRequest
                 * @return CreateAccountOutcome
                 */
                CreateAccountOutcome CreateAccount(const Model::CreateAccountRequest &request);
                void CreateAccountAsync(const Model::CreateAccountRequest& request, const CreateAccountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateAccountOutcomeCallable CreateAccountCallable(const Model::CreateAccountRequest& request);

                /**
                 *通过上传指定规格的人脸图片，创建黑名单用户或者白名单用户。
                 * @param req CreateFacePictureRequest
                 * @return CreateFacePictureOutcome
                 */
                CreateFacePictureOutcome CreateFacePicture(const Model::CreateFacePictureRequest &request);
                void CreateFacePictureAsync(const Model::CreateFacePictureRequest& request, const CreateFacePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateFacePictureOutcomeCallable CreateFacePictureCallable(const Model::CreateFacePictureRequest& request);

                /**
                 *删除顾客特征，仅支持删除黑名单或者白名单用户特征。
                 * @param req DeletePersonFeatureRequest
                 * @return DeletePersonFeatureOutcome
                 */
                DeletePersonFeatureOutcome DeletePersonFeature(const Model::DeletePersonFeatureRequest &request);
                void DeletePersonFeatureAsync(const Model::DeletePersonFeatureRequest& request, const DeletePersonFeatureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeletePersonFeatureOutcomeCallable DeletePersonFeatureCallable(const Model::DeletePersonFeatureRequest& request);

                /**
                 *通过指定设备ID和指定时段，获取该时段内中收银台摄像设备抓取到顾客头像及身份ID
                 * @param req DescribeCameraPersonRequest
                 * @return DescribeCameraPersonOutcome
                 */
                DescribeCameraPersonOutcome DescribeCameraPerson(const Model::DescribeCameraPersonRequest &request);
                void DescribeCameraPersonAsync(const Model::DescribeCameraPersonRequest& request, const DescribeCameraPersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCameraPersonOutcomeCallable DescribeCameraPersonCallable(const Model::DescribeCameraPersonRequest& request);

                /**
                 *输出开始时间到结束时间段内的进出场数据。按天聚合的情况下，每天多次进出场算一次，以最初进场时间为进场时间，最后离场时间为离场时间。停留时间为多次进出场的停留时间之和。
                 * @param req DescribeClusterPersonArrivedMallRequest
                 * @return DescribeClusterPersonArrivedMallOutcome
                 */
                DescribeClusterPersonArrivedMallOutcome DescribeClusterPersonArrivedMall(const Model::DescribeClusterPersonArrivedMallRequest &request);
                void DescribeClusterPersonArrivedMallAsync(const Model::DescribeClusterPersonArrivedMallRequest& request, const DescribeClusterPersonArrivedMallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPersonArrivedMallOutcomeCallable DescribeClusterPersonArrivedMallCallable(const Model::DescribeClusterPersonArrivedMallRequest& request);

                /**
                 *输出开始时间到结束时间段内的进出场数据。按天聚合的情况下，每天多次进出场算一次，以最初进场时间为进场时间，最后离场时间为离场时间。
                 * @param req DescribeClusterPersonTraceRequest
                 * @return DescribeClusterPersonTraceOutcome
                 */
                DescribeClusterPersonTraceOutcome DescribeClusterPersonTrace(const Model::DescribeClusterPersonTraceRequest &request);
                void DescribeClusterPersonTraceAsync(const Model::DescribeClusterPersonTraceRequest& request, const DescribeClusterPersonTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeClusterPersonTraceOutcomeCallable DescribeClusterPersonTraceCallable(const Model::DescribeClusterPersonTraceRequest& request);

                /**
                 *通过DescribeCameraPerson接口上报的收银台身份ID查询顾客的FaceID。查询最佳时间为收银台上报的次日1点后。
                 * @param req DescribeFaceIdByTempIdRequest
                 * @return DescribeFaceIdByTempIdOutcome
                 */
                DescribeFaceIdByTempIdOutcome DescribeFaceIdByTempId(const Model::DescribeFaceIdByTempIdRequest &request);
                void DescribeFaceIdByTempIdAsync(const Model::DescribeFaceIdByTempIdRequest& request, const DescribeFaceIdByTempIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeFaceIdByTempIdOutcomeCallable DescribeFaceIdByTempIdCallable(const Model::DescribeFaceIdByTempIdRequest& request);

                /**
                 *返回当前门店历史网络状态数据
                 * @param req DescribeHistoryNetworkInfoRequest
                 * @return DescribeHistoryNetworkInfoOutcome
                 */
                DescribeHistoryNetworkInfoOutcome DescribeHistoryNetworkInfo(const Model::DescribeHistoryNetworkInfoRequest &request);
                void DescribeHistoryNetworkInfoAsync(const Model::DescribeHistoryNetworkInfoRequest& request, const DescribeHistoryNetworkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeHistoryNetworkInfoOutcomeCallable DescribeHistoryNetworkInfoCallable(const Model::DescribeHistoryNetworkInfoRequest& request);

                /**
                 *返回当前门店最新网络状态数据
                 * @param req DescribeNetworkInfoRequest
                 * @return DescribeNetworkInfoOutcome
                 */
                DescribeNetworkInfoOutcome DescribeNetworkInfo(const Model::DescribeNetworkInfoRequest &request);
                void DescribeNetworkInfoAsync(const Model::DescribeNetworkInfoRequest& request, const DescribeNetworkInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeNetworkInfoOutcomeCallable DescribeNetworkInfoCallable(const Model::DescribeNetworkInfoRequest& request);

                /**
                 *查询指定某一卖场的用户信息
                 * @param req DescribePersonRequest
                 * @return DescribePersonOutcome
                 */
                DescribePersonOutcome DescribePerson(const Model::DescribePersonRequest &request);
                void DescribePersonAsync(const Model::DescribePersonRequest& request, const DescribePersonAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonOutcomeCallable DescribePersonCallable(const Model::DescribePersonRequest& request);

                /**
                 *输出开始时间到结束时间段内的进出场数据。不做按天聚合的情况下，每次进出场，产生一条进出场数据。


                 * @param req DescribePersonArrivedMallRequest
                 * @return DescribePersonArrivedMallOutcome
                 */
                DescribePersonArrivedMallOutcome DescribePersonArrivedMall(const Model::DescribePersonArrivedMallRequest &request);
                void DescribePersonArrivedMallAsync(const Model::DescribePersonArrivedMallRequest& request, const DescribePersonArrivedMallAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonArrivedMallOutcomeCallable DescribePersonArrivedMallCallable(const Model::DescribePersonArrivedMallRequest& request);

                /**
                 *指定门店获取所有顾客详情列表，包含客户ID、图片、年龄、性别
                 * @param req DescribePersonInfoRequest
                 * @return DescribePersonInfoOutcome
                 */
                DescribePersonInfoOutcome DescribePersonInfo(const Model::DescribePersonInfoRequest &request);
                void DescribePersonInfoAsync(const Model::DescribePersonInfoRequest& request, const DescribePersonInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonInfoOutcomeCallable DescribePersonInfoCallable(const Model::DescribePersonInfoRequest& request);

                /**
                 *通过上传人脸图片检索系统face id、顾客身份信息及底图
                 * @param req DescribePersonInfoByFacePictureRequest
                 * @return DescribePersonInfoByFacePictureOutcome
                 */
                DescribePersonInfoByFacePictureOutcome DescribePersonInfoByFacePicture(const Model::DescribePersonInfoByFacePictureRequest &request);
                void DescribePersonInfoByFacePictureAsync(const Model::DescribePersonInfoByFacePictureRequest& request, const DescribePersonInfoByFacePictureAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonInfoByFacePictureOutcomeCallable DescribePersonInfoByFacePictureCallable(const Model::DescribePersonInfoByFacePictureRequest& request);

                /**
                 *输出开始时间到结束时间段内的进出场数据。
                 * @param req DescribePersonTraceRequest
                 * @return DescribePersonTraceOutcome
                 */
                DescribePersonTraceOutcome DescribePersonTrace(const Model::DescribePersonTraceRequest &request);
                void DescribePersonTraceAsync(const Model::DescribePersonTraceRequest& request, const DescribePersonTraceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonTraceOutcomeCallable DescribePersonTraceCallable(const Model::DescribePersonTraceRequest& request);

                /**
                 *查询客户单次到场轨迹明细
                 * @param req DescribePersonTraceDetailRequest
                 * @return DescribePersonTraceDetailOutcome
                 */
                DescribePersonTraceDetailOutcome DescribePersonTraceDetail(const Model::DescribePersonTraceDetailRequest &request);
                void DescribePersonTraceDetailAsync(const Model::DescribePersonTraceDetailRequest& request, const DescribePersonTraceDetailAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonTraceDetailOutcomeCallable DescribePersonTraceDetailCallable(const Model::DescribePersonTraceDetailRequest& request);

                /**
                 *获取门店指定时间范围内的所有用户到访信息记录，支持的时间范围：过去365天，含当天。
                 * @param req DescribePersonVisitInfoRequest
                 * @return DescribePersonVisitInfoOutcome
                 */
                DescribePersonVisitInfoOutcome DescribePersonVisitInfo(const Model::DescribePersonVisitInfoRequest &request);
                void DescribePersonVisitInfoAsync(const Model::DescribePersonVisitInfoRequest& request, const DescribePersonVisitInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePersonVisitInfoOutcomeCallable DescribePersonVisitInfoCallable(const Model::DescribePersonVisitInfoRequest& request);

                /**
                 *按小时提供查询日期范围内门店的每天每小时累计客流人数数据，支持的时间范围：过去365天，含当天。
                 * @param req DescribeShopHourTrafficInfoRequest
                 * @return DescribeShopHourTrafficInfoOutcome
                 */
                DescribeShopHourTrafficInfoOutcome DescribeShopHourTrafficInfo(const Model::DescribeShopHourTrafficInfoRequest &request);
                void DescribeShopHourTrafficInfoAsync(const Model::DescribeShopHourTrafficInfoRequest& request, const DescribeShopHourTrafficInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShopHourTrafficInfoOutcomeCallable DescribeShopHourTrafficInfoCallable(const Model::DescribeShopHourTrafficInfoRequest& request);

                /**
                 *根据客户身份标识获取客户下所有的门店信息列表
                 * @param req DescribeShopInfoRequest
                 * @return DescribeShopInfoOutcome
                 */
                DescribeShopInfoOutcome DescribeShopInfo(const Model::DescribeShopInfoRequest &request);
                void DescribeShopInfoAsync(const Model::DescribeShopInfoRequest& request, const DescribeShopInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShopInfoOutcomeCallable DescribeShopInfoCallable(const Model::DescribeShopInfoRequest& request);

                /**
                 *按天提供查询日期范围内门店的单日累计客流人数，支持的时间范围：过去365天，含当天。
                 * @param req DescribeShopTrafficInfoRequest
                 * @return DescribeShopTrafficInfoOutcome
                 */
                DescribeShopTrafficInfoOutcome DescribeShopTrafficInfo(const Model::DescribeShopTrafficInfoRequest &request);
                void DescribeShopTrafficInfoAsync(const Model::DescribeShopTrafficInfoRequest& request, const DescribeShopTrafficInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeShopTrafficInfoOutcomeCallable DescribeShopTrafficInfoCallable(const Model::DescribeShopTrafficInfoRequest& request);

                /**
                 *获取动线轨迹信息
                 * @param req DescribeTrajectoryDataRequest
                 * @return DescribeTrajectoryDataOutcome
                 */
                DescribeTrajectoryDataOutcome DescribeTrajectoryData(const Model::DescribeTrajectoryDataRequest &request);
                void DescribeTrajectoryDataAsync(const Model::DescribeTrajectoryDataRequest& request, const DescribeTrajectoryDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeTrajectoryDataOutcomeCallable DescribeTrajectoryDataCallable(const Model::DescribeTrajectoryDataRequest& request);

                /**
                 *获取指定区域人流各年龄占比
                 * @param req DescribeZoneFlowAgeInfoByZoneIdRequest
                 * @return DescribeZoneFlowAgeInfoByZoneIdOutcome
                 */
                DescribeZoneFlowAgeInfoByZoneIdOutcome DescribeZoneFlowAgeInfoByZoneId(const Model::DescribeZoneFlowAgeInfoByZoneIdRequest &request);
                void DescribeZoneFlowAgeInfoByZoneIdAsync(const Model::DescribeZoneFlowAgeInfoByZoneIdRequest& request, const DescribeZoneFlowAgeInfoByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneFlowAgeInfoByZoneIdOutcomeCallable DescribeZoneFlowAgeInfoByZoneIdCallable(const Model::DescribeZoneFlowAgeInfoByZoneIdRequest& request);

                /**
                 *获取区域人流和停留时间
                 * @param req DescribeZoneFlowAndStayTimeRequest
                 * @return DescribeZoneFlowAndStayTimeOutcome
                 */
                DescribeZoneFlowAndStayTimeOutcome DescribeZoneFlowAndStayTime(const Model::DescribeZoneFlowAndStayTimeRequest &request);
                void DescribeZoneFlowAndStayTimeAsync(const Model::DescribeZoneFlowAndStayTimeRequest& request, const DescribeZoneFlowAndStayTimeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneFlowAndStayTimeOutcomeCallable DescribeZoneFlowAndStayTimeCallable(const Model::DescribeZoneFlowAndStayTimeRequest& request);

                /**
                 *获取指定区域每日客流量
                 * @param req DescribeZoneFlowDailyByZoneIdRequest
                 * @return DescribeZoneFlowDailyByZoneIdOutcome
                 */
                DescribeZoneFlowDailyByZoneIdOutcome DescribeZoneFlowDailyByZoneId(const Model::DescribeZoneFlowDailyByZoneIdRequest &request);
                void DescribeZoneFlowDailyByZoneIdAsync(const Model::DescribeZoneFlowDailyByZoneIdRequest& request, const DescribeZoneFlowDailyByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneFlowDailyByZoneIdOutcomeCallable DescribeZoneFlowDailyByZoneIdCallable(const Model::DescribeZoneFlowDailyByZoneIdRequest& request);

                /**
                 *获取指定区域不同年龄段男女平均停留时间
                 * @param req DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest
                 * @return DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome
                 */
                DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcome DescribeZoneFlowGenderAvrStayTimeByZoneId(const Model::DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest &request);
                void DescribeZoneFlowGenderAvrStayTimeByZoneIdAsync(const Model::DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest& request, const DescribeZoneFlowGenderAvrStayTimeByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneFlowGenderAvrStayTimeByZoneIdOutcomeCallable DescribeZoneFlowGenderAvrStayTimeByZoneIdCallable(const Model::DescribeZoneFlowGenderAvrStayTimeByZoneIdRequest& request);

                /**
                 *获取指定区域性别占比
                 * @param req DescribeZoneFlowGenderInfoByZoneIdRequest
                 * @return DescribeZoneFlowGenderInfoByZoneIdOutcome
                 */
                DescribeZoneFlowGenderInfoByZoneIdOutcome DescribeZoneFlowGenderInfoByZoneId(const Model::DescribeZoneFlowGenderInfoByZoneIdRequest &request);
                void DescribeZoneFlowGenderInfoByZoneIdAsync(const Model::DescribeZoneFlowGenderInfoByZoneIdRequest& request, const DescribeZoneFlowGenderInfoByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneFlowGenderInfoByZoneIdOutcomeCallable DescribeZoneFlowGenderInfoByZoneIdCallable(const Model::DescribeZoneFlowGenderInfoByZoneIdRequest& request);

                /**
                 *获取指定区域分时客流量
                 * @param req DescribeZoneFlowHourlyByZoneIdRequest
                 * @return DescribeZoneFlowHourlyByZoneIdOutcome
                 */
                DescribeZoneFlowHourlyByZoneIdOutcome DescribeZoneFlowHourlyByZoneId(const Model::DescribeZoneFlowHourlyByZoneIdRequest &request);
                void DescribeZoneFlowHourlyByZoneIdAsync(const Model::DescribeZoneFlowHourlyByZoneIdRequest& request, const DescribeZoneFlowHourlyByZoneIdAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneFlowHourlyByZoneIdOutcomeCallable DescribeZoneFlowHourlyByZoneIdCallable(const Model::DescribeZoneFlowHourlyByZoneIdRequest& request);

                /**
                 *按天提供查询日期范围内，客户指定门店下的所有区域（优Mall部署时已配置区域）的累计客流人次和平均停留时间。支持的时间范围：过去365天，含当天。
                 * @param req DescribeZoneTrafficInfoRequest
                 * @return DescribeZoneTrafficInfoOutcome
                 */
                DescribeZoneTrafficInfoOutcome DescribeZoneTrafficInfo(const Model::DescribeZoneTrafficInfoRequest &request);
                void DescribeZoneTrafficInfoAsync(const Model::DescribeZoneTrafficInfoRequest& request, const DescribeZoneTrafficInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeZoneTrafficInfoOutcomeCallable DescribeZoneTrafficInfoCallable(const Model::DescribeZoneTrafficInfoRequest& request);

                /**
                 *支持修改黑白名单类型的顾客特征
                 * @param req ModifyPersonFeatureInfoRequest
                 * @return ModifyPersonFeatureInfoOutcome
                 */
                ModifyPersonFeatureInfoOutcome ModifyPersonFeatureInfo(const Model::ModifyPersonFeatureInfoRequest &request);
                void ModifyPersonFeatureInfoAsync(const Model::ModifyPersonFeatureInfoRequest& request, const ModifyPersonFeatureInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonFeatureInfoOutcomeCallable ModifyPersonFeatureInfoCallable(const Model::ModifyPersonFeatureInfoRequest& request);

                /**
                 *标记到店顾客的身份类型，例如黑名单、白名单等

                 * @param req ModifyPersonTagInfoRequest
                 * @return ModifyPersonTagInfoOutcome
                 */
                ModifyPersonTagInfoOutcome ModifyPersonTagInfo(const Model::ModifyPersonTagInfoRequest &request);
                void ModifyPersonTagInfoAsync(const Model::ModifyPersonTagInfoRequest& request, const ModifyPersonTagInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonTagInfoOutcomeCallable ModifyPersonTagInfoCallable(const Model::ModifyPersonTagInfoRequest& request);

                /**
                 *修改顾客身份类型接口
                 * @param req ModifyPersonTypeRequest
                 * @return ModifyPersonTypeOutcome
                 */
                ModifyPersonTypeOutcome ModifyPersonType(const Model::ModifyPersonTypeRequest &request);
                void ModifyPersonTypeAsync(const Model::ModifyPersonTypeRequest& request, const ModifyPersonTypeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ModifyPersonTypeOutcomeCallable ModifyPersonTypeCallable(const Model::ModifyPersonTypeRequest& request);

                /**
                 *调用本接口在优Mall中注册自己集团的到店通知回调接口地址，接口协议为HTTP或HTTPS。注册后，若集团有特殊身份（例如老客）到店通知，优Mall后台将主动将到店信息push给该接口
                 * @param req RegisterCallbackRequest
                 * @return RegisterCallbackOutcome
                 */
                RegisterCallbackOutcome RegisterCallback(const Model::RegisterCallbackRequest &request);
                void RegisterCallbackAsync(const Model::RegisterCallbackRequest& request, const RegisterCallbackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                RegisterCallbackOutcomeCallable RegisterCallbackCallable(const Model::RegisterCallbackRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_YOUMALLCLIENT_H_
