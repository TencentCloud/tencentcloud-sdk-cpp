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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITKEYWORDSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITKEYWORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/AuditKeyword.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * CreateAuditKeywords请求参数结构体
                */
                class CreateAuditKeywordsRequest : public AbstractModel
                {
                public:
                    CreateAuditKeywordsRequest();
                    ~CreateAuditKeywordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>关键词列表。</p>
                     * @return Keywords <p>关键词列表。</p>
                     * 
                     */
                    std::vector<AuditKeyword> GetKeywords() const;

                    /**
                     * 设置<p>关键词列表。</p>
                     * @param _keywords <p>关键词列表。</p>
                     * 
                     */
                    void SetKeywords(const std::vector<AuditKeyword>& _keywords);

                    /**
                     * 判断参数 Keywords 是否已赋值
                     * @return Keywords 是否已赋值
                     * 
                     */
                    bool KeywordsHasBeenSet() const;

                    /**
                     * 获取<p>直播审核词库Id。</p>
                     * @return LibId <p>直播审核词库Id。</p>
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置<p>直播审核词库Id。</p>
                     * @param _libId <p>直播审核词库Id。</p>
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
                     * <p>关键词列表。</p>
                     */
                    std::vector<AuditKeyword> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * <p>直播审核词库Id。</p>
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITKEYWORDSREQUEST_H_
