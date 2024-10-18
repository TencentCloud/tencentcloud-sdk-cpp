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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACEATTACHMENT_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACEATTACHMENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 弹性网卡绑定关系
                */
                class NetworkInterfaceAttachment : public AbstractModel
                {
                public:
                    NetworkInterfaceAttachment();
                    ~NetworkInterfaceAttachment() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网卡在云主机实例内的序号。
                     * @return DeviceIndex 网卡在云主机实例内的序号。
                     * 
                     */
                    uint64_t GetDeviceIndex() const;

                    /**
                     * 设置网卡在云主机实例内的序号。
                     * @param _deviceIndex 网卡在云主机实例内的序号。
                     * 
                     */
                    void SetDeviceIndex(const uint64_t& _deviceIndex);

                    /**
                     * 判断参数 DeviceIndex 是否已赋值
                     * @return DeviceIndex 是否已赋值
                     * 
                     */
                    bool DeviceIndexHasBeenSet() const;

                    /**
                     * 获取云主机所有者账户信息。
                     * @return InstanceAccountId 云主机所有者账户信息。
                     * 
                     */
                    std::string GetInstanceAccountId() const;

                    /**
                     * 设置云主机所有者账户信息。
                     * @param _instanceAccountId 云主机所有者账户信息。
                     * 
                     */
                    void SetInstanceAccountId(const std::string& _instanceAccountId);

                    /**
                     * 判断参数 InstanceAccountId 是否已赋值
                     * @return InstanceAccountId 是否已赋值
                     * 
                     */
                    bool InstanceAccountIdHasBeenSet() const;

                    /**
                     * 获取绑定时间。
                     * @return AttachTime 绑定时间。
                     * 
                     */
                    std::string GetAttachTime() const;

                    /**
                     * 设置绑定时间。
                     * @param _attachTime 绑定时间。
                     * 
                     */
                    void SetAttachTime(const std::string& _attachTime);

                    /**
                     * 判断参数 AttachTime 是否已赋值
                     * @return AttachTime 是否已赋值
                     * 
                     */
                    bool AttachTimeHasBeenSet() const;

                    /**
                     * 获取云主机实例ID。
                     * @return InstanceId 云主机实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置云主机实例ID。
                     * @param _instanceId 云主机实例ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                private:

                    /**
                     * 网卡在云主机实例内的序号。
                     */
                    uint64_t m_deviceIndex;
                    bool m_deviceIndexHasBeenSet;

                    /**
                     * 云主机所有者账户信息。
                     */
                    std::string m_instanceAccountId;
                    bool m_instanceAccountIdHasBeenSet;

                    /**
                     * 绑定时间。
                     */
                    std::string m_attachTime;
                    bool m_attachTimeHasBeenSet;

                    /**
                     * 云主机实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_NETWORKINTERFACEATTACHMENT_H_
