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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONERESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyZone返回参数结构体
                */
                class ModifyZoneResponse : public AbstractModel
                {
                public:
                    ModifyZoneResponse();
                    ~ModifyZoneResponse() = default;
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
                     * 获取站点当前使用的 NS
                     * @return OriginalNameServers 站点当前使用的 NS
                     */
                    std::vector<std::string> GetOriginalNameServers() const;

                    /**
                     * 判断参数 OriginalNameServers 是否已赋值
                     * @return OriginalNameServers 是否已赋值
                     */
                    bool OriginalNameServersHasBeenSet() const;

                    /**
                     * 获取站点状态
- pending 未接入 NS
- active 已接入 NS
- moved NS 已切走
                     * @return Status 站点状态
- pending 未接入 NS
- active 已接入 NS
- moved NS 已切走
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取站点接入方式
- full NS 接入
- partial CNAME 接入
                     * @return Type 站点接入方式
- full NS 接入
- partial CNAME 接入
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取腾讯云分配的 NS 列表
                     * @return NameServers 腾讯云分配的 NS 列表
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     */
                    bool NameServersHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreatedOn 创建时间
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedOn 修改时间
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                    /**
                     * 获取cname 接入状态
- finished 站点验证完成
- pending 站点验证中
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CnameStatus cname 接入状态
- finished 站点验证完成
- pending 站点验证中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCnameStatus() const;

                    /**
                     * 判断参数 CnameStatus 是否已赋值
                     * @return CnameStatus 是否已赋值
                     */
                    bool CnameStatusHasBeenSet() const;

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
                     * 站点当前使用的 NS
                     */
                    std::vector<std::string> m_originalNameServers;
                    bool m_originalNameServersHasBeenSet;

                    /**
                     * 站点状态
- pending 未接入 NS
- active 已接入 NS
- moved NS 已切走
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 站点接入方式
- full NS 接入
- partial CNAME 接入
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 腾讯云分配的 NS 列表
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                    /**
                     * cname 接入状态
- finished 站点验证完成
- pending 站点验证中
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cnameStatus;
                    bool m_cnameStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYZONERESPONSE_H_
