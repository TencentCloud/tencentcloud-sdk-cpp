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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/FavorInfo.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * ResourceInfo
                */
                class ResourceInfo : public AbstractModel
                {
                public:
                    ResourceInfo();
                    ~ResourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取归属类型
                     * @return AttributionType 归属类型
                     * 
                     */
                    std::string GetAttributionType() const;

                    /**
                     * 设置归属类型
                     * @param _attributionType 归属类型
                     * 
                     */
                    void SetAttributionType(const std::string& _attributionType);

                    /**
                     * 判断参数 AttributionType 是否已赋值
                     * @return AttributionType 是否已赋值
                     * 
                     */
                    bool AttributionTypeHasBeenSet() const;

                    /**
                     * 获取资源类型
                     * @return ResourceType 资源类型
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置资源类型
                     * @param _resourceType 资源类型
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取引擎名称
                     * @return Name 引擎名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置引擎名称
                     * @param _name 引擎名称
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
                     * 获取如资源类型为spark-sql 取值为Name, 如为spark-batch 取值为session app_name
                     * @return Instance 如资源类型为spark-sql 取值为Name, 如为spark-batch 取值为session app_name
                     * 
                     */
                    std::string GetInstance() const;

                    /**
                     * 设置如资源类型为spark-sql 取值为Name, 如为spark-batch 取值为session app_name
                     * @param _instance 如资源类型为spark-sql 取值为Name, 如为spark-batch 取值为session app_name
                     * 
                     */
                    void SetInstance(const std::string& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取亲和性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Favor 亲和性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FavorInfo> GetFavor() const;

                    /**
                     * 设置亲和性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _favor 亲和性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFavor(const std::vector<FavorInfo>& _favor);

                    /**
                     * 判断参数 Favor 是否已赋值
                     * @return Favor 是否已赋值
                     * 
                     */
                    bool FavorHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return Status 状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态
                     * @param _status 状态
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
                     * 获取标准引擎资源组信息
                     * @return ResourceGroupName 标准引擎资源组信息
                     * 
                     */
                    std::string GetResourceGroupName() const;

                    /**
                     * 设置标准引擎资源组信息
                     * @param _resourceGroupName 标准引擎资源组信息
                     * 
                     */
                    void SetResourceGroupName(const std::string& _resourceGroupName);

                    /**
                     * 判断参数 ResourceGroupName 是否已赋值
                     * @return ResourceGroupName 是否已赋值
                     * 
                     */
                    bool ResourceGroupNameHasBeenSet() const;

                private:

                    /**
                     * 归属类型
                     */
                    std::string m_attributionType;
                    bool m_attributionTypeHasBeenSet;

                    /**
                     * 资源类型
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * 引擎名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 如资源类型为spark-sql 取值为Name, 如为spark-batch 取值为session app_name
                     */
                    std::string m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 亲和性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FavorInfo> m_favor;
                    bool m_favorHasBeenSet;

                    /**
                     * 状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 标准引擎资源组信息
                     */
                    std::string m_resourceGroupName;
                    bool m_resourceGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_RESOURCEINFO_H_
