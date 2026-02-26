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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCVIDEOJOBRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCVIDEOJOBRESPONSE_H_

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
                * DescribeAigcVideoJob返回参数结构体
                */
                class DescribeAigcVideoJobResponse : public AbstractModel
                {
                public:
                    DescribeAigcVideoJobResponse();
                    ~DescribeAigcVideoJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
示例值：RUN
                     * @return Status 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
示例值：RUN
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
                     * 获取任务执行错误码。当任务状态不为 FAIL 时，该值为""。
示例值：FailedOperation.DriverFailed
                     * @return ErrorCode 任务执行错误码。当任务状态不为 FAIL 时，该值为""。
示例值：FailedOperation.DriverFailed
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
                     * 获取任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
示例值：驱动失败
                     * @return ErrorMessage 任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
示例值：驱动失败
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
                     * 获取结果视频 URL。有效期 24 小时。

示例值：https://console.cloud.tencent.com/result.mp4
                     * @return ResultUrl 结果视频 URL。有效期 24 小时。

示例值：https://console.cloud.tencent.com/result.mp4
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                private:

                    /**
                     * 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
示例值：RUN
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务执行错误码。当任务状态不为 FAIL 时，该值为""。
示例值：FailedOperation.DriverFailed
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
示例值：驱动失败
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 结果视频 URL。有效期 24 小时。

示例值：https://console.cloud.tencent.com/result.mp4
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEAIGCVIDEOJOBRESPONSE_H_
