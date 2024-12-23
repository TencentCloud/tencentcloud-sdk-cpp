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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADATACATEGORYDISTRIBUTED_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADATACATEGORYDISTRIBUTED_H_

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
                * DSPA数据分类分布
                */
                class DspaDataCategoryDistributed : public AbstractModel
                {
                public:
                    DspaDataCategoryDistributed();
                    ~DspaDataCategoryDistributed() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据分类ID
                     * @return CategoryId 数据分类ID
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置数据分类ID
                     * @param _categoryId 数据分类ID
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
                     * 获取数据分类名称
                     * @return CategoryName 数据分类名称
                     * 
                     */
                    std::string GetCategoryName() const;

                    /**
                     * 设置数据分类名称
                     * @param _categoryName 数据分类名称
                     * 
                     */
                    void SetCategoryName(const std::string& _categoryName);

                    /**
                     * 判断参数 CategoryName 是否已赋值
                     * @return CategoryName 是否已赋值
                     * 
                     */
                    bool CategoryNameHasBeenSet() const;

                    /**
                     * 获取数据分类统计个数
                     * @return Count 数据分类统计个数
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置数据分类统计个数
                     * @param _count 数据分类统计个数
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取分类路径
                     * @return CategoryFullPath 分类路径
                     * 
                     */
                    std::string GetCategoryFullPath() const;

                    /**
                     * 设置分类路径
                     * @param _categoryFullPath 分类路径
                     * 
                     */
                    void SetCategoryFullPath(const std::string& _categoryFullPath);

                    /**
                     * 判断参数 CategoryFullPath 是否已赋值
                     * @return CategoryFullPath 是否已赋值
                     * 
                     */
                    bool CategoryFullPathHasBeenSet() const;

                private:

                    /**
                     * 数据分类ID
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                    /**
                     * 数据分类名称
                     */
                    std::string m_categoryName;
                    bool m_categoryNameHasBeenSet;

                    /**
                     * 数据分类统计个数
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 分类路径
                     */
                    std::string m_categoryFullPath;
                    bool m_categoryFullPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADATACATEGORYDISTRIBUTED_H_
