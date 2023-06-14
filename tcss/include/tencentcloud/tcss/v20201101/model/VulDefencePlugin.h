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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEPLUGIN_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEPLUGIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 漏洞防护的插件信息
                */
                class VulDefencePlugin : public AbstractModel
                {
                public:
                    VulDefencePlugin();
                    ~VulDefencePlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取java进程pid
                     * @return PID java进程pid
                     * 
                     */
                    int64_t GetPID() const;

                    /**
                     * 设置java进程pid
                     * @param _pID java进程pid
                     * 
                     */
                    void SetPID(const int64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取进程主类名
                     * @return MainClass 进程主类名
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置进程主类名
                     * @param _mainClass 进程主类名
                     * 
                     */
                    void SetMainClass(const std::string& _mainClass);

                    /**
                     * 判断参数 MainClass 是否已赋值
                     * @return MainClass 是否已赋值
                     * 
                     */
                    bool MainClassHasBeenSet() const;

                    /**
                     * 获取插件运行状态：注入中:INJECTING，注入成功：SUCCESS，注入失败：FAIL，插件超时：TIMEOUT，插件退出：QUIT
                     * @return Status 插件运行状态：注入中:INJECTING，注入成功：SUCCESS，注入失败：FAIL，插件超时：TIMEOUT，插件退出：QUIT
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置插件运行状态：注入中:INJECTING，注入成功：SUCCESS，注入失败：FAIL，插件超时：TIMEOUT，插件退出：QUIT
                     * @param _status 插件运行状态：注入中:INJECTING，注入成功：SUCCESS，注入失败：FAIL，插件超时：TIMEOUT，插件退出：QUIT
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
                     * 获取错误日志
                     * @return ErrorLog 错误日志
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置错误日志
                     * @param _errorLog 错误日志
                     * 
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                private:

                    /**
                     * java进程pid
                     */
                    int64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * 进程主类名
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 插件运行状态：注入中:INJECTING，注入成功：SUCCESS，注入失败：FAIL，插件超时：TIMEOUT，插件退出：QUIT
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误日志
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULDEFENCEPLUGIN_H_
