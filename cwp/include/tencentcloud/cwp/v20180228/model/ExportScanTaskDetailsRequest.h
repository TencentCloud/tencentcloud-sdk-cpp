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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSCANTASKDETAILSREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSCANTASKDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Filters.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * ExportScanTaskDetails请求参数结构体
                */
                class ExportScanTaskDetailsRequest : public AbstractModel
                {
                public:
                    ExportScanTaskDetailsRequest();
                    ~ExportScanTaskDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取本次检测的任务id（不同于出参的导出本次检测Excel的任务Id）
                     * @return TaskId 本次检测的任务id（不同于出参的导出本次检测Excel的任务Id）
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置本次检测的任务id（不同于出参的导出本次检测Excel的任务Id）
                     * @param _taskId 本次检测的任务id（不同于出参的导出本次检测Excel的任务Id）
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
                     * 获取模块类型，当前提供：Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @return ModuleType 模块类型，当前提供：Malware 木马 , Vul 漏洞 , Baseline 基线
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置模块类型，当前提供：Malware 木马 , Vul 漏洞 , Baseline 基线
                     * @param _moduleType 模块类型，当前提供：Malware 木马 , Vul 漏洞 , Baseline 基线
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
                     * 获取过滤参数：ipOrAlias（服务器名/ip）
                     * @return Filters 过滤参数：ipOrAlias（服务器名/ip）
                     * 
                     */
                    std::vector<Filters> GetFilters() const;

                    /**
                     * 设置过滤参数：ipOrAlias（服务器名/ip）
                     * @param _filters 过滤参数：ipOrAlias（服务器名/ip）
                     * 
                     */
                    void SetFilters(const std::vector<Filters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 本次检测的任务id（不同于出参的导出本次检测Excel的任务Id）
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 模块类型，当前提供：Malware 木马 , Vul 漏洞 , Baseline 基线
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * 过滤参数：ipOrAlias（服务器名/ip）
                     */
                    std::vector<Filters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_EXPORTSCANTASKDETAILSREQUEST_H_
