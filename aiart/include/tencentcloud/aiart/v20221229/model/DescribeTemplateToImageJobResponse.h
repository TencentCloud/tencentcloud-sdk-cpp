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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_DESCRIBETEMPLATETOIMAGEJOBRESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_DESCRIBETEMPLATETOIMAGEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aiart
    {
        namespace V20221229
        {
            namespace Model
            {
                /**
                * DescribeTemplateToImageJob返回参数结构体
                */
                class DescribeTemplateToImageJobResponse : public AbstractModel
                {
                public:
                    DescribeTemplateToImageJobResponse();
                    ~DescribeTemplateToImageJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前任务状态码：
1：等待中、2：运行中、4：处理失败、5：处理完成。
                     * @return Status 当前任务状态码：
1：等待中、2：运行中、4：处理失败、5：处理完成。
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
                     * 获取任务处理失败错误码。

                     * @return ErrorCode 任务处理失败错误码。

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
                     * 获取任务处理失败错误信息。

                     * @return ErrorMessage 任务处理失败错误信息。

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
                     * 获取生成图 URL 列表，有效期1小时，请及时保存。

                     * @return ResultImage 生成图 URL 列表，有效期1小时，请及时保存。

                     * 
                     */
                    std::vector<std::string> GetResultImage() const;

                    /**
                     * 判断参数 ResultImage 是否已赋值
                     * @return ResultImage 是否已赋值
                     * 
                     */
                    bool ResultImageHasBeenSet() const;

                private:

                    /**
                     * 当前任务状态码：
1：等待中、2：运行中、4：处理失败、5：处理完成。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务处理失败错误码。

                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * 任务处理失败错误信息。

                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * 生成图 URL 列表，有效期1小时，请及时保存。

                     */
                    std::vector<std::string> m_resultImage;
                    bool m_resultImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_DESCRIBETEMPLATETOIMAGEJOBRESPONSE_H_
