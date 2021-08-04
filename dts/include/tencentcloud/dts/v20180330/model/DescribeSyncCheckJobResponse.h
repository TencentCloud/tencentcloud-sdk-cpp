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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESYNCCHECKJOBRESPONSE_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESYNCCHECKJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncCheckStepInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * DescribeSyncCheckJob返回参数结构体
                */
                class DescribeSyncCheckJobResponse : public AbstractModel
                {
                public:
                    DescribeSyncCheckJobResponse();
                    ~DescribeSyncCheckJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务校验状态： starting(开始中)，running(校验中)，finished(校验完成)
                     * @return Status 任务校验状态： starting(开始中)，running(校验中)，finished(校验完成)
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务校验结果代码
                     * @return ErrorCode 任务校验结果代码
                     */
                    int64_t GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取提示信息
                     * @return ErrorMessage 提示信息
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取任务执行步骤描述
                     * @return StepInfo 任务执行步骤描述
                     */
                    std::vector<SyncCheckStepInfo> GetStepInfo() const;

                    /**
                     * 判断参数 StepInfo 是否已赋值
                     * @return StepInfo 是否已赋值
                     */
                    bool StepInfoHasBeenSet() const;

                    /**
                     * 获取校验标志：0（尚未校验成功） ， 1（校验成功）
                     * @return CheckFlag 校验标志：0（尚未校验成功） ， 1（校验成功）
                     */
                    int64_t GetCheckFlag() const;

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     */
                    bool CheckFlagHasBeenSet() const;

                private:

                    /**
                     * 任务校验状态： starting(开始中)，running(校验中)，finished(校验完成)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务校验结果代码
                     */
                    int64_t m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 提示信息
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 任务执行步骤描述
                     */
                    std::vector<SyncCheckStepInfo> m_stepInfo;
                    bool m_stepInfoHasBeenSet;

                    /**
                     * 校验标志：0（尚未校验成功） ， 1（校验成功）
                     */
                    int64_t m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_DESCRIBESYNCCHECKJOBRESPONSE_H_
