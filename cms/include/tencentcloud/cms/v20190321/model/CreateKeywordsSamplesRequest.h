/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
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

#ifndef TENCENTCLOUD_CMS_V20190321_MODEL_CREATEKEYWORDSSAMPLESREQUEST_H_
#define TENCENTCLOUD_CMS_V20190321_MODEL_CREATEKEYWORDSSAMPLESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cms/v20190321/model/UserKeyword.h>


namespace TencentCloud
{
    namespace Cms
    {
        namespace V20190321
        {
            namespace Model
            {
                /**
                * CreateKeywordsSamples请求参数结构体
                */
                class CreateKeywordsSamplesRequest : public AbstractModel
                {
                public:
                    CreateKeywordsSamplesRequest();
                    ~CreateKeywordsSamplesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取关键词库信息：单次限制写入2000个，词库总容量不可超过10000个。
                     * @return UserKeywords 关键词库信息：单次限制写入2000个，词库总容量不可超过10000个。
                     * 
                     */
                    std::vector<UserKeyword> GetUserKeywords() const;

                    /**
                     * 设置关键词库信息：单次限制写入2000个，词库总容量不可超过10000个。
                     * @param _userKeywords 关键词库信息：单次限制写入2000个，词库总容量不可超过10000个。
                     * 
                     */
                    void SetUserKeywords(const std::vector<UserKeyword>& _userKeywords);

                    /**
                     * 判断参数 UserKeywords 是否已赋值
                     * @return UserKeywords 是否已赋值
                     * 
                     */
                    bool UserKeywordsHasBeenSet() const;

                    /**
                     * 获取词库ID
                     * @return LibID 词库ID
                     * 
                     */
                    std::string GetLibID() const;

                    /**
                     * 设置词库ID
                     * @param _libID 词库ID
                     * 
                     */
                    void SetLibID(const std::string& _libID);

                    /**
                     * 判断参数 LibID 是否已赋值
                     * @return LibID 是否已赋值
                     * 
                     */
                    bool LibIDHasBeenSet() const;

                private:

                    /**
                     * 关键词库信息：单次限制写入2000个，词库总容量不可超过10000个。
                     */
                    std::vector<UserKeyword> m_userKeywords;
                    bool m_userKeywordsHasBeenSet;

                    /**
                     * 词库ID
                     */
                    std::string m_libID;
                    bool m_libIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CMS_V20190321_MODEL_CREATEKEYWORDSSAMPLESREQUEST_H_
