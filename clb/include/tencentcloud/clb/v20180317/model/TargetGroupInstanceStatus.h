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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCESTATUS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 用于目标组后端rs健康检查状态。
                */
                class TargetGroupInstanceStatus : public AbstractModel
                {
                public:
                    TargetGroupInstanceStatus();
                    ~TargetGroupInstanceStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取后端rs的IP
                     * @return InstanceIp 后端rs的IP
                     * 
                     */
                    std::string GetInstanceIp() const;

                    /**
                     * 设置后端rs的IP
                     * @param _instanceIp 后端rs的IP
                     * 
                     */
                    void SetInstanceIp(const std::string& _instanceIp);

                    /**
                     * 判断参数 InstanceIp 是否已赋值
                     * @return InstanceIp 是否已赋值
                     * 
                     */
                    bool InstanceIpHasBeenSet() const;

                    /**
                     * 获取健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * @return Status 健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * @param _status 健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

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
                     * 获取端口
                     * @return Port 端口
                     * 
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param _port 端口
                     * 
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     * 
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EniId 网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEniId() const;

                    /**
                     * 设置网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eniId 网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEniId(const std::string& _eniId);

                    /**
                     * 判断参数 EniId 是否已赋值
                     * @return EniId 是否已赋值
                     * 
                     */
                    bool EniIdHasBeenSet() const;

                private:

                    /**
                     * 后端rs的IP
                     */
                    std::string m_instanceIp;
                    bool m_instanceIpHasBeenSet;

                    /**
                     * 健康检查状态，参数值及含义如下：
● on：表示探测中。
● off：表示健康检查关闭。
● health：表示健康。
● unhealth：表示异常。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 网卡ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eniId;
                    bool m_eniIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_TARGETGROUPINSTANCESTATUS_H_
