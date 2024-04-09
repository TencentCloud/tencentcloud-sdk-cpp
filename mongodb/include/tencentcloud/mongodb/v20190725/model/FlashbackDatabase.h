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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKDATABASE_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKDATABASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/FlashbackCollection.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * 按key回档，源数据所在的库表
                */
                class FlashbackDatabase : public AbstractModel
                {
                public:
                    FlashbackDatabase();
                    ~FlashbackDatabase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取按key回档源数据所在库
                     * @return DBName 按key回档源数据所在库
                     * 
                     */
                    std::string GetDBName() const;

                    /**
                     * 设置按key回档源数据所在库
                     * @param _dBName 按key回档源数据所在库
                     * 
                     */
                    void SetDBName(const std::string& _dBName);

                    /**
                     * 判断参数 DBName 是否已赋值
                     * @return DBName 是否已赋值
                     * 
                     */
                    bool DBNameHasBeenSet() const;

                    /**
                     * 获取按key回档的集群数组
                     * @return Collections 按key回档的集群数组
                     * 
                     */
                    std::vector<FlashbackCollection> GetCollections() const;

                    /**
                     * 设置按key回档的集群数组
                     * @param _collections 按key回档的集群数组
                     * 
                     */
                    void SetCollections(const std::vector<FlashbackCollection>& _collections);

                    /**
                     * 判断参数 Collections 是否已赋值
                     * @return Collections 是否已赋值
                     * 
                     */
                    bool CollectionsHasBeenSet() const;

                private:

                    /**
                     * 按key回档源数据所在库
                     */
                    std::string m_dBName;
                    bool m_dBNameHasBeenSet;

                    /**
                     * 按key回档的集群数组
                     */
                    std::vector<FlashbackCollection> m_collections;
                    bool m_collectionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_FLASHBACKDATABASE_H_
