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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEOSINFOREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEOSINFOREQUEST_H_

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
                * DescribeOsInfo请求参数结构体
                */
                class DescribeOsInfoRequest : public AbstractModel
                {
                public:
                    DescribeOsInfoRequest();
                    ~DescribeOsInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备类型代号。 可以从DescribeDeviceClass查询设备类型列表
                     * @return DeviceClassCode 设备类型代号。 可以从DescribeDeviceClass查询设备类型列表
                     * 
                     */
                    std::string GetDeviceClassCode() const;

                    /**
                     * 设置设备类型代号。 可以从DescribeDeviceClass查询设备类型列表
                     * @param _deviceClassCode 设备类型代号。 可以从DescribeDeviceClass查询设备类型列表
                     * 
                     */
                    void SetDeviceClassCode(const std::string& _deviceClassCode);

                    /**
                     * 判断参数 DeviceClassCode 是否已赋值
                     * @return DeviceClassCode 是否已赋值
                     * 
                     */
                    bool DeviceClassCodeHasBeenSet() const;

                private:

                    /**
                     * 设备类型代号。 可以从DescribeDeviceClass查询设备类型列表
                     */
                    std::string m_deviceClassCode;
                    bool m_deviceClassCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEOSINFOREQUEST_H_
