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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_LOGDETAILFORUSER_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_LOGDETAILFORUSER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 日志详情信息
                */
                class LogDetailForUser : public AbstractModel
                {
                public:
                    LogDetailForUser();
                    ~LogDetailForUser() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取日志行号
                     * @return LineNumber 日志行号
                     */
                    uint64_t GetLineNumber() const;

                    /**
                     * 设置日志行号
                     * @param LineNumber 日志行号
                     */
                    void SetLineNumber(const uint64_t& _lineNumber);

                    /**
                     * 判断参数 LineNumber 是否已赋值
                     * @return LineNumber 是否已赋值
                     */
                    bool LineNumberHasBeenSet() const;

                    /**
                     * 获取日志详情
                     * @return LogMessage 日志详情
                     */
                    std::string GetLogMessage() const;

                    /**
                     * 设置日志详情
                     * @param LogMessage 日志详情
                     */
                    void SetLogMessage(const std::string& _logMessage);

                    /**
                     * 判断参数 LogMessage 是否已赋值
                     * @return LogMessage 是否已赋值
                     */
                    bool LogMessageHasBeenSet() const;

                private:

                    /**
                     * 日志行号
                     */
                    uint64_t m_lineNumber;
                    bool m_lineNumberHasBeenSet;

                    /**
                     * 日志详情
                     */
                    std::string m_logMessage;
                    bool m_logMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_LOGDETAILFORUSER_H_
