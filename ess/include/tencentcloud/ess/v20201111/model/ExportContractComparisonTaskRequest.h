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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTCOMPARISONTASKREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTCOMPARISONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * ExportContractComparisonTask请求参数结构体
                */
                class ExportContractComparisonTaskRequest : public AbstractModel
                {
                public:
                    ExportContractComparisonTaskRequest();
                    ~ExportContractComparisonTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @return Operator <p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置<p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * @param _operator <p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取<p>合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。</p>
                     * @return TaskId <p>合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。</p>
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置<p>合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。</p>
                     * @param _taskId <p>合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。</p>
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取<p>导出对比结果文件类型。<br>类型如下：</p><ul><li> **0**：【PDF】以新合同文件为基础，导出带有可视化对比点标注的PDF文件。</li><li> **1**：【EXCEL】导出结构化的对比点明细表格，以列表形式罗列每一个差异点，包含改动位置、类型、标签及修改前后的完整内容。</li></ul>
                     * @return ExportType <p>导出对比结果文件类型。<br>类型如下：</p><ul><li> **0**：【PDF】以新合同文件为基础，导出带有可视化对比点标注的PDF文件。</li><li> **1**：【EXCEL】导出结构化的对比点明细表格，以列表形式罗列每一个差异点，包含改动位置、类型、标签及修改前后的完整内容。</li></ul>
                     * 
                     */
                    int64_t GetExportType() const;

                    /**
                     * 设置<p>导出对比结果文件类型。<br>类型如下：</p><ul><li> **0**：【PDF】以新合同文件为基础，导出带有可视化对比点标注的PDF文件。</li><li> **1**：【EXCEL】导出结构化的对比点明细表格，以列表形式罗列每一个差异点，包含改动位置、类型、标签及修改前后的完整内容。</li></ul>
                     * @param _exportType <p>导出对比结果文件类型。<br>类型如下：</p><ul><li> **0**：【PDF】以新合同文件为基础，导出带有可视化对比点标注的PDF文件。</li><li> **1**：【EXCEL】导出结构化的对比点明细表格，以列表形式罗列每一个差异点，包含改动位置、类型、标签及修改前后的完整内容。</li></ul>
                     * 
                     */
                    void SetExportType(const int64_t& _exportType);

                    /**
                     * 判断参数 ExportType 是否已赋值
                     * @return ExportType 是否已赋值
                     * 
                     */
                    bool ExportTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否忽略，适用于PDF。</p><ul><li> **true**：导出文件标注去掉忽略项。</li><li> **false**：导出文件包含所有对比点。</li></ul>
                     * @return Ignore <p>是否忽略，适用于PDF。</p><ul><li> **true**：导出文件标注去掉忽略项。</li><li> **false**：导出文件包含所有对比点。</li></ul>
                     * 
                     */
                    bool GetIgnore() const;

                    /**
                     * 设置<p>是否忽略，适用于PDF。</p><ul><li> **true**：导出文件标注去掉忽略项。</li><li> **false**：导出文件包含所有对比点。</li></ul>
                     * @param _ignore <p>是否忽略，适用于PDF。</p><ul><li> **true**：导出文件标注去掉忽略项。</li><li> **false**：导出文件包含所有对比点。</li></ul>
                     * 
                     */
                    void SetIgnore(const bool& _ignore);

                    /**
                     * 判断参数 Ignore 是否已赋值
                     * @return Ignore 是否已赋值
                     * 
                     */
                    bool IgnoreHasBeenSet() const;

                private:

                    /**
                     * <p>执行合同审查任务的员工信息。<br>注: <code>在调用此接口时，请确保指定的员工已获得所需的接口调用权限，并具备接口传入的相应资源的数据权限。</code></p>
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>合同对比任务ID，该参数通过调用接口CreateContractComparisonTask获取。</p>
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * <p>导出对比结果文件类型。<br>类型如下：</p><ul><li> **0**：【PDF】以新合同文件为基础，导出带有可视化对比点标注的PDF文件。</li><li> **1**：【EXCEL】导出结构化的对比点明细表格，以列表形式罗列每一个差异点，包含改动位置、类型、标签及修改前后的完整内容。</li></ul>
                     */
                    int64_t m_exportType;
                    bool m_exportTypeHasBeenSet;

                    /**
                     * <p>是否忽略，适用于PDF。</p><ul><li> **true**：导出文件标注去掉忽略项。</li><li> **false**：导出文件包含所有对比点。</li></ul>
                     */
                    bool m_ignore;
                    bool m_ignoreHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_EXPORTCONTRACTCOMPARISONTASKREQUEST_H_
