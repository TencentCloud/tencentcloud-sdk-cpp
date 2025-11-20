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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBPROCESSLIST_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBPROCESSLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/MongoDBProcessItem.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * mongodb 会话列表 返回数据结构
                */
                class MongoDBProcessList : public AbstractModel
                {
                public:
                    MongoDBProcessList();
                    ~MongoDBProcessList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取列名字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Names 列名字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置列名字段
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _names 列名字段
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取接口返回数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 接口返回数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MongoDBProcessItem> GetData() const;

                    /**
                     * 设置接口返回数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 接口返回数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::vector<MongoDBProcessItem>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 列名字段
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 接口返回数据详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MongoDBProcessItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_MONGODBPROCESSLIST_H_
