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

#ifndef TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKREPORTURLRESPONSE_H_
#define TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKREPORTURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Acp
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * DescribeScanTaskReportUrl返回参数结构体
                */
                class DescribeScanTaskReportUrlResponse : public AbstractModel
                {
                public:
                    DescribeScanTaskReportUrlResponse();
                    ~DescribeScanTaskReportUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回值, 0:成功, 其他值请查看“返回值”定义
                     * @return Result 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取诊断报告/堆栈信息下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportUrl 诊断报告/堆栈信息下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportUrl() const;

                    /**
                     * 判断参数 ReportUrl 是否已赋值
                     * @return ReportUrl 是否已赋值
                     */
                    bool ReportUrlHasBeenSet() const;

                    /**
                     * 获取诊断报告/堆栈名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportTitle 诊断报告/堆栈名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetReportTitle() const;

                    /**
                     * 判断参数 ReportTitle 是否已赋值
                     * @return ReportTitle 是否已赋值
                     */
                    bool ReportTitleHasBeenSet() const;

                private:

                    /**
                     * 返回值, 0:成功, 其他值请查看“返回值”定义
                     */
                    int64_t m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 诊断报告/堆栈信息下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportUrl;
                    bool m_reportUrlHasBeenSet;

                    /**
                     * 诊断报告/堆栈名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportTitle;
                    bool m_reportTitleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACP_V20220105_MODEL_DESCRIBESCANTASKREPORTURLRESPONSE_H_
