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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_MAPCONFIGITEM_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_MAPCONFIGITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/InstanceConfigInfo.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * kv配置，多层级item
                */
                class MapConfigItem : public AbstractModel
                {
                public:
                    MapConfigItem();
                    ~MapConfigItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取key
                     * @return ConfKey key
                     * 
                     */
                    std::string GetConfKey() const;

                    /**
                     * 设置key
                     * @param _confKey key
                     * 
                     */
                    void SetConfKey(const std::string& _confKey);

                    /**
                     * 判断参数 ConfKey 是否已赋值
                     * @return ConfKey 是否已赋值
                     * 
                     */
                    bool ConfKeyHasBeenSet() const;

                    /**
                     * 获取列表
                     * @return Items 列表
                     * 
                     */
                    std::vector<InstanceConfigInfo> GetItems() const;

                    /**
                     * 设置列表
                     * @param _items 列表
                     * 
                     */
                    void SetItems(const std::vector<InstanceConfigInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * key
                     */
                    std::string m_confKey;
                    bool m_confKeyHasBeenSet;

                    /**
                     * 列表
                     */
                    std::vector<InstanceConfigInfo> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_MAPCONFIGITEM_H_
