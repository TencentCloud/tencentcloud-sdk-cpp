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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEEXTENSIONMC_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEEXTENSIONMC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eis
    {
        namespace V20210601
        {
            namespace Model
            {
                /**
                * 运行环境扩展组件
                */
                class RuntimeExtensionMC : public AbstractModel
                {
                public:
                    RuntimeExtensionMC();
                    ~RuntimeExtensionMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩展组件类型：0:cdc 1:dataway-java
                     * @return Type 扩展组件类型：0:cdc 1:dataway-java
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置扩展组件类型：0:cdc 1:dataway-java
                     * @param _type 扩展组件类型：0:cdc 1:dataway-java
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取部署规格vcore数
                     * @return Size 部署规格vcore数
                     * 
                     */
                    double GetSize() const;

                    /**
                     * 设置部署规格vcore数
                     * @param _size 部署规格vcore数
                     * 
                     */
                    void SetSize(const double& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取副本数
                     * @return Replica 副本数
                     * 
                     */
                    int64_t GetReplica() const;

                    /**
                     * 设置副本数
                     * @param _replica 副本数
                     * 
                     */
                    void SetReplica(const int64_t& _replica);

                    /**
                     * 判断参数 Replica 是否已赋值
                     * @return Replica 是否已赋值
                     * 
                     */
                    bool ReplicaHasBeenSet() const;

                    /**
                     * 获取扩展组件名称
                     * @return Name 扩展组件名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置扩展组件名称
                     * @param _name 扩展组件名称
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
                     * 获取状态 1:未启用 2:已启用
                     * @return Status 状态 1:未启用 2:已启用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 1:未启用 2:已启用
                     * @param _status 状态 1:未启用 2:已启用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    int64_t GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const int64_t& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return UpdatedAt 修改时间
                     * 
                     */
                    int64_t GetUpdatedAt() const;

                    /**
                     * 设置修改时间
                     * @param _updatedAt 修改时间
                     * 
                     */
                    void SetUpdatedAt(const int64_t& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                private:

                    /**
                     * 扩展组件类型：0:cdc 1:dataway-java
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 部署规格vcore数
                     */
                    double m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 副本数
                     */
                    int64_t m_replica;
                    bool m_replicaHasBeenSet;

                    /**
                     * 扩展组件名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 状态 1:未启用 2:已启用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 修改时间
                     */
                    int64_t m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_RUNTIMEEXTENSIONMC_H_
