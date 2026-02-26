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

#ifndef TENCENTCLOUD_HUNYUAN_V20230901_MODEL_DELETEGLOSSARYENTRYREQUEST_H_
#define TENCENTCLOUD_HUNYUAN_V20230901_MODEL_DELETEGLOSSARYENTRYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hunyuan/v20230901/model/GlossaryEntryDeleteItem.h>


namespace TencentCloud
{
    namespace Hunyuan
    {
        namespace V20230901
        {
            namespace Model
            {
                /**
                * DeleteGlossaryEntry请求参数结构体
                */
                class DeleteGlossaryEntryRequest : public AbstractModel
                {
                public:
                    DeleteGlossaryEntryRequest();
                    ~DeleteGlossaryEntryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取术语库 ID
                     * @return GlossaryId 术语库 ID
                     * 
                     */
                    std::string GetGlossaryId() const;

                    /**
                     * 设置术语库 ID
                     * @param _glossaryId 术语库 ID
                     * 
                     */
                    void SetGlossaryId(const std::string& _glossaryId);

                    /**
                     * 判断参数 GlossaryId 是否已赋值
                     * @return GlossaryId 是否已赋值
                     * 
                     */
                    bool GlossaryIdHasBeenSet() const;

                    /**
                     * 获取需要更新的术语条目列表，单次请求限制100个
                     * @return Entries 需要更新的术语条目列表，单次请求限制100个
                     * 
                     */
                    std::vector<GlossaryEntryDeleteItem> GetEntries() const;

                    /**
                     * 设置需要更新的术语条目列表，单次请求限制100个
                     * @param _entries 需要更新的术语条目列表，单次请求限制100个
                     * 
                     */
                    void SetEntries(const std::vector<GlossaryEntryDeleteItem>& _entries);

                    /**
                     * 判断参数 Entries 是否已赋值
                     * @return Entries 是否已赋值
                     * 
                     */
                    bool EntriesHasBeenSet() const;

                private:

                    /**
                     * 术语库 ID
                     */
                    std::string m_glossaryId;
                    bool m_glossaryIdHasBeenSet;

                    /**
                     * 需要更新的术语条目列表，单次请求限制100个
                     */
                    std::vector<GlossaryEntryDeleteItem> m_entries;
                    bool m_entriesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HUNYUAN_V20230901_MODEL_DELETEGLOSSARYENTRYREQUEST_H_
