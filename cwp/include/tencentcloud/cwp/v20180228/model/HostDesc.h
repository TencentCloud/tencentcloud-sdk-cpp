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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_HOSTDESC_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_HOSTDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/MachineTag.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
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
                     * 获取机器uuid
                     * @return Quuid 机器uuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置机器uuid
                     * @param _quuid 机器uuid
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
                     * 获取主机安全uuid
                     * @return Uuid 主机安全uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机安全uuid
                     * @param _uuid 主机安全uuid
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
                     * 获取机器名
                     * @return MachineName 机器名
                     * 
                     */
                    std::string GetMachineName() const;

                    /**
                     * 设置机器名
                     * @param _machineName 机器名
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
                     * 获取机器IP:已销毁的服务器IP为空
                     * @return MachineIp 机器IP:已销毁的服务器IP为空
                     * 
                     */
                    std::string GetMachineIp() const;

                    /**
                     * 设置机器IP:已销毁的服务器IP为空
                     * @param _machineIp 机器IP:已销毁的服务器IP为空
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
                     * 获取公网IP:已销毁的服务器IP为空
                     * @return MachineWanIp 公网IP:已销毁的服务器IP为空
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置公网IP:已销毁的服务器IP为空
                     * @param _machineWanIp 公网IP:已销毁的服务器IP为空
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
                     * 获取标签信息数组
                     * @return Tags 标签信息数组
                     * 
                     */
                    std::vector<MachineTag> GetTags() const;

                    /**
                     * 设置标签信息数组
                     * @param _tags 标签信息数组
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
                     * 机器uuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机安全uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 机器名
                     */
                    std::string m_machineName;
                    bool m_machineNameHasBeenSet;

                    /**
                     * 机器IP:已销毁的服务器IP为空
                     */
                    std::string m_machineIp;
                    bool m_machineIpHasBeenSet;

                    /**
                     * 公网IP:已销毁的服务器IP为空
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 标签信息数组
                     */
                    std::vector<MachineTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_HOSTDESC_H_
