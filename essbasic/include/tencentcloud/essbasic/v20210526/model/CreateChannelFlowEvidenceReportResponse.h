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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECHANNELFLOWEVIDENCEREPORTRESPONSE_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECHANNELFLOWEVIDENCEREPORTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * CreateChannelFlowEvidenceReport返回参数结构体
                */
                class CreateChannelFlowEvidenceReportResponse : public AbstractModel
                {
                public:
                    CreateChannelFlowEvidenceReportResponse();
                    ~CreateChannelFlowEvidenceReportResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取出证报告 ID，可用户DescribeChannelFlowEvidenceReport接口查询出证PDF的下载地址

注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportId 出证报告 ID，可用户DescribeChannelFlowEvidenceReport接口查询出证PDF的下载地址

注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取出征任务的执行状态,状态列表如下

- EvidenceStatusExecuting : 出征任务正在执行中
- EvidenceStatusSuccess : 出征任务执行成功
- EvidenceStatusFailed : 出征任务执行失败
                     * @return Status 出征任务的执行状态,状态列表如下

- EvidenceStatusExecuting : 出征任务正在执行中
- EvidenceStatusSuccess : 出征任务执行成功
- EvidenceStatusFailed : 出征任务执行失败
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取废除，字段无效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportUrl 废除，字段无效
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

                private:

                    /**
                     * 出证报告 ID，可用户DescribeChannelFlowEvidenceReport接口查询出证PDF的下载地址

注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * 出征任务的执行状态,状态列表如下

- EvidenceStatusExecuting : 出征任务正在执行中
- EvidenceStatusSuccess : 出征任务执行成功
- EvidenceStatusFailed : 出征任务执行失败
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 废除，字段无效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATECHANNELFLOWEVIDENCEREPORTRESPONSE_H_
