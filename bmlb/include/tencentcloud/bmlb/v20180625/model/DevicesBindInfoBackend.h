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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOBACKEND_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOBACKEND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmlb
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * 获取设备绑定信息时返回的所绑定的主机信息。
                */
                class DevicesBindInfoBackend : public AbstractModel
                {
                public:
                    DevicesBindInfoBackend();
                    ~DevicesBindInfoBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取黑石物理机的主机ID、托管主机ID或虚拟机IP。
                     * @return InstanceId 黑石物理机的主机ID、托管主机ID或虚拟机IP。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置黑石物理机的主机ID、托管主机ID或虚拟机IP。
                     * @param _instanceId 黑石物理机的主机ID、托管主机ID或虚拟机IP。
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
                     * 获取主机端口。
                     * @return Port 主机端口。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置主机端口。
                     * @param _port 主机端口。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                private:

                    /**
                     * 黑石物理机的主机ID、托管主机ID或虚拟机IP。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 主机端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_DEVICESBINDINFOBACKEND_H_
