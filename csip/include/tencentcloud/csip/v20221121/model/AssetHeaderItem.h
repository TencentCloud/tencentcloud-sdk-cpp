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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETHEADERITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETHEADERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AssetFilterConfig.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 资产动态表头
                */
                class AssetHeaderItem : public AbstractModel
                {
                public:
                    AssetHeaderItem();
                    ~AssetHeaderItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>类型</p>
                     * @return ItemType <p>类型</p>
                     * 
                     */
                    std::string GetItemType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _itemType <p>类型</p>
                     * 
                     */
                    void SetItemType(const std::string& _itemType);

                    /**
                     * 判断参数 ItemType 是否已赋值
                     * @return ItemType 是否已赋值
                     * 
                     */
                    bool ItemTypeHasBeenSet() const;

                    /**
                     * 获取<p>展示</p>
                     * @return Label <p>展示</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>展示</p>
                     * @param _label <p>展示</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取<p>是否支持复制</p>
                     * @return Copy <p>是否支持复制</p>
                     * 
                     */
                    uint64_t GetCopy() const;

                    /**
                     * 设置<p>是否支持复制</p>
                     * @param _copy <p>是否支持复制</p>
                     * 
                     */
                    void SetCopy(const uint64_t& _copy);

                    /**
                     * 判断参数 Copy 是否已赋值
                     * @return Copy 是否已赋值
                     * 
                     */
                    bool CopyHasBeenSet() const;

                    /**
                     * 获取<p>值对应字段键</p>
                     * @return Values <p>值对应字段键</p>
                     * 
                     */
                    std::vector<std::string> GetValues() const;

                    /**
                     * 设置<p>值对应字段键</p>
                     * @param _values <p>值对应字段键</p>
                     * 
                     */
                    void SetValues(const std::vector<std::string>& _values);

                    /**
                     * 判断参数 Values 是否已赋值
                     * @return Values 是否已赋值
                     * 
                     */
                    bool ValuesHasBeenSet() const;

                    /**
                     * 获取<p>跳转URL</p>
                     * @return LinkURL <p>跳转URL</p>
                     * 
                     */
                    std::string GetLinkURL() const;

                    /**
                     * 设置<p>跳转URL</p>
                     * @param _linkURL <p>跳转URL</p>
                     * 
                     */
                    void SetLinkURL(const std::string& _linkURL);

                    /**
                     * 判断参数 LinkURL 是否已赋值
                     * @return LinkURL 是否已赋值
                     * 
                     */
                    bool LinkURLHasBeenSet() const;

                    /**
                     * 获取<p>过滤器</p>
                     * @return Filters <p>过滤器</p>
                     * 
                     */
                    std::vector<AssetFilterConfig> GetFilters() const;

                    /**
                     * 设置<p>过滤器</p>
                     * @param _filters <p>过滤器</p>
                     * 
                     */
                    void SetFilters(const std::vector<AssetFilterConfig>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取<p>是否支持排序</p>
                     * @return Sort <p>是否支持排序</p>
                     * 
                     */
                    uint64_t GetSort() const;

                    /**
                     * 设置<p>是否支持排序</p>
                     * @param _sort <p>是否支持排序</p>
                     * 
                     */
                    void SetSort(const uint64_t& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取<p>字段展示样式</p>
                     * @return ValueStyle <p>字段展示样式</p>
                     * 
                     */
                    std::string GetValueStyle() const;

                    /**
                     * 设置<p>字段展示样式</p>
                     * @param _valueStyle <p>字段展示样式</p>
                     * 
                     */
                    void SetValueStyle(const std::string& _valueStyle);

                    /**
                     * 判断参数 ValueStyle 是否已赋值
                     * @return ValueStyle 是否已赋值
                     * 
                     */
                    bool ValueStyleHasBeenSet() const;

                private:

                    /**
                     * <p>类型</p>
                     */
                    std::string m_itemType;
                    bool m_itemTypeHasBeenSet;

                    /**
                     * <p>展示</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * <p>是否支持复制</p>
                     */
                    uint64_t m_copy;
                    bool m_copyHasBeenSet;

                    /**
                     * <p>值对应字段键</p>
                     */
                    std::vector<std::string> m_values;
                    bool m_valuesHasBeenSet;

                    /**
                     * <p>跳转URL</p>
                     */
                    std::string m_linkURL;
                    bool m_linkURLHasBeenSet;

                    /**
                     * <p>过滤器</p>
                     */
                    std::vector<AssetFilterConfig> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * <p>是否支持排序</p>
                     */
                    uint64_t m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <p>字段展示样式</p>
                     */
                    std::string m_valueStyle;
                    bool m_valueStyleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_ASSETHEADERITEM_H_
