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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_METRICDISTRIBUTIONBATCHITEM_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_METRICDISTRIBUTIONBATCHITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/MetricDistributionItem.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 批量分布条目
                */
                class MetricDistributionBatchItem : public AbstractModel
                {
                public:
                    MetricDistributionBatchItem();
                    ~MetricDistributionBatchItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>条目 Key</p>
                     * @return Key <p>条目 Key</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>条目 Key</p>
                     * @param _key <p>条目 Key</p>
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取<p>分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items <p>分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MetricDistributionItem> GetItems() const;

                    /**
                     * 设置<p>分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items <p>分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<MetricDistributionItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取<p>合计</p>
                     * @return Total <p>合计</p>
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 设置<p>合计</p>
                     * @param _total <p>合计</p>
                     * 
                     */
                    void SetTotal(const int64_t& _total);

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * <p>条目 Key</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>分布桶</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MetricDistributionItem> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * <p>合计</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_METRICDISTRIBUTIONBATCHITEM_H_
