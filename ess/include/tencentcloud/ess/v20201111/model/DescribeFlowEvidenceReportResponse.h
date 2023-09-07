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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWEVIDENCEREPORTRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWEVIDENCEREPORTRESPONSE_H_

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
                * DescribeFlowEvidenceReport返回参数结构体
                */
                class DescribeFlowEvidenceReportResponse : public AbstractModel
                {
                public:
                    DescribeFlowEvidenceReportResponse();
                    ~DescribeFlowEvidenceReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取出证报告PDF的下载 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportUrl 出证报告PDF的下载 URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     * 
                     */
                    bool ReportUrlHasBeenSet() const;

                    /**
                     * 获取签署报告出证任务的状态
<ul>
<li>EvidenceStatusExecuting : 出证任务在执行中</li>
<li>EvidenceStatusSuccess : 出证任务执行成功</li>
<li>EvidenceStatusFailed : 出证任务执行失败</li>
</ul>
                     * @return Status 签署报告出证任务的状态
<ul>
<li>EvidenceStatusExecuting : 出证任务在执行中</li>
<li>EvidenceStatusSuccess : 出证任务执行成功</li>
<li>EvidenceStatusFailed : 出证任务执行失败</li>
</ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 出证报告PDF的下载 URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                    /**
                     * 签署报告出证任务的状态
<ul>
<li>EvidenceStatusExecuting : 出证任务在执行中</li>
<li>EvidenceStatusSuccess : 出证任务执行成功</li>
<li>EvidenceStatusFailed : 出证任务执行失败</li>
</ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEFLOWEVIDENCEREPORTRESPONSE_H_
