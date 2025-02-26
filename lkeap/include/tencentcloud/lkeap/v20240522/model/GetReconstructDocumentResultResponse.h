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

#ifndef TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
#define TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_

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
                     * 获取任务状态。
- `Success`：执行完成
- `Processing`：执行中
-  `Pause`: 暂停
-  `Failed`：执行失败
-  `WaitExecute`：等待执行
                     * @return Status 任务状态。
- `Success`：执行完成
- `Processing`：执行中
-  `Pause`: 暂停
-  `Failed`：执行失败
-  `WaitExecute`：等待执行
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
                     * 获取解析结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟
                     * @return DocumentRecognizeResultUrl 解析结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟
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
                     * 获取文档解析失败的页码
                     * @return FailedPages 文档解析失败的页码
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
                     * 任务状态。
- `Success`：执行完成
- `Processing`：执行中
-  `Pause`: 暂停
-  `Failed`：执行失败
-  `WaitExecute`：等待执行
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 解析结果的临时下载地址。文件类型为zip压缩包，下载链接有效期30分钟
                     */
                    std::string m_documentRecognizeResultUrl;
                    bool m_documentRecognizeResultUrlHasBeenSet;

                    /**
                     * 文档解析失败的页码
                     */
                    std::vector<ReconstructDocumentFailedPage> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKEAP_V20240522_MODEL_GETRECONSTRUCTDOCUMENTRESULTRESPONSE_H_
