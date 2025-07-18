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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSAUTOISOLATESETTINGREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSAUTOISOLATESETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * ModifyVirusAutoIsolateSetting请求参数结构体
                */
                class ModifyVirusAutoIsolateSettingRequest : public AbstractModel
                {
                public:
                    ModifyVirusAutoIsolateSettingRequest();
                    ~ModifyVirusAutoIsolateSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取自动隔离开关(true:开 false:关)
                     * @return AutoIsolateSwitch 自动隔离开关(true:开 false:关)
                     * 
                     */
                    bool GetAutoIsolateSwitch() const;

                    /**
                     * 设置自动隔离开关(true:开 false:关)
                     * @param _autoIsolateSwitch 自动隔离开关(true:开 false:关)
                     * 
                     */
                    void SetAutoIsolateSwitch(const bool& _autoIsolateSwitch);

                    /**
                     * 判断参数 AutoIsolateSwitch 是否已赋值
                     * @return AutoIsolateSwitch 是否已赋值
                     * 
                     */
                    bool AutoIsolateSwitchHasBeenSet() const;

                    /**
                     * 获取是否中断隔离文件关联的进程(true:是 false:否)
                     * @return IsKillProgress 是否中断隔离文件关联的进程(true:是 false:否)
                     * 
                     */
                    bool GetIsKillProgress() const;

                    /**
                     * 设置是否中断隔离文件关联的进程(true:是 false:否)
                     * @param _isKillProgress 是否中断隔离文件关联的进程(true:是 false:否)
                     * 
                     */
                    void SetIsKillProgress(const bool& _isKillProgress);

                    /**
                     * 判断参数 IsKillProgress 是否已赋值
                     * @return IsKillProgress 是否已赋值
                     * 
                     */
                    bool IsKillProgressHasBeenSet() const;

                    /**
                     * 获取用户用户自定义开关
                     * @return UserAutoIsolateKillSwitch 用户用户自定义开关
                     * 
                     */
                    bool GetUserAutoIsolateKillSwitch() const;

                    /**
                     * 设置用户用户自定义开关
                     * @param _userAutoIsolateKillSwitch 用户用户自定义开关
                     * 
                     */
                    void SetUserAutoIsolateKillSwitch(const bool& _userAutoIsolateKillSwitch);

                    /**
                     * 判断参数 UserAutoIsolateKillSwitch 是否已赋值
                     * @return UserAutoIsolateKillSwitch 是否已赋值
                     * 
                     */
                    bool UserAutoIsolateKillSwitchHasBeenSet() const;

                private:

                    /**
                     * 自动隔离开关(true:开 false:关)
                     */
                    bool m_autoIsolateSwitch;
                    bool m_autoIsolateSwitchHasBeenSet;

                    /**
                     * 是否中断隔离文件关联的进程(true:是 false:否)
                     */
                    bool m_isKillProgress;
                    bool m_isKillProgressHasBeenSet;

                    /**
                     * 用户用户自定义开关
                     */
                    bool m_userAutoIsolateKillSwitch;
                    bool m_userAutoIsolateKillSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_MODIFYVIRUSAUTOISOLATESETTINGREQUEST_H_
