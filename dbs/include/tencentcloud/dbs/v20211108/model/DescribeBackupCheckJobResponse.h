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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPCHECKJOBRESPONSE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPCHECKJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * DescribeBackupCheckJob返回参数结构体
                */
                class DescribeBackupCheckJobResponse : public AbstractModel
                {
                public:
                    DescribeBackupCheckJobResponse();
                    ~DescribeBackupCheckJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取校验任务状态。可能的取值为："finished" - 已完成; "running" - 进行中。
                     * @return Status 校验任务状态。可能的取值为："finished" - 已完成; "running" - 进行中。
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
                     * 获取任务进度。取值范围为[0, 100]，表示任务完成的百分比。例如：30表示任务完成30%。
                     * @return Progress 任务进度。取值范围为[0, 100]，表示任务完成的百分比。例如：30表示任务完成30%。
                     * 
                     */
                    int64_t GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取校验是否通过标记。可能的取值为："1" - 校验通过;"0" - 校验未通过。
                     * @return CheckFlag 校验是否通过标记。可能的取值为："1" - 校验通过;"0" - 校验未通过。
                     * 
                     */
                    int64_t GetCheckFlag() const;

                    /**
                     * 判断参数 CheckFlag 是否已赋值
                     * @return CheckFlag 是否已赋值
                     * 
                     */
                    bool CheckFlagHasBeenSet() const;

                    /**
                     * 获取错误信息。
                     * @return ErrMessage 错误信息。
                     * 
                     */
                    std::string GetErrMessage() const;

                    /**
                     * 判断参数 ErrMessage 是否已赋值
                     * @return ErrMessage 是否已赋值
                     * 
                     */
                    bool ErrMessageHasBeenSet() const;

                private:

                    /**
                     * 校验任务状态。可能的取值为："finished" - 已完成; "running" - 进行中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务进度。取值范围为[0, 100]，表示任务完成的百分比。例如：30表示任务完成30%。
                     */
                    int64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 校验是否通过标记。可能的取值为："1" - 校验通过;"0" - 校验未通过。
                     */
                    int64_t m_checkFlag;
                    bool m_checkFlagHasBeenSet;

                    /**
                     * 错误信息。
                     */
                    std::string m_errMessage;
                    bool m_errMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_DESCRIBEBACKUPCHECKJOBRESPONSE_H_
