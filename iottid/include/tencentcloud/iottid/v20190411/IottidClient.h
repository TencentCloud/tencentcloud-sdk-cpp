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

#ifndef TENCENTCLOUD_IOTTID_V20190411_IOTTIDCLIENT_H_
#define TENCENTCLOUD_IOTTID_V20190411_IOTTIDCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/iottid/v20190411/model/AuthTestTidRequest.h>
#include <tencentcloud/iottid/v20190411/model/AuthTestTidResponse.h>
#include <tencentcloud/iottid/v20190411/model/BurnTidNotifyRequest.h>
#include <tencentcloud/iottid/v20190411/model/BurnTidNotifyResponse.h>
#include <tencentcloud/iottid/v20190411/model/DeliverTidNotifyRequest.h>
#include <tencentcloud/iottid/v20190411/model/DeliverTidNotifyResponse.h>
#include <tencentcloud/iottid/v20190411/model/DeliverTidsRequest.h>
#include <tencentcloud/iottid/v20190411/model/DeliverTidsResponse.h>
#include <tencentcloud/iottid/v20190411/model/DescribeAvailableLibCountRequest.h>
#include <tencentcloud/iottid/v20190411/model/DescribeAvailableLibCountResponse.h>
#include <tencentcloud/iottid/v20190411/model/DescribePermissionRequest.h>
#include <tencentcloud/iottid/v20190411/model/DescribePermissionResponse.h>
#include <tencentcloud/iottid/v20190411/model/DownloadTidsRequest.h>
#include <tencentcloud/iottid/v20190411/model/DownloadTidsResponse.h>
#include <tencentcloud/iottid/v20190411/model/UploadDeviceUniqueCodeRequest.h>
#include <tencentcloud/iottid/v20190411/model/UploadDeviceUniqueCodeResponse.h>
#include <tencentcloud/iottid/v20190411/model/VerifyChipBurnInfoRequest.h>
#include <tencentcloud/iottid/v20190411/model/VerifyChipBurnInfoResponse.h>


namespace TencentCloud
{
    namespace Iottid
    {
        namespace V20190411
        {
            class IottidClient : public AbstractClient
            {
            public:
                IottidClient(const Credential &credential, const std::string &region);
                IottidClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AuthTestTidResponse> AuthTestTidOutcome;
                typedef std::future<AuthTestTidOutcome> AuthTestTidOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::AuthTestTidRequest&, AuthTestTidOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AuthTestTidAsyncHandler;
                typedef Outcome<Core::Error, Model::BurnTidNotifyResponse> BurnTidNotifyOutcome;
                typedef std::future<BurnTidNotifyOutcome> BurnTidNotifyOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::BurnTidNotifyRequest&, BurnTidNotifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> BurnTidNotifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeliverTidNotifyResponse> DeliverTidNotifyOutcome;
                typedef std::future<DeliverTidNotifyOutcome> DeliverTidNotifyOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::DeliverTidNotifyRequest&, DeliverTidNotifyOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeliverTidNotifyAsyncHandler;
                typedef Outcome<Core::Error, Model::DeliverTidsResponse> DeliverTidsOutcome;
                typedef std::future<DeliverTidsOutcome> DeliverTidsOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::DeliverTidsRequest&, DeliverTidsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeliverTidsAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeAvailableLibCountResponse> DescribeAvailableLibCountOutcome;
                typedef std::future<DescribeAvailableLibCountOutcome> DescribeAvailableLibCountOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::DescribeAvailableLibCountRequest&, DescribeAvailableLibCountOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeAvailableLibCountAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribePermissionResponse> DescribePermissionOutcome;
                typedef std::future<DescribePermissionOutcome> DescribePermissionOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::DescribePermissionRequest&, DescribePermissionOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribePermissionAsyncHandler;
                typedef Outcome<Core::Error, Model::DownloadTidsResponse> DownloadTidsOutcome;
                typedef std::future<DownloadTidsOutcome> DownloadTidsOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::DownloadTidsRequest&, DownloadTidsOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DownloadTidsAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadDeviceUniqueCodeResponse> UploadDeviceUniqueCodeOutcome;
                typedef std::future<UploadDeviceUniqueCodeOutcome> UploadDeviceUniqueCodeOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::UploadDeviceUniqueCodeRequest&, UploadDeviceUniqueCodeOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadDeviceUniqueCodeAsyncHandler;
                typedef Outcome<Core::Error, Model::VerifyChipBurnInfoResponse> VerifyChipBurnInfoOutcome;
                typedef std::future<VerifyChipBurnInfoOutcome> VerifyChipBurnInfoOutcomeCallable;
                typedef std::function<void(const IottidClient*, const Model::VerifyChipBurnInfoRequest&, VerifyChipBurnInfoOutcome, const std::shared_ptr<const AsyncCallerContext>&)> VerifyChipBurnInfoAsyncHandler;



                /**
                 *单向认证测试TID 
                 * @param req AuthTestTidRequest
                 * @return AuthTestTidOutcome
                 */
                AuthTestTidOutcome AuthTestTid(const Model::AuthTestTidRequest &request);
                void AuthTestTidAsync(const Model::AuthTestTidRequest& request, const AuthTestTidAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AuthTestTidOutcomeCallable AuthTestTidCallable(const Model::AuthTestTidRequest& request);

                /**
                 *安全芯片TID烧录回执 
                 * @param req BurnTidNotifyRequest
                 * @return BurnTidNotifyOutcome
                 */
                BurnTidNotifyOutcome BurnTidNotify(const Model::BurnTidNotifyRequest &request);
                void BurnTidNotifyAsync(const Model::BurnTidNotifyRequest& request, const BurnTidNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                BurnTidNotifyOutcomeCallable BurnTidNotifyCallable(const Model::BurnTidNotifyRequest& request);

                /**
                 *安全芯片为载体的TID空发回执，绑定TID与订单号。 
                 * @param req DeliverTidNotifyRequest
                 * @return DeliverTidNotifyOutcome
                 */
                DeliverTidNotifyOutcome DeliverTidNotify(const Model::DeliverTidNotifyRequest &request);
                void DeliverTidNotifyAsync(const Model::DeliverTidNotifyRequest& request, const DeliverTidNotifyAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeliverTidNotifyOutcomeCallable DeliverTidNotifyCallable(const Model::DeliverTidNotifyRequest& request);

                /**
                 *设备服务商请求空发产品订单的TID信息 
                 * @param req DeliverTidsRequest
                 * @return DeliverTidsOutcome
                 */
                DeliverTidsOutcome DeliverTids(const Model::DeliverTidsRequest &request);
                void DeliverTidsAsync(const Model::DeliverTidsRequest& request, const DeliverTidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeliverTidsOutcomeCallable DeliverTidsCallable(const Model::DeliverTidsRequest& request);

                /**
                 *查询指定订单的可空发的白盒密钥数量
                 * @param req DescribeAvailableLibCountRequest
                 * @return DescribeAvailableLibCountOutcome
                 */
                DescribeAvailableLibCountOutcome DescribeAvailableLibCount(const Model::DescribeAvailableLibCountRequest &request);
                void DescribeAvailableLibCountAsync(const Model::DescribeAvailableLibCountRequest& request, const DescribeAvailableLibCountAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeAvailableLibCountOutcomeCallable DescribeAvailableLibCountCallable(const Model::DescribeAvailableLibCountRequest& request);

                /**
                 *查询企业用户TID平台控制台权限 
                 * @param req DescribePermissionRequest
                 * @return DescribePermissionOutcome
                 */
                DescribePermissionOutcome DescribePermission(const Model::DescribePermissionRequest &request);
                void DescribePermissionAsync(const Model::DescribePermissionRequest& request, const DescribePermissionAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribePermissionOutcomeCallable DescribePermissionCallable(const Model::DescribePermissionRequest& request);

                /**
                 *下载芯片订单的TID 
                 * @param req DownloadTidsRequest
                 * @return DownloadTidsOutcome
                 */
                DownloadTidsOutcome DownloadTids(const Model::DownloadTidsRequest &request);
                void DownloadTidsAsync(const Model::DownloadTidsRequest& request, const DownloadTidsAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DownloadTidsOutcomeCallable DownloadTidsCallable(const Model::DownloadTidsRequest& request);

                /**
                 *上传硬件唯一标识码，是软加固设备身份参数。本接口如遇到错误数据，则所有当次上传数据失效。
                 * @param req UploadDeviceUniqueCodeRequest
                 * @return UploadDeviceUniqueCodeOutcome
                 */
                UploadDeviceUniqueCodeOutcome UploadDeviceUniqueCode(const Model::UploadDeviceUniqueCodeRequest &request);
                void UploadDeviceUniqueCodeAsync(const Model::UploadDeviceUniqueCodeRequest& request, const UploadDeviceUniqueCodeAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadDeviceUniqueCodeOutcomeCallable UploadDeviceUniqueCodeCallable(const Model::UploadDeviceUniqueCodeRequest& request);

                /**
                 *下载控制台验证芯片烧录信息，保证TID与中心信息一致 
                 * @param req VerifyChipBurnInfoRequest
                 * @return VerifyChipBurnInfoOutcome
                 */
                VerifyChipBurnInfoOutcome VerifyChipBurnInfo(const Model::VerifyChipBurnInfoRequest &request);
                void VerifyChipBurnInfoAsync(const Model::VerifyChipBurnInfoRequest& request, const VerifyChipBurnInfoAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                VerifyChipBurnInfoOutcomeCallable VerifyChipBurnInfoCallable(const Model::VerifyChipBurnInfoRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_IOTTID_V20190411_IOTTIDCLIENT_H_
