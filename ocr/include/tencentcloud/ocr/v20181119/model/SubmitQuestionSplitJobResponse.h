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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONSPLITJOBRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONSPLITJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * SubmitQuestionSplitJob返回参数结构体
                */
                class SubmitQuestionSplitJobResponse : public AbstractModel
                {
                public:
                    SubmitQuestionSplitJobResponse();
                    ~SubmitQuestionSplitJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务唯一ID。由服务端生成。</p>
                     * @return JobId <p>任务唯一ID。由服务端生成。</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>PDF 转完之后的图片压缩包列表地址。</p>
                     * @return ImageZipUrl <p>PDF 转完之后的图片压缩包列表地址。</p>
                     * 
                     */
                    std::string GetImageZipUrl() const;

                    /**
                     * 判断参数 ImageZipUrl 是否已赋值
                     * @return ImageZipUrl 是否已赋值
                     * 
                     */
                    bool ImageZipUrlHasBeenSet() const;

                private:

                    /**
                     * <p>任务唯一ID。由服务端生成。</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>PDF 转完之后的图片压缩包列表地址。</p>
                     */
                    std::string m_imageZipUrl;
                    bool m_imageZipUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBMITQUESTIONSPLITJOBRESPONSE_H_
