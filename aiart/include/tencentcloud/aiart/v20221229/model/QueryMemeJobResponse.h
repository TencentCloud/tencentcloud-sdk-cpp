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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_QUERYMEMEJOBRESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_QUERYMEMEJOBRESPONSE_H_

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
                * QueryMemeJob返回参数结构体
                */
                class QueryMemeJobResponse : public AbstractModel
                {
                public:
                    QueryMemeJobResponse();
                    ~QueryMemeJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前任务状态码：
1：等待中、2：运行中、4：处理失败、5：处理完成。
                     * @return JobStatusCode 当前任务状态码：
1：等待中、2：运行中、4：处理失败、5：处理完成。
                     * 
                     */
                    std::string GetJobStatusCode() const;

                    /**
                     * 判断参数 JobStatusCode 是否已赋值
                     * @return JobStatusCode 是否已赋值
                     * 
                     */
                    bool JobStatusCodeHasBeenSet() const;

                    /**
                     * 获取当前任务状态：排队中、处理中、处理失败或者处理完成。
                     * @return JobStatusMsg 当前任务状态：排队中、处理中、处理失败或者处理完成。
                     * 
                     */
                    std::string GetJobStatusMsg() const;

                    /**
                     * 判断参数 JobStatusMsg 是否已赋值
                     * @return JobStatusMsg 是否已赋值
                     * 
                     */
                    bool JobStatusMsgHasBeenSet() const;

                    /**
                     * 获取任务处理失败错误码。

                     * @return JobErrorCode 任务处理失败错误码。

                     * 
                     */
                    std::string GetJobErrorCode() const;

                    /**
                     * 判断参数 JobErrorCode 是否已赋值
                     * @return JobErrorCode 是否已赋值
                     * 
                     */
                    bool JobErrorCodeHasBeenSet() const;

                    /**
                     * 获取任务处理失败错误信息。

                     * @return JobErrorMsg 任务处理失败错误信息。

                     * 
                     */
                    std::string GetJobErrorMsg() const;

                    /**
                     * 判断参数 JobErrorMsg 是否已赋值
                     * @return JobErrorMsg 是否已赋值
                     * 
                     */
                    bool JobErrorMsgHasBeenSet() const;

                    /**
                     * 获取生成图 URL，有效期1小时，请及时保存。
                     * @return ResultImage 生成图 URL，有效期1小时，请及时保存。
                     * 
                     */
                    std::string GetResultImage() const;

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
                    std::string m_jobStatusCode;
                    bool m_jobStatusCodeHasBeenSet;

                    /**
                     * 当前任务状态：排队中、处理中、处理失败或者处理完成。
                     */
                    std::string m_jobStatusMsg;
                    bool m_jobStatusMsgHasBeenSet;

                    /**
                     * 任务处理失败错误码。

                     */
                    std::string m_jobErrorCode;
                    bool m_jobErrorCodeHasBeenSet;

                    /**
                     * 任务处理失败错误信息。

                     */
                    std::string m_jobErrorMsg;
                    bool m_jobErrorMsgHasBeenSet;

                    /**
                     * 生成图 URL，有效期1小时，请及时保存。
                     */
                    std::string m_resultImage;
                    bool m_resultImageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_QUERYMEMEJOBRESPONSE_H_
