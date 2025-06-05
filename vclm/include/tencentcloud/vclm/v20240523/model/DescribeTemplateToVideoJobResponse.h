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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBETEMPLATETOVIDEOJOBRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBETEMPLATETOVIDEOJOBRESPONSE_H_

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
                * DescribeTemplateToVideoJob返回参数结构体
                */
                class DescribeTemplateToVideoJobResponse : public AbstractModel
                {
                public:
                    DescribeTemplateToVideoJobResponse();
                    ~DescribeTemplateToVideoJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
                     * @return Status 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
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
                     * @return ErrorCode 任务执行错误码。当任务状态不为 FAIL 时，该值为""。
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
                     * @return ErrorMessage 任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
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
                     * @return ResultVideoUrl 结果视频 URL。有效期 24 小时。
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
                     * 任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务执行错误码。当任务状态不为 FAIL 时，该值为""。
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 任务执行错误信息。当任务状态不为 FAIL 时，该值为""。
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 结果视频 URL。有效期 24 小时。
                     */
                    std::string m_resultVideoUrl;
                    bool m_resultVideoUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBETEMPLATETOVIDEOJOBRESPONSE_H_
