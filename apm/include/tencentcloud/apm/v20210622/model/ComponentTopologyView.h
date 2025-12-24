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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_COMPONENTTOPOLOGYVIEW_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_COMPONENTTOPOLOGYVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * 包含了视图中节点组件类型的数量
                */
                class ComponentTopologyView : public AbstractModel
                {
                public:
                    ComponentTopologyView();
                    ~ComponentTopologyView() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务纬度的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Service 服务纬度的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetService() const;

                    /**
                     * 设置服务纬度的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _service 服务纬度的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetService(const int64_t& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取数据库节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Database 数据库节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDatabase() const;

                    /**
                     * 设置数据库节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _database 数据库节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDatabase(const int64_t& _database);

                    /**
                     * 判断参数 Database 是否已赋值
                     * @return Database 是否已赋值
                     * 
                     */
                    bool DatabaseHasBeenSet() const;

                    /**
                     * 获取消息队列节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MQ 消息队列节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMQ() const;

                    /**
                     * 设置消息队列节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mQ 消息队列节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMQ(const int64_t& _mQ);

                    /**
                     * 判断参数 MQ 是否已赋值
                     * @return MQ 是否已赋值
                     * 
                     */
                    bool MQHasBeenSet() const;

                private:

                    /**
                     * 服务纬度的节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * 数据库节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_database;
                    bool m_databaseHasBeenSet;

                    /**
                     * 消息队列节点数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_mQ;
                    bool m_mQHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_COMPONENTTOPOLOGYVIEW_H_
