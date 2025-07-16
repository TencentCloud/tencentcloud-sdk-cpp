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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DeleteAuditKeywords请求参数结构体
                */
                class DeleteAuditKeywordsRequest : public AbstractModel
                {
                public:
                    DeleteAuditKeywordsRequest();
                    ~DeleteAuditKeywordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取要删除的关键词 Id 列表。
                     * @return KeywordIds 要删除的关键词 Id 列表。
                     * 
                     */
                    std::vector<std::string> GetKeywordIds() const;

                    /**
                     * 设置要删除的关键词 Id 列表。
                     * @param _keywordIds 要删除的关键词 Id 列表。
                     * 
                     */
                    void SetKeywordIds(const std::vector<std::string>& _keywordIds);

                    /**
                     * 判断参数 KeywordIds 是否已赋值
                     * @return KeywordIds 是否已赋值
                     * 
                     */
                    bool KeywordIdsHasBeenSet() const;

                    /**
                     * 获取关键词库 Id。
                     * @return LibId 关键词库 Id。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置关键词库 Id。
                     * @param _libId 关键词库 Id。
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                private:

                    /**
                     * 要删除的关键词 Id 列表。
                     */
                    std::vector<std::string> m_keywordIds;
                    bool m_keywordIdsHasBeenSet;

                    /**
                     * 关键词库 Id。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DELETEAUDITKEYWORDSREQUEST_H_
