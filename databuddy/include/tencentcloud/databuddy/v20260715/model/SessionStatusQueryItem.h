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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SESSIONSTATUSQUERYITEM_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SESSIONSTATUSQUERYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 查询会话任务状态的单条查询项
                */
                class SessionStatusQueryItem : public AbstractModel
                {
                public:
                    SessionStatusQueryItem();
                    ~SessionStatusQueryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取沙箱 Runtime ID
                     * @return RuntimeId 沙箱 Runtime ID
                     * 
                     */
                    std::string GetRuntimeId() const;

                    /**
                     * 设置沙箱 Runtime ID
                     * @param _runtimeId 沙箱 Runtime ID
                     * 
                     */
                    void SetRuntimeId(const std::string& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     * 
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取对话 Session ID
                     * @return SessionId 对话 Session ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置对话 Session ID
                     * @param _sessionId 对话 Session ID
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                private:

                    /**
                     * 沙箱 Runtime ID
                     */
                    std::string m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * 对话 Session ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_SESSIONSTATUSQUERYITEM_H_
