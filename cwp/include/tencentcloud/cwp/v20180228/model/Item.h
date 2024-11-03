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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_ITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_ITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 项
                */
                class Item : public AbstractModel
                {
                public:
                    Item();
                    ~Item() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Id
                     * @return ItemId Id
                     * 
                     */
                    int64_t GetItemId() const;

                    /**
                     * 设置Id
                     * @param _itemId Id
                     * 
                     */
                    void SetItemId(const int64_t& _itemId);

                    /**
                     * 判断参数 ItemId 是否已赋值
                     * @return ItemId 是否已赋值
                     * 
                     */
                    bool ItemIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return ItemName 名称
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置名称
                     * @param _itemName 名称
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取自定义阈值
                     * @return CustomItemValues 自定义阈值
                     * 
                     */
                    std::vector<uint64_t> GetCustomItemValues() const;

                    /**
                     * 设置自定义阈值
                     * @param _customItemValues 自定义阈值
                     * 
                     */
                    void SetCustomItemValues(const std::vector<uint64_t>& _customItemValues);

                    /**
                     * 判断参数 CustomItemValues 是否已赋值
                     * @return CustomItemValues 是否已赋值
                     * 
                     */
                    bool CustomItemValuesHasBeenSet() const;

                    /**
                     * 获取检测项所属分类
                     * @return CategoryId 检测项所属分类
                     * 
                     */
                    int64_t GetCategoryId() const;

                    /**
                     * 设置检测项所属分类
                     * @param _categoryId 检测项所属分类
                     * 
                     */
                    void SetCategoryId(const int64_t& _categoryId);

                    /**
                     * 判断参数 CategoryId 是否已赋值
                     * @return CategoryId 是否已赋值
                     * 
                     */
                    bool CategoryIdHasBeenSet() const;

                private:

                    /**
                     * Id
                     */
                    int64_t m_itemId;
                    bool m_itemIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 自定义阈值
                     */
                    std::vector<uint64_t> m_customItemValues;
                    bool m_customItemValuesHasBeenSet;

                    /**
                     * 检测项所属分类
                     */
                    int64_t m_categoryId;
                    bool m_categoryIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_ITEM_H_
