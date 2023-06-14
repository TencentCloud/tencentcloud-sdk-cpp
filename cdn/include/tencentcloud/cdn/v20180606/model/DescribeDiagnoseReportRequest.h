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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDIAGNOSEREPORTREQUEST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDIAGNOSEREPORTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeDiagnoseReport请求参数结构体
                */
                class DescribeDiagnoseReportRequest : public AbstractModel
                {
                public:
                    DescribeDiagnoseReportRequest();
                    ~DescribeDiagnoseReportRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取报告ID
                     * @return ReportId 报告ID
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置报告ID
                     * @param _reportId 报告ID
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                private:

                    /**
                     * 报告ID
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBEDIAGNOSEREPORTREQUEST_H_
