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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCEERRORLOGSRESPONSE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCEERRORLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/ErrorLogItemExport.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * ExportInstanceErrorLogs返回参数结构体
                */
                class ExportInstanceErrorLogsResponse : public AbstractModel
                {
                public:
                    ExportInstanceErrorLogsResponse();
                    ~ExportInstanceErrorLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取错误日志导出内容
                     * @return ErrorLogItems 错误日志导出内容
                     * 
                     */
                    std::vector<ErrorLogItemExport> GetErrorLogItems() const;

                    /**
                     * 判断参数 ErrorLogItems 是否已赋值
                     * @return ErrorLogItems 是否已赋值
                     * 
                     */
                    bool ErrorLogItemsHasBeenSet() const;

                    /**
                     * 获取错误日志字符串
                     * @return FileContent 错误日志字符串
                     * 
                     */
                    std::string GetFileContent() const;

                    /**
                     * 判断参数 FileContent 是否已赋值
                     * @return FileContent 是否已赋值
                     * 
                     */
                    bool FileContentHasBeenSet() const;

                private:

                    /**
                     * 错误日志导出内容
                     */
                    std::vector<ErrorLogItemExport> m_errorLogItems;
                    bool m_errorLogItemsHasBeenSet;

                    /**
                     * 错误日志字符串
                     */
                    std::string m_fileContent;
                    bool m_fileContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_EXPORTINSTANCEERRORLOGSRESPONSE_H_
