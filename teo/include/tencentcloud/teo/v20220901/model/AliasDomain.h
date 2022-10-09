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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ALIASDOMAIN_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ALIASDOMAIN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 别称域名信息。
                */
                class AliasDomain : public AbstractModel
                {
                public:
                    AliasDomain();
                    ~AliasDomain() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取别称域名 ID。
                     * @return AliasId 别称域名 ID。
                     */
                    std::string GetAliasId() const;

                    /**
                     * 设置别称域名 ID。
                     * @param AliasId 别称域名 ID。
                     */
                    void SetAliasId(const std::string& _aliasId);

                    /**
                     * 判断参数 AliasId 是否已赋值
                     * @return AliasId 是否已赋值
                     */
                    bool AliasIdHasBeenSet() const;

                    /**
                     * 获取别称域名名称。
                     * @return AliasName 别称域名名称。
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置别称域名名称。
                     * @param AliasName 别称域名名称。
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param ZoneId 站点 ID。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取目标域名名称。
                     * @return TargetName 目标域名名称。
                     */
                    std::string GetTargetName() const;

                    /**
                     * 设置目标域名名称。
                     * @param TargetName 目标域名名称。
                     */
                    void SetTargetName(const std::string& _targetName);

                    /**
                     * 判断参数 TargetName 是否已赋值
                     * @return TargetName 是否已赋值
                     */
                    bool TargetNameHasBeenSet() const;

                    /**
                     * 获取别称域名状态，取值有：
<li> active：已生效； </li>
<li> pending：未生效；</li>
<li> not_filed：未备案；</li>
<li> conflict：被找回。 </li>
<li> stop：已停用；</li>
<li> deleted：已删除。 </li>
                     * @return Status 别称域名状态，取值有：
<li> active：已生效； </li>
<li> pending：未生效；</li>
<li> not_filed：未备案；</li>
<li> conflict：被找回。 </li>
<li> stop：已停用；</li>
<li> deleted：已删除。 </li>
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置别称域名状态，取值有：
<li> active：已生效； </li>
<li> pending：未生效；</li>
<li> not_filed：未备案；</li>
<li> conflict：被找回。 </li>
<li> stop：已停用；</li>
<li> deleted：已删除。 </li>
                     * @param Status 别称域名状态，取值有：
<li> active：已生效； </li>
<li> pending：未生效；</li>
<li> not_filed：未备案；</li>
<li> conflict：被找回。 </li>
<li> stop：已停用；</li>
<li> deleted：已删除。 </li>
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取别称域名创建时间。
                     * @return CreatedOn 别称域名创建时间。
                     */
                    std::string GetCreatedOn() const;

                    /**
                     * 设置别称域名创建时间。
                     * @param CreatedOn 别称域名创建时间。
                     */
                    void SetCreatedOn(const std::string& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取别称域名修改时间。
                     * @return ModifiedOn 别称域名修改时间。
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 设置别称域名修改时间。
                     * @param ModifiedOn 别称域名修改时间。
                     */
                    void SetModifiedOn(const std::string& _modifiedOn);

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * 别称域名 ID。
                     */
                    std::string m_aliasId;
                    bool m_aliasIdHasBeenSet;

                    /**
                     * 别称域名名称。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 目标域名名称。
                     */
                    std::string m_targetName;
                    bool m_targetNameHasBeenSet;

                    /**
                     * 别称域名状态，取值有：
<li> active：已生效； </li>
<li> pending：未生效；</li>
<li> not_filed：未备案；</li>
<li> conflict：被找回。 </li>
<li> stop：已停用；</li>
<li> deleted：已删除。 </li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 别称域名创建时间。
                     */
                    std::string m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 别称域名修改时间。
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ALIASDOMAIN_H_
