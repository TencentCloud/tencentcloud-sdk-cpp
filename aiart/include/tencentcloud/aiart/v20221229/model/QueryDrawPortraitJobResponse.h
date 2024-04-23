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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_QUERYDRAWPORTRAITJOBRESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_QUERYDRAWPORTRAITJOBRESPONSE_H_

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
                * QueryDrawPortraitJob返回参数结构体
                */
                class QueryDrawPortraitJobResponse : public AbstractModel
                {
                public:
                    QueryDrawPortraitJobResponse();
                    ~QueryDrawPortraitJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态码。
INIT: 初始化、WAIT：等待中、RUN：运行中、FAIL：处理失败、DONE：处理完成。
                     * @return JobStatusCode 任务状态码。
INIT: 初始化、WAIT：等待中、RUN：运行中、FAIL：处理失败、DONE：处理完成。
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
                     * 获取任务状态信息。
                     * @return JobStatusMsg 任务状态信息。
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
                     * 获取任务错误码。
                     * @return JobErrorCode 任务错误码。
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
                     * 获取任务错误信息。
                     * @return JobErrorMsg 任务错误信息。
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
                     * 获取结果 URL 数组。
URL 有效期1小时，请及时保存。
                     * @return ResultUrls 结果 URL 数组。
URL 有效期1小时，请及时保存。
                     * 
                     */
                    std::vector<std::string> GetResultUrls() const;

                    /**
                     * 判断参数 ResultUrls 是否已赋值
                     * @return ResultUrls 是否已赋值
                     * 
                     */
                    bool ResultUrlsHasBeenSet() const;

                    /**
                     * 获取结果描述数组。
                     * @return ResultDetails 结果描述数组。
                     * 
                     */
                    std::vector<std::string> GetResultDetails() const;

                    /**
                     * 判断参数 ResultDetails 是否已赋值
                     * @return ResultDetails 是否已赋值
                     * 
                     */
                    bool ResultDetailsHasBeenSet() const;

                private:

                    /**
                     * 任务状态码。
INIT: 初始化、WAIT：等待中、RUN：运行中、FAIL：处理失败、DONE：处理完成。
                     */
                    std::string m_jobStatusCode;
                    bool m_jobStatusCodeHasBeenSet;

                    /**
                     * 任务状态信息。
                     */
                    std::string m_jobStatusMsg;
                    bool m_jobStatusMsgHasBeenSet;

                    /**
                     * 任务错误码。
                     */
                    std::string m_jobErrorCode;
                    bool m_jobErrorCodeHasBeenSet;

                    /**
                     * 任务错误信息。
                     */
                    std::string m_jobErrorMsg;
                    bool m_jobErrorMsgHasBeenSet;

                    /**
                     * 结果 URL 数组。
URL 有效期1小时，请及时保存。
                     */
                    std::vector<std::string> m_resultUrls;
                    bool m_resultUrlsHasBeenSet;

                    /**
                     * 结果描述数组。
                     */
                    std::vector<std::string> m_resultDetails;
                    bool m_resultDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_QUERYDRAWPORTRAITJOBRESPONSE_H_
