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

#ifndef TENCENTCLOUD_AIART_V20221229_MODEL_QUERYTEXTTOIMAGEPROJOBRESPONSE_H_
#define TENCENTCLOUD_AIART_V20221229_MODEL_QUERYTEXTTOIMAGEPROJOBRESPONSE_H_

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
                * QueryTextToImageProJob返回参数结构体
                */
                class QueryTextToImageProJobResponse : public AbstractModel
                {
                public:
                    QueryTextToImageProJobResponse();
                    ~QueryTextToImageProJobResponse() = default;
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

                    /**
                     * 获取结果 detail 数组，Success 代表成功。

                     * @return ResultDetails 结果 detail 数组，Success 代表成功。

                     * 
                     */
                    std::vector<std::string> GetResultDetails() const;

                    /**
                     * 判断参数 ResultDetails 是否已赋值
                     * @return ResultDetails 是否已赋值
                     * 
                     */
                    bool ResultDetailsHasBeenSet() const;

                    /**
                     * 获取对应 SubmitTextToImageProJob 接口中 Revise 参数。开启扩写时，返回扩写后的 prompt 文本。 如果关闭扩写，将直接返回原始输入的 prompt。
                     * @return RevisedPrompt 对应 SubmitTextToImageProJob 接口中 Revise 参数。开启扩写时，返回扩写后的 prompt 文本。 如果关闭扩写，将直接返回原始输入的 prompt。
                     * 
                     */
                    std::vector<std::string> GetRevisedPrompt() const;

                    /**
                     * 判断参数 RevisedPrompt 是否已赋值
                     * @return RevisedPrompt 是否已赋值
                     * 
                     */
                    bool RevisedPromptHasBeenSet() const;

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
                     * 生成图 URL 列表，有效期1小时，请及时保存。

                     */
                    std::vector<std::string> m_resultImage;
                    bool m_resultImageHasBeenSet;

                    /**
                     * 结果 detail 数组，Success 代表成功。

                     */
                    std::vector<std::string> m_resultDetails;
                    bool m_resultDetailsHasBeenSet;

                    /**
                     * 对应 SubmitTextToImageProJob 接口中 Revise 参数。开启扩写时，返回扩写后的 prompt 文本。 如果关闭扩写，将直接返回原始输入的 prompt。
                     */
                    std::vector<std::string> m_revisedPrompt;
                    bool m_revisedPromptHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AIART_V20221229_MODEL_QUERYTEXTTOIMAGEPROJOBRESPONSE_H_
