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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ScanTaskAgain请求参数结构体
                */
                class ScanTaskAgainRequest : public AbstractModel
                {
                public:
                    ScanTaskAgainRequest();
                    ~ScanTaskAgainRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @return ModuleType 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @param _moduleType 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskId 任务ID
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置任务ID
                     * @param _taskId 任务ID
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取自选服务器时生效，主机quuid的string数组
                     * @return QuuidList 自选服务器时生效，主机quuid的string数组
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置自选服务器时生效，主机quuid的string数组
                     * @param _quuidList 自选服务器时生效，主机quuid的string数组
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取扫描超时时长
                     * @return TimeoutPeriod 扫描超时时长
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置扫描超时时长
                     * @param _timeoutPeriod 扫描超时时长
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                private:

                    /**
                     * 模块类型 当前提供 Malware 木马 , Vul 漏洞 , Baseline 基线
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * 任务ID
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 自选服务器时生效，主机quuid的string数组
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * 扫描超时时长
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANTASKAGAINREQUEST_H_
