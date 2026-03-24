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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWMARKEDRISKEXPORTTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWMARKEDRISKEXPORTTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeContractReviewMarkedRiskExportTask返回参数结构体
                */
                class DescribeContractReviewMarkedRiskExportTaskResponse : public AbstractModel
                {
                public:
                    DescribeContractReviewMarkedRiskExportTaskResponse();
                    ~DescribeContractReviewMarkedRiskExportTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导出文件 url。
                     * @return Url 导出文件 url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取任务状态。未知 = 0;   创建完成 = 1;   队列中 = 2;   执行中 = 3;   执行成功 = 4;   失败 = 5;   终止 = 6;
                     * @return Status 任务状态。未知 = 0;   创建完成 = 1;   队列中 = 2;   执行中 = 3;   执行成功 = 4;   失败 = 5;   终止 = 6;
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 导出文件 url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 任务状态。未知 = 0;   创建完成 = 1;   队列中 = 2;   执行中 = 3;   执行成功 = 4;   失败 = 5;   终止 = 6;
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTREVIEWMARKEDRISKEXPORTTASKRESPONSE_H_
