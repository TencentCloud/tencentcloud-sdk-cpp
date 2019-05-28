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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bm
    {
        namespace V20180423
        {
            namespace Model
            {
                /**
                * DescribeDeviceClassPartition请求参数结构体
                */
                class DescribeDeviceClassPartitionRequest : public AbstractModel
                {
                public:
                    DescribeDeviceClassPartitionRequest();
                    ~DescribeDeviceClassPartitionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/17602)查询。标准机型需要传入此参数
                     * @return DeviceClassCode 设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/17602)查询。标准机型需要传入此参数
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/17602)查询。标准机型需要传入此参数
                     * @param DeviceClassCode 设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/17602)查询。标准机型需要传入此参数
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                    /**
                     * 获取需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时DeviceClassCode失效
                     * @return InstanceId 需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时DeviceClassCode失效
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时DeviceClassCode失效
                     * @param InstanceId 需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时DeviceClassCode失效
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 设备类型代号。代号通过接口[查询设备型号(DescribeDeviceClass)](https://cloud.tencent.com/document/api/386/17602)查询。标准机型需要传入此参数
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                    /**
                     * 需要查询自定义机型RAID信息时，传入自定义机型实例ID。InstanceId存在时DeviceClassCode失效
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEDEVICECLASSPARTITIONREQUEST_H_
