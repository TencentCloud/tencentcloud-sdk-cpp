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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_DETACHNETWORKINTERFACEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_DETACHNETWORKINTERFACEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * DetachNetworkInterface请求参数结构体
                */
                class DetachNetworkInterfaceRequest : public AbstractModel
                {
                public:
                    DetachNetworkInterfaceRequest();
                    ~DetachNetworkInterfaceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取弹性网卡实例ID，例如：eni-m6dyj72l。
                     * @return NetworkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。
                     * 
                     */
                    std::string GetNetworkInterfaceId() const;

                    /**
                     * 设置弹性网卡实例ID，例如：eni-m6dyj72l。
                     * @param _networkInterfaceId 弹性网卡实例ID，例如：eni-m6dyj72l。
                     * 
                     */
                    void SetNetworkInterfaceId(const std::string& _networkInterfaceId);

                    /**
                     * 判断参数 NetworkInterfaceId 是否已赋值
                     * @return NetworkInterfaceId 是否已赋值
                     * 
                     */
                    bool NetworkInterfaceIdHasBeenSet() const;

                    /**
                     * 获取实例ID。形如：ein-hcs7jkg4
                     * @return InstanceId 实例ID。形如：ein-hcs7jkg4
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID。形如：ein-hcs7jkg4
                     * @param _instanceId 实例ID。形如：ein-hcs7jkg4
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
                     * 获取ECM 地域，形如ap-xian-ecm。
                     * @return EcmRegion ECM 地域，形如ap-xian-ecm。
                     * 
                     */
                    std::string GetEcmRegion() const;

                    /**
                     * 设置ECM 地域，形如ap-xian-ecm。
                     * @param _ecmRegion ECM 地域，形如ap-xian-ecm。
                     * 
                     */
                    void SetEcmRegion(const std::string& _ecmRegion);

                    /**
                     * 判断参数 EcmRegion 是否已赋值
                     * @return EcmRegion 是否已赋值
                     * 
                     */
                    bool EcmRegionHasBeenSet() const;

                private:

                    /**
                     * 弹性网卡实例ID，例如：eni-m6dyj72l。
                     */
                    std::string m_networkInterfaceId;
                    bool m_networkInterfaceIdHasBeenSet;

                    /**
                     * 实例ID。形如：ein-hcs7jkg4
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * ECM 地域，形如ap-xian-ecm。
                     */
                    std::string m_ecmRegion;
                    bool m_ecmRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_DETACHNETWORKINTERFACEREQUEST_H_
