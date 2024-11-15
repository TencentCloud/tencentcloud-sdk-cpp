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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEPORTRAITSINGJOBRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEPORTRAITSINGJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vclm
    {
        namespace V20240523
        {
            namespace Model
            {
                /**
                * DescribePortraitSingJob返回参数结构体
                */
                class DescribePortraitSingJobResponse : public AbstractModel
                {
                public:
                    DescribePortraitSingJobResponse();
                    ~DescribePortraitSingJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID
                     * @return JobId 任务ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取任务状态码
—RUN：处理中
—FAIL：处理失败
—STOP：处理终止
—DONE：处理完成
                     * @return StatusCode 任务状态码
—RUN：处理中
—FAIL：处理失败
—STOP：处理终止
—DONE：处理完成
                     * 
                     */
                    std::string GetStatusCode() const;

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取任务状态信息
                     * @return StatusMsg 任务状态信息
                     * 
                     */
                    std::string GetStatusMsg() const;

                    /**
                     * 判断参数 StatusMsg 是否已赋值
                     * @return StatusMsg 是否已赋值
                     * 
                     */
                    bool StatusMsgHasBeenSet() const;

                    /**
                     * 获取任务执行错误码。当任务状态不为FAIL时，该值为""。
                     * @return ErrorCode 任务执行错误码。当任务状态不为FAIL时，该值为""。
                     * 
                     */
                    std::string GetErrorCode() const;

                    /**
                     * 判断参数 ErrorCode 是否已赋值
                     * @return ErrorCode 是否已赋值
                     * 
                     */
                    bool ErrorCodeHasBeenSet() const;

                    /**
                     * 获取任务执行错误信息。当任务状态不为FAIL时，该值为""。
                     * @return ErrorMessage 任务执行错误信息。当任务状态不为FAIL时，该值为""。
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
                     * 获取生成视频的URL地址。有效期24小时。
                     * @return ResultVideoUrl 生成视频的URL地址。有效期24小时。
                     * 
                     */
                    std::string GetResultVideoUrl() const;

                    /**
                     * 判断参数 ResultVideoUrl 是否已赋值
                     * @return ResultVideoUrl 是否已赋值
                     * 
                     */
                    bool ResultVideoUrlHasBeenSet() const;

                private:

                    /**
                     * 任务ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务状态码
—RUN：处理中
—FAIL：处理失败
—STOP：处理终止
—DONE：处理完成
                     */
                    std::string m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 任务状态信息
                     */
                    std::string m_statusMsg;
                    bool m_statusMsgHasBeenSet;

                    /**
                     * 任务执行错误码。当任务状态不为FAIL时，该值为""。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 任务执行错误信息。当任务状态不为FAIL时，该值为""。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 生成视频的URL地址。有效期24小时。
                     */
                    std::string m_resultVideoUrl;
                    bool m_resultVideoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEPORTRAITSINGJOBRESPONSE_H_
