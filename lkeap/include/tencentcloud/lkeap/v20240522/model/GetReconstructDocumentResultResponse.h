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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lkeap/v20240522/model/ReconstructDocumentFailedPage.h>
#include <tencentcloud/lkeap/v20240522/model/DocumentUsage.h>
#include <tencentcloud/lkeap/v20240522/model/ErrorInfo.h>
#include <tencentcloud/lkeap/v20240522/model/TaskErrInfo.h>


namespace TencentCloud
{
    namespace Lkeap
    {
        namespace V20240522
        {
            namespace Model
            {
                /**
                * GetReconstructDocumentResult返回参数结构体
                */
                class GetReconstructDocumentResultResponse : public AbstractModel
                {
                public:
                    GetReconstructDocumentResultResponse();
                    ~GetReconstructDocumentResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态。</p><ul><li><code>Success</code>：执行完成</li><li><code>Processing</code>：执行中</li><li><code>Pause</code>: 暂停</li><li><code>Failed</code>：执行失败</li><li><code>WaitExecute</code>：等待执行</li></ul>
                     * @return Status <p>任务状态。</p><ul><li><code>Success</code>：执行完成</li><li><code>Processing</code>：执行中</li><li><code>Pause</code>: 暂停</li><li><code>Failed</code>：执行失败</li><li><code>WaitExecute</code>：等待执行</li></ul>
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
                     * 获取<p>解析结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟</p>
                     * @return DocumentRecognizeResultUrl <p>解析结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟</p>
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
                     * 获取<p>文档解析失败的页码</p>
                     * @return FailedPages <p>文档解析失败的页码</p>
                     * 
                     */
                    std::vector<ReconstructDocumentFailedPage> GetFailedPages() const;

                    /**
                     * 判断参数 FailedPages 是否已赋值
                     * @return FailedPages 是否已赋值
                     * 
                     */
                    bool FailedPagesHasBeenSet() const;

                    /**
                     * 获取<p>文档拆分任务的用量</p>
                     * @return Usage <p>文档拆分任务的用量</p>
                     * 
                     */
                    DocumentUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                    /**
                     * 获取<p>文档解析任务失败错误信息，当文档解析任务失败会返回具体的错误信息</p>
                     * @return Error <p>文档解析任务失败错误信息，当文档解析任务失败会返回具体的错误信息</p>
                     * @deprecated
                     */
                    ErrorInfo GetError() const;

                    /**
                     * 判断参数 Error 是否已赋值
                     * @return Error 是否已赋值
                     * @deprecated
                     */
                    bool ErrorHasBeenSet() const;

                    /**
                     * 获取<p>文档解析任务失败错误信息，当文档解析任务失败会返回具体的错误信息</p>
                     * @return TaskErrInfo <p>文档解析任务失败错误信息，当文档解析任务失败会返回具体的错误信息</p>
                     * 
                     */
                    TaskErrInfo GetTaskErrInfo() const;

                    /**
                     * 判断参数 TaskErrInfo 是否已赋值
                     * @return TaskErrInfo 是否已赋值
                     * 
                     */
                    bool TaskErrInfoHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态。</p><ul><li><code>Success</code>：执行完成</li><li><code>Processing</code>：执行中</li><li><code>Pause</code>: 暂停</li><li><code>Failed</code>：执行失败</li><li><code>WaitExecute</code>：等待执行</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>解析结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟</p>
                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * <p>文档解析失败的页码</p>
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                    /**
                     * <p>文档拆分任务的用量</p>
                     */
                    DocumentUsage m_usage;
                    bool m_usageHasBeenSet;

                    /**
                     * <p>文档解析任务失败错误信息，当文档解析任务失败会返回具体的错误信息</p>
                     */
                    ErrorInfo m_error;
                    bool m_errorHasBeenSet;

                    /**
                     * <p>文档解析任务失败错误信息，当文档解析任务失败会返回具体的错误信息</p>
                     */
                    TaskErrInfo m_taskErrInfo;
                    bool m_taskErrInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
