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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DELETEGLOSSARYENTRYINPUT_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DELETEGLOSSARYENTRYINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 删除术语条目项
                */
                class DeleteGlossaryEntryInput : public AbstractModel
                {
                public:
                    DeleteGlossaryEntryInput();
                    ~DeleteGlossaryEntryInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取术语条目 ID。可通过 DescribeGlossaryEntries 接口获取。
                     * @return EntryId 术语条目 ID。可通过 DescribeGlossaryEntries 接口获取。
                     * 
                     */
                    std::string GetEntryId() const;

                    /**
                     * 设置术语条目 ID。可通过 DescribeGlossaryEntries 接口获取。
                     * @param _entryId 术语条目 ID。可通过 DescribeGlossaryEntries 接口获取。
                     * 
                     */
                    void SetEntryId(const std::string& _entryId);

                    /**
                     * 判断参数 EntryId 是否已赋值
                     * @return EntryId 是否已赋值
                     * 
                     */
                    bool EntryIdHasBeenSet() const;

                private:

                    /**
                     * 术语条目 ID。可通过 DescribeGlossaryEntries 接口获取。
                     */
                    std::string m_entryId;
                    bool m_entryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_DELETEGLOSSARYENTRYINPUT_H_
