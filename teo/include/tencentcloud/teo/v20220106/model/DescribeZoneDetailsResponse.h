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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDETAILSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/VanityNameServers.h>
#include <tencentcloud/teo/v20220106/model/VanityNameServersIps.h>
#include <tencentcloud/teo/v20220106/model/Tag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeZoneDetails返回参数结构体
                */
                class DescribeZoneDetailsResponse : public AbstractModel
                {
                public:
                    DescribeZoneDetailsResponse();
                    ~DescribeZoneDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID
                     * @return Id 站点 ID
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户当前使用的 NS 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalNameServers 用户当前使用的 NS 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取腾讯云分配给用户的 NS 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameServers 腾讯云分配给用户的 NS 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取站点状态
- active：NS 已切换
- pending：NS 未切换
- moved：NS 已切走
- deactivated：被封禁
                     * @return Status 站点状态
- active：NS 已切换
- pending：NS 未切换
- moved：NS 已切走
- deactivated：被封禁
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取站点接入方式
- full：NS 接入
- partial：CNAME 接入
                     * @return Type 站点接入方式
- full：NS 接入
- partial：CNAME 接入
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取站点是否关闭
                     * @return Paused 站点是否关闭
                     */
                    bool GetPaused() const;

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取站点创建时间
                     * @return CreatedOn 站点创建时间
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取站点修改时间
                     * @return ModifiedOn 站点修改时间
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取用户自定义 NS 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VanityNameServers 用户自定义 NS 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VanityNameServers GetVanityNameServers() const;

                    /**
                     * 判断参数 VanityNameServers 是否已赋值
                     * @return VanityNameServers 是否已赋值
                     */
                    bool VanityNameServersHasBeenSet() const;

                    /**
                     * 获取用户自定义 NS IP 信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VanityNameServersIps 用户自定义 NS IP 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VanityNameServersIps> GetVanityNameServersIps() const;

                    /**
                     * 判断参数 VanityNameServersIps 是否已赋值
                     * @return VanityNameServersIps 是否已赋值
                     */
                    bool VanityNameServersIpsHasBeenSet() const;

                    /**
                     * 获取是否开启 CNAME 加速
- enabled：开启
- disabled：关闭
                     * @return CnameSpeedUp 是否开启 CNAME 加速
- enabled：开启
- disabled：关闭
                     */
                    std::string GetCnameSpeedUp() const;

                    /**
                     * 判断参数 CnameSpeedUp 是否已赋值
                     * @return CnameSpeedUp 是否已赋值
                     */
                    bool CnameSpeedUpHasBeenSet() const;

                    /**
                     * 获取cname切换验证状态
- finished 切换完成
- pending 切换验证中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CnameStatus cname切换验证状态
- finished 切换完成
- pending 切换验证中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     */
                    bool CnameStatusHasBeenSet() const;

                    /**
                     * 获取资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 站点 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户当前使用的 NS 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * 腾讯云分配给用户的 NS 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * 站点状态
- active：NS 已切换
- pending：NS 未切换
- moved：NS 已切走
- deactivated：被封禁
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 站点接入方式
- full：NS 接入
- partial：CNAME 接入
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 站点是否关闭
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * 站点创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 站点修改时间
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * 用户自定义 NS 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VanityNameServers m_vanityNameServers;
                    bool m_vanityNameServersHasBeenSet;

                    /**
                     * 用户自定义 NS IP 信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<VanityNameServersIps> m_vanityNameServersIps;
                    bool m_vanityNameServersIpsHasBeenSet;

                    /**
                     * 是否开启 CNAME 加速
- enabled：开启
- disabled：关闭
                     */
                    std::string m_cnameSpeedUp;
                    bool m_cnameSpeedUpHasBeenSet;

                    /**
                     * cname切换验证状态
- finished 切换完成
- pending 切换验证中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                    /**
                     * 资源标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEZONEDETAILSRESPONSE_H_
