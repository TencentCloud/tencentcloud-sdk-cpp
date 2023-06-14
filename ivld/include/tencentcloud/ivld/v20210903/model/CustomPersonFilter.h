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

#ifndef TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMPERSONFILTER_H_
#define TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMPERSONFILTER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ivld
    {
        namespace V20210903
        {
            namespace Model
            {
                /**
                * 自定义人物批量查询过滤条件
                */
                class CustomPersonFilter : public AbstractModel
                {
                public:
                    CustomPersonFilter();
                    ~CustomPersonFilter() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取待查询的人物姓名
                     * @return Name 待查询的人物姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置待查询的人物姓名
                     * @param _name 待查询的人物姓名
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
                     * 获取待过滤的自定义类型Id数组
                     * @return CategoryIdSet 待过滤的自定义类型Id数组
                     * 
                     */
                    std::vector<std::string> GetCategoryIdSet() const;

                    /**
                     * 设置待过滤的自定义类型Id数组
                     * @param _categoryIdSet 待过滤的自定义类型Id数组
                     * 
                     */
                    void SetCategoryIdSet(const std::vector<std::string>& _categoryIdSet);

                    /**
                     * 判断参数 CategoryIdSet 是否已赋值
                     * @return CategoryIdSet 是否已赋值
                     * 
                     */
                    bool CategoryIdSetHasBeenSet() const;

                    /**
                     * 获取待过滤的自定义人物Id数组
                     * @return PersonIdSet 待过滤的自定义人物Id数组
                     * 
                     */
                    std::vector<std::string> GetPersonIdSet() const;

                    /**
                     * 设置待过滤的自定义人物Id数组
                     * @param _personIdSet 待过滤的自定义人物Id数组
                     * 
                     */
                    void SetPersonIdSet(const std::vector<std::string>& _personIdSet);

                    /**
                     * 判断参数 PersonIdSet 是否已赋值
                     * @return PersonIdSet 是否已赋值
                     * 
                     */
                    bool PersonIdSetHasBeenSet() const;

                    /**
                     * 获取一级自定义人物类型数组
                     * @return L1CategorySet 一级自定义人物类型数组
                     * 
                     */
                    std::vector<std::string> GetL1CategorySet() const;

                    /**
                     * 设置一级自定义人物类型数组
                     * @param _l1CategorySet 一级自定义人物类型数组
                     * 
                     */
                    void SetL1CategorySet(const std::vector<std::string>& _l1CategorySet);

                    /**
                     * 判断参数 L1CategorySet 是否已赋值
                     * @return L1CategorySet 是否已赋值
                     * 
                     */
                    bool L1CategorySetHasBeenSet() const;

                private:

                    /**
                     * 待查询的人物姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 待过滤的自定义类型Id数组
                     */
                    std::vector<std::string> m_categoryIdSet;
                    bool m_categoryIdSetHasBeenSet;

                    /**
                     * 待过滤的自定义人物Id数组
                     */
                    std::vector<std::string> m_personIdSet;
                    bool m_personIdSetHasBeenSet;

                    /**
                     * 一级自定义人物类型数组
                     */
                    std::vector<std::string> m_l1CategorySet;
                    bool m_l1CategorySetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IVLD_V20210903_MODEL_CUSTOMPERSONFILTER_H_
