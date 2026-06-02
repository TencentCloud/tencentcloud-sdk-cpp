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

#ifndef TENCENTCLOUD_APIS_V20240801_MODEL_TARGETSERVERGROUPDTO_H_
#define TENCENTCLOUD_APIS_V20240801_MODEL_TARGETSERVERGROUPDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apis/v20240801/model/TargetHostDTO.h>


namespace TencentCloud
{
    namespace Apis
    {
        namespace V20240801
        {
            namespace Model
            {
                /**
                * 后端服务组DTO
                */
                class TargetServerGroupDTO : public AbstractModel
                {
                public:
                    TargetServerGroupDTO();
                    ~TargetServerGroupDTO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID <p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetID() const;

                    /**
                     * 设置<p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iD <p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetID(const std::string& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>目标服务器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHosts <p>目标服务器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TargetHostDTO> GetTargetHosts() const;

                    /**
                     * 设置<p>目标服务器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetHosts <p>目标服务器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetHosts(const std::vector<TargetHostDTO>& _targetHosts);

                    /**
                     * 判断参数 TargetHosts 是否已赋值
                     * @return TargetHosts 是否已赋值
                     * 
                     */
                    bool TargetHostsHasBeenSet() const;

                    /**
                     * 获取<p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TargetHostType <p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTargetHostType() const;

                    /**
                     * 设置<p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _targetHostType <p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTargetHostType(const int64_t& _targetHostType);

                    /**
                     * 判断参数 TargetHostType 是否已赋值
                     * @return TargetHostType 是否已赋值
                     * 
                     */
                    bool TargetHostTypeHasBeenSet() const;

                    /**
                     * 获取<p>关联的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ServiceCount <p>关联的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetServiceCount() const;

                    /**
                     * 设置<p>关联的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serviceCount <p>关联的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetServiceCount(const uint64_t& _serviceCount);

                    /**
                     * 判断参数 ServiceCount 是否已赋值
                     * @return ServiceCount 是否已赋值
                     * 
                     */
                    bool ServiceCountHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>后端服务组ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * <p>名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>目标服务器列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TargetHostDTO> m_targetHosts;
                    bool m_targetHostsHasBeenSet;

                    /**
                     * <p>目标Host类型 0 默认 1 vpc</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_targetHostType;
                    bool m_targetHostTypeHasBeenSet;

                    /**
                     * <p>关联的服务数量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_serviceCount;
                    bool m_serviceCountHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIS_V20240801_MODEL_TARGETSERVERGROUPDTO_H_
