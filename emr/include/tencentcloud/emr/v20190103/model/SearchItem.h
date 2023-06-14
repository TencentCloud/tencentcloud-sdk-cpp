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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_SEARCHITEM_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_SEARCHITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 搜索字段
                */
                class SearchItem : public AbstractModel
                {
                public:
                    SearchItem();
                    ~SearchItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取支持搜索的类型
                     * @return SearchType 支持搜索的类型
                     * 
                     */
                    std::string GetSearchType() const;

                    /**
                     * 设置支持搜索的类型
                     * @param _searchType 支持搜索的类型
                     * 
                     */
                    void SetSearchType(const std::string& _searchType);

                    /**
                     * 判断参数 SearchType 是否已赋值
                     * @return SearchType 是否已赋值
                     * 
                     */
                    bool SearchTypeHasBeenSet() const;

                    /**
                     * 获取支持搜索的值
                     * @return SearchValue 支持搜索的值
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置支持搜索的值
                     * @param _searchValue 支持搜索的值
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                private:

                    /**
                     * 支持搜索的类型
                     */
                    std::string m_searchType;
                    bool m_searchTypeHasBeenSet;

                    /**
                     * 支持搜索的值
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_SEARCHITEM_H_
