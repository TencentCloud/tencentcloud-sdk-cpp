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

#ifndef TENCENTCLOUD_EIS_V20210601_MODEL_ABSTRACTRUNTIMEMC_H_
#define TENCENTCLOUD_EIS_V20210601_MODEL_ABSTRACTRUNTIMEMC_H_

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
                * 运行时精简信息
                */
                class AbstractRuntimeMC : public AbstractModel
                {
                public:
                    AbstractRuntimeMC();
                    ~AbstractRuntimeMC() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取环境id
                     * @return RuntimeId 环境id
                     * 
                     */
                    int64_t GetRuntimeId() const;

                    /**
                     * 设置环境id
                     * @param _runtimeId 环境id
                     * 
                     */
                    void SetRuntimeId(const int64_t& _runtimeId);

                    /**
                     * 判断参数 RuntimeId 是否已赋值
                     * @return RuntimeId 是否已赋值
                     * 
                     */
                    bool RuntimeIdHasBeenSet() const;

                    /**
                     * 获取环境名称，用户输入，同一uin内唯一
                     * @return DisplayName 环境名称，用户输入，同一uin内唯一
                     * 
                     */
                    std::string GetDisplayName() const;

                    /**
                     * 设置环境名称，用户输入，同一uin内唯一
                     * @param _displayName 环境名称，用户输入，同一uin内唯一
                     * 
                     */
                    void SetDisplayName(const std::string& _displayName);

                    /**
                     * 判断参数 DisplayName 是否已赋值
                     * @return DisplayName 是否已赋值
                     * 
                     */
                    bool DisplayNameHasBeenSet() const;

                    /**
                     * 获取环境类型：0: sandbox, 1:shared, 2:private
                     * @return Type 环境类型：0: sandbox, 1:shared, 2:private
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置环境类型：0: sandbox, 1:shared, 2:private
                     * @param _type 环境类型：0: sandbox, 1:shared, 2:private
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
                     * 获取环境所在地域，tianjin，beijiing，guangzhou等
                     * @return Zone 环境所在地域，tianjin，beijiing，guangzhou等
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置环境所在地域，tianjin，beijiing，guangzhou等
                     * @param _zone 环境所在地域，tianjin，beijiing，guangzhou等
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取环境所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     * @return Area 环境所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置环境所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     * @param _area 环境所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取环境应用listener地址后缀
                     * @return Addr 环境应用listener地址后缀
                     * 
                     */
                    std::string GetAddr() const;

                    /**
                     * 设置环境应用listener地址后缀
                     * @param _addr 环境应用listener地址后缀
                     * 
                     */
                    void SetAddr(const std::string& _addr);

                    /**
                     * 判断参数 Addr 是否已赋值
                     * @return Addr 是否已赋值
                     * 
                     */
                    bool AddrHasBeenSet() const;

                    /**
                     * 获取环境状态
                     * @return Status 环境状态
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置环境状态
                     * @param _status 环境状态
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
                     * 获取环境过期时间
                     * @return ExpiredAt 环境过期时间
                     * 
                     */
                    int64_t GetExpiredAt() const;

                    /**
                     * 设置环境过期时间
                     * @param _expiredAt 环境过期时间
                     * 
                     */
                    void SetExpiredAt(const int64_t& _expiredAt);

                    /**
                     * 判断参数 ExpiredAt 是否已赋值
                     * @return ExpiredAt 是否已赋值
                     * 
                     */
                    bool ExpiredAtHasBeenSet() const;

                    /**
                     * 获取环境运行类型：0:运行时类型、1:api类型
                     * @return RuntimeClass 环境运行类型：0:运行时类型、1:api类型
                     * 
                     */
                    int64_t GetRuntimeClass() const;

                    /**
                     * 设置环境运行类型：0:运行时类型、1:api类型
                     * @param _runtimeClass 环境运行类型：0:运行时类型、1:api类型
                     * 
                     */
                    void SetRuntimeClass(const int64_t& _runtimeClass);

                    /**
                     * 判断参数 RuntimeClass 是否已赋值
                     * @return RuntimeClass 是否已赋值
                     * 
                     */
                    bool RuntimeClassHasBeenSet() const;

                    /**
                     * 获取是否已在当前环境发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deployed 是否已在当前环境发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDeployed() const;

                    /**
                     * 设置是否已在当前环境发布
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deployed 是否已在当前环境发布
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeployed(const bool& _deployed);

                    /**
                     * 判断参数 Deployed 是否已赋值
                     * @return Deployed 是否已赋值
                     * 
                     */
                    bool DeployedHasBeenSet() const;

                    /**
                     * 获取环境扩展组件是否满足应用要求：0=true, 1=false 表示该应用需要扩展组件0(cdc)以及1(java)，但是独立环境有cdc无java，不满足发布要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MatchExtensions 环境扩展组件是否满足应用要求：0=true, 1=false 表示该应用需要扩展组件0(cdc)以及1(java)，但是独立环境有cdc无java，不满足发布要求
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMatchExtensions() const;

                    /**
                     * 设置环境扩展组件是否满足应用要求：0=true, 1=false 表示该应用需要扩展组件0(cdc)以及1(java)，但是独立环境有cdc无java，不满足发布要求
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _matchExtensions 环境扩展组件是否满足应用要求：0=true, 1=false 表示该应用需要扩展组件0(cdc)以及1(java)，但是独立环境有cdc无java，不满足发布要求
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMatchExtensions(const std::string& _matchExtensions);

                    /**
                     * 判断参数 MatchExtensions 是否已赋值
                     * @return MatchExtensions 是否已赋值
                     * 
                     */
                    bool MatchExtensionsHasBeenSet() const;

                private:

                    /**
                     * 环境id
                     */
                    int64_t m_runtimeId;
                    bool m_runtimeIdHasBeenSet;

                    /**
                     * 环境名称，用户输入，同一uin内唯一
                     */
                    std::string m_displayName;
                    bool m_displayNameHasBeenSet;

                    /**
                     * 环境类型：0: sandbox, 1:shared, 2:private
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 环境所在地域，tianjin，beijiing，guangzhou等
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 环境所在地域，tianjin，beijiing，guangzhou等（同Zone）
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 环境应用listener地址后缀
                     */
                    std::string m_addr;
                    bool m_addrHasBeenSet;

                    /**
                     * 环境状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 环境过期时间
                     */
                    int64_t m_expiredAt;
                    bool m_expiredAtHasBeenSet;

                    /**
                     * 环境运行类型：0:运行时类型、1:api类型
                     */
                    int64_t m_runtimeClass;
                    bool m_runtimeClassHasBeenSet;

                    /**
                     * 是否已在当前环境发布
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_deployed;
                    bool m_deployedHasBeenSet;

                    /**
                     * 环境扩展组件是否满足应用要求：0=true, 1=false 表示该应用需要扩展组件0(cdc)以及1(java)，但是独立环境有cdc无java，不满足发布要求
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_matchExtensions;
                    bool m_matchExtensionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIS_V20210601_MODEL_ABSTRACTRUNTIMEMC_H_
