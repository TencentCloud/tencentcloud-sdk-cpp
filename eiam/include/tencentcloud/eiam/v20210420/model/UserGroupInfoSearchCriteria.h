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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFOSEARCHCRITERIA_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFOSEARCHCRITERIA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * 用户组属性搜索条件。
                */
                class UserGroupInfoSearchCriteria : public AbstractModel
                {
                public:
                    UserGroupInfoSearchCriteria();
                    ~UserGroupInfoSearchCriteria() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称匹配搜索，匹配范围包括：用户组名称、用户组ID。
                     * @return Keyword 名称匹配搜索，匹配范围包括：用户组名称、用户组ID。
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置名称匹配搜索，匹配范围包括：用户组名称、用户组ID。
                     * @param _keyword 名称匹配搜索，匹配范围包括：用户组名称、用户组ID。
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                private:

                    /**
                     * 名称匹配搜索，匹配范围包括：用户组名称、用户组ID。
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_USERGROUPINFOSEARCHCRITERIA_H_
