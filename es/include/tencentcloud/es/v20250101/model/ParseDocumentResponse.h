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

#ifndef TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTRESPONSE_H_
#define TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTRESPONSE_H_

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
                * ParseDocument返回参数结构体
                */
                class ParseDocumentResponse : public AbstractModel
                {
                public:
                    ParseDocumentResponse();
                    ~ParseDocumentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取进度：0-100。
                     * @return Progress 进度：0-100。
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
                     * 获取 解析文件结果。
                     * @return DocumentParseResultUrl  解析文件结果。
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
                     * 获取失败页码。
                     * @return FailedPages 失败页码。
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
                     * 进度：0-100。
                     */
                    std::string m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     *  解析文件结果。
                     */
                    std::string m_documentParseResultUrl;
                    bool m_documentParseResultUrlHasBeenSet;

                    /**
                     * 失败页码。
                     */
                    std::vector<int64_t> m_failedPages;
                    bool m_failedPagesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20250101_MODEL_PARSEDOCUMENTRESPONSE_H_
