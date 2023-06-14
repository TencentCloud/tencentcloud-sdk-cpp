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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_MICROSERVICE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_MICROSERVICE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务
                */
                class Microservice : public AbstractModel
                {
                public:
                    Microservice();
                    ~Microservice() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取微服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceId 微服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceId() const;

                    /**
                     * 设置微服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceId 微服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceId(const std::string& _microserviceId);

                    /**
                     * 判断参数 MicroserviceId 是否已赋值
                     * @return MicroserviceId 是否已赋值
                     * 
                     */
                    bool MicroserviceIdHasBeenSet() const;

                    /**
                     * 获取微服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceName 微服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceName() const;

                    /**
                     * 设置微服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceName 微服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceName(const std::string& _microserviceName);

                    /**
                     * 判断参数 MicroserviceName 是否已赋值
                     * @return MicroserviceName 是否已赋值
                     * 
                     */
                    bool MicroserviceNameHasBeenSet() const;

                    /**
                     * 获取微服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MicroserviceDesc 微服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMicroserviceDesc() const;

                    /**
                     * 设置微服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _microserviceDesc 微服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMicroserviceDesc(const std::string& _microserviceDesc);

                    /**
                     * 判断参数 MicroserviceDesc 是否已赋值
                     * @return MicroserviceDesc 是否已赋值
                     * 
                     */
                    bool MicroserviceDescHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NamespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNamespaceId() const;

                    /**
                     * 设置命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _namespaceId 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNamespaceId(const std::string& _namespaceId);

                    /**
                     * 判断参数 NamespaceId 是否已赋值
                     * @return NamespaceId 是否已赋值
                     * 
                     */
                    bool NamespaceIdHasBeenSet() const;

                    /**
                     * 获取微服务的运行实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RunInstanceCount 微服务的运行实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRunInstanceCount() const;

                    /**
                     * 设置微服务的运行实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _runInstanceCount 微服务的运行实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRunInstanceCount(const int64_t& _runInstanceCount);

                    /**
                     * 判断参数 RunInstanceCount 是否已赋值
                     * @return RunInstanceCount 是否已赋值
                     * 
                     */
                    bool RunInstanceCountHasBeenSet() const;

                    /**
                     * 获取微服务的离线实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CriticalInstanceCount 微服务的离线实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCriticalInstanceCount() const;

                    /**
                     * 设置微服务的离线实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _criticalInstanceCount 微服务的离线实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCriticalInstanceCount(const int64_t& _criticalInstanceCount);

                    /**
                     * 判断参数 CriticalInstanceCount 是否已赋值
                     * @return CriticalInstanceCount 是否已赋值
                     * 
                     */
                    bool CriticalInstanceCountHasBeenSet() const;

                private:

                    /**
                     * 微服务ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceId;
                    bool m_microserviceIdHasBeenSet;

                    /**
                     * 微服务名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceName;
                    bool m_microserviceNameHasBeenSet;

                    /**
                     * 微服务描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_microserviceDesc;
                    bool m_microserviceDescHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 更新时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 命名空间ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_namespaceId;
                    bool m_namespaceIdHasBeenSet;

                    /**
                     * 微服务的运行实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_runInstanceCount;
                    bool m_runInstanceCountHasBeenSet;

                    /**
                     * 微服务的离线实例数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_criticalInstanceCount;
                    bool m_criticalInstanceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_MICROSERVICE_H_
