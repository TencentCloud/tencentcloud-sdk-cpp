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
                     * 获取关键词列表。
                     * @return Keywords 关键词列表。
                     * 
                     */
                    std::vector<AuditKeyword> GetKeywords() const;

                    /**
                     * 设置关键词列表。
                     * @param _keywords 关键词列表。
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
                     * 获取直播审核词库Id。
                     * @return LibId 直播审核词库Id。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置直播审核词库Id。
                     * @param _libId 直播审核词库Id。
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
                     * 关键词列表。
                     */
                    std::vector<AuditKeyword> m_keywords;
                    bool m_keywordsHasBeenSet;

                    /**
                     * 直播审核词库Id。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CREATEAUDITKEYWORDSREQUEST_H_
