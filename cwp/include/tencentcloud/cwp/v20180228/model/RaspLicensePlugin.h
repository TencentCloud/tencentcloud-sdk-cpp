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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSEPLUGIN_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSEPLUGIN_H_

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
                * 重保防护授权插件详情
                */
                class RaspLicensePlugin : public AbstractModel
                {
                public:
                    RaspLicensePlugin();
                    ~RaspLicensePlugin() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取java进程pid
                     * @return PID java进程pid
                     * 
                     */
                    uint64_t GetPID() const;

                    /**
                     * 设置java进程pid
                     * @param _pID java进程pid
                     * 
                     */
                    void SetPID(const uint64_t& _pID);

                    /**
                     * 判断参数 PID 是否已赋值
                     * @return PID 是否已赋值
                     * 
                     */
                    bool PIDHasBeenSet() const;

                    /**
                     * 获取java主类
                     * @return MainClass java主类
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置java主类
                     * @param _mainClass java主类
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
                     * 获取0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败
                     * @return Status 0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败
                     * @param _status 0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败
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
                     * 获取错误详情
                     * @return ErrorLog 错误详情
                     * 
                     */
                    std::string GetErrorLog() const;

                    /**
                     * 设置错误详情
                     * @param _errorLog 错误详情
                     * 
                     */
                    void SetErrorLog(const std::string& _errorLog);

                    /**
                     * 判断参数 ErrorLog 是否已赋值
                     * @return ErrorLog 是否已赋值
                     * 
                     */
                    bool ErrorLogHasBeenSet() const;

                    /**
                     * 获取注入失败原因
                     * @return Reason 注入失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置注入失败原因
                     * @param _reason 注入失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取注入时间
                     * @return InjectTime 注入时间
                     * 
                     */
                    std::string GetInjectTime() const;

                    /**
                     * 设置注入时间
                     * @param _injectTime 注入时间
                     * 
                     */
                    void SetInjectTime(const std::string& _injectTime);

                    /**
                     * 判断参数 InjectTime 是否已赋值
                     * @return InjectTime 是否已赋值
                     * 
                     */
                    bool InjectTimeHasBeenSet() const;

                private:

                    /**
                     * java进程pid
                     */
                    uint64_t m_pID;
                    bool m_pIDHasBeenSet;

                    /**
                     * java主类
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误详情
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * 注入失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 注入时间
                     */
                    std::string m_injectTime;
                    bool m_injectTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPLICENSEPLUGIN_H_
