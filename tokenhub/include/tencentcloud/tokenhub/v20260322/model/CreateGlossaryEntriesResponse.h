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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYENTRIESRESPONSE_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYENTRIESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/GlossaryEntryItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * CreateGlossaryEntries返回参数结构体
                */
                class CreateGlossaryEntriesResponse : public AbstractModel
                {
                public:
                    CreateGlossaryEntriesResponse();
                    ~CreateGlossaryEntriesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取创建成功的术语条目列表。
                     * @return Entries 创建成功的术语条目列表。
                     * 
                     */
                    std::vector<GlossaryEntryItem> GetEntries() const;

                    /**
                     * 判断参数 Entries 是否已赋值
                     * @return Entries 是否已赋值
                     * 
                     */
                    bool EntriesHasBeenSet() const;

                private:

                    /**
                     * 创建成功的术语条目列表。
                     */
                    std::vector<GlossaryEntryItem> m_entries;
                    bool m_entriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_CREATEGLOSSARYENTRIESRESPONSE_H_
