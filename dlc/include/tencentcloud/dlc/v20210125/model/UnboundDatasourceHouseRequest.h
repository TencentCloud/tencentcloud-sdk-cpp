/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_UNBOUNDDATASOURCEHOUSEREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_UNBOUNDDATASOURCEHOUSEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * UnboundDatasourceHouse请求参数结构体
                */
                class UnboundDatasourceHouseRequest : public AbstractModel
                {
                public:
                    UnboundDatasourceHouseRequest();
                    ~UnboundDatasourceHouseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网络配置名称
                     * @return NetworkConnectionName 网络配置名称
                     * 
                     */
                    std::string GetNetworkConnectionName() const;

                    /**
                     * 设置网络配置名称
                     * @param _networkConnectionName 网络配置名称
                     * 
                     */
                    void SetNetworkConnectionName(const std::string& _networkConnectionName);

                    /**
                     * 判断参数 NetworkConnectionName 是否已赋值
                     * @return NetworkConnectionName 是否已赋值
                     * 
                     */
                    bool NetworkConnectionNameHasBeenSet() const;

                private:

                    /**
                     * 网络配置名称
                     */
                    std::string m_networkConnectionName;
                    bool m_networkConnectionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_UNBOUNDDATASOURCEHOUSEREQUEST_H_
