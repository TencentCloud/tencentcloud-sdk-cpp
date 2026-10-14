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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNLOG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * NodeRunLog
                */
                class NodeRunLog : public AbstractModel
                {
                public:
                    NodeRunLog();
                    ~NodeRunLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点的日志。</p>
                     * @return Log <p>节点的日志。</p>
                     * 
                     */
                    std::string GetLog() const;

                    /**
                     * 设置<p>节点的日志。</p>
                     * @param _log <p>节点的日志。</p>
                     * 
                     */
                    void SetLog(const std::string& _log);

                    /**
                     * 判断参数 Log 是否已赋值
                     * @return Log 是否已赋值
                     * 
                     */
                    bool LogHasBeenSet() const;

                    /**
                     * 获取<p>节点的日志的完整内容的链接志（当Log内容超过限制的时候才有值）</p>
                     * @return LogRef <p>节点的日志的完整内容的链接志（当Log内容超过限制的时候才有值）</p>
                     * 
                     */
                    std::string GetLogRef() const;

                    /**
                     * 设置<p>节点的日志的完整内容的链接志（当Log内容超过限制的时候才有值）</p>
                     * @param _logRef <p>节点的日志的完整内容的链接志（当Log内容超过限制的时候才有值）</p>
                     * 
                     */
                    void SetLogRef(const std::string& _logRef);

                    /**
                     * 判断参数 LogRef 是否已赋值
                     * @return LogRef 是否已赋值
                     * 
                     */
                    bool LogRefHasBeenSet() const;

                private:

                    /**
                     * <p>节点的日志。</p>
                     */
                    std::string m_log;
                    bool m_logHasBeenSet;

                    /**
                     * <p>节点的日志的完整内容的链接志（当Log内容超过限制的时候才有值）</p>
                     */
                    std::string m_logRef;
                    bool m_logRefHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_NODERUNLOG_H_
