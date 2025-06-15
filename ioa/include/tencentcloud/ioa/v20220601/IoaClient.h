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

#ifndef TENCENTCLOUD_IOA_V20220601_IOACLIENT_H_
#define TENCENTCLOUD_IOA_V20220601_IOACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateDLPFileDetectionTaskResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceTaskRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceTaskResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreateDeviceVirtualGroupResponse.h>
#include <tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeRequest.h>
#include <tencentcloud/ioa/v20220601/model/CreatePrivilegeCodeResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAccountGroupsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeAccountGroupsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDLPFileDetectResultResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceHardwareInfoListResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceInfoRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDeviceInfoResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDevicesRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeDevicesResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountsRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeLocalAccountsResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeRootAccountGroupResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftCensusListByDeviceResponse.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationRequest.h>
#include <tencentcloud/ioa/v20220601/model/DescribeSoftwareInformationResponse.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            class IoaClient : public AbstractClient
            {
            public:
                IoaClient(const Credential &credential, const std::string &region);
                IoaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateDLPFileDetectionTaskResponse> CreateDLPFileDetectionTaskOutcome;
                typedef std::future<CreateDLPFileDetectionTaskOutcome> CreateDLPFileDetectionTaskOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateDLPFileDetectionTaskRequest&, CreateDLPFileDetectionTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDLPFileDetectionTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceTaskResponse> CreateDeviceTaskOutcome;
                typedef std::future<CreateDeviceTaskOutcome> CreateDeviceTaskOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateDeviceTaskRequest&, CreateDeviceTaskOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceTaskAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateDeviceVirtualGroupResponse> CreateDeviceVirtualGroupOutcome;
                typedef std::future<CreateDeviceVirtualGroupOutcome> CreateDeviceVirtualGroupOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreateDeviceVirtualGroupRequest&, CreateDeviceVirtualGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateDeviceVirtualGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::CreatePrivilegeCodeResponse> CreatePrivilegeCodeOutcome;
                typedef std::future<CreatePrivilegeCodeOutcome> CreatePrivilegeCodeOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::CreatePrivilegeCodeRequest&, CreatePrivilegeCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreatePrivilegeCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAccountGroupsResponse> DescribeAccountGroupsOutcome;
                typedef std::future<DescribeAccountGroupsOutcome> DescribeAccountGroupsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeAccountGroupsRequest&, DescribeAccountGroupsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAccountGroupsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDLPFileDetectResultResponse> DescribeDLPFileDetectResultOutcome;
                typedef std::future<DescribeDLPFileDetectResultOutcome> DescribeDLPFileDetectResultOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDLPFileDetectResultRequest&, DescribeDLPFileDetectResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDLPFileDetectResultAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceHardwareInfoListResponse> DescribeDeviceHardwareInfoListOutcome;
                typedef std::future<DescribeDeviceHardwareInfoListOutcome> DescribeDeviceHardwareInfoListOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDeviceHardwareInfoListRequest&, DescribeDeviceHardwareInfoListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceHardwareInfoListAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDeviceInfoResponse> DescribeDeviceInfoOutcome;
                typedef std::future<DescribeDeviceInfoOutcome> DescribeDeviceInfoOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDeviceInfoRequest&, DescribeDeviceInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDeviceInfoAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeDevicesResponse> DescribeDevicesOutcome;
                typedef std::future<DescribeDevicesOutcome> DescribeDevicesOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeDevicesRequest&, DescribeDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeLocalAccountsResponse> DescribeLocalAccountsOutcome;
                typedef std::future<DescribeLocalAccountsOutcome> DescribeLocalAccountsOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeLocalAccountsRequest&, DescribeLocalAccountsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeLocalAccountsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeRootAccountGroupResponse> DescribeRootAccountGroupOutcome;
                typedef std::future<DescribeRootAccountGroupOutcome> DescribeRootAccountGroupOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeRootAccountGroupRequest&, DescribeRootAccountGroupOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeRootAccountGroupAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSoftCensusListByDeviceResponse> DescribeSoftCensusListByDeviceOutcome;
                typedef std::future<DescribeSoftCensusListByDeviceOutcome> DescribeSoftCensusListByDeviceOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeSoftCensusListByDeviceRequest&, DescribeSoftCensusListByDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoftCensusListByDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeSoftwareInformationResponse> DescribeSoftwareInformationOutcome;
                typedef std::future<DescribeSoftwareInformationOutcome> DescribeSoftwareInformationOutcomeCallable;
                typedef std::function<void(const IoaClient*, const Model::DescribeSoftwareInformationRequest&, DescribeSoftwareInformationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeSoftwareInformationAsyncHandler;



                /**
                 *提交送检任务
                 * @param req CreateDLPFileDetectionTaskRequest
                 * @return CreateDLPFileDetectionTaskOutcome
                 */
                CreateDLPFileDetectionTaskOutcome CreateDLPFileDetectionTask(const Model::CreateDLPFileDetectionTaskRequest &request);
                void CreateDLPFileDetectionTaskAsync(const Model::CreateDLPFileDetectionTaskRequest& request, const CreateDLPFileDetectionTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDLPFileDetectionTaskOutcomeCallable CreateDLPFileDetectionTaskCallable(const Model::CreateDLPFileDetectionTaskRequest& request);

                /**
                 *创建获取终端进程网络服务信息任务，私有化调用path为：capi/Assets/Device/DescribeDeviceInfo
                 * @param req CreateDeviceTaskRequest
                 * @return CreateDeviceTaskOutcome
                 */
                CreateDeviceTaskOutcome CreateDeviceTask(const Model::CreateDeviceTaskRequest &request);
                void CreateDeviceTaskAsync(const Model::CreateDeviceTaskRequest& request, const CreateDeviceTaskAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceTaskOutcomeCallable CreateDeviceTaskCallable(const Model::CreateDeviceTaskRequest& request);

                /**
                 *创建终端自定义分组，私有化调用path为：/capi/Assets/Device/CreateDeviceVirtualGroup
                 * @param req CreateDeviceVirtualGroupRequest
                 * @return CreateDeviceVirtualGroupOutcome
                 */
                CreateDeviceVirtualGroupOutcome CreateDeviceVirtualGroup(const Model::CreateDeviceVirtualGroupRequest &request);
                void CreateDeviceVirtualGroupAsync(const Model::CreateDeviceVirtualGroupRequest& request, const CreateDeviceVirtualGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateDeviceVirtualGroupOutcomeCallable CreateDeviceVirtualGroupCallable(const Model::CreateDeviceVirtualGroupRequest& request);

                /**
                 *生成特权码，私有化调用path为：capi/Assets/Device/CreatePrivilegeCode，生成的特权码、卸载码，仅对该设备当天有效
                 * @param req CreatePrivilegeCodeRequest
                 * @return CreatePrivilegeCodeOutcome
                 */
                CreatePrivilegeCodeOutcome CreatePrivilegeCode(const Model::CreatePrivilegeCodeRequest &request);
                void CreatePrivilegeCodeAsync(const Model::CreatePrivilegeCodeRequest& request, const CreatePrivilegeCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreatePrivilegeCodeOutcomeCallable CreatePrivilegeCodeCallable(const Model::CreatePrivilegeCodeRequest& request);

                /**
                 *以分页的方式查询账号分组列表，私有化调用path为：/capi/Assets/DescribeAccountGroups
                 * @param req DescribeAccountGroupsRequest
                 * @return DescribeAccountGroupsOutcome
                 */
                DescribeAccountGroupsOutcome DescribeAccountGroups(const Model::DescribeAccountGroupsRequest &request);
                void DescribeAccountGroupsAsync(const Model::DescribeAccountGroupsRequest& request, const DescribeAccountGroupsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAccountGroupsOutcomeCallable DescribeAccountGroupsCallable(const Model::DescribeAccountGroupsRequest& request);

                /**
                 *webservice查询文件检测结果
                 * @param req DescribeDLPFileDetectResultRequest
                 * @return DescribeDLPFileDetectResultOutcome
                 */
                DescribeDLPFileDetectResultOutcome DescribeDLPFileDetectResult(const Model::DescribeDLPFileDetectResultRequest &request);
                void DescribeDLPFileDetectResultAsync(const Model::DescribeDLPFileDetectResultRequest& request, const DescribeDLPFileDetectResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDLPFileDetectResultOutcomeCallable DescribeDLPFileDetectResultCallable(const Model::DescribeDLPFileDetectResultRequest& request);

                /**
                 *查询满足条件的查询终端硬件信息列表，私有化调用path为：/capi/Assets/Device/DescribeDeviceHardwareInfoList
                 * @param req DescribeDeviceHardwareInfoListRequest
                 * @return DescribeDeviceHardwareInfoListOutcome
                 */
                DescribeDeviceHardwareInfoListOutcome DescribeDeviceHardwareInfoList(const Model::DescribeDeviceHardwareInfoListRequest &request);
                void DescribeDeviceHardwareInfoListAsync(const Model::DescribeDeviceHardwareInfoListRequest& request, const DescribeDeviceHardwareInfoListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceHardwareInfoListOutcomeCallable DescribeDeviceHardwareInfoListCallable(const Model::DescribeDeviceHardwareInfoListRequest& request);

                /**
                 *获取终端进程网络服务信息，私有化调用path为：capi/Assets/Device/DescribeDeviceInfo
                 * @param req DescribeDeviceInfoRequest
                 * @return DescribeDeviceInfoOutcome
                 */
                DescribeDeviceInfoOutcome DescribeDeviceInfo(const Model::DescribeDeviceInfoRequest &request);
                void DescribeDeviceInfoAsync(const Model::DescribeDeviceInfoRequest& request, const DescribeDeviceInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDeviceInfoOutcomeCallable DescribeDeviceInfoCallable(const Model::DescribeDeviceInfoRequest& request);

                /**
                 *查询满足条件的终端数据详情，私有化调用path为：/capi/Assets/Device/DescribeDevices
                 * @param req DescribeDevicesRequest
                 * @return DescribeDevicesOutcome
                 */
                DescribeDevicesOutcome DescribeDevices(const Model::DescribeDevicesRequest &request);
                void DescribeDevicesAsync(const Model::DescribeDevicesRequest& request, const DescribeDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeDevicesOutcomeCallable DescribeDevicesCallable(const Model::DescribeDevicesRequest& request);

                /**
                 *获取账号列表，支持分页，模糊搜索，私有化调用path为：/capi/Assets/Account/DescribeLocalAccounts
                 * @param req DescribeLocalAccountsRequest
                 * @return DescribeLocalAccountsOutcome
                 */
                DescribeLocalAccountsOutcome DescribeLocalAccounts(const Model::DescribeLocalAccountsRequest &request);
                void DescribeLocalAccountsAsync(const Model::DescribeLocalAccountsRequest& request, const DescribeLocalAccountsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeLocalAccountsOutcomeCallable DescribeLocalAccountsCallable(const Model::DescribeLocalAccountsRequest& request);

                /**
                 *查询账号根分组详情。对应“用户与授权管理”里内置不可见的全网根账号组，所有新建的目录，都挂在该全网根账号组下。
                 * @param req DescribeRootAccountGroupRequest
                 * @return DescribeRootAccountGroupOutcome
                 */
                DescribeRootAccountGroupOutcome DescribeRootAccountGroup(const Model::DescribeRootAccountGroupRequest &request);
                void DescribeRootAccountGroupAsync(const Model::DescribeRootAccountGroupRequest& request, const DescribeRootAccountGroupAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeRootAccountGroupOutcomeCallable DescribeRootAccountGroupCallable(const Model::DescribeRootAccountGroupRequest& request);

                /**
                 *查看终端树下的软件列表,私有化调用path为：capi/Software/DescribeSoftCensusListByDevice
                 * @param req DescribeSoftCensusListByDeviceRequest
                 * @return DescribeSoftCensusListByDeviceOutcome
                 */
                DescribeSoftCensusListByDeviceOutcome DescribeSoftCensusListByDevice(const Model::DescribeSoftCensusListByDeviceRequest &request);
                void DescribeSoftCensusListByDeviceAsync(const Model::DescribeSoftCensusListByDeviceRequest& request, const DescribeSoftCensusListByDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSoftCensusListByDeviceOutcomeCallable DescribeSoftCensusListByDeviceCallable(const Model::DescribeSoftCensusListByDeviceRequest& request);

                /**
                 *查看指定终端的软件详情列表,私有化调用path为：capi/Software/DescribeSoftwareInformation
                 * @param req DescribeSoftwareInformationRequest
                 * @return DescribeSoftwareInformationOutcome
                 */
                DescribeSoftwareInformationOutcome DescribeSoftwareInformation(const Model::DescribeSoftwareInformationRequest &request);
                void DescribeSoftwareInformationAsync(const Model::DescribeSoftwareInformationRequest& request, const DescribeSoftwareInformationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeSoftwareInformationOutcomeCallable DescribeSoftwareInformationCallable(const Model::DescribeSoftwareInformationRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_IOACLIENT_H_
