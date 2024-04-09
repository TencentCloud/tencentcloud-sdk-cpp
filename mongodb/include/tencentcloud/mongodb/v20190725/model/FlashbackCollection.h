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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKCOLLECTION_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKCOLLECTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/FBKeyValue.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 按key回档，源数据所在的表
                */
                class FlashbackCollection : public AbstractModel
                {
                public:
                    FlashbackCollection();
                    ~FlashbackCollection() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按key回档指定的集合名
                     * @return CollectionName 按key回档指定的集合名
                     * 
                     */
                    std::string GetCollectionName() const;

                    /**
                     * 设置按key回档指定的集合名
                     * @param _collectionName 按key回档指定的集合名
                     * 
                     */
                    void SetCollectionName(const std::string& _collectionName);

                    /**
                     * 判断参数 CollectionName 是否已赋值
                     * @return CollectionName 是否已赋值
                     * 
                     */
                    bool CollectionNameHasBeenSet() const;

                    /**
                     * 获取按key回档到的目标集合名
                     * @return TargetResultCollectionName 按key回档到的目标集合名
                     * 
                     */
                    std::string GetTargetResultCollectionName() const;

                    /**
                     * 设置按key回档到的目标集合名
                     * @param _targetResultCollectionName 按key回档到的目标集合名
                     * 
                     */
                    void SetTargetResultCollectionName(const std::string& _targetResultCollectionName);

                    /**
                     * 判断参数 TargetResultCollectionName 是否已赋值
                     * @return TargetResultCollectionName 是否已赋值
                     * 
                     */
                    bool TargetResultCollectionNameHasBeenSet() const;

                    /**
                     * 获取上传到cos的文件的value所对应的key值
                     * @return FilterKey 上传到cos的文件的value所对应的key值
                     * 
                     */
                    std::string GetFilterKey() const;

                    /**
                     * 设置上传到cos的文件的value所对应的key值
                     * @param _filterKey 上传到cos的文件的value所对应的key值
                     * 
                     */
                    void SetFilterKey(const std::string& _filterKey);

                    /**
                     * 判断参数 FilterKey 是否已赋值
                     * @return FilterKey 是否已赋值
                     * 
                     */
                    bool FilterKeyHasBeenSet() const;

                    /**
                     * 获取用于按key回档过滤的键值对
                     * @return KeyValues 用于按key回档过滤的键值对
                     * 
                     */
                    std::vector<FBKeyValue> GetKeyValues() const;

                    /**
                     * 设置用于按key回档过滤的键值对
                     * @param _keyValues 用于按key回档过滤的键值对
                     * 
                     */
                    void SetKeyValues(const std::vector<FBKeyValue>& _keyValues);

                    /**
                     * 判断参数 KeyValues 是否已赋值
                     * @return KeyValues 是否已赋值
                     * 
                     */
                    bool KeyValuesHasBeenSet() const;

                private:

                    /**
                     * 按key回档指定的集合名
                     */
                    std::string m_collectionName;
                    bool m_collectionNameHasBeenSet;

                    /**
                     * 按key回档到的目标集合名
                     */
                    std::string m_targetResultCollectionName;
                    bool m_targetResultCollectionNameHasBeenSet;

                    /**
                     * 上传到cos的文件的value所对应的key值
                     */
                    std::string m_filterKey;
                    bool m_filterKeyHasBeenSet;

                    /**
                     * 用于按key回档过滤的键值对
                     */
                    std::vector<FBKeyValue> m_keyValues;
                    bool m_keyValuesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKCOLLECTION_H_
