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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYSUBCATEGORYCONF_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYSUBCATEGORYCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 子分类维度的检测项命中配置。
                */
                class BaselinePolicySubCategoryConf : public AbstractModel
                {
                public:
                    BaselinePolicySubCategoryConf();
                    ~BaselinePolicySubCategoryConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>基线子分类 ID。</p>
                     * @return CategoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    uint64_t GetCategoryID() const;

                    /**
                     * 设置<p>基线子分类 ID。</p>
                     * @param _categoryID <p>基线子分类 ID。</p>
                     * 
                     */
                    void SetCategoryID(const uint64_t& _categoryID);

                    /**
                     * 判断参数 CategoryID 是否已赋值
                     * @return CategoryID 是否已赋值
                     * 
                     */
                    bool CategoryIDHasBeenSet() const;

                    /**
                     * 获取<p>是否全选该子分类下所有检测项。true 全选，false 按 ItemIDList 明细生效。</p>
                     * @return AllSelect <p>是否全选该子分类下所有检测项。true 全选，false 按 ItemIDList 明细生效。</p>
                     * 
                     */
                    bool GetAllSelect() const;

                    /**
                     * 设置<p>是否全选该子分类下所有检测项。true 全选，false 按 ItemIDList 明细生效。</p>
                     * @param _allSelect <p>是否全选该子分类下所有检测项。true 全选，false 按 ItemIDList 明细生效。</p>
                     * 
                     */
                    void SetAllSelect(const bool& _allSelect);

                    /**
                     * 判断参数 AllSelect 是否已赋值
                     * @return AllSelect 是否已赋值
                     * 
                     */
                    bool AllSelectHasBeenSet() const;

                    /**
                     * 获取<p>已选的检测项 ID 列表，AllSelect=false 时按此明细生效。</p>
                     * @return ItemIDList <p>已选的检测项 ID 列表，AllSelect=false 时按此明细生效。</p>
                     * 
                     */
                    std::vector<uint64_t> GetItemIDList() const;

                    /**
                     * 设置<p>已选的检测项 ID 列表，AllSelect=false 时按此明细生效。</p>
                     * @param _itemIDList <p>已选的检测项 ID 列表，AllSelect=false 时按此明细生效。</p>
                     * 
                     */
                    void SetItemIDList(const std::vector<uint64_t>& _itemIDList);

                    /**
                     * 判断参数 ItemIDList 是否已赋值
                     * @return ItemIDList 是否已赋值
                     * 
                     */
                    bool ItemIDListHasBeenSet() const;

                private:

                    /**
                     * <p>基线子分类 ID。</p>
                     */
                    uint64_t m_categoryID;
                    bool m_categoryIDHasBeenSet;

                    /**
                     * <p>是否全选该子分类下所有检测项。true 全选，false 按 ItemIDList 明细生效。</p>
                     */
                    bool m_allSelect;
                    bool m_allSelectHasBeenSet;

                    /**
                     * <p>已选的检测项 ID 列表，AllSelect=false 时按此明细生效。</p>
                     */
                    std::vector<uint64_t> m_itemIDList;
                    bool m_itemIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_BASELINEPOLICYSUBCATEGORYCONF_H_
