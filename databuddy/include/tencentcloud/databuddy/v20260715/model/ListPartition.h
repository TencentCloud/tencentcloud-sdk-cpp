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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTPARTITION_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTPARTITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Literal.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 列表分区
                */
                class ListPartition : public AbstractModel
                {
                public:
                    ListPartition();
                    ~ListPartition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分区名
                     * @return Name 分区名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分区名
                     * @param _name 分区名
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
                     * 获取分区列表
                     * @return List 分区列表
                     * 
                     */
                    std::vector<Literal> GetList() const;

                    /**
                     * 设置分区列表
                     * @param _list 分区列表
                     * 
                     */
                    void SetList(const std::vector<Literal>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取属性
                     * @return Properties 属性
                     * 
                     */
                    std::vector<KVPair> GetProperties() const;

                    /**
                     * 设置属性
                     * @param _properties 属性
                     * 
                     */
                    void SetProperties(const std::vector<KVPair>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                private:

                    /**
                     * 分区名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分区列表
                     */
                    std::vector<Literal> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 属性
                     */
                    std::vector<KVPair> m_properties;
                    bool m_propertiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTPARTITION_H_
