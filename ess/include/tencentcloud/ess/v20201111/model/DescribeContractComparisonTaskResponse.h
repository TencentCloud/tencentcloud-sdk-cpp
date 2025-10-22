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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTCOMPARISONTASKRESPONSE_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTCOMPARISONTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ComparisonDetail.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeContractComparisonTask返回参数结构体
                */
                class DescribeContractComparisonTaskResponse : public AbstractModel
                {
                public:
                    DescribeContractComparisonTaskResponse();
                    ~DescribeContractComparisonTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取合同对比任务ID。
                     * @return TaskId 合同对比任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取合同对比任务状态。
状态如下：
<ul><li> **0**：待创建（未执行）</li>
<li> **1**：对比中</li>
<li> **2**：对比成功</li>
<li> **3**：对比失败</li>
</ul>
                     * @return Status 合同对比任务状态。
状态如下：
<ul><li> **0**：待创建（未执行）</li>
<li> **1**：对比中</li>
<li> **2**：对比成功</li>
<li> **3**：对比失败</li>
</ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取对比失败的具体原因描述，仅当状态为失败时返回此字段。
                     * @return Message 对比失败的具体原因描述，仅当状态为失败时返回此字段。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取原版文件ID，对比基准的旧版本文件唯一标识。
                     * @return OriginalFileResourceId 原版文件ID，对比基准的旧版本文件唯一标识。
                     * 
                     */
                    std::string GetOriginalFileResourceId() const;

                    /**
                     * 判断参数 OriginalFileResourceId 是否已赋值
                     * @return OriginalFileResourceId 是否已赋值
                     * 
                     */
                    bool OriginalFileResourceIdHasBeenSet() const;

                    /**
                     * 获取新版文件ID，与旧版进行对比的新版本文件唯一标识。
                     * @return DiffFileResourceId 新版文件ID，与旧版进行对比的新版本文件唯一标识。
                     * 
                     */
                    std::string GetDiffFileResourceId() const;

                    /**
                     * 判断参数 DiffFileResourceId 是否已赋值
                     * @return DiffFileResourceId 是否已赋值
                     * 
                     */
                    bool DiffFileResourceIdHasBeenSet() const;

                    /**
                     * 获取对比任务备注，长度不能超过50个字符。
                     * @return Comment 对比任务备注，长度不能超过50个字符。
                     * 
                     */
                    std::string GetComment() const;

                    /**
                     * 判断参数 Comment 是否已赋值
                     * @return Comment 是否已赋值
                     * 
                     */
                    bool CommentHasBeenSet() const;

                    /**
                     * 获取合同对比差异点总数。
                     * @return TotalDiffCount 合同对比差异点总数。
                     * 
                     */
                    int64_t GetTotalDiffCount() const;

                    /**
                     * 判断参数 TotalDiffCount 是否已赋值
                     * @return TotalDiffCount 是否已赋值
                     * 
                     */
                    bool TotalDiffCountHasBeenSet() const;

                    /**
                     * 获取合同对比新增点数量。
                     * @return AddDiffCount 合同对比新增点数量。
                     * 
                     */
                    int64_t GetAddDiffCount() const;

                    /**
                     * 判断参数 AddDiffCount 是否已赋值
                     * @return AddDiffCount 是否已赋值
                     * 
                     */
                    bool AddDiffCountHasBeenSet() const;

                    /**
                     * 获取合同对比修改点数量。
                     * @return ChangeDiffCount 合同对比修改点数量。
                     * 
                     */
                    int64_t GetChangeDiffCount() const;

                    /**
                     * 判断参数 ChangeDiffCount 是否已赋值
                     * @return ChangeDiffCount 是否已赋值
                     * 
                     */
                    bool ChangeDiffCountHasBeenSet() const;

                    /**
                     * 获取合同对比删除点数量。
                     * @return DeleteDiffCount 合同对比删除点数量。
                     * 
                     */
                    int64_t GetDeleteDiffCount() const;

                    /**
                     * 判断参数 DeleteDiffCount 是否已赋值
                     * @return DeleteDiffCount 是否已赋值
                     * 
                     */
                    bool DeleteDiffCountHasBeenSet() const;

                    /**
                     * 获取提交人，提交此任务或请求的用户唯一标识。
                     * @return Operator 提交人，提交此任务或请求的用户唯一标识。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取合同对比任务创建时间，时间戳。
                     * @return CreateTime 合同对比任务创建时间，时间戳。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取对比差异详情，请求参数ShowDetail为true时返回。
                     * @return ComparisonDetail 对比差异详情，请求参数ShowDetail为true时返回。
                     * 
                     */
                    std::vector<ComparisonDetail> GetComparisonDetail() const;

                    /**
                     * 判断参数 ComparisonDetail 是否已赋值
                     * @return ComparisonDetail 是否已赋值
                     * 
                     */
                    bool ComparisonDetailHasBeenSet() const;

                private:

                    /**
                     * 合同对比任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 合同对比任务状态。
状态如下：
<ul><li> **0**：待创建（未执行）</li>
<li> **1**：对比中</li>
<li> **2**：对比成功</li>
<li> **3**：对比失败</li>
</ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 对比失败的具体原因描述，仅当状态为失败时返回此字段。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 原版文件ID，对比基准的旧版本文件唯一标识。
                     */
                    std::string m_originalFileResourceId;
                    bool m_originalFileResourceIdHasBeenSet;

                    /**
                     * 新版文件ID，与旧版进行对比的新版本文件唯一标识。
                     */
                    std::string m_diffFileResourceId;
                    bool m_diffFileResourceIdHasBeenSet;

                    /**
                     * 对比任务备注，长度不能超过50个字符。
                     */
                    std::string m_comment;
                    bool m_commentHasBeenSet;

                    /**
                     * 合同对比差异点总数。
                     */
                    int64_t m_totalDiffCount;
                    bool m_totalDiffCountHasBeenSet;

                    /**
                     * 合同对比新增点数量。
                     */
                    int64_t m_addDiffCount;
                    bool m_addDiffCountHasBeenSet;

                    /**
                     * 合同对比修改点数量。
                     */
                    int64_t m_changeDiffCount;
                    bool m_changeDiffCountHasBeenSet;

                    /**
                     * 合同对比删除点数量。
                     */
                    int64_t m_deleteDiffCount;
                    bool m_deleteDiffCountHasBeenSet;

                    /**
                     * 提交人，提交此任务或请求的用户唯一标识。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 合同对比任务创建时间，时间戳。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 对比差异详情，请求参数ShowDetail为true时返回。
                     */
                    std::vector<ComparisonDetail> m_comparisonDetail;
                    bool m_comparisonDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBECONTRACTCOMPARISONTASKRESPONSE_H_
