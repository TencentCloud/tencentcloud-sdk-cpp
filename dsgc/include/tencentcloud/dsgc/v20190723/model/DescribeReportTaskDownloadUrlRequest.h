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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEREPORTTASKDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEREPORTTASKDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeReportTaskDownloadUrl请求参数结构体
                */
                class DescribeReportTaskDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeReportTaskDownloadUrlRequest();
                    ~DescribeReportTaskDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务id
                     * @return ReportTaskId 任务id
                     * 
                     */
                    uint64_t GetReportTaskId() const;

                    /**
                     * 设置任务id
                     * @param _reportTaskId 任务id
                     * 
                     */
                    void SetReportTaskId(const uint64_t& _reportTaskId);

                    /**
                     * 判断参数 ReportTaskId 是否已赋值
                     * @return ReportTaskId 是否已赋值
                     * 
                     */
                    bool ReportTaskIdHasBeenSet() const;

                    /**
                     * 获取dspa实例id
                     * @return DspaId dspa实例id
                     * 
                     */
                    std::string GetDspaId() const;

                    /**
                     * 设置dspa实例id
                     * @param _dspaId dspa实例id
                     * 
                     */
                    void SetDspaId(const std::string& _dspaId);

                    /**
                     * 判断参数 DspaId 是否已赋值
                     * @return DspaId 是否已赋值
                     * 
                     */
                    bool DspaIdHasBeenSet() const;

                    /**
                     * 获取是否同时下载敏感资产详情报告
                     * @return IsWithSensitiveDetailReport 是否同时下载敏感资产详情报告
                     * 
                     */
                    bool GetIsWithSensitiveDetailReport() const;

                    /**
                     * 设置是否同时下载敏感资产详情报告
                     * @param _isWithSensitiveDetailReport 是否同时下载敏感资产详情报告
                     * 
                     */
                    void SetIsWithSensitiveDetailReport(const bool& _isWithSensitiveDetailReport);

                    /**
                     * 判断参数 IsWithSensitiveDetailReport 是否已赋值
                     * @return IsWithSensitiveDetailReport 是否已赋值
                     * 
                     */
                    bool IsWithSensitiveDetailReportHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    uint64_t m_reportTaskId;
                    bool m_reportTaskIdHasBeenSet;

                    /**
                     * dspa实例id
                     */
                    std::string m_dspaId;
                    bool m_dspaIdHasBeenSet;

                    /**
                     * 是否同时下载敏感资产详情报告
                     */
                    bool m_isWithSensitiveDetailReport;
                    bool m_isWithSensitiveDetailReportHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEREPORTTASKDOWNLOADURLREQUEST_H_
