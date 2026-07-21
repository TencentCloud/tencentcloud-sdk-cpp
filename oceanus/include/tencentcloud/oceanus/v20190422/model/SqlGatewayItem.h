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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYITEM_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/GatewayRefItem.h>
#include <tencentcloud/oceanus/v20190422/model/Property.h>
#include <tencentcloud/oceanus/v20190422/model/SqlGatewayEndpoint.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * SqlGateway配置信息
                */
                class SqlGatewayItem : public AbstractModel
                {
                public:
                    SqlGatewayItem();
                    ~SqlGatewayItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialId <p>唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 设置<p>唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialId <p>唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialId(const std::string& _serialId);

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取<p>Flink内核版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlinkVersion <p>Flink内核版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFlinkVersion() const;

                    /**
                     * 设置<p>Flink内核版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _flinkVersion <p>Flink内核版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFlinkVersion(const std::string& _flinkVersion);

                    /**
                     * 判断参数 FlinkVersion 是否已赋值
                     * @return FlinkVersion 是否已赋值
                     * 
                     */
                    bool FlinkVersionHasBeenSet() const;

                    /**
                     * 获取<p>状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中</p>
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatorUin <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreatorUin() const;

                    /**
                     * 设置<p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _creatorUin <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreatorUin(const std::string& _creatorUin);

                    /**
                     * 判断参数 CreatorUin 是否已赋值
                     * @return CreatorUin 是否已赋值
                     * 
                     */
                    bool CreatorUinHasBeenSet() const;

                    /**
                     * 获取<p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceRefs <p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GatewayRefItem> GetResourceRefs() const;

                    /**
                     * 设置<p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceRefs <p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceRefs(const std::vector<GatewayRefItem>& _resourceRefs);

                    /**
                     * 判断参数 ResourceRefs 是否已赋值
                     * @return ResourceRefs 是否已赋值
                     * 
                     */
                    bool ResourceRefsHasBeenSet() const;

                    /**
                     * 获取<p>Cu规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CuSpec <p>Cu规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    double GetCuSpec() const;

                    /**
                     * 设置<p>Cu规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cuSpec <p>Cu规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCuSpec(const double& _cuSpec);

                    /**
                     * 判断参数 CuSpec 是否已赋值
                     * @return CuSpec 是否已赋值
                     * 
                     */
                    bool CuSpecHasBeenSet() const;

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

                    /**
                     * 获取<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Properties <p>配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Property> GetProperties() const;

                    /**
                     * 设置<p>配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _properties <p>配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProperties(const std::vector<Property>& _properties);

                    /**
                     * 判断参数 Properties 是否已赋值
                     * @return Properties 是否已赋值
                     * 
                     */
                    bool PropertiesHasBeenSet() const;

                    /**
                     * 获取<p>Cpu</p>
                     * @return Cpu <p>Cpu</p>
                     * 
                     */
                    double GetCpu() const;

                    /**
                     * 设置<p>Cpu</p>
                     * @param _cpu <p>Cpu</p>
                     * 
                     */
                    void SetCpu(const double& _cpu);

                    /**
                     * 判断参数 Cpu 是否已赋值
                     * @return Cpu 是否已赋值
                     * 
                     */
                    bool CpuHasBeenSet() const;

                    /**
                     * 获取<p>Mem</p>
                     * @return Mem <p>Mem</p>
                     * 
                     */
                    double GetMem() const;

                    /**
                     * 设置<p>Mem</p>
                     * @param _mem <p>Mem</p>
                     * 
                     */
                    void SetMem(const double& _mem);

                    /**
                     * 判断参数 Mem 是否已赋值
                     * @return Mem 是否已赋值
                     * 
                     */
                    bool MemHasBeenSet() const;

                    /**
                     * 获取<p>jdk版本</p>
                     * @return JdkVersion <p>jdk版本</p>
                     * 
                     */
                    std::string GetJdkVersion() const;

                    /**
                     * 设置<p>jdk版本</p>
                     * @param _jdkVersion <p>jdk版本</p>
                     * 
                     */
                    void SetJdkVersion(const std::string& _jdkVersion);

                    /**
                     * 判断参数 JdkVersion 是否已赋值
                     * @return JdkVersion 是否已赋值
                     * 
                     */
                    bool JdkVersionHasBeenSet() const;

                    /**
                     * 获取<p>session id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SessionClusterId <p>session id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSessionClusterId() const;

                    /**
                     * 设置<p>session id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sessionClusterId <p>session id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSessionClusterId(const std::string& _sessionClusterId);

                    /**
                     * 判断参数 SessionClusterId 是否已赋值
                     * @return SessionClusterId 是否已赋值
                     * 
                     */
                    bool SessionClusterIdHasBeenSet() const;

                    /**
                     * 获取<p>pg用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PgUser <p>pg用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPgUser() const;

                    /**
                     * 设置<p>pg用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pgUser <p>pg用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPgUser(const std::string& _pgUser);

                    /**
                     * 判断参数 PgUser 是否已赋值
                     * @return PgUser 是否已赋值
                     * 
                     */
                    bool PgUserHasBeenSet() const;

                    /**
                     * 获取<p>协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Endpoints <p>协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SqlGatewayEndpoint> GetEndpoints() const;

                    /**
                     * 设置<p>协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endpoints <p>协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEndpoints(const std::vector<SqlGatewayEndpoint>& _endpoints);

                    /**
                     * 判断参数 Endpoints 是否已赋值
                     * @return Endpoints 是否已赋值
                     * 
                     */
                    bool EndpointsHasBeenSet() const;

                private:

                    /**
                     * <p>唯一标识</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * <p>Flink内核版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flinkVersion;
                    bool m_flinkVersionHasBeenSet;

                    /**
                     * <p>状态，1.停止 2. 开启中 3. 开启 4. 开启失败 5. 停止中</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>创建人</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creatorUin;
                    bool m_creatorUinHasBeenSet;

                    /**
                     * <p>引用资源</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GatewayRefItem> m_resourceRefs;
                    bool m_resourceRefsHasBeenSet;

                    /**
                     * <p>Cu规格</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_cuSpec;
                    bool m_cuSpecHasBeenSet;

                    /**
                     * <p>创建时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>配置参数</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Property> m_properties;
                    bool m_propertiesHasBeenSet;

                    /**
                     * <p>Cpu</p>
                     */
                    double m_cpu;
                    bool m_cpuHasBeenSet;

                    /**
                     * <p>Mem</p>
                     */
                    double m_mem;
                    bool m_memHasBeenSet;

                    /**
                     * <p>jdk版本</p>
                     */
                    std::string m_jdkVersion;
                    bool m_jdkVersionHasBeenSet;

                    /**
                     * <p>session id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sessionClusterId;
                    bool m_sessionClusterIdHasBeenSet;

                    /**
                     * <p>pg用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pgUser;
                    bool m_pgUserHasBeenSet;

                    /**
                     * <p>协议</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SqlGatewayEndpoint> m_endpoints;
                    bool m_endpointsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_SQLGATEWAYITEM_H_
