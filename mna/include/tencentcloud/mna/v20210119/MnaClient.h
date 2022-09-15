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

#ifndef TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_
#define TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_

#include <functional>
#include <future>
#include <tencentcloud/core/AbstractClient.h>
#include <tencentcloud/core/Credential.h>
#include <tencentcloud/core/profile/ClientProfile.h>
#include <tencentcloud/core/AsyncCallerContext.h>
#include <tencentcloud/mna/v20210119/model/AddDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/AddDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/CreateQosRequest.h>
#include <tencentcloud/mna/v20210119/model/CreateQosResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/DeleteQosRequest.h>
#include <tencentcloud/mna/v20210119/model/DeleteQosResponse.h>
#include <tencentcloud/mna/v20210119/model/DescribeQosRequest.h>
#include <tencentcloud/mna/v20210119/model/DescribeQosResponse.h>
#include <tencentcloud/mna/v20210119/model/GetDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/GetDeviceResponse.h>
#include <tencentcloud/mna/v20210119/model/GetDevicesRequest.h>
#include <tencentcloud/mna/v20210119/model/GetDevicesResponse.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticRequest.h>
#include <tencentcloud/mna/v20210119/model/GetFlowStatisticResponse.h>
#include <tencentcloud/mna/v20210119/model/GetStatisticDataRequest.h>
#include <tencentcloud/mna/v20210119/model/GetStatisticDataResponse.h>
#include <tencentcloud/mna/v20210119/model/UpdateDeviceRequest.h>
#include <tencentcloud/mna/v20210119/model/UpdateDeviceResponse.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            class MnaClient : public AbstractClient
            {
            public:
                MnaClient(const Credential &credential, const std::string &region);
                MnaClient(const Credential &credential, const std::string &region, const ClientProfile &profile);

                typedef Outcome<Core::Error, Model::AddDeviceResponse> AddDeviceOutcome;
                typedef std::future<AddDeviceOutcome> AddDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::AddDeviceRequest&, AddDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> AddDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::CreateQosResponse> CreateQosOutcome;
                typedef std::future<CreateQosOutcome> CreateQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::CreateQosRequest&, CreateQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> CreateQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteDeviceResponse> DeleteDeviceOutcome;
                typedef std::future<DeleteDeviceOutcome> DeleteDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteDeviceRequest&, DeleteDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::DeleteQosResponse> DeleteQosOutcome;
                typedef std::future<DeleteQosOutcome> DeleteQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DeleteQosRequest&, DeleteQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DeleteQosAsyncHandler;
                typedef Outcome<Core::Error, Model::DescribeQosResponse> DescribeQosOutcome;
                typedef std::future<DescribeQosOutcome> DescribeQosOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::DescribeQosRequest&, DescribeQosOutcome, const std::shared_ptr<const AsyncCallerContext>&)> DescribeQosAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDeviceResponse> GetDeviceOutcome;
                typedef std::future<GetDeviceOutcome> GetDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetDeviceRequest&, GetDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDeviceAsyncHandler;
                typedef Outcome<Core::Error, Model::GetDevicesResponse> GetDevicesOutcome;
                typedef std::future<GetDevicesOutcome> GetDevicesOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetDevicesRequest&, GetDevicesOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetDevicesAsyncHandler;
                typedef Outcome<Core::Error, Model::GetFlowStatisticResponse> GetFlowStatisticOutcome;
                typedef std::future<GetFlowStatisticOutcome> GetFlowStatisticOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetFlowStatisticRequest&, GetFlowStatisticOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetFlowStatisticAsyncHandler;
                typedef Outcome<Core::Error, Model::GetStatisticDataResponse> GetStatisticDataOutcome;
                typedef std::future<GetStatisticDataOutcome> GetStatisticDataOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::GetStatisticDataRequest&, GetStatisticDataOutcome, const std::shared_ptr<const AsyncCallerContext>&)> GetStatisticDataAsyncHandler;
                typedef Outcome<Core::Error, Model::UpdateDeviceResponse> UpdateDeviceOutcome;
                typedef std::future<UpdateDeviceOutcome> UpdateDeviceOutcomeCallable;
                typedef std::function<void(const MnaClient*, const Model::UpdateDeviceRequest&, UpdateDeviceOutcome, const std::shared_ptr<const AsyncCallerContext>&)> UpdateDeviceAsyncHandler;



                /**
                 *新建设备记录
                 * @param req AddDeviceRequest
                 * @return AddDeviceOutcome
                 */
                AddDeviceOutcome AddDevice(const Model::AddDeviceRequest &request);
                void AddDeviceAsync(const Model::AddDeviceRequest& request, const AddDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                AddDeviceOutcomeCallable AddDeviceCallable(const Model::AddDeviceRequest& request);

                /**
                 *移动网络发起Qos加速过程
                 * @param req CreateQosRequest
                 * @return CreateQosOutcome
                 */
                CreateQosOutcome CreateQos(const Model::CreateQosRequest &request);
                void CreateQosAsync(const Model::CreateQosRequest& request, const CreateQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                CreateQosOutcomeCallable CreateQosCallable(const Model::CreateQosRequest& request);

                /**
                 *删除设备信息
                 * @param req DeleteDeviceRequest
                 * @return DeleteDeviceOutcome
                 */
                DeleteDeviceOutcome DeleteDevice(const Model::DeleteDeviceRequest &request);
                void DeleteDeviceAsync(const Model::DeleteDeviceRequest& request, const DeleteDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteDeviceOutcomeCallable DeleteDeviceCallable(const Model::DeleteDeviceRequest& request);

                /**
                 *移动网络停止Qos加速过程
                 * @param req DeleteQosRequest
                 * @return DeleteQosOutcome
                 */
                DeleteQosOutcome DeleteQos(const Model::DeleteQosRequest &request);
                void DeleteQosAsync(const Model::DeleteQosRequest& request, const DeleteQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DeleteQosOutcomeCallable DeleteQosCallable(const Model::DeleteQosRequest& request);

                /**
                 *获取Qos加速状态
                 * @param req DescribeQosRequest
                 * @return DescribeQosOutcome
                 */
                DescribeQosOutcome DescribeQos(const Model::DescribeQosRequest &request);
                void DescribeQosAsync(const Model::DescribeQosRequest& request, const DescribeQosAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                DescribeQosOutcomeCallable DescribeQosCallable(const Model::DescribeQosRequest& request);

                /**
                 *通过指定设备的ID查找设备详细信息
                 * @param req GetDeviceRequest
                 * @return GetDeviceOutcome
                 */
                GetDeviceOutcome GetDevice(const Model::GetDeviceRequest &request);
                void GetDeviceAsync(const Model::GetDeviceRequest& request, const GetDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDeviceOutcomeCallable GetDeviceCallable(const Model::GetDeviceRequest& request);

                /**
                 *获取设备信息列表
                 * @param req GetDevicesRequest
                 * @return GetDevicesOutcome
                 */
                GetDevicesOutcome GetDevices(const Model::GetDevicesRequest &request);
                void GetDevicesAsync(const Model::GetDevicesRequest& request, const GetDevicesAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetDevicesOutcomeCallable GetDevicesCallable(const Model::GetDevicesRequest& request);

                /**
                 *获取指定设备Id，指定时间点数据流量使用情况
                 * @param req GetFlowStatisticRequest
                 * @return GetFlowStatisticOutcome
                 */
                GetFlowStatisticOutcome GetFlowStatistic(const Model::GetFlowStatisticRequest &request);
                void GetFlowStatisticAsync(const Model::GetFlowStatisticRequest& request, const GetFlowStatisticAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetFlowStatisticOutcomeCallable GetFlowStatisticCallable(const Model::GetFlowStatisticRequest& request);

                /**
                 *在用量统计页面下载流量数据
                 * @param req GetStatisticDataRequest
                 * @return GetStatisticDataOutcome
                 */
                GetStatisticDataOutcome GetStatisticData(const Model::GetStatisticDataRequest &request);
                void GetStatisticDataAsync(const Model::GetStatisticDataRequest& request, const GetStatisticDataAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                GetStatisticDataOutcomeCallable GetStatisticDataCallable(const Model::GetStatisticDataRequest& request);

                /**
                 *更新设备信息
                 * @param req UpdateDeviceRequest
                 * @return UpdateDeviceOutcome
                 */
                UpdateDeviceOutcome UpdateDevice(const Model::UpdateDeviceRequest &request);
                void UpdateDeviceAsync(const Model::UpdateDeviceRequest& request, const UpdateDeviceAsyncHandler& handler, const std::shared_ptr<const AsyncCallerContext>& context = nullptr);
                UpdateDeviceOutcomeCallable UpdateDeviceCallable(const Model::UpdateDeviceRequest& request);

            };
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MNACLIENT_H_
