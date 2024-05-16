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

#ifndef TENCENTCLOUD_VTC_V20240223_MODEL_DESCRIBEVIDEOTRANSLATEJOBRESPONSE_H_
#define TENCENTCLOUD_VTC_V20240223_MODEL_DESCRIBEVIDEOTRANSLATEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vtc/v20240223/model/TranslateResult.h>
#include <tencentcloud/vtc/v20240223/model/AsrTimestamps.h>


namespace TencentCloud
{
    namespace Vtc
    {
        namespace V20240223
        {
            namespace Model
            {
                /**
                * DescribeVideoTranslateJob返回参数结构体
                */
                class DescribeVideoTranslateJobResponse : public AbstractModel
                {
                public:
                    DescribeVideoTranslateJobResponse();
                    ~DescribeVideoTranslateJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态。 1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     * @return JobStatus 任务状态。 1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     * 
                     */
                    int64_t GetJobStatus() const;

                    /**
                     * 判断参数 JobStatus 是否已赋值
                     * @return JobStatus 是否已赋值
                     * 
                     */
                    bool JobStatusHasBeenSet() const;

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
                     * 获取视频翻译结果。
                     * @return ResultVideoUrl 视频翻译结果。
                     * 
                     */
                    std::string GetResultVideoUrl() const;

                    /**
                     * 判断参数 ResultVideoUrl 是否已赋值
                     * @return ResultVideoUrl 是否已赋值
                     * 
                     */
                    bool ResultVideoUrlHasBeenSet() const;

                    /**
                     * 获取音频翻译结果。
                     * @return TranslateResults 音频翻译结果。
                     * 
                     */
                    std::vector<TranslateResult> GetTranslateResults() const;

                    /**
                     * 判断参数 TranslateResults 是否已赋值
                     * @return TranslateResults 是否已赋值
                     * 
                     */
                    bool TranslateResultsHasBeenSet() const;

                    /**
                     * 获取是否需要确认翻译结果。0：不需要，1：需要
                     * @return JobConfirm 是否需要确认翻译结果。0：不需要，1：需要
                     * 
                     */
                    int64_t GetJobConfirm() const;

                    /**
                     * 判断参数 JobConfirm 是否已赋值
                     * @return JobConfirm 是否已赋值
                     * 
                     */
                    bool JobConfirmHasBeenSet() const;

                    /**
                     * 获取音频任务 ID
                     * @return JobAudioTaskId 音频任务 ID
                     * 
                     */
                    std::string GetJobAudioTaskId() const;

                    /**
                     * 判断参数 JobAudioTaskId 是否已赋值
                     * @return JobAudioTaskId 是否已赋值
                     * 
                     */
                    bool JobAudioTaskIdHasBeenSet() const;

                    /**
                     * 获取视频审核任务ID
                     * @return JobVideoModerationId 视频审核任务ID
                     * 
                     */
                    std::string GetJobVideoModerationId() const;

                    /**
                     * 判断参数 JobVideoModerationId 是否已赋值
                     * @return JobVideoModerationId 是否已赋值
                     * 
                     */
                    bool JobVideoModerationIdHasBeenSet() const;

                    /**
                     * 获取视频生成任务 ID
                     * @return JobVideoId 视频生成任务 ID
                     * 
                     */
                    std::string GetJobVideoId() const;

                    /**
                     * 判断参数 JobVideoId 是否已赋值
                     * @return JobVideoId 是否已赋值
                     * 
                     */
                    bool JobVideoIdHasBeenSet() const;

                    /**
                     * 获取视频素材原始 URL
                     * @return OriginalVideoUrl 视频素材原始 URL
                     * 
                     */
                    std::string GetOriginalVideoUrl() const;

                    /**
                     * 判断参数 OriginalVideoUrl 是否已赋值
                     * @return OriginalVideoUrl 是否已赋值
                     * 
                     */
                    bool OriginalVideoUrlHasBeenSet() const;

                    /**
                     * 获取文本片段及其时间戳
                     * @return AsrTimestamps 文本片段及其时间戳
                     * 
                     */
                    std::vector<AsrTimestamps> GetAsrTimestamps() const;

                    /**
                     * 判断参数 AsrTimestamps 是否已赋值
                     * @return AsrTimestamps 是否已赋值
                     * 
                     */
                    bool AsrTimestampsHasBeenSet() const;

                    /**
                     * 获取提交视频翻译任务时的 requestId
                     * @return JobSubmitReqId 提交视频翻译任务时的 requestId
                     * 
                     */
                    std::string GetJobSubmitReqId() const;

                    /**
                     * 判断参数 JobSubmitReqId 是否已赋值
                     * @return JobSubmitReqId 是否已赋值
                     * 
                     */
                    bool JobSubmitReqIdHasBeenSet() const;

                    /**
                     * 获取音频审核任务 ID
                     * @return JobAudioModerationId 音频审核任务 ID
                     * 
                     */
                    std::string GetJobAudioModerationId() const;

                    /**
                     * 判断参数 JobAudioModerationId 是否已赋值
                     * @return JobAudioModerationId 是否已赋值
                     * 
                     */
                    bool JobAudioModerationIdHasBeenSet() const;

                private:

                    /**
                     * 任务状态。 1：音频翻译中。 2：音频翻译失败。 3：音频翻译成功。 4：音频结果待确认。 5：音频结果已确认完毕。6：视频翻译中。 7：视频翻译失败。 8：视频翻译成功。
                     */
                    int64_t m_jobStatus;
                    bool m_jobStatusHasBeenSet;

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
                     * 视频翻译结果。
                     */
                    std::string m_resultVideoUrl;
                    bool m_resultVideoUrlHasBeenSet;

                    /**
                     * 音频翻译结果。
                     */
                    std::vector<TranslateResult> m_translateResults;
                    bool m_translateResultsHasBeenSet;

                    /**
                     * 是否需要确认翻译结果。0：不需要，1：需要
                     */
                    int64_t m_jobConfirm;
                    bool m_jobConfirmHasBeenSet;

                    /**
                     * 音频任务 ID
                     */
                    std::string m_jobAudioTaskId;
                    bool m_jobAudioTaskIdHasBeenSet;

                    /**
                     * 视频审核任务ID
                     */
                    std::string m_jobVideoModerationId;
                    bool m_jobVideoModerationIdHasBeenSet;

                    /**
                     * 视频生成任务 ID
                     */
                    std::string m_jobVideoId;
                    bool m_jobVideoIdHasBeenSet;

                    /**
                     * 视频素材原始 URL
                     */
                    std::string m_originalVideoUrl;
                    bool m_originalVideoUrlHasBeenSet;

                    /**
                     * 文本片段及其时间戳
                     */
                    std::vector<AsrTimestamps> m_asrTimestamps;
                    bool m_asrTimestampsHasBeenSet;

                    /**
                     * 提交视频翻译任务时的 requestId
                     */
                    std::string m_jobSubmitReqId;
                    bool m_jobSubmitReqIdHasBeenSet;

                    /**
                     * 音频审核任务 ID
                     */
                    std::string m_jobAudioModerationId;
                    bool m_jobAudioModerationIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VTC_V20240223_MODEL_DESCRIBEVIDEOTRANSLATEJOBRESPONSE_H_
