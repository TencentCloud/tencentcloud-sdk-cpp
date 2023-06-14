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

#ifndef TENCENTCLOUD_WAV_V20210129_MODEL_TAGINFO_H_
#define TENCENTCLOUD_WAV_V20210129_MODEL_TAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wav
    {
        namespace V20210129
        {
            namespace Model
            {
                /**
                * 标签信息
                */
                class TagInfo : public AbstractModel
                {
                public:
                    TagInfo();
                    ~TagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签名称, 最大长度限制15个字符
                     * @return TagName 标签名称, 最大长度限制15个字符
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置标签名称, 最大长度限制15个字符
                     * @param _tagName 标签名称, 最大长度限制15个字符
                     * 
                     */
                    void SetTagName(const std::string& _tagName);

                    /**
                     * 判断参数 TagName 是否已赋值
                     * @return TagName 是否已赋值
                     * 
                     */
                    bool TagNameHasBeenSet() const;

                    /**
                     * 获取标签组排序,值越大,排序越靠前
                     * @return Sort 标签组排序,值越大,排序越靠前
                     * 
                     */
                    uint64_t GetSort() const;

                    /**
                     * 设置标签组排序,值越大,排序越靠前
                     * @param _sort 标签组排序,值越大,排序越靠前
                     * 
                     */
                    void SetSort(const uint64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                private:

                    /**
                     * 标签名称, 最大长度限制15个字符
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * 标签组排序,值越大,排序越靠前
                     */
                    uint64_t m_sort;
                    bool m_sortHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAV_V20210129_MODEL_TAGINFO_H_
