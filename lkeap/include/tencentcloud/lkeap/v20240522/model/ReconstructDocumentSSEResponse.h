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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSERESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentFailedPage.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * ReconstructDocumentSSE返回参数结构体
                */
                class ReconstructDocumentSSEResponse : public AbstractModel
                {
                public:
                    ReconstructDocumentSSEResponse();
                    ~ReconstructDocumentSSEResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务ID。本次请求的唯一标识
                     * @return TaskId 任务ID。本次请求的唯一标识
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取响应类型。1：返回进度信息，2：返回解析结果
                     * @return ResponseType 响应类型。1：返回进度信息，2：返回解析结果
                     * 
                     */
                    std::string GetResponseType() const;

                    /**
                     * 判断参数 ResponseType 是否已赋值
                     * @return ResponseType 是否已赋值
                     * 
                     */
                    bool ResponseTypeHasBeenSet() const;

                    /**
                     * 获取进度。0~100
                     * @return Progress 进度。0~100
                     * 
                     */
                    std::string GetProgress() const;

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取进度信息。
                     * @return ProgressMessage 进度信息。
                     * 
                     */
                    std::string GetProgressMessage() const;

                    /**
                     * 判断参数 ProgressMessage 是否已赋值
                     * @return ProgressMessage 是否已赋值
                     * 
                     */
                    bool ProgressMessageHasBeenSet() const;

                    /**
                     * 获取文档解析结果的临时下载地址。
文件类型为zip压缩包，下载链接有效期30分钟。
压缩包内包含*.md、*.json以及images文件夹。

                     * @return DocumentRecognizeResultUrl 文档解析结果的临时下载地址。
文件类型为zip压缩包，下载链接有效期30分钟。
压缩包内包含*.md、*.json以及images文件夹。

                     * 
                     */
                    std::string GetDocumentRecognizeResultUrl() const;

                    /**
                     * 判断参数 DocumentRecognizeResultUrl 是否已赋值
                     * @return DocumentRecognizeResultUrl 是否已赋值
                     * 
                     */
                    bool DocumentRecognizeResultUrlHasBeenSet() const;

                    /**
                     * 获取文档解析失败的页码。
                     * @return FailedPages 文档解析失败的页码。
                     * 
                     */
                    std::vector<ReconstructDocumentFailedPage> GetFailedPages() const;

                    /**
                     * 判断参数 FailedPages 是否已赋值
                     * @return FailedPages 是否已赋值
                     * 
                     */
                    bool FailedPagesHasBeenSet() const;

                private:

                    /**
                     * 任务ID。本次请求的唯一标识
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 响应类型。1：返回进度信息，2：返回解析结果
                     */
                    std::string m_responseType;
                    bool m_responseTypeHasBeenSet;

                    /**
                     * 进度。0~100
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 进度信息。
                     */
                    std::string m_progressMessage;
                    bool m_progressMessageHasBeenSet;

                    /**
                     * 文档解析结果的临时下载地址。
文件类型为zip压缩包，下载链接有效期30分钟。
压缩包内包含*.md、*.json以及images文件夹。

                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * 文档解析失败的页码。
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_RECONSTRUCTDOCUMENTSSERESPONSE_H_
