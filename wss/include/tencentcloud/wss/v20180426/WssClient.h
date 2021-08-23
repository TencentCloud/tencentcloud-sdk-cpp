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

#ifndef TENCENTCLOUD_WSS_V20180426_WSSCLIENT_H_
#define TENCENTCLOUD_WSS_V20180426_WSSCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/wss/v20180426/model/DeleteCertRequest.h>
#include <tencentcloud/wss/v20180426/model/DeleteCertResponse.h>
#include <tencentcloud/wss/v20180426/model/DescribeCertListRequest.h>
#include <tencentcloud/wss/v20180426/model/DescribeCertListResponse.h>
#include <tencentcloud/wss/v20180426/model/UploadCertRequest.h>
#include <tencentcloud/wss/v20180426/model/UploadCertResponse.h>


namespace TencentCloud
{
    namespace Wss
    {
        namespace V20180426
        {
            class WssClient : public AbstractClient
            {
            public:
                WssClient(const Credential &credential, const std::string &region);
                WssClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DeleteCertResponse> DeleteCertOutcome;
                typedef std::future<DeleteCertOutcome> DeleteCertOutcomeCallable;
                typedef std::function<void(const WssClient*, const Model::DeleteCertRequest&, DeleteCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCertAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCertListResponse> DescribeCertListOutcome;
                typedef std::future<DescribeCertListOutcome> DescribeCertListOutcomeCallable;
                typedef std::function<void(const WssClient*, const Model::DescribeCertListRequest&, DescribeCertListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCertListAsyncHandler;
                typedef Outcome<Core::Error, Model::UploadCertResponse> UploadCertOutcome;
                typedef std::future<UploadCertOutcome> UploadCertOutcomeCallable;
                typedef std::function<void(const WssClient*, const Model::UploadCertRequest&, UploadCertOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UploadCertAsyncHandler;



                /**
                 *本接口（DeleteCert）用于删除证书。
                 * @param req DeleteCertRequest
                 * @return DeleteCertOutcome
                 */
                DeleteCertOutcome DeleteCert(const Model::DeleteCertRequest &request);
                void DeleteCertAsync(const Model::DeleteCertRequest& request, const DeleteCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCertOutcomeCallable DeleteCertCallable(const Model::DeleteCertRequest& request);

                /**
                 *本接口(DescribeCertList)用于获取证书列表。
                 * @param req DescribeCertListRequest
                 * @return DescribeCertListOutcome
                 */
                DescribeCertListOutcome DescribeCertList(const Model::DescribeCertListRequest &request);
                void DescribeCertListAsync(const Model::DescribeCertListRequest& request, const DescribeCertListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCertListOutcomeCallable DescribeCertListCallable(const Model::DescribeCertListRequest& request);

                /**
                 *本接口（UploadCert）用于上传证书。
                 * @param req UploadCertRequest
                 * @return UploadCertOutcome
                 */
                UploadCertOutcome UploadCert(const Model::UploadCertRequest &request);
                void UploadCertAsync(const Model::UploadCertRequest& request, const UploadCertAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UploadCertOutcomeCallable UploadCertCallable(const Model::UploadCertRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_WSS_V20180426_WSSCLIENT_H_
