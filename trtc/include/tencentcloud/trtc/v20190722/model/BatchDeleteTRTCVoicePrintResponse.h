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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_BATCHDELETETRTCVOICEPRINTRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_BATCHDELETETRTCVOICEPRINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/VoicePrintBatchDeleteResult.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * BatchDeleteTRTCVoicePrint返回参数结构体
                */
                class BatchDeleteTRTCVoicePrintResponse : public AbstractModel
                {
                public:
                    BatchDeleteTRTCVoicePrintResponse();
                    ~BatchDeleteTRTCVoicePrintResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取成功删除的声纹数量（按数据库实际删除行数统计）
                     * @return SuccessCount 成功删除的声纹数量（按数据库实际删除行数统计）
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取失败的声纹数量（通常是因为声纹不存在）
                     * @return FailCount 失败的声纹数量（通常是因为声纹不存在）
                     * 
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取每个 VoicePrintId 的处理结果列表，元素为 VoicePrintBatchDeleteResult结构：{ VoiceprintId:string, ErrorCode:string, ErrorMessage:string }，成功项仅返回 VoiceprintId，失败项带 ErrorCode/ErrorMessage。
                     * @return Results 每个 VoicePrintId 的处理结果列表，元素为 VoicePrintBatchDeleteResult结构：{ VoiceprintId:string, ErrorCode:string, ErrorMessage:string }，成功项仅返回 VoiceprintId，失败项带 ErrorCode/ErrorMessage。
                     * 
                     */
                    std::vector<VoicePrintBatchDeleteResult> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                    /**
                     * 获取结果描述，成功时为 batch delete completed: X succeeded, Y failed
                     * @return Message 结果描述，成功时为 batch delete completed: X succeeded, Y failed
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 成功删除的声纹数量（按数据库实际删除行数统计）
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 失败的声纹数量（通常是因为声纹不存在）
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 每个 VoicePrintId 的处理结果列表，元素为 VoicePrintBatchDeleteResult结构：{ VoiceprintId:string, ErrorCode:string, ErrorMessage:string }，成功项仅返回 VoiceprintId，失败项带 ErrorCode/ErrorMessage。
                     */
                    std::vector<VoicePrintBatchDeleteResult> m_results;
                    bool m_resultsHasBeenSet;

                    /**
                     * 结果描述，成功时为 batch delete completed: X succeeded, Y failed
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_BATCHDELETETRTCVOICEPRINTRESPONSE_H_
