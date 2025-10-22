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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEINSPECTIONREPORTRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEINSPECTIONREPORTRESPONSE_H_

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
                * DescribeInspectionReport返回参数结构体
                */
                class DescribeInspectionReportResponse : public AbstractModel
                {
                public:
                    DescribeInspectionReportResponse();
                    ~DescribeInspectionReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取报告名称
                     * @return ReportName 报告名称
                     * 
                     */
                    std::string GetReportName() const;

                    /**
                     * 判断参数 ReportName 是否已赋值
                     * @return ReportName 是否已赋值
                     * 
                     */
                    bool ReportNameHasBeenSet() const;

                    /**
                     * 获取下载链接
                     * @return ReportUrl 下载链接
                     * 
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     * 
                     */
                    bool ReportUrlHasBeenSet() const;

                private:

                    /**
                     * 报告名称
                     */
                    std::string m_reportName;
                    bool m_reportNameHasBeenSet;

                    /**
                     * 下载链接
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEINSPECTIONREPORTRESPONSE_H_
