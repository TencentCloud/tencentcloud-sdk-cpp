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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITKEYWORDSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITKEYWORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditKeywordInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateAuditKeywords返回参数结构体
                */
                class CreateAuditKeywordsResponse : public AbstractModel
                {
                public:
                    CreateAuditKeywordsResponse();
                    ~CreateAuditKeywordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>添加成功的关键词 Id 列表。</p>
                     * @return KeywordIds <p>添加成功的关键词 Id 列表。</p>
                     * 
                     */
                    std::vector<std::string> GetKeywordIds() const;

                    /**
                     * 判断参数 KeywordIds 是否已赋值
                     * @return KeywordIds 是否已赋值
                     * 
                     */
                    bool KeywordIdsHasBeenSet() const;

                    /**
                     * 获取<p>重复关键词列表。</p>
                     * @return DupInfos <p>重复关键词列表。</p>
                     * 
                     */
                    std::vector<AuditKeywordInfo> GetDupInfos() const;

                    /**
                     * 判断参数 DupInfos 是否已赋值
                     * @return DupInfos 是否已赋值
                     * 
                     */
                    bool DupInfosHasBeenSet() const;

                    /**
                     * 获取<p>新增成功关键词列表</p>
                     * @return Keywords <p>新增成功关键词列表</p>
                     * 
                     */
                    std::vector<AuditKeywordInfo> GetKeywords() const;

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                private:

                    /**
                     * <p>添加成功的关键词 Id 列表。</p>
                     */
                    std::vector<std::string> m_keywordIds;
                    bool m_keywordIdsHasBeenSet;

                    /**
                     * <p>重复关键词列表。</p>
                     */
                    std::vector<AuditKeywordInfo> m_dupInfos;
                    bool m_dupInfosHasBeenSet;

                    /**
                     * <p>新增成功关键词列表</p>
                     */
                    std::vector<AuditKeywordInfo> m_keywords;
                    bool m_keywordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITKEYWORDSRESPONSE_H_
