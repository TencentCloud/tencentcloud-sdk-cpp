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

#ifndef TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEVIDEOEXTENDKLINGJOBRESPONSE_H_
#define TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEVIDEOEXTENDKLINGJOBRESPONSE_H_

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
                * DescribeVideoExtendKlingJob返回参数结构体
                */
                class DescribeVideoExtendKlingJobResponse : public AbstractModel
                {
                public:
                    DescribeVideoExtendKlingJobResponse();
                    ~DescribeVideoExtendKlingJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功</p>
                     * @return Status <p>任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功</p>
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
                     * 获取<p>任务执行错误码。当任务状态不为 FAIL 时，该值为&quot;&quot;。</p>
                     * @return ErrorCode <p>任务执行错误码。当任务状态不为 FAIL 时，该值为&quot;&quot;。</p>
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
                     * 获取<p>任务执行错误信息。当任务状态不为 FAIL 时，该值为&quot;&quot;。</p>
                     * @return ErrorMessage <p>任务执行错误信息。当任务状态不为 FAIL 时，该值为&quot;&quot;。</p>
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
                     * 获取<p>结果视频 URL。有效期 24 小时。</p>
                     * @return ResultVideoUrl <p>结果视频 URL。有效期 24 小时。</p>
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
                     * 获取<p>视频时长。</p>
                     * @return Duration <p>视频时长。</p>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取<p>消耗积分数。</p>
                     * @return FinalUnitDeduction <p>消耗积分数。</p>
                     * 
                     */
                    std::string GetFinalUnitDeduction() const;

                    /**
                     * 判断参数 FinalUnitDeduction 是否已赋值
                     * @return FinalUnitDeduction 是否已赋值
                     * 
                     */
                    bool FinalUnitDeductionHasBeenSet() const;

                    /**
                     * 获取<p>视频id</p>
                     * @return VideoId <p>视频id</p>
                     * 
                     */
                    std::string GetVideoId() const;

                    /**
                     * 判断参数 VideoId 是否已赋值
                     * @return VideoId 是否已赋值
                     * 
                     */
                    bool VideoIdHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态。WAIT：等待中，RUN：执行中，FAIL：任务失败，DONE：任务成功</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务执行错误码。当任务状态不为 FAIL 时，该值为&quot;&quot;。</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>任务执行错误信息。当任务状态不为 FAIL 时，该值为&quot;&quot;。</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>结果视频 URL。有效期 24 小时。</p>
                     */
                    std::string m_resultVideoUrl;
                    bool m_resultVideoUrlHasBeenSet;

                    /**
                     * <p>视频时长。</p>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>消耗积分数。</p>
                     */
                    std::string m_finalUnitDeduction;
                    bool m_finalUnitDeductionHasBeenSet;

                    /**
                     * <p>视频id</p>
                     */
                    std::string m_videoId;
                    bool m_videoIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VCLM_V20240523_MODEL_DESCRIBEVIDEOEXTENDKLINGJOBRESPONSE_H_
