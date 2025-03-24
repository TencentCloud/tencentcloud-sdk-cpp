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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEAVAILABLEMODELLISTREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEAVAILABLEMODELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeAvailableModelList请求参数结构体
                */
                class DescribeAvailableModelListRequest : public AbstractModel
                {
                public:
                    DescribeAvailableModelListRequest();
                    ~DescribeAvailableModelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取机房ID
                     * @return IdcId 机房ID
                     * 
                     */
                    uint64_t GetIdcId() const;

                    /**
                     * 设置机房ID
                     * @param _idcId 机房ID
                     * 
                     */
                    void SetIdcId(const uint64_t& _idcId);

                    /**
                     * 判断参数 IdcId 是否已赋值
                     * @return IdcId 是否已赋值
                     * 
                     */
                    bool IdcIdHasBeenSet() const;

                    /**
                     * 获取server 服务器，netDevice 网络设备
                     * @return DeviceType server 服务器，netDevice 网络设备
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置server 服务器，netDevice 网络设备
                     * @param _deviceType server 服务器，netDevice 网络设备
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                private:

                    /**
                     * 机房ID
                     */
                    uint64_t m_idcId;
                    bool m_idcIdHasBeenSet;

                    /**
                     * server 服务器，netDevice 网络设备
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEAVAILABLEMODELLISTREQUEST_H_
