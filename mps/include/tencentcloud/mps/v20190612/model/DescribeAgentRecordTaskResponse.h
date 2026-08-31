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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAGENTRECORDTASKRESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAGENTRECORDTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeAgentRecordTask返回参数结构体
                */
                class DescribeAgentRecordTaskResponse : public AbstractModel
                {
                public:
                    DescribeAgentRecordTaskResponse();
                    ~DescribeAgentRecordTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务当前状态。 </p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>RUNNING： 执行中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li></ul>
                     * @return Status <p>任务当前状态。 </p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>RUNNING： 执行中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li></ul>
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
                     * 获取<p>当任务状态为 FAILED 时，返回失败信息。</p>
                     * @return ErrorMessage <p>当任务状态为 FAILED 时，返回失败信息。</p>
                     * 
                     */
                    std::string GetErrorMessage() const;

                    /**
                     * 判断参数 ErrorMessage 是否已赋值
                     * @return ErrorMessage 是否已赋值
                     * 
                     */
                    bool ErrorMessageHasBeenSet() const;

                    /**
                     * 获取<p>当任务状态为 SUCCESS 时，返回录制文件Url列表。</p>
                     * @return RecordUrls <p>当任务状态为 SUCCESS 时，返回录制文件Url列表。</p>
                     * 
                     */
                    std::vector<std::string> GetRecordUrls() const;

                    /**
                     * 判断参数 RecordUrls 是否已赋值
                     * @return RecordUrls 是否已赋值
                     * 
                     */
                    bool RecordUrlsHasBeenSet() const;

                private:

                    /**
                     * <p>任务当前状态。 </p><p>枚举值：</p><ul><li>WAITING： 等待中</li><li>RUNNING： 执行中</li><li>SUCCESS： 成功</li><li>FAILED： 失败</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>当任务状态为 FAILED 时，返回失败信息。</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>当任务状态为 SUCCESS 时，返回录制文件Url列表。</p>
                     */
                    std::vector<std::string> m_recordUrls;
                    bool m_recordUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEAGENTRECORDTASKRESPONSE_H_
