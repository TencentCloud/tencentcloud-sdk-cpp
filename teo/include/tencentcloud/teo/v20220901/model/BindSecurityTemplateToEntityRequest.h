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
                     * 获取需要绑定或解绑的策略模板所属站点 ID。
                     * @return ZoneId 需要绑定或解绑的策略模板所属站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置需要绑定或解绑的策略模板所属站点 ID。
                     * @param _zoneId 需要绑定或解绑的策略模板所属站点 ID。
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
                     * 获取绑定至策略模板（或者从策略模板解绑）的域名列表。
                     * @return Entities 绑定至策略模板（或者从策略模板解绑）的域名列表。
                     * 
                     */
                    std::vector<std::string> GetEntities() const;

                    /**
                     * 设置绑定至策略模板（或者从策略模板解绑）的域名列表。
                     * @param _entities 绑定至策略模板（或者从策略模板解绑）的域名列表。
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
                     * 获取绑定或解绑操作选项，取值有：
<li>bind：绑定域名至策略模板。</li>
<li>unbind-keep-policy：将域名从策略模板解绑，解绑时保留当前策略。</li>
<li>unbind-use-default：将域名从策略模板解绑，并使用默认空白策略。</li>注意：解绑操作当前仅支持单个域名解绑。即：当 Operate 参数取值为 unbind-keep-policy 或 unbind-use-default 时，Entities 参数列表仅支持填写一个域名。
                     * @return Operate 绑定或解绑操作选项，取值有：
<li>bind：绑定域名至策略模板。</li>
<li>unbind-keep-policy：将域名从策略模板解绑，解绑时保留当前策略。</li>
<li>unbind-use-default：将域名从策略模板解绑，并使用默认空白策略。</li>注意：解绑操作当前仅支持单个域名解绑。即：当 Operate 参数取值为 unbind-keep-policy 或 unbind-use-default 时，Entities 参数列表仅支持填写一个域名。
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置绑定或解绑操作选项，取值有：
<li>bind：绑定域名至策略模板。</li>
<li>unbind-keep-policy：将域名从策略模板解绑，解绑时保留当前策略。</li>
<li>unbind-use-default：将域名从策略模板解绑，并使用默认空白策略。</li>注意：解绑操作当前仅支持单个域名解绑。即：当 Operate 参数取值为 unbind-keep-policy 或 unbind-use-default 时，Entities 参数列表仅支持填写一个域名。
                     * @param _operate 绑定或解绑操作选项，取值有：
<li>bind：绑定域名至策略模板。</li>
<li>unbind-keep-policy：将域名从策略模板解绑，解绑时保留当前策略。</li>
<li>unbind-use-default：将域名从策略模板解绑，并使用默认空白策略。</li>注意：解绑操作当前仅支持单个域名解绑。即：当 Operate 参数取值为 unbind-keep-policy 或 unbind-use-default 时，Entities 参数列表仅支持填写一个域名。
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
                     * 获取指定绑定或解绑的策略模板 ID 或站点全局策略
<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID。</li>
<li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li>

注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。
                     * @return TemplateId 指定绑定或解绑的策略模板 ID 或站点全局策略
<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID。</li>
<li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li>

注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置指定绑定或解绑的策略模板 ID 或站点全局策略
<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID。</li>
<li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li>

注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。
                     * @param _templateId 指定绑定或解绑的策略模板 ID 或站点全局策略
<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID。</li>
<li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li>

注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。
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
                     * 获取传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板，默认值为 true。支持下列取值：<li>true： 替换域名当前绑定的模板。</li><li>false：不替换域名当前绑定的模板。</li>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。
                     * @return OverWrite 传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板，默认值为 true。支持下列取值：<li>true： 替换域名当前绑定的模板。</li><li>false：不替换域名当前绑定的模板。</li>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。
                     * 
                     */
                    bool GetOverWrite() const;

                    /**
                     * 设置传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板，默认值为 true。支持下列取值：<li>true： 替换域名当前绑定的模板。</li><li>false：不替换域名当前绑定的模板。</li>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。
                     * @param _overWrite 传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板，默认值为 true。支持下列取值：<li>true： 替换域名当前绑定的模板。</li><li>false：不替换域名当前绑定的模板。</li>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。
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
                     * 需要绑定或解绑的策略模板所属站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 绑定至策略模板（或者从策略模板解绑）的域名列表。
                     */
                    std::vector<std::string> m_entities;
                    bool m_entitiesHasBeenSet;

                    /**
                     * 绑定或解绑操作选项，取值有：
<li>bind：绑定域名至策略模板。</li>
<li>unbind-keep-policy：将域名从策略模板解绑，解绑时保留当前策略。</li>
<li>unbind-use-default：将域名从策略模板解绑，并使用默认空白策略。</li>注意：解绑操作当前仅支持单个域名解绑。即：当 Operate 参数取值为 unbind-keep-policy 或 unbind-use-default 时，Entities 参数列表仅支持填写一个域名。
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 指定绑定或解绑的策略模板 ID 或站点全局策略
<li>如需绑定至策略模板，或从策略模板解绑，请指定策略模板 ID。</li>
<li>如需绑定至站点全局策略，或从站点全局策略解绑，请使用 @ZoneLevel@domain 参数值。</li>

注意：解绑后，域名将使用独立策略，并单独计算规则配额，请确保解绑前套餐规则配额充足。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 传入域名如果已经绑定了策略模板（含站点级防护策略），通过设置该参数表示是否替换该模板，默认值为 true。支持下列取值：<li>true： 替换域名当前绑定的模板。</li><li>false：不替换域名当前绑定的模板。</li>注意：当设置为 false 时，若传入域名已经绑定策略模板，API  将返回错误；站点级防护策略也为一种策略模板。
                     */
                    bool m_overWrite;
                    bool m_overWriteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSECURITYTEMPLATETOENTITYREQUEST_H_
