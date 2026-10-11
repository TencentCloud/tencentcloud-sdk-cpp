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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERTAGINFO_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/TagValueInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 用户/用户组标签维度信息（用户管理域独立结构，与通用 TagInfo 解耦，仅供用户/用户组标签接口使用）
                */
                class UserTagInfo : public AbstractModel
                {
                public:
                    UserTagInfo();
                    ~UserTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>标签维度ID</p>
                     * @return TagId <p>标签维度ID</p>
                     * 
                     */
                    std::string GetTagId() const;

                    /**
                     * 设置<p>标签维度ID</p>
                     * @param _tagId <p>标签维度ID</p>
                     * 
                     */
                    void SetTagId(const std::string& _tagId);

                    /**
                     * 判断参数 TagId 是否已赋值
                     * @return TagId 是否已赋值
                     * 
                     */
                    bool TagIdHasBeenSet() const;

                    /**
                     * 获取<p>标签名称，查询时填充，写入时不传</p>
                     * @return TagName <p>标签名称，查询时填充，写入时不传</p>
                     * 
                     */
                    std::string GetTagName() const;

                    /**
                     * 设置<p>标签名称，查询时填充，写入时不传</p>
                     * @param _tagName <p>标签名称，查询时填充，写入时不传</p>
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
                     * 获取<p>该维度下绑定的所有标签值</p>
                     * @return Values <p>该维度下绑定的所有标签值</p>
                     * 
                     */
                    std::vector<TagValueInfo> GetValues() const;

                    /**
                     * 设置<p>该维度下绑定的所有标签值</p>
                     * @param _values <p>该维度下绑定的所有标签值</p>
                     * 
                     */
                    void SetValues(const std::vector<TagValueInfo>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * <p>标签维度ID</p>
                     */
                    std::string m_tagId;
                    bool m_tagIdHasBeenSet;

                    /**
                     * <p>标签名称，查询时填充，写入时不传</p>
                     */
                    std::string m_tagName;
                    bool m_tagNameHasBeenSet;

                    /**
                     * <p>该维度下绑定的所有标签值</p>
                     */
                    std::vector<TagValueInfo> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_USERTAGINFO_H_
