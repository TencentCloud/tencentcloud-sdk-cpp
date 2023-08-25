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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DATACATEGORY_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DATACATEGORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 敏感数据分类
                */
                class DataCategory : public AbstractModel
                {
                public:
                    DataCategory();
                    ~DataCategory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分类ID
                     * @return CategoryId 分类ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置分类ID
                     * @param _categoryId 分类ID
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                    /**
                     * 获取敏感数据分类名称
                     * @return Name 敏感数据分类名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置敏感数据分类名称
                     * @param _name 敏感数据分类名称
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
                     * 获取敏感数据分类来源，取值：0 内置, 1 自定义
                     * @return Source 敏感数据分类来源，取值：0 内置, 1 自定义
                     * 
                     */
                    int64_t GetSource() const;

                    /**
                     * 设置敏感数据分类来源，取值：0 内置, 1 自定义
                     * @param _source 敏感数据分类来源，取值：0 内置, 1 自定义
                     * 
                     */
                    void SetSource(const int64_t& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取关联模板数量
                     * @return RelateComplianceCount 关联模板数量
                     * 
                     */
                    uint64_t GetRelateComplianceCount() const;

                    /**
                     * 设置关联模板数量
                     * @param _relateComplianceCount 关联模板数量
                     * 
                     */
                    void SetRelateComplianceCount(const uint64_t& _relateComplianceCount);

                    /**
                     * 判断参数 RelateComplianceCount 是否已赋值
                     * @return RelateComplianceCount 是否已赋值
                     * 
                     */
                    bool RelateComplianceCountHasBeenSet() const;

                private:

                    /**
                     * 分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 敏感数据分类名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 敏感数据分类来源，取值：0 内置, 1 自定义
                     */
                    int64_t m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 关联模板数量
                     */
                    uint64_t m_relateComplianceCount;
                    bool m_relateComplianceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DATACATEGORY_H_
