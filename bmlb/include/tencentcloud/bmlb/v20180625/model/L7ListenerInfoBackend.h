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

#ifndef TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFOBACKEND_H_
#define TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFOBACKEND_H_

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
                * 查询绑定了某主机七层监听器时返回的与转发路径所绑定的主机信息。
                */
                class L7ListenerInfoBackend : public AbstractModel
                {
                public:
                    L7ListenerInfoBackend();
                    ~L7ListenerInfoBackend() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取绑定类别（0代表黑石物理机，1代表虚拟机IP）。
                     * @return BindType 绑定类别（0代表黑石物理机，1代表虚拟机IP）。
                     * 
                     */
                    int64_t GetBindType() const;

                    /**
                     * 设置绑定类别（0代表黑石物理机，1代表虚拟机IP）。
                     * @param _bindType 绑定类别（0代表黑石物理机，1代表虚拟机IP）。
                     * 
                     */
                    void SetBindType(const int64_t& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

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

                    /**
                     * 获取权重。
                     * @return Weight 权重。
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置权重。
                     * @param _weight 权重。
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * @return Status 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     * @param _status 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
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
                     * 获取黑石物理机的主机ID。
                     * @return InstanceId 黑石物理机的主机ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置黑石物理机的主机ID。
                     * @param _instanceId 黑石物理机的主机ID。
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
                     * 获取黑石物理机的别名。
                     * @return Alias 黑石物理机的别名。
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置黑石物理机的别名。
                     * @param _alias 黑石物理机的别名。
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取主机IP。
                     * @return LanIp 主机IP。
                     * 
                     */
                    std::string GetLanIp() const;

                    /**
                     * 设置主机IP。
                     * @param _lanIp 主机IP。
                     * 
                     */
                    void SetLanIp(const std::string& _lanIp);

                    /**
                     * 判断参数 LanIp 是否已赋值
                     * @return LanIp 是否已赋值
                     * 
                     */
                    bool LanIpHasBeenSet() const;

                private:

                    /**
                     * 绑定类别（0代表黑石物理机，1代表虚拟机IP）。
                     */
                    int64_t m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 主机端口。
                     */
                    int64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 权重。
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 当前绑定关系的健康检查状态（Dead代表不健康，Alive代表健康）。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 黑石物理机的主机ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 黑石物理机的别名。
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 主机IP。
                     */
                    std::string m_lanIp;
                    bool m_lanIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMLB_V20180625_MODEL_L7LISTENERINFOBACKEND_H_
