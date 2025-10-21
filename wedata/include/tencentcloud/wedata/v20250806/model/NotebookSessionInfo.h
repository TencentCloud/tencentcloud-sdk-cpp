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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTEBOOKSESSIONINFO_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTEBOOKSESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * notebook kernel session信息
                */
                class NotebookSessionInfo : public AbstractModel
                {
                public:
                    NotebookSessionInfo();
                    ~NotebookSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话ID
                     * @return NotebookSessionId 会话ID
                     * 
                     */
                    std::string GetNotebookSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _notebookSessionId 会话ID
                     * 
                     */
                    void SetNotebookSessionId(const std::string& _notebookSessionId);

                    /**
                     * 判断参数 NotebookSessionId 是否已赋值
                     * @return NotebookSessionId 是否已赋值
                     * 
                     */
                    bool NotebookSessionIdHasBeenSet() const;

                    /**
                     * 获取会话名称
                     * @return NotebookSessionName 会话名称
                     * 
                     */
                    std::string GetNotebookSessionName() const;

                    /**
                     * 设置会话名称
                     * @param _notebookSessionName 会话名称
                     * 
                     */
                    void SetNotebookSessionName(const std::string& _notebookSessionName);

                    /**
                     * 判断参数 NotebookSessionName 是否已赋值
                     * @return NotebookSessionName 是否已赋值
                     * 
                     */
                    bool NotebookSessionNameHasBeenSet() const;

                private:

                    /**
                     * 会话ID
                     */
                    std::string m_notebookSessionId;
                    bool m_notebookSessionIdHasBeenSet;

                    /**
                     * 会话名称
                     */
                    std::string m_notebookSessionName;
                    bool m_notebookSessionNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_NOTEBOOKSESSIONINFO_H_
