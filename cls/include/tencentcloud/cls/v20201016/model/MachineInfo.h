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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 机器状态信息
                */
                class MachineInfo : public AbstractModel
                {
                public:
                    MachineInfo();
                    ~MachineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取机器的IP
                     * @return Ip 机器的IP
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置机器的IP
                     * @param _ip 机器的IP
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取机器实例ID
                     * @return InstanceID 机器实例ID
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置机器实例ID
                     * @param _instanceID 机器实例ID
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
                     * 获取机器状态，0:异常，1:正常
                     * @return Status 机器状态，0:异常，1:正常
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置机器状态，0:异常，1:正常
                     * @param _status 机器状态，0:异常，1:正常
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取机器离线时间，空为正常，异常返回具体时间
                     * @return OfflineTime 机器离线时间，空为正常，异常返回具体时间
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置机器离线时间，空为正常，异常返回具体时间
                     * @param _offlineTime 机器离线时间，空为正常，异常返回具体时间
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
                     * 获取机器是否开启自动升级。0:关闭，1:开启
                     * @return AutoUpdate 机器是否开启自动升级。0:关闭，1:开启
                     * 
                     */
                    int64_t GetAutoUpdate() const;

                    /**
                     * 设置机器是否开启自动升级。0:关闭，1:开启
                     * @param _autoUpdate 机器是否开启自动升级。0:关闭，1:开启
                     * 
                     */
                    void SetAutoUpdate(const int64_t& _autoUpdate);

                    /**
                     * 判断参数 AutoUpdate 是否已赋值
                     * @return AutoUpdate 是否已赋值
                     * 
                     */
                    bool AutoUpdateHasBeenSet() const;

                    /**
                     * 获取机器当前版本号。
                     * @return Version 机器当前版本号。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置机器当前版本号。
                     * @param _version 机器当前版本号。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取机器升级功能状态。 0：升级成功；1：升级中；-1：升级失败。
                     * @return UpdateStatus 机器升级功能状态。 0：升级成功；1：升级中；-1：升级失败。
                     * 
                     */
                    int64_t GetUpdateStatus() const;

                    /**
                     * 设置机器升级功能状态。 0：升级成功；1：升级中；-1：升级失败。
                     * @param _updateStatus 机器升级功能状态。 0：升级成功；1：升级中；-1：升级失败。
                     * 
                     */
                    void SetUpdateStatus(const int64_t& _updateStatus);

                    /**
                     * 判断参数 UpdateStatus 是否已赋值
                     * @return UpdateStatus 是否已赋值
                     * 
                     */
                    bool UpdateStatusHasBeenSet() const;

                    /**
                     * 获取机器升级结果标识。
0：成功；1200：升级成功；其他值表示异常。
                     * @return ErrCode 机器升级结果标识。
0：成功；1200：升级成功；其他值表示异常。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置机器升级结果标识。
0：成功；1200：升级成功；其他值表示异常。
                     * @param _errCode 机器升级结果标识。
0：成功；1200：升级成功；其他值表示异常。
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取机器升级结果信息。
“ok”：成功；“update success”：升级成功；其他值为失败原因。
                     * @return ErrMsg 机器升级结果信息。
“ok”：成功；“update success”：升级成功；其他值为失败原因。
                     * 
                     */
                    std::string GetErrMsg() const;

                    /**
                     * 设置机器升级结果信息。
“ok”：成功；“update success”：升级成功；其他值为失败原因。
                     * @param _errMsg 机器升级结果信息。
“ok”：成功；“update success”：升级成功；其他值为失败原因。
                     * 
                     */
                    void SetErrMsg(const std::string& _errMsg);

                    /**
                     * 判断参数 ErrMsg 是否已赋值
                     * @return ErrMsg 是否已赋值
                     * 
                     */
                    bool ErrMsgHasBeenSet() const;

                private:

                    /**
                     * 机器的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 机器实例ID
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 机器状态，0:异常，1:正常
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 机器离线时间，空为正常，异常返回具体时间
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 机器是否开启自动升级。0:关闭，1:开启
                     */
                    int64_t m_autoUpdate;
                    bool m_autoUpdateHasBeenSet;

                    /**
                     * 机器当前版本号。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 机器升级功能状态。 0：升级成功；1：升级中；-1：升级失败。
                     */
                    int64_t m_updateStatus;
                    bool m_updateStatusHasBeenSet;

                    /**
                     * 机器升级结果标识。
0：成功；1200：升级成功；其他值表示异常。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 机器升级结果信息。
“ok”：成功；“update success”：升级成功；其他值为失败原因。
                     */
                    std::string m_errMsg;
                    bool m_errMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_MACHINEINFO_H_
