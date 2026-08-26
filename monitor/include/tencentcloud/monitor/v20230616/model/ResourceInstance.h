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

#ifndef TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEINSTANCE_H_
#define TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20230616
        {
            namespace Model
            {
                /**
                * 资源实例
                */
                class ResourceInstance : public AbstractModel
                {
                public:
                    ResourceInstance();
                    ~ResourceInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Service <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetService() const;

                    /**
                     * 设置<p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _service <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetService(const std::string& _service);

                    /**
                     * 判断参数 Service 是否已赋值
                     * @return Service 是否已赋值
                     * 
                     */
                    bool ServiceHasBeenSet() const;

                    /**
                     * 获取<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _region <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>是否就绪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsReady <p>是否就绪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsReady() const;

                    /**
                     * 设置<p>是否就绪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isReady <p>是否就绪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIsReady(const bool& _isReady);

                    /**
                     * 判断参数 IsReady 是否已赋值
                     * @return IsReady 是否已赋值
                     * 
                     */
                    bool IsReadyHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>服务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_service;
                    bool m_serviceHasBeenSet;

                    /**
                     * <p>地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>是否就绪</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isReady;
                    bool m_isReadyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20230616_MODEL_RESOURCEINSTANCE_H_
