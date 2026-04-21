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

#ifndef TENCENTCLOUD_BI_V20220105_MODEL_RESOURCETAGVALUE_H_
#define TENCENTCLOUD_BI_V20220105_MODEL_RESOURCETAGVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bi
    {
        namespace V20220105
        {
            namespace Model
            {
                /**
                * 资源权限标签过滤参数
                */
                class ResourceTagValue : public AbstractModel
                {
                public:
                    ResourceTagValue();
                    ~ResourceTagValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标签id
                     * @return Id 标签id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置标签id
                     * @param _id 标签id
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取标签名称
                     * @return Name 标签名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置标签名称
                     * @param _name 标签名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取标签值列表
                     * @return Values 标签值列表
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置标签值列表
                     * @param _values 标签值列表
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                private:

                    /**
                     * 标签id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 标签名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签值列表
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BI_V20220105_MODEL_RESOURCETAGVALUE_H_
