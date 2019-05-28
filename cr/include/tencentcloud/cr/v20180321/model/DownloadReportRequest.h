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

#ifndef TENCENTCLOUD_CR_V20180321_MODEL_DOWNLOADREPORTREQUEST_H_
#define TENCENTCLOUD_CR_V20180321_MODEL_DOWNLOADREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cr
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DownloadReport请求参数结构体
                */
                class DownloadReportRequest : public AbstractModel
                {
                public:
                    DownloadReportRequest();
                    ~DownloadReportRequest() = default;
                    std::string ToJsonString();


                    /**
                     * 获取模块名
                     * @return Module 模块名
                     */
                    std::string GetModule() const;

                    /**
                     * 设置模块名
                     * @param Module 模块名
                     */
                    void SetModule(const std::string& module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取操作名
                     * @return Operation 操作名
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名
                     * @param Operation 操作名
                     */
                    void SetOperation(const std::string& operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取报告日期
                     * @return ReportDate 报告日期
                     */
                    std::string GetReportDate() const;

                    /**
                     * 设置报告日期
                     * @param ReportDate 报告日期
                     */
                    void SetReportDate(const std::string& reportDate);

                    /**
                     * 判断参数 ReportDate 是否已赋值
                     * @return ReportDate 是否已赋值
                     */
                    bool ReportDateHasBeenSet() const;

                    /**
                     * 获取实例ID，不传默认为系统分配的初始实例。
                     * @return InstId 实例ID，不传默认为系统分配的初始实例。
                     */
                    std::string GetInstId() const;

                    /**
                     * 设置实例ID，不传默认为系统分配的初始实例。
                     * @param InstId 实例ID，不传默认为系统分配的初始实例。
                     */
                    void SetInstId(const std::string& instId);

                    /**
                     * 判断参数 InstId 是否已赋值
                     * @return InstId 是否已赋值
                     */
                    bool InstIdHasBeenSet() const;

                private:

                    /**
                     * 模块名
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 操作名
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 报告日期
                     */
                    std::string m_reportDate;
                    bool m_reportDateHasBeenSet;

                    /**
                     * 实例ID，不传默认为系统分配的初始实例。
                     */
                    std::string m_instId;
                    bool m_instIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CR_V20180321_MODEL_DOWNLOADREPORTREQUEST_H_
