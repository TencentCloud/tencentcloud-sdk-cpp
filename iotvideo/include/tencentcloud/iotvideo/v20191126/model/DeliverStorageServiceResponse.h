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

#ifndef TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DELIVERSTORAGESERVICERESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DELIVERSTORAGESERVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideo/v20191126/model/StorageOrder.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20191126
        {
            namespace Model
            {
                /**
                * DeliverStorageService返回参数结构体
                */
                class DeliverStorageServiceResponse : public AbstractModel
                {
                public:
                    DeliverStorageServiceResponse();
                    ~DeliverStorageServiceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取被转出的云存服务ID
                     * @return SrcServiceId 被转出的云存服务ID
                     * 
                     */
                    std::string GetSrcServiceId() const;

                    /**
                     * 判断参数 SrcServiceId 是否已赋值
                     * @return SrcServiceId 是否已赋值
                     * 
                     */
                    bool SrcServiceIdHasBeenSet() const;

                    /**
                     * 获取被转入的云存服务ID
                     * @return ServiceId 被转入的云存服务ID
                     * 
                     */
                    std::string GetServiceId() const;

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取云存服务所在的区域
                     * @return StorageRegion 云存服务所在的区域
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取设备TID
                     * @return Tid 设备TID
                     * 
                     */
                    std::string GetTid() const;

                    /**
                     * 判断参数 Tid 是否已赋值
                     * @return Tid 是否已赋值
                     * 
                     */
                    bool TidHasBeenSet() const;

                    /**
                     * 获取视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     * @return ChnNum 视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     * 
                     */
                    int64_t GetChnNum() const;

                    /**
                     * 判断参数 ChnNum 是否已赋值
                     * @return ChnNum 是否已赋值
                     * 
                     */
                    bool ChnNumHasBeenSet() const;

                    /**
                     * 获取终端用户在IoT Video平台的注册ID
                     * @return AccessId 终端用户在IoT Video平台的注册ID
                     * 
                     */
                    std::string GetAccessId() const;

                    /**
                     * 判断参数 AccessId 是否已赋值
                     * @return AccessId 是否已赋值
                     * 
                     */
                    bool AccessIdHasBeenSet() const;

                    /**
                     * 获取服务开始时间
                     * @return StartTime 服务开始时间
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取服务失效时间
                     * @return EndTime 服务失效时间
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取服务状态
1：正常使用中
2：待续费。设备云存服务已到期，但是历史云存数据未过期。续费后仍可查看这些历史数据。
3：已过期。查询不到设备保存在云端的数据。
4：等待服务生效。
                     * @return Status 服务状态
1：正常使用中
2：待续费。设备云存服务已到期，但是历史云存数据未过期。续费后仍可查看这些历史数据。
3：已过期。查询不到设备保存在云端的数据。
4：等待服务生效。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取新增的云存订单列表
                     * @return Data 新增的云存订单列表
                     * 
                     */
                    std::vector<StorageOrder> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 被转出的云存服务ID
                     */
                    std::string m_srcServiceId;
                    bool m_srcServiceIdHasBeenSet;

                    /**
                     * 被转入的云存服务ID
                     */
                    std::string m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 云存服务所在的区域
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 设备TID
                     */
                    std::string m_tid;
                    bool m_tidHasBeenSet;

                    /**
                     * 视频流通道号。(对于存在多路视频流的设备，如NVR设备，与设备实际视频流通道号对应)
                     */
                    int64_t m_chnNum;
                    bool m_chnNumHasBeenSet;

                    /**
                     * 终端用户在IoT Video平台的注册ID
                     */
                    std::string m_accessId;
                    bool m_accessIdHasBeenSet;

                    /**
                     * 服务开始时间
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 服务失效时间
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 服务状态
1：正常使用中
2：待续费。设备云存服务已到期，但是历史云存数据未过期。续费后仍可查看这些历史数据。
3：已过期。查询不到设备保存在云端的数据。
4：等待服务生效。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 新增的云存订单列表
                     */
                    std::vector<StorageOrder> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20191126_MODEL_DELIVERSTORAGESERVICERESPONSE_H_
