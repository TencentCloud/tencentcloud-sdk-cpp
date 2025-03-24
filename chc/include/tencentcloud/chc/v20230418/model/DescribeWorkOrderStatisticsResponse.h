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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERSTATISTICSRESPONSE_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERSTATISTICSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeWorkOrderStatistics返回参数结构体
                */
                class DescribeWorkOrderStatisticsResponse : public AbstractModel
                {
                public:
                    DescribeWorkOrderStatisticsResponse();
                    ~DescribeWorkOrderStatisticsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总工单数量
                     * @return TotalNum 总工单数量
                     * 
                     */
                    uint64_t GetTotalNum() const;

                    /**
                     * 判断参数 TotalNum 是否已赋值
                     * @return TotalNum 是否已赋值
                     * 
                     */
                    bool TotalNumHasBeenSet() const;

                    /**
                     * 获取进行中的工单数量
                     * @return ProcessingNum 进行中的工单数量
                     * 
                     */
                    uint64_t GetProcessingNum() const;

                    /**
                     * 判断参数 ProcessingNum 是否已赋值
                     * @return ProcessingNum 是否已赋值
                     * 
                     */
                    bool ProcessingNumHasBeenSet() const;

                    /**
                     * 获取待确认的工单数量
                     * @return ConfirmingNum 待确认的工单数量
                     * 
                     */
                    uint64_t GetConfirmingNum() const;

                    /**
                     * 判断参数 ConfirmingNum 是否已赋值
                     * @return ConfirmingNum 是否已赋值
                     * 
                     */
                    bool ConfirmingNumHasBeenSet() const;

                    /**
                     * 获取完成的工单数量
                     * @return FinishNum 完成的工单数量
                     * 
                     */
                    uint64_t GetFinishNum() const;

                    /**
                     * 判断参数 FinishNum 是否已赋值
                     * @return FinishNum 是否已赋值
                     * 
                     */
                    bool FinishNumHasBeenSet() const;

                    /**
                     * 获取拒绝的工单数量
                     * @return RejectNum 拒绝的工单数量
                     * 
                     */
                    uint64_t GetRejectNum() const;

                    /**
                     * 判断参数 RejectNum 是否已赋值
                     * @return RejectNum 是否已赋值
                     * 
                     */
                    bool RejectNumHasBeenSet() const;

                    /**
                     * 获取异常的工单数量
                     * @return ExceptionNum 异常的工单数量
                     * 
                     */
                    uint64_t GetExceptionNum() const;

                    /**
                     * 判断参数 ExceptionNum 是否已赋值
                     * @return ExceptionNum 是否已赋值
                     * 
                     */
                    bool ExceptionNumHasBeenSet() const;

                    /**
                     * 获取客户取消的工单数量
                     * @return CancelNum 客户取消的工单数量
                     * 
                     */
                    uint64_t GetCancelNum() const;

                    /**
                     * 判断参数 CancelNum 是否已赋值
                     * @return CancelNum 是否已赋值
                     * 
                     */
                    bool CancelNumHasBeenSet() const;

                    /**
                     * 获取围笼进出审核的工单数量
                     * @return CheckingNum 围笼进出审核的工单数量
                     * 
                     */
                    uint64_t GetCheckingNum() const;

                    /**
                     * 判断参数 CheckingNum 是否已赋值
                     * @return CheckingNum 是否已赋值
                     * 
                     */
                    bool CheckingNumHasBeenSet() const;

                private:

                    /**
                     * 总工单数量
                     */
                    uint64_t m_totalNum;
                    bool m_totalNumHasBeenSet;

                    /**
                     * 进行中的工单数量
                     */
                    uint64_t m_processingNum;
                    bool m_processingNumHasBeenSet;

                    /**
                     * 待确认的工单数量
                     */
                    uint64_t m_confirmingNum;
                    bool m_confirmingNumHasBeenSet;

                    /**
                     * 完成的工单数量
                     */
                    uint64_t m_finishNum;
                    bool m_finishNumHasBeenSet;

                    /**
                     * 拒绝的工单数量
                     */
                    uint64_t m_rejectNum;
                    bool m_rejectNumHasBeenSet;

                    /**
                     * 异常的工单数量
                     */
                    uint64_t m_exceptionNum;
                    bool m_exceptionNumHasBeenSet;

                    /**
                     * 客户取消的工单数量
                     */
                    uint64_t m_cancelNum;
                    bool m_cancelNumHasBeenSet;

                    /**
                     * 围笼进出审核的工单数量
                     */
                    uint64_t m_checkingNum;
                    bool m_checkingNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEWORKORDERSTATISTICSRESPONSE_H_
