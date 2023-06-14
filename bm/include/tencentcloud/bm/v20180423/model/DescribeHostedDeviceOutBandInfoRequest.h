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

#ifndef TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHOSTEDDEVICEOUTBANDINFOREQUEST_H_
#define TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHOSTEDDEVICEOUTBANDINFOREQUEST_H_

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
                * DescribeHostedDeviceOutBandInfo请求参数结构体
                */
                class DescribeHostedDeviceOutBandInfoRequest : public AbstractModel
                {
                public:
                    DescribeHostedDeviceOutBandInfoRequest();
                    ~DescribeHostedDeviceOutBandInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取托管设备的唯一ID数组,数组个数不超过20
                     * @return InstanceIds 托管设备的唯一ID数组,数组个数不超过20
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置托管设备的唯一ID数组,数组个数不超过20
                     * @param _instanceIds 托管设备的唯一ID数组,数组个数不超过20
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取可用区ID
                     * @return Zone 可用区ID
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置可用区ID
                     * @param _zone 可用区ID
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                private:

                    /**
                     * 托管设备的唯一ID数组,数组个数不超过20
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 可用区ID
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BM_V20180423_MODEL_DESCRIBEHOSTEDDEVICEOUTBANDINFOREQUEST_H_
