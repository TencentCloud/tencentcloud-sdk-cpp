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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEPLUGINDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEPLUGINDETAIL_H_

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
                * 单个进程漏洞防御插件状态
                */
                class VulDefencePluginDetail : public AbstractModel
                {
                public:
                    VulDefencePluginDetail();
                    ~VulDefencePluginDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取注入进程Pid
                     * @return Pid 注入进程Pid
                     * 
                     */
                    int64_t GetPid() const;

                    /**
                     * 设置注入进程Pid
                     * @param _pid 注入进程Pid
                     * 
                     */
                    void SetPid(const int64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取注入进程主类名
                     * @return MainClass 注入进程主类名
                     * 
                     */
                    std::string GetMainClass() const;

                    /**
                     * 设置注入进程主类名
                     * @param _mainClass 注入进程主类名
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
                     * 获取插件状态：0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败 5: 软删除
                     * @return Status 插件状态：0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败 5: 软删除
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置插件状态：0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败 5: 软删除
                     * @param _status 插件状态：0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败 5: 软删除
                     * 
                     */
                    void SetStatus(const int64_t& _status);

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

                    /**
                     * 获取注入日志
                     * @return InjectLog 注入日志
                     * 
                     */
                    std::string GetInjectLog() const;

                    /**
                     * 设置注入日志
                     * @param _injectLog 注入日志
                     * 
                     */
                    void SetInjectLog(const std::string& _injectLog);

                    /**
                     * 判断参数 InjectLog 是否已赋值
                     * @return InjectLog 是否已赋值
                     * 
                     */
                    bool InjectLogHasBeenSet() const;

                private:

                    /**
                     * 注入进程Pid
                     */
                    int64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 注入进程主类名
                     */
                    std::string m_mainClass;
                    bool m_mainClassHasBeenSet;

                    /**
                     * 插件状态：0: 注入中, 1: 注入成功, 2: 插件超时, 3: 插件退出, 4: 注入失败 5: 软删除
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误日志
                     */
                    std::string m_errorLog;
                    bool m_errorLogHasBeenSet;

                    /**
                     * 注入日志
                     */
                    std::string m_injectLog;
                    bool m_injectLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCEPLUGINDETAIL_H_
