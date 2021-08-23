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

#ifndef TENCENTCLOUD_NPP_V20190823_NPPCLIENT_H_
#define TENCENTCLOUD_NPP_V20190823_NPPCLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/npp/v20190823/model/CreateCallBackRequest.h>
#include <tencentcloud/npp/v20190823/model/CreateCallBackResponse.h>
#include <tencentcloud/npp/v20190823/model/DelVirtualNumRequest.h>
#include <tencentcloud/npp/v20190823/model/DelVirtualNumResponse.h>
#include <tencentcloud/npp/v20190823/model/DeleteCallBackRequest.h>
#include <tencentcloud/npp/v20190823/model/DeleteCallBackResponse.h>
#include <tencentcloud/npp/v20190823/model/DescribeCallBackCdrRequest.h>
#include <tencentcloud/npp/v20190823/model/DescribeCallBackCdrResponse.h>
#include <tencentcloud/npp/v20190823/model/DescribeCallBackStatusRequest.h>
#include <tencentcloud/npp/v20190823/model/DescribeCallBackStatusResponse.h>
#include <tencentcloud/npp/v20190823/model/DescribeCallerDisplayListRequest.h>
#include <tencentcloud/npp/v20190823/model/DescribeCallerDisplayListResponse.h>
#include <tencentcloud/npp/v20190823/model/Get400CdrRequest.h>
#include <tencentcloud/npp/v20190823/model/Get400CdrResponse.h>
#include <tencentcloud/npp/v20190823/model/GetVirtualNumRequest.h>
#include <tencentcloud/npp/v20190823/model/GetVirtualNumResponse.h>


namespace TencentCloud
{
    namespace Npp
    {
        namespace V20190823
        {
            class NppClient : public AbstractClient
            {
            public:
                NppClient(const Credential &credential, const std::string &region);
                NppClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::CreateCallBackResponse> CreateCallBackOutcome;
                typedef std::future<CreateCallBackOutcome> CreateCallBackOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::CreateCallBackRequest&, CreateCallBackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateCallBackAsyncHandler;
                typedef Outcome<Core::Error, Model::DelVirtualNumResponse> DelVirtualNumOutcome;
                typedef std::future<DelVirtualNumOutcome> DelVirtualNumOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::DelVirtualNumRequest&, DelVirtualNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DelVirtualNumAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteCallBackResponse> DeleteCallBackOutcome;
                typedef std::future<DeleteCallBackOutcome> DeleteCallBackOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::DeleteCallBackRequest&, DeleteCallBackOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteCallBackAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallBackCdrResponse> DescribeCallBackCdrOutcome;
                typedef std::future<DescribeCallBackCdrOutcome> DescribeCallBackCdrOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::DescribeCallBackCdrRequest&, DescribeCallBackCdrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallBackCdrAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallBackStatusResponse> DescribeCallBackStatusOutcome;
                typedef std::future<DescribeCallBackStatusOutcome> DescribeCallBackStatusOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::DescribeCallBackStatusRequest&, DescribeCallBackStatusOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallBackStatusAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeCallerDisplayListResponse> DescribeCallerDisplayListOutcome;
                typedef std::future<DescribeCallerDisplayListOutcome> DescribeCallerDisplayListOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::DescribeCallerDisplayListRequest&, DescribeCallerDisplayListOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeCallerDisplayListAsyncHandler;
                typedef Outcome<Core::Error, Model::Get400CdrResponse> Get400CdrOutcome;
                typedef std::future<Get400CdrOutcome> Get400CdrOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::Get400CdrRequest&, Get400CdrOutcome, const std::shared_ptr<const AsyncCallerContext>&)> Get400CdrAsyncHandler;
                typedef Outcome<Core::Error, Model::GetVirtualNumResponse> GetVirtualNumOutcome;
                typedef std::future<GetVirtualNumOutcome> GetVirtualNumOutcomeCallable;
                typedef std::function<void(const NppClient*, const Model::GetVirtualNumRequest&, GetVirtualNumOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetVirtualNumAsyncHandler;



                /**
                 *回拨呼叫请求
                 * @param req CreateCallBackRequest
                 * @return CreateCallBackOutcome
                 */
                CreateCallBackOutcome CreateCallBack(const Model::CreateCallBackRequest &request);
                void CreateCallBackAsync(const Model::CreateCallBackRequest& request, const CreateCallBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateCallBackOutcomeCallable CreateCallBackCallable(const Model::CreateCallBackRequest& request);

                /**
                 *直拨解绑中间号
                 * @param req DelVirtualNumRequest
                 * @return DelVirtualNumOutcome
                 */
                DelVirtualNumOutcome DelVirtualNum(const Model::DelVirtualNumRequest &request);
                void DelVirtualNumAsync(const Model::DelVirtualNumRequest& request, const DelVirtualNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DelVirtualNumOutcomeCallable DelVirtualNumCallable(const Model::DelVirtualNumRequest& request);

                /**
                 *回拨呼叫取消
                 * @param req DeleteCallBackRequest
                 * @return DeleteCallBackOutcome
                 */
                DeleteCallBackOutcome DeleteCallBack(const Model::DeleteCallBackRequest &request);
                void DeleteCallBackAsync(const Model::DeleteCallBackRequest& request, const DeleteCallBackAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteCallBackOutcomeCallable DeleteCallBackCallable(const Model::DeleteCallBackRequest& request);

                /**
                 *回拨话单获取接口
                 * @param req DescribeCallBackCdrRequest
                 * @return DescribeCallBackCdrOutcome
                 */
                DescribeCallBackCdrOutcome DescribeCallBackCdr(const Model::DescribeCallBackCdrRequest &request);
                void DescribeCallBackCdrAsync(const Model::DescribeCallBackCdrRequest& request, const DescribeCallBackCdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallBackCdrOutcomeCallable DescribeCallBackCdrCallable(const Model::DescribeCallBackCdrRequest& request);

                /**
                 *回拨通话状态获取
                 * @param req DescribeCallBackStatusRequest
                 * @return DescribeCallBackStatusOutcome
                 */
                DescribeCallBackStatusOutcome DescribeCallBackStatus(const Model::DescribeCallBackStatusRequest &request);
                void DescribeCallBackStatusAsync(const Model::DescribeCallBackStatusRequest& request, const DescribeCallBackStatusAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallBackStatusOutcomeCallable DescribeCallBackStatusCallable(const Model::DescribeCallBackStatusRequest& request);

                /**
                 *回拨拉取主叫显号号码集合
                 * @param req DescribeCallerDisplayListRequest
                 * @return DescribeCallerDisplayListOutcome
                 */
                DescribeCallerDisplayListOutcome DescribeCallerDisplayList(const Model::DescribeCallerDisplayListRequest &request);
                void DescribeCallerDisplayListAsync(const Model::DescribeCallerDisplayListRequest& request, const DescribeCallerDisplayListAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeCallerDisplayListOutcomeCallable DescribeCallerDisplayListCallable(const Model::DescribeCallerDisplayListRequest& request);

                /**
                 *直拨话单获取接口
                 * @param req Get400CdrRequest
                 * @return Get400CdrOutcome
                 */
                Get400CdrOutcome Get400Cdr(const Model::Get400CdrRequest &request);
                void Get400CdrAsync(const Model::Get400CdrRequest& request, const Get400CdrAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                Get400CdrOutcomeCallable Get400CdrCallable(const Model::Get400CdrRequest& request);

                /**
                 *直拨获取中间号（App 使用方发起）
                 * @param req GetVirtualNumRequest
                 * @return GetVirtualNumOutcome
                 */
                GetVirtualNumOutcome GetVirtualNum(const Model::GetVirtualNumRequest &request);
                void GetVirtualNumAsync(const Model::GetVirtualNumRequest& request, const GetVirtualNumAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetVirtualNumOutcomeCallable GetVirtualNumCallable(const Model::GetVirtualNumRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_NPP_V20190823_NPPCLIENT_H_
