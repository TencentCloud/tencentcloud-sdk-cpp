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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RECORDINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RECORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 客户端异常信息结构
                */
                class RecordInfo : public AbstractModel
                {
                public:
                    RecordInfo();
                    ~RecordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主机ip
                     * @return HostIP 主机ip
                     * 
                     */
                    std::string GetHostIP() const;

                    /**
                     * 设置主机ip
                     * @param _hostIP 主机ip
                     * 
                     */
                    void SetHostIP(const std::string& _hostIP);

                    /**
                     * 判断参数 HostIP 是否已赋值
                     * @return HostIP 是否已赋值
                     * 
                     */
                    bool HostIPHasBeenSet() const;

                    /**
                     * 获取主机实例id
                     * @return InstanceID 主机实例id
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置主机实例id
                     * @param _instanceID 主机实例id
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取客户端离线时间
                     * @return OfflineTime 客户端离线时间
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置客户端离线时间
                     * @param _offlineTime 客户端离线时间
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取客户端卸载时间
                     * @return UninstallTime 客户端卸载时间
                     * 
                     */
                    std::string GetUninstallTime() const;

                    /**
                     * 设置客户端卸载时间
                     * @param _uninstallTime 客户端卸载时间
                     * 
                     */
                    void SetUninstallTime(const std::string& _uninstallTime);

                    /**
                     * 判断参数 UninstallTime 是否已赋值
                     * @return UninstallTime 是否已赋值
                     * 
                     */
                    bool UninstallTimeHasBeenSet() const;

                    /**
                     * 获取客户端卸载调用链
                     * @return UninstallCmd 客户端卸载调用链
                     * 
                     */
                    std::string GetUninstallCmd() const;

                    /**
                     * 设置客户端卸载调用链
                     * @param _uninstallCmd 客户端卸载调用链
                     * 
                     */
                    void SetUninstallCmd(const std::string& _uninstallCmd);

                    /**
                     * 判断参数 UninstallCmd 是否已赋值
                     * @return UninstallCmd 是否已赋值
                     * 
                     */
                    bool UninstallCmdHasBeenSet() const;

                    /**
                     * 获取客户端uuid
                     * @return Uuid 客户端uuid
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置客户端uuid
                     * @param _uuid 客户端uuid
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 主机ip
                     */
                    std::string m_hostIP;
                    bool m_hostIPHasBeenSet;

                    /**
                     * 主机实例id
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 客户端离线时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 客户端卸载时间
                     */
                    std::string m_uninstallTime;
                    bool m_uninstallTimeHasBeenSet;

                    /**
                     * 客户端卸载调用链
                     */
                    std::string m_uninstallCmd;
                    bool m_uninstallCmdHasBeenSet;

                    /**
                     * 客户端uuid
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RECORDINFO_H_
