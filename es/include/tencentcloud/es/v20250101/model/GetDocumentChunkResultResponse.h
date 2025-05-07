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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTCHUNKRESULTRESPONSE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTCHUNKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20250101/model/DocumentChunkUsage.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20250101
        {
            namespace Model
            {
                /**
                * GetDocumentChunkResult返回参数结构体
                */
                class GetDocumentChunkResultResponse : public AbstractModel
                {
                public:
                    GetDocumentChunkResultResponse();
                    ~GetDocumentChunkResultResponse() = default;
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
                     * 获取切片结果文件。
                     * @return DocumentChunkResultUrl 切片结果文件。
                     * 
                     */
                    std::string GetDocumentChunkResultUrl() const;

                    /**
                     * 判断参数 DocumentChunkResultUrl 是否已赋值
                     * @return DocumentChunkResultUrl 是否已赋值
                     * 
                     */
                    bool DocumentChunkResultUrlHasBeenSet() const;

                    /**
                     * 获取Token用量。
                     * @return Usage Token用量。
                     * 
                     */
                    DocumentChunkUsage GetUsage() const;

                    /**
                     * 判断参数 Usage 是否已赋值
                     * @return Usage 是否已赋值
                     * 
                     */
                    bool UsageHasBeenSet() const;

                private:

                    /**
                     * 任务状态，-1：失败，0：运行中，1：成功。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 切片结果文件。
                     */
                    std::string m_documentChunkResultUrl;
                    bool m_documentChunkResultUrlHasBeenSet;

                    /**
                     * Token用量。
                     */
                    DocumentChunkUsage m_usage;
                    bool m_usageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_GETDOCUMENTCHUNKRESULTRESPONSE_H_
