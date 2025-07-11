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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYAGENTSTATEMENTSRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYAGENTSTATEMENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryAgentStatements返回参数结构体
                */
                class QueryAgentStatementsResponse : public AbstractModel
                {
                public:
                    QueryAgentStatementsResponse();
                    ~QueryAgentStatementsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取文件下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileUrl 文件下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileUrl() const;

                    /**
                     * 判断参数 FileUrl 是否已赋值
                     * @return FileUrl 是否已赋值
                     * 
                     */
                    bool FileUrlHasBeenSet() const;

                private:

                    /**
                     * 文件下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileUrl;
                    bool m_fileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYAGENTSTATEMENTSRESPONSE_H_
