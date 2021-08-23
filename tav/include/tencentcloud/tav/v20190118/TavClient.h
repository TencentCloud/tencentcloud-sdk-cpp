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

#ifndef TENCENTCLOUD_TAV_V20190118_TAVCLIENT_H_
#define TENCENTCLOUD_TAV_V20190118_TAVCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/tav/v20190118/model/GetLocalEngineRequest.h>
#include <tencentcloud/tav/v20190118/model/GetLocalEngineResponse.h>
#include <tencentcloud/tav/v20190118/model/GetScanResultRequest.h>
#include <tencentcloud/tav/v20190118/model/GetScanResultResponse.h>
#include <tencentcloud/tav/v20190118/model/ScanFileRequest.h>
#include <tencentcloud/tav/v20190118/model/ScanFileResponse.h>
#include <tencentcloud/tav/v20190118/model/ScanFileHashRequest.h>
#include <tencentcloud/tav/v20190118/model/ScanFileHashResponse.h>


namespace TencentCloud
{
    namespace Tav
    {
        namespace V20190118
        {
            class TavClient : public AbstractClient
            {
            public:
                TavClient(const Credential &credential, const std::string &region);
                TavClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::GetLocalEngineResponse> GetLocalEngineOutcome;
                typedef std::future<GetLocalEngineOutcome> GetLocalEngineOutcomeCallable;
                typedef std::function<void(const TavClient*, const Model::GetLocalEngineRequest&, GetLocalEngineOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetLocalEngineAsyncHandler;
                typedef Outcome<Core::Error, Model::GetScanResultResponse> GetScanResultOutcome;
                typedef std::future<GetScanResultOutcome> GetScanResultOutcomeCallable;
                typedef std::function<void(const TavClient*, const Model::GetScanResultRequest&, GetScanResultOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetScanResultAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanFileResponse> ScanFileOutcome;
                typedef std::future<ScanFileOutcome> ScanFileOutcomeCallable;
                typedef std::function<void(const TavClient*, const Model::ScanFileRequest&, ScanFileOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanFileAsyncHandler;
                typedef Outcome<Core::Error, Model::ScanFileHashResponse> ScanFileHashOutcome;
                typedef std::future<ScanFileHashOutcome> ScanFileHashOutcomeCallable;
                typedef std::function<void(const TavClient*, const Model::ScanFileHashRequest&, ScanFileHashOutcome, const std::shared_ptr<const AsyncCallerContext>&)> ScanFileHashAsyncHandler;



                /**
                 *获取TAV本地引擎
                 * @param req GetLocalEngineRequest
                 * @return GetLocalEngineOutcome
                 */
                GetLocalEngineOutcome GetLocalEngine(const Model::GetLocalEngineRequest &request);
                void GetLocalEngineAsync(const Model::GetLocalEngineRequest& request, const GetLocalEngineAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetLocalEngineOutcomeCallable GetLocalEngineCallable(const Model::GetLocalEngineRequest& request);

                /**
                 *tav文件上传扫描结果查询
                 * @param req GetScanResultRequest
                 * @return GetScanResultOutcome
                 */
                GetScanResultOutcome GetScanResult(const Model::GetScanResultRequest &request);
                void GetScanResultAsync(const Model::GetScanResultRequest& request, const GetScanResultAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetScanResultOutcomeCallable GetScanResultCallable(const Model::GetScanResultRequest& request);

                /**
                 *tav文件上传扫描
                 * @param req ScanFileRequest
                 * @return ScanFileOutcome
                 */
                ScanFileOutcome ScanFile(const Model::ScanFileRequest &request);
                void ScanFileAsync(const Model::ScanFileRequest& request, const ScanFileAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanFileOutcomeCallable ScanFileCallable(const Model::ScanFileRequest& request);

                /**
                 *通过文件哈希值获取文件黑白属性
                 * @param req ScanFileHashRequest
                 * @return ScanFileHashOutcome
                 */
                ScanFileHashOutcome ScanFileHash(const Model::ScanFileHashRequest &request);
                void ScanFileHashAsync(const Model::ScanFileHashRequest& request, const ScanFileHashAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                ScanFileHashOutcomeCallable ScanFileHashCallable(const Model::ScanFileHashRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_TAV_V20190118_TAVCLIENT_H_
