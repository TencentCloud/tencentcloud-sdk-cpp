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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORRECEIVER_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORRECEIVER_H_

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
                * 待与流量镜像解绑的接收机信息。
                */
                class UnbindTrafficMirrorReceiver : public AbstractModel
                {
                public:
                    UnbindTrafficMirrorReceiver();
                    ~UnbindTrafficMirrorReceiver() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待解绑的主机端口，可选值1~65535。
                     * @return Port 待解绑的主机端口，可选值1~65535。
                     * 
                     */
                    int64_t GetPort() const;

                    /**
                     * 设置待解绑的主机端口，可选值1~65535。
                     * @param _port 待解绑的主机端口，可选值1~65535。
                     * 
                     */
                    void SetPort(const int64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取待解绑的主机实例ID。
                     * @return InstanceId 待解绑的主机实例ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置待解绑的主机实例ID。
                     * @param _instanceId 待解绑的主机实例ID。
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
                     * 待解绑的主机端口，可选值1~65535。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 待解绑的主机实例ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_UNBINDTRAFFICMIRRORRECEIVER_H_
