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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ReportData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeReportData返回参数结构体
                */
                class DescribeReportDataResponse : public AbstractModel
                {
                public:
                    DescribeReportDataResponse();
                    ~DescribeReportDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取域名维度数据详情
                     * @return DomainReport 域名维度数据详情
                     * 
                     */
                    std::vector<ReportData> GetDomainReport() const;

                    /**
                     * 判断参数 DomainReport 是否已赋值
                     * @return DomainReport 是否已赋值
                     * 
                     */
                    bool DomainReportHasBeenSet() const;

                    /**
                     * 获取项目维度数据详情
                     * @return ProjectReport 项目维度数据详情
                     * 
                     */
                    std::vector<ReportData> GetProjectReport() const;

                    /**
                     * 判断参数 ProjectReport 是否已赋值
                     * @return ProjectReport 是否已赋值
                     * 
                     */
                    bool ProjectReportHasBeenSet() const;

                private:

                    /**
                     * 域名维度数据详情
                     */
                    std::vector<ReportData> m_domainReport;
                    bool m_domainReportHasBeenSet;

                    /**
                     * 项目维度数据详情
                     */
                    std::vector<ReportData> m_projectReport;
                    bool m_projectReportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEREPORTDATARESPONSE_H_
