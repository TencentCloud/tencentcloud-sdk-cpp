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

#ifndef TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SEARCHTAGS_H_
#define TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SEARCHTAGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwdoris
    {
        namespace V20211228
        {
            namespace Model
            {
                /**
                * 列表页搜索的标记列表
                */
                class SearchTags : public AbstractModel
                {
                public:
                    SearchTags();
                    ~SearchTags() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签的键
                     * @return TagKey 标签的键
                     * 
                     */
                    std::string GetTagKey() const;

                    /**
                     * 设置标签的键
                     * @param _tagKey 标签的键
                     * 
                     */
                    void SetTagKey(const std::string& _tagKey);

                    /**
                     * 判断参数 TagKey 是否已赋值
                     * @return TagKey 是否已赋值
                     * 
                     */
                    bool TagKeyHasBeenSet() const;

                    /**
                     * 获取标签的值
                     * @return TagValue 标签的值
                     * 
                     */
                    std::string GetTagValue() const;

                    /**
                     * 设置标签的值
                     * @param _tagValue 标签的值
                     * 
                     */
                    void SetTagValue(const std::string& _tagValue);

                    /**
                     * 判断参数 TagValue 是否已赋值
                     * @return TagValue 是否已赋值
                     * 
                     */
                    bool TagValueHasBeenSet() const;

                    /**
                     * 获取1表示只输入标签的键，没有输入值；非1则表示输入键时且输入值
                     * @return AllValue 1表示只输入标签的键，没有输入值；非1则表示输入键时且输入值
                     * 
                     */
                    int64_t GetAllValue() const;

                    /**
                     * 设置1表示只输入标签的键，没有输入值；非1则表示输入键时且输入值
                     * @param _allValue 1表示只输入标签的键，没有输入值；非1则表示输入键时且输入值
                     * 
                     */
                    void SetAllValue(const int64_t& _allValue);

                    /**
                     * 判断参数 AllValue 是否已赋值
                     * @return AllValue 是否已赋值
                     * 
                     */
                    bool AllValueHasBeenSet() const;

                private:

                    /**
                     * 标签的键
                     */
                    std::string m_tagKey;
                    bool m_tagKeyHasBeenSet;

                    /**
                     * 标签的值
                     */
                    std::string m_tagValue;
                    bool m_tagValueHasBeenSet;

                    /**
                     * 1表示只输入标签的键，没有输入值；非1则表示输入键时且输入值
                     */
                    int64_t m_allValue;
                    bool m_allValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWDORIS_V20211228_MODEL_SEARCHTAGS_H_
