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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_DESCRIBEMULTIMODALDOCPARSEJOBRESPONSE_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_DESCRIBEMULTIMODALDOCPARSEJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/ReconstructDocumentFailedPage.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * DescribeMultimodalDocParseJob返回参数结构体
                */
                class DescribeMultimodalDocParseJobResponse : public AbstractModel
                {
                public:
                    DescribeMultimodalDocParseJobResponse();
                    ~DescribeMultimodalDocParseJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>任务状态。取值：</p><ul><li>Created：已创建，等待处理</li><li>Processing：处理中</li><li>Success：成功</li><li>Failed：失败</li><li>Unknown：未知</li></ul>
                     * @return Status <p>任务状态。取值：</p><ul><li>Created：已创建，等待处理</li><li>Processing：处理中</li><li>Success：成功</li><li>Failed：失败</li><li>Unknown：未知</li></ul>
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
                     * 获取<p>任务执行错误码。当任务状态不为 Failed 时，该值为“”。</p>
                     * @return ErrorCode <p>任务执行错误码。当任务状态不为 Failed 时，该值为“”。</p>
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
                     * 获取<p>任务执行错误信息。当任务状态不为 Failed 时，该值为“”。</p>
                     * @return ErrorMessage <p>任务执行错误信息。当任务状态不为 Failed 时，该值为“”。</p>
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
                     * 获取<p>结果的临时下载地址。文件类型为 zip 压缩包，下载链接有效期 30 分钟。压缩包内包含 <em>.md、</em>.json 以及 images 文件夹。仅当任务状态为 Success 时返回该字段。</p>
                     * @return ResultUrl <p>结果的临时下载地址。文件类型为 zip 压缩包，下载链接有效期 30 分钟。压缩包内包含 <em>.md、</em>.json 以及 images 文件夹。仅当任务状态为 Success 时返回该字段。</p>
                     * 
                     */
                    std::string GetResultUrl() const;

                    /**
                     * 判断参数 ResultUrl 是否已赋值
                     * @return ResultUrl 是否已赋值
                     * 
                     */
                    bool ResultUrlHasBeenSet() const;

                    /**
                     * 获取<p>解析失败的页码列表。仅当任务状态为 Success 时返回该字段。</p>
                     * @return FailedPages <p>解析失败的页码列表。仅当任务状态为 Success 时返回该字段。</p>
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
                     * 获取<p>解析成功页数。</p>
                     * @return SuccessPageNum <p>解析成功页数。</p>
                     * 
                     */
                    int64_t GetSuccessPageNum() const;

                    /**
                     * 判断参数 SuccessPageNum 是否已赋值
                     * @return SuccessPageNum 是否已赋值
                     * 
                     */
                    bool SuccessPageNumHasBeenSet() const;

                    /**
                     * 获取<p>解析失败页数。</p>
                     * @return FailPageNum <p>解析失败页数。</p>
                     * 
                     */
                    int64_t GetFailPageNum() const;

                    /**
                     * 判断参数 FailPageNum 是否已赋值
                     * @return FailPageNum 是否已赋值
                     * 
                     */
                    bool FailPageNumHasBeenSet() const;

                private:

                    /**
                     * <p>任务状态。取值：</p><ul><li>Created：已创建，等待处理</li><li>Processing：处理中</li><li>Success：成功</li><li>Failed：失败</li><li>Unknown：未知</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>任务执行错误码。当任务状态不为 Failed 时，该值为“”。</p>
                     */
                    std::string m_errorCode;
                    bool m_errorCodeHasBeenSet;

                    /**
                     * <p>任务执行错误信息。当任务状态不为 Failed 时，该值为“”。</p>
                     */
                    std::string m_errorMessage;
                    bool m_errorMessageHasBeenSet;

                    /**
                     * <p>结果的临时下载地址。文件类型为 zip 压缩包，下载链接有效期 30 分钟。压缩包内包含 <em>.md、</em>.json 以及 images 文件夹。仅当任务状态为 Success 时返回该字段。</p>
                     */
                    std::string m_resultUrl;
                    bool m_resultUrlHasBeenSet;

                    /**
                     * <p>解析失败的页码列表。仅当任务状态为 Success 时返回该字段。</p>
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                    /**
                     * <p>解析成功页数。</p>
                     */
                    int64_t m_successPageNum;
                    bool m_successPageNumHasBeenSet;

                    /**
                     * <p>解析失败页数。</p>
                     */
                    int64_t m_failPageNum;
                    bool m_failPageNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_DESCRIBEMULTIMODALDOCPARSEJOBRESPONSE_H_
