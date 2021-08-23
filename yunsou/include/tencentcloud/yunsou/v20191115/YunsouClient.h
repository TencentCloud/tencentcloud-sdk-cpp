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

#ifndef TENCENTCLOUD_YUNSOU_V20191115_YUNSOUCLIENT_H_
#define TENCENTCLOUD_YUNSOU_V20191115_YUNSOUCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/yunsou/v20191115/model/DataManipulationRequest.h>
#include <tencentcloud/yunsou/v20191115/model/DataManipulationResponse.h>
#include <tencentcloud/yunsou/v20191115/model/DataSearchRequest.h>
#include <tencentcloud/yunsou/v20191115/model/DataSearchResponse.h>


namespace TencentCloud
{
    namespace Yunsou
    {
        namespace V20191115
        {
            class YunsouClient : public AbstractClient
            {
            public:
                YunsouClient(const Credential &credential, const std::string &region);
                YunsouClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::DataManipulationResponse> DataManipulationOutcome;
                typedef std::future<DataManipulationOutcome> DataManipulationOutcomeCallable;
                typedef std::function<void(const YunsouClient*, const Model::DataManipulationRequest&, DataManipulationOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DataManipulationAsyncHandler;
                typedef Outcome<Core::Error, Model::DataSearchResponse> DataSearchOutcome;
                typedef std::future<DataSearchOutcome> DataSearchOutcomeCallable;
                typedef std::function<void(const YunsouClient*, const Model::DataSearchRequest&, DataSearchOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DataSearchAsyncHandler;



                /**
                 *上传云搜数据的API接口。

                 * @param req DataManipulationRequest
                 * @return DataManipulationOutcome
                 */
                DataManipulationOutcome DataManipulation(const Model::DataManipulationRequest &request);
                void DataManipulationAsync(const Model::DataManipulationRequest& request, const DataManipulationAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DataManipulationOutcomeCallable DataManipulationCallable(const Model::DataManipulationRequest& request);

                /**
                 *用于检索云搜中的数据。

                 * @param req DataSearchRequest
                 * @return DataSearchOutcome
                 */
                DataSearchOutcome DataSearch(const Model::DataSearchRequest &request);
                void DataSearchAsync(const Model::DataSearchRequest& request, const DataSearchAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DataSearchOutcomeCallable DataSearchCallable(const Model::DataSearchRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_YUNSOU_V20191115_YUNSOUCLIENT_H_
