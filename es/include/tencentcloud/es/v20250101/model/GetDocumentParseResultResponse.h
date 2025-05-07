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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTPARSERESULTRESPONSE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTPARSERESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * GetDocumentParseResult返回参数结构体
                */
                class GetDocumentParseResultResponse : public AbstractModel
                {
                public:
                    GetDocumentParseResultResponse();
                    ~GetDocumentParseResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务状态，-1：失败，0：运行中，1：成功。
                     * @return Status 任务状态，-1：失败，0：运行中，1：成功。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取结果文件。
                     * @return DocumentParseResultUrl 结果文件。
                     * 
                     */
                    std::string GetDocumentParseResultUrl() const;

                    /**
                     * 判断参数 DocumentParseResultUrl 是否已赋值
                     * @return DocumentParseResultUrl 是否已赋值
                     * 
                     */
                    bool DocumentParseResultUrlHasBeenSet() const;

                    /**
                     * 获取失败的页码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailedPages 失败的页码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<int64_t> GetFailedPages() const;

                    /**
                     * 判断参数 FailedPages 是否已赋值
                     * @return FailedPages 是否已赋值
                     * 
                     */
                    bool FailedPagesHasBeenSet() const;

                private:

                    /**
                     * 任务状态，-1：失败，0：运行中，1：成功。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 结果文件。
                     */
                    std::string m_documentParseResultUrl;
                    bool m_documentParseResultUrlHasBeenSet;

                    /**
                     * 失败的页码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<int64_t> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTPARSERESULTRESPONSE_H_
