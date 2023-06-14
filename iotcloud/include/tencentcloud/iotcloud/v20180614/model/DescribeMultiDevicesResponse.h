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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVICESRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVICESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/MultiDevicesInfo.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * DescribeMultiDevices返回参数结构体
                */
                class DescribeMultiDevicesResponse : public AbstractModel
                {
                public:
                    DescribeMultiDevicesResponse();
                    ~DescribeMultiDevicesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务 ID，由批量创建设备接口返回
                     * @return TaskId 任务 ID，由批量创建设备接口返回
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取设备详细信息列表
                     * @return DevicesInfo 设备详细信息列表
                     * 
                     */
                    std::vector<MultiDevicesInfo> GetDevicesInfo() const;

                    /**
                     * 判断参数 DevicesInfo 是否已赋值
                     * @return DevicesInfo 是否已赋值
                     * 
                     */
                    bool DevicesInfoHasBeenSet() const;

                    /**
                     * 获取该任务创建设备的总数
                     * @return TotalDevNum 该任务创建设备的总数
                     * 
                     */
                    uint64_t GetTotalDevNum() const;

                    /**
                     * 判断参数 TotalDevNum 是否已赋值
                     * @return TotalDevNum 是否已赋值
                     * 
                     */
                    bool TotalDevNumHasBeenSet() const;

                private:

                    /**
                     * 任务 ID，由批量创建设备接口返回
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 设备详细信息列表
                     */
                    std::vector<MultiDevicesInfo> m_devicesInfo;
                    bool m_devicesInfoHasBeenSet;

                    /**
                     * 该任务创建设备的总数
                     */
                    uint64_t m_totalDevNum;
                    bool m_totalDevNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEMULTIDEVICESRESPONSE_H_
