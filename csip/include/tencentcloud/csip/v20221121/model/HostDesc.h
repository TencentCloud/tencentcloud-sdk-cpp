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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTDESC_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/MachineTag.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 展示登录审计白名单时的主机信息实体
                */
                class HostDesc : public AbstractModel
                {
                public:
                    HostDesc();
                    ~HostDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>机器uuid</p>
                     * @return Quuid <p>机器uuid</p>
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置<p>机器uuid</p>
                     * @param _quuid <p>机器uuid</p>
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取<p>主机安全uuid</p>
                     * @return Uuid <p>主机安全uuid</p>
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置<p>主机安全uuid</p>
                     * @param _uuid <p>主机安全uuid</p>
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取<p>机器名</p>
                     * @return MachineName <p>机器名</p>
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置<p>机器名</p>
                     * @param _machineName <p>机器名</p>
                     * 
                     */
                    void SetMachineName(const std::string& _machineName);

                    /**
                     * 判断参数 MachineName 是否已赋值
                     * @return MachineName 是否已赋值
                     * 
                     */
                    bool MachineNameHasBeenSet() const;

                    /**
                     * 获取<p>机器IP:已销毁的服务器IP为空</p>
                     * @return MachineIp <p>机器IP:已销毁的服务器IP为空</p>
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置<p>机器IP:已销毁的服务器IP为空</p>
                     * @param _machineIp <p>机器IP:已销毁的服务器IP为空</p>
                     * 
                     */
                    void SetMachineIp(const std::string& _machineIp);

                    /**
                     * 判断参数 MachineIp 是否已赋值
                     * @return MachineIp 是否已赋值
                     * 
                     */
                    bool MachineIpHasBeenSet() const;

                    /**
                     * 获取<p>公网IP:已销毁的服务器IP为空</p>
                     * @return MachineWanIp <p>公网IP:已销毁的服务器IP为空</p>
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置<p>公网IP:已销毁的服务器IP为空</p>
                     * @param _machineWanIp <p>公网IP:已销毁的服务器IP为空</p>
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取<p>标签信息数组</p>
                     * @return Tags <p>标签信息数组</p>
                     * 
                     */
                    std::vector<MachineTag> GetTags() const;

                    /**
                     * 设置<p>标签信息数组</p>
                     * @param _tags <p>标签信息数组</p>
                     * 
                     */
                    void SetTags(const std::vector<MachineTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>机器uuid</p>
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * <p>主机安全uuid</p>
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * <p>机器名</p>
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * <p>机器IP:已销毁的服务器IP为空</p>
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * <p>公网IP:已销毁的服务器IP为空</p>
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * <p>标签信息数组</p>
                     */
                    std::vector<MachineTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTDESC_H_
