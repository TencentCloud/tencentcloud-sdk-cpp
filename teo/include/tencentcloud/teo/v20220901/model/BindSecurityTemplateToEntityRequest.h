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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * BindSecurityTemplateToEntity请求参数结构体
                */
                class BindSecurityTemplateToEntityRequest : public AbstractModel
                {
                public:
                    BindSecurityTemplateToEntityRequest();
                    ~BindSecurityTemplateToEntityRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>需要绑定或解绑的域名所属站点 ID。</p>
                     * @return ZoneId <p>需要绑定或解绑的域名所属站点 ID。</p>
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置<p>需要绑定或解绑的域名所属站点 ID。</p>
                     * @param _zoneId <p>需要绑定或解绑的域名所属站点 ID。</p>
                     * 
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     * 
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取<p>绑定至策略模板（或者从策略模板解绑）的域名列表。</p>
                     * @return Entities <p>绑定至策略模板（或者从策略模板解绑）的域名列表。</p>
                     * 
                     */
                    std::vector<std::string> GetEntities() const;

                    /**
                     * 设置<p>绑定至策略模板（或者从策略模板解绑）的域名列表。</p>
                     * @param _entities <p>绑定至策略模板（或者从策略模板解绑）的域名列表。</p>
                     * 
                     */
                    void SetEntities(const std::vector<std::string>& _entities);

                    /**
                     * 判断参数 Entities 是否已赋值
                     * @return Entities 是否已赋值
                     * 
                     */
                    bool EntitiesHasBeenSet() const;

                    /**
                     * 获取<p>绑定或解绑操作选项。</p><p>枚举值：</p><ul><li>bind： 绑定域名至策略模板。</li><li>unbind-keep-policy： 将域名从策略模板解绑，解绑时保留当前策略。</li><li>unbind-use-default： 将域名从策略模板解绑，并使用默认空白策略。</li></ul>
                     * @return Operate <p>绑定或解绑操作选项。</p><p>枚举值：</p><ul><li>bind： 绑定域名至策略模板。</li><li>unbind-keep-policy： 将域名从策略模板解绑，解绑时保留当前策略。</li><li>unbind-use-default： 将域名从策略模板解绑，并使用默认空白策略。</li></ul>
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置<p>绑定或解绑操作选项。</p><p>枚举值：</p><ul><li>bind： 绑定域名至策略模板。</li><li>unbind-keep-policy： 将域名从策略模板解绑，解绑时保留当前策略。</li><li>unbind-use-default： 将域名从策略模板解绑，并使用默认空白策略。</li></ul>
                     * @param _operate <p>绑定或解绑操作选项。</p><p>枚举值：</p><ul><li>bind： 绑定域名至策略模板。</li><li>unbind-keep-policy： 将域名从策略模板解绑，解绑时保留当前策略。</li><li>unbind-use-default： 将域名从策略模板解绑，并使用默认空白策略。</li></ul>
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取<p>指定绑定或解绑的策略模板 ID 或站点全局策略。<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID；</li><li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li></p><p>注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。</p>
                     * @return TemplateId <p>指定绑定或解绑的策略模板 ID 或站点全局策略。<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID；</li><li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li></p><p>注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>指定绑定或解绑的策略模板 ID 或站点全局策略。<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID；</li><li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li></p><p>注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。</p>
                     * @param _templateId <p>指定绑定或解绑的策略模板 ID 或站点全局策略。<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID；</li><li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li></p><p>注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板。</p><p>枚举值：</p><ul><li>true： 替换域名当前绑定的模板。</li><li>false： 不替换域名当前绑定的模板。</li></ul><p>默认值：true</p><p>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。</p>
                     * @return OverWrite <p>传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板。</p><p>枚举值：</p><ul><li>true： 替换域名当前绑定的模板。</li><li>false： 不替换域名当前绑定的模板。</li></ul><p>默认值：true</p><p>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。</p>
                     * 
                     */
                    bool GetOverWrite() const;

                    /**
                     * 设置<p>传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板。</p><p>枚举值：</p><ul><li>true： 替换域名当前绑定的模板。</li><li>false： 不替换域名当前绑定的模板。</li></ul><p>默认值：true</p><p>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。</p>
                     * @param _overWrite <p>传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板。</p><p>枚举值：</p><ul><li>true： 替换域名当前绑定的模板。</li><li>false： 不替换域名当前绑定的模板。</li></ul><p>默认值：true</p><p>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。</p>
                     * 
                     */
                    void SetOverWrite(const bool& _overWrite);

                    /**
                     * 判断参数 OverWrite 是否已赋值
                     * @return OverWrite 是否已赋值
                     * 
                     */
                    bool OverWriteHasBeenSet() const;

                private:

                    /**
                     * <p>需要绑定或解绑的域名所属站点 ID。</p>
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * <p>绑定至策略模板（或者从策略模板解绑）的域名列表。</p>
                     */
                    std::vector<std::string> m_entities;
                    bool m_entitiesHasBeenSet;

                    /**
                     * <p>绑定或解绑操作选项。</p><p>枚举值：</p><ul><li>bind： 绑定域名至策略模板。</li><li>unbind-keep-policy： 将域名从策略模板解绑，解绑时保留当前策略。</li><li>unbind-use-default： 将域名从策略模板解绑，并使用默认空白策略。</li></ul>
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * <p>指定绑定或解绑的策略模板 ID 或站点全局策略。<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID；</li><li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li></p><p>注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板。</p><p>枚举值：</p><ul><li>true： 替换域名当前绑定的模板。</li><li>false： 不替换域名当前绑定的模板。</li></ul><p>默认值：true</p><p>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。</p>
                     */
                    bool m_overWrite;
                    bool m_overWriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_
