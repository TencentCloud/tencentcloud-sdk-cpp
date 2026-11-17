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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPERRORMESSAGE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPERRORMESSAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 全量备份错误信息
                */
                class FullBackupErrorMessage : public AbstractModel
                {
                public:
                    FullBackupErrorMessage();
                    ~FullBackupErrorMessage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取错误标题。
                     * @return Title 错误标题。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置错误标题。
                     * @param _title 错误标题。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取错误详情。
                     * @return Message 错误详情。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置错误详情。
                     * @param _message 错误详情。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                private:

                    /**
                     * 错误标题。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 错误详情。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_FULLBACKUPERRORMESSAGE_H_
