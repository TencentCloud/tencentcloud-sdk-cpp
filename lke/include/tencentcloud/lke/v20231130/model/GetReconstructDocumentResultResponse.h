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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ReconstructDocumentFailedPage.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
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
                     * 获取任务状态: Success->执行完成；Processing->执行中；Failed->执行失败；WaitExecute->等待执行。
                     * @return Status 任务状态: Success->执行完成；Processing->执行中；Failed->执行失败；WaitExecute->等待执行。
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
                     * 获取本次文档解析的结果文件，存储在腾讯云COS的下载URL，下载URL的有效期为10分钟。
                     * @return DocumentRecognizeResultUrl 本次文档解析的结果文件，存储在腾讯云COS的下载URL，下载URL的有效期为10分钟。
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
                     * 获取本次文档解析失败的页码信息。
                     * @return FailedPages 本次文档解析失败的页码信息。
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
                     * 任务状态: Success->执行完成；Processing->执行中；Failed->执行失败；WaitExecute->等待执行。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 本次文档解析的结果文件，存储在腾讯云COS的下载URL，下载URL的有效期为10分钟。
                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * 本次文档解析失败的页码信息。
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
