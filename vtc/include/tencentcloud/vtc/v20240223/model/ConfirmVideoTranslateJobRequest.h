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

#ifndef TENCENTCLOUD_VTC_V20240223_MODEL_CONFIRMVIDEOTRANSLATEJOBREQUEST_H_
#define TENCENTCLOUD_VTC_V20240223_MODEL_CONFIRMVIDEOTRANSLATEJOBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vtc/v20240223/model/AudioTranslateResult.h>


namespace TencentCloud
{
    namespace Vtc
    {
        namespace V20240223
        {
            namespace Model
            {
                /**
                * ConfirmVideoTranslateJob请求参数结构体
                */
                class ConfirmVideoTranslateJobRequest : public AbstractModel
                {
                public:
                    ConfirmVideoTranslateJobRequest();
                    ~ConfirmVideoTranslateJobRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取视频翻译任务 ID
                     * @return JobId 视频翻译任务 ID
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置视频翻译任务 ID
                     * @param _jobId 视频翻译任务 ID
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取待确认文本
                     * @return TranslateResults 待确认文本
                     * 
                     */
                    std::vector<AudioTranslateResult> GetTranslateResults() const;

                    /**
                     * 设置待确认文本
                     * @param _translateResults 待确认文本
                     * 
                     */
                    void SetTranslateResults(const std::vector<AudioTranslateResult>& _translateResults);

                    /**
                     * 判断参数 TranslateResults 是否已赋值
                     * @return TranslateResults 是否已赋值
                     * 
                     */
                    bool TranslateResultsHasBeenSet() const;

                private:

                    /**
                     * 视频翻译任务 ID
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 待确认文本
                     */
                    std::vector<AudioTranslateResult> m_translateResults;
                    bool m_translateResultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VTC_V20240223_MODEL_CONFIRMVIDEOTRANSLATEJOBREQUEST_H_
