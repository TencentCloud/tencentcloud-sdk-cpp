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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANIMAGECHATJOBRESPONSE_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANIMAGECHATJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/History.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * QueryHunyuanImageChatJob返回参数结构体
                */
                class QueryHunyuanImageChatJobResponse : public AbstractModel
                {
                public:
                    QueryHunyuanImageChatJobResponse();
                    ~QueryHunyuanImageChatJobResponse() = default;
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
                     * 获取本轮对话的 ChatId，ChatId 用于唯一标识一轮对话。
一个对话组中，最多支持进行100轮对话。
每轮对话数据有效期为7天，到期后 ChatId 失效，有效期内的历史对话数据可通过 History 查询，如有长期使用需求请及时保存输入输出数据。
                     * @return ChatId 本轮对话的 ChatId，ChatId 用于唯一标识一轮对话。
一个对话组中，最多支持进行100轮对话。
每轮对话数据有效期为7天，到期后 ChatId 失效，有效期内的历史对话数据可通过 History 查询，如有长期使用需求请及时保存输入输出数据。
                     * 
                     */
                    std::string GetChatId() const;

                    /**
                     * 判断参数 ChatId 是否已赋值
                     * @return ChatId 是否已赋值
                     * 
                     */
                    bool ChatIdHasBeenSet() const;

                    /**
                     * 获取生成图 URL 列表，有效期7天，请及时保存。
                     * @return ResultImage 生成图 URL 列表，有效期7天，请及时保存。
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
                     * 获取本轮对话前置的历史对话数据（不含生成图）。
                     * @return History 本轮对话前置的历史对话数据（不含生成图）。
                     * 
                     */
                    std::vector<History> GetHistory() const;

                    /**
                     * 判断参数 History 是否已赋值
                     * @return History 是否已赋值
                     * 
                     */
                    bool HistoryHasBeenSet() const;

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
                     * 本轮对话的 ChatId，ChatId 用于唯一标识一轮对话。
一个对话组中，最多支持进行100轮对话。
每轮对话数据有效期为7天，到期后 ChatId 失效，有效期内的历史对话数据可通过 History 查询，如有长期使用需求请及时保存输入输出数据。
                     */
                    std::string m_chatId;
                    bool m_chatIdHasBeenSet;

                    /**
                     * 生成图 URL 列表，有效期7天，请及时保存。
                     */
                    std::vector<std::string> m_resultImage;
                    bool m_resultImageHasBeenSet;

                    /**
                     * 结果 detail 数组，Success 代表成功。

                     */
                    std::vector<std::string> m_resultDetails;
                    bool m_resultDetailsHasBeenSet;

                    /**
                     * 本轮对话前置的历史对话数据（不含生成图）。
                     */
                    std::vector<History> m_history;
                    bool m_historyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_QUERYHUNYUANIMAGECHATJOBRESPONSE_H_
