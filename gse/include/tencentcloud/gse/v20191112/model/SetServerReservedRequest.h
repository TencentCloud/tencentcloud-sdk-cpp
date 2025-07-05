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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_SETSERVERRESERVEDREQUEST_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_SETSERVERRESERVEDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * SetServerReserved请求参数结构体
                */
                class SetServerReservedRequest : public AbstractModel
                {
                public:
                    SetServerReservedRequest();
                    ~SetServerReservedRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取扩缩容配置服务器舰队ID
                     * @return FleetId 扩缩容配置服务器舰队ID
                     * 
                     */
                    std::string GetFleetId() const;

                    /**
                     * 设置扩缩容配置服务器舰队ID
                     * @param _fleetId 扩缩容配置服务器舰队ID
                     * 
                     */
                    void SetFleetId(const std::string& _fleetId);

                    /**
                     * 判断参数 FleetId 是否已赋值
                     * @return FleetId 是否已赋值
                     * 
                     */
                    bool FleetIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例是否保留, 1-保留，0-不保留,默认
                     * @return ReserveValue 实例是否保留, 1-保留，0-不保留,默认
                     * 
                     */
                    int64_t GetReserveValue() const;

                    /**
                     * 设置实例是否保留, 1-保留，0-不保留,默认
                     * @param _reserveValue 实例是否保留, 1-保留，0-不保留,默认
                     * 
                     */
                    void SetReserveValue(const int64_t& _reserveValue);

                    /**
                     * 判断参数 ReserveValue 是否已赋值
                     * @return ReserveValue 是否已赋值
                     * 
                     */
                    bool ReserveValueHasBeenSet() const;

                private:

                    /**
                     * 扩缩容配置服务器舰队ID
                     */
                    std::string m_fleetId;
                    bool m_fleetIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例是否保留, 1-保留，0-不保留,默认
                     */
                    int64_t m_reserveValue;
                    bool m_reserveValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_SETSERVERRESERVEDREQUEST_H_
