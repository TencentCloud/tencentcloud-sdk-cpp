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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINGROUP_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginRecord.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 源站组信息
                */
                class OriginGroup : public AbstractModel
                {
                public:
                    OriginGroup();
                    ~OriginGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站组ID
                     * @return OriginId 源站组ID
                     */
                    std::string GetOriginId() const;

                    /**
                     * 设置源站组ID
                     * @param OriginId 源站组ID
                     */
                    void SetOriginId(const std::string& _originId);

                    /**
                     * 判断参数 OriginId 是否已赋值
                     * @return OriginId 是否已赋值
                     */
                    bool OriginIdHasBeenSet() const;

                    /**
                     * 获取源站组名称
                     * @return OriginName 源站组名称
                     */
                    std::string GetOriginName() const;

                    /**
                     * 设置源站组名称
                     * @param OriginName 源站组名称
                     */
                    void SetOriginName(const std::string& _originName);

                    /**
                     * 判断参数 OriginName 是否已赋值
                     * @return OriginName 是否已赋值
                     */
                    bool OriginNameHasBeenSet() const;

                    /**
                     * 获取配置类型
                     * @return Type 配置类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置配置类型
                     * @param Type 配置类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取记录
                     * @return Record 记录
                     */
                    std::vector<OriginRecord> GetRecord() const;

                    /**
                     * 设置记录
                     * @param Record 记录
                     */
                    void SetRecord(const std::vector<OriginRecord>& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdateTime 更新时间
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间
                     * @param UpdateTime 更新时间
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取站点ID
                     * @return ZoneId 站点ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点ID
                     * @param ZoneId 站点ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return ZoneName 站点名称
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称
                     * @param ZoneName 站点名称
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取源站类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginType 源站类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置源站类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OriginType 源站类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取是否为四层代理使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationProxyUsed 是否为四层代理使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetApplicationProxyUsed() const;

                    /**
                     * 设置是否为四层代理使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApplicationProxyUsed 是否为四层代理使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApplicationProxyUsed(const bool& _applicationProxyUsed);

                    /**
                     * 判断参数 ApplicationProxyUsed 是否已赋值
                     * @return ApplicationProxyUsed 是否已赋值
                     */
                    bool ApplicationProxyUsedHasBeenSet() const;

                    /**
                     * 获取是否为负载均衡使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LoadBalancingUsed 是否为负载均衡使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetLoadBalancingUsed() const;

                    /**
                     * 设置是否为负载均衡使用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LoadBalancingUsed 是否为负载均衡使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLoadBalancingUsed(const bool& _loadBalancingUsed);

                    /**
                     * 判断参数 LoadBalancingUsed 是否已赋值
                     * @return LoadBalancingUsed 是否已赋值
                     */
                    bool LoadBalancingUsedHasBeenSet() const;

                private:

                    /**
                     * 源站组ID
                     */
                    std::string m_originId;
                    bool m_originIdHasBeenSet;

                    /**
                     * 源站组名称
                     */
                    std::string m_originName;
                    bool m_originNameHasBeenSet;

                    /**
                     * 配置类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 记录
                     */
                    std::vector<OriginRecord> m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 站点ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 源站类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * 是否为四层代理使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_applicationProxyUsed;
                    bool m_applicationProxyUsedHasBeenSet;

                    /**
                     * 是否为负载均衡使用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_loadBalancingUsed;
                    bool m_loadBalancingUsedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINGROUP_H_
