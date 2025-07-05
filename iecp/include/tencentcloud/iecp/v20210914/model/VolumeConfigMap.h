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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMECONFIGMAP_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMECONFIGMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iecp/v20210914/model/VolumeConfigMapKeyToPath.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * ConfigMap挂载卷
                */
                class VolumeConfigMap : public AbstractModel
                {
                public:
                    VolumeConfigMap();
                    ~VolumeConfigMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取Key列表配置
                     * @return Items Key列表配置
                     * 
                     */
                    std::vector<VolumeConfigMapKeyToPath> GetItems() const;

                    /**
                     * 设置Key列表配置
                     * @param _items Key列表配置
                     * 
                     */
                    void SetItems(const std::vector<VolumeConfigMapKeyToPath>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Key列表配置
                     */
                    std::vector<VolumeConfigMapKeyToPath> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMECONFIGMAP_H_
