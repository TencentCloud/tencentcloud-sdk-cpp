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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYIPGROUPREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYIPGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPGroup.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * ModifySecurityIPGroup请求参数结构体
                */
                class ModifySecurityIPGroupRequest : public AbstractModel
                {
                public:
                    ModifySecurityIPGroupRequest();
                    ~ModifySecurityIPGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 Id。
                     * @return ZoneId 站点 Id。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 Id。
                     * @param _zoneId 站点 Id。
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
                     * 获取IP 组配置。
                     * @return IPGroup IP 组配置。
                     * 
                     */
                    IPGroup GetIPGroup() const;

                    /**
                     * 设置IP 组配置。
                     * @param _iPGroup IP 组配置。
                     * 
                     */
                    void SetIPGroup(const IPGroup& _iPGroup);

                    /**
                     * 判断参数 IPGroup 是否已赋值
                     * @return IPGroup 是否已赋值
                     * 
                     */
                    bool IPGroupHasBeenSet() const;

                    /**
                     * 获取操作类型，取值有：<li> append: 向 IPGroup 中添加新的 IP 地址或设置定时过期时间；</li><li>  remove: 从 IPGroup 中删除指定的 IP 地址或其定时过期时间；</li><li>  update: 完全替换 IPGroup 中 Content 或 ExpireInfo 的内容，并且可以修改 IPGroup 的名称。</li>    使用 append 操作时注意：   <li> 为 IP 或网段添加定时过期时间时，必须晚于当前时间。如果该 IP 或网段在组中不存在，必须同时在 Content 参数中添加该 IP 或网段。若该 IP 或网段已存在过期时间，则新时间将覆盖原有时间。</li>  使用 remove 操作时注意： <li> 删除 IP 或网段时，相关的未过期的定时过期时间也会被删除；</li> <li> 删除定时过期时间时，仅能删除当前未过期的时间。</li>  使用 update 操作时注意： <li> 替换 Content 内容时，不在 Content 中的 IP 或网段的未过期时间会被删除；</li> <li> 替换 IPExpireInfo 内容时，IPExpireInfo 中的 IP 或网段必须在 Content 中或在 IP 组中存在。</li>
                     * @return Mode 操作类型，取值有：<li> append: 向 IPGroup 中添加新的 IP 地址或设置定时过期时间；</li><li>  remove: 从 IPGroup 中删除指定的 IP 地址或其定时过期时间；</li><li>  update: 完全替换 IPGroup 中 Content 或 ExpireInfo 的内容，并且可以修改 IPGroup 的名称。</li>    使用 append 操作时注意：   <li> 为 IP 或网段添加定时过期时间时，必须晚于当前时间。如果该 IP 或网段在组中不存在，必须同时在 Content 参数中添加该 IP 或网段。若该 IP 或网段已存在过期时间，则新时间将覆盖原有时间。</li>  使用 remove 操作时注意： <li> 删除 IP 或网段时，相关的未过期的定时过期时间也会被删除；</li> <li> 删除定时过期时间时，仅能删除当前未过期的时间。</li>  使用 update 操作时注意： <li> 替换 Content 内容时，不在 Content 中的 IP 或网段的未过期时间会被删除；</li> <li> 替换 IPExpireInfo 内容时，IPExpireInfo 中的 IP 或网段必须在 Content 中或在 IP 组中存在。</li>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置操作类型，取值有：<li> append: 向 IPGroup 中添加新的 IP 地址或设置定时过期时间；</li><li>  remove: 从 IPGroup 中删除指定的 IP 地址或其定时过期时间；</li><li>  update: 完全替换 IPGroup 中 Content 或 ExpireInfo 的内容，并且可以修改 IPGroup 的名称。</li>    使用 append 操作时注意：   <li> 为 IP 或网段添加定时过期时间时，必须晚于当前时间。如果该 IP 或网段在组中不存在，必须同时在 Content 参数中添加该 IP 或网段。若该 IP 或网段已存在过期时间，则新时间将覆盖原有时间。</li>  使用 remove 操作时注意： <li> 删除 IP 或网段时，相关的未过期的定时过期时间也会被删除；</li> <li> 删除定时过期时间时，仅能删除当前未过期的时间。</li>  使用 update 操作时注意： <li> 替换 Content 内容时，不在 Content 中的 IP 或网段的未过期时间会被删除；</li> <li> 替换 IPExpireInfo 内容时，IPExpireInfo 中的 IP 或网段必须在 Content 中或在 IP 组中存在。</li>
                     * @param _mode 操作类型，取值有：<li> append: 向 IPGroup 中添加新的 IP 地址或设置定时过期时间；</li><li>  remove: 从 IPGroup 中删除指定的 IP 地址或其定时过期时间；</li><li>  update: 完全替换 IPGroup 中 Content 或 ExpireInfo 的内容，并且可以修改 IPGroup 的名称。</li>    使用 append 操作时注意：   <li> 为 IP 或网段添加定时过期时间时，必须晚于当前时间。如果该 IP 或网段在组中不存在，必须同时在 Content 参数中添加该 IP 或网段。若该 IP 或网段已存在过期时间，则新时间将覆盖原有时间。</li>  使用 remove 操作时注意： <li> 删除 IP 或网段时，相关的未过期的定时过期时间也会被删除；</li> <li> 删除定时过期时间时，仅能删除当前未过期的时间。</li>  使用 update 操作时注意： <li> 替换 Content 内容时，不在 Content 中的 IP 或网段的未过期时间会被删除；</li> <li> 替换 IPExpireInfo 内容时，IPExpireInfo 中的 IP 或网段必须在 Content 中或在 IP 组中存在。</li>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 站点 Id。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * IP 组配置。
                     */
                    IPGroup m_iPGroup;
                    bool m_iPGroupHasBeenSet;

                    /**
                     * 操作类型，取值有：<li> append: 向 IPGroup 中添加新的 IP 地址或设置定时过期时间；</li><li>  remove: 从 IPGroup 中删除指定的 IP 地址或其定时过期时间；</li><li>  update: 完全替换 IPGroup 中 Content 或 ExpireInfo 的内容，并且可以修改 IPGroup 的名称。</li>    使用 append 操作时注意：   <li> 为 IP 或网段添加定时过期时间时，必须晚于当前时间。如果该 IP 或网段在组中不存在，必须同时在 Content 参数中添加该 IP 或网段。若该 IP 或网段已存在过期时间，则新时间将覆盖原有时间。</li>  使用 remove 操作时注意： <li> 删除 IP 或网段时，相关的未过期的定时过期时间也会被删除；</li> <li> 删除定时过期时间时，仅能删除当前未过期的时间。</li>  使用 update 操作时注意： <li> 替换 Content 内容时，不在 Content 中的 IP 或网段的未过期时间会被删除；</li> <li> 替换 IPExpireInfo 内容时，IPExpireInfo 中的 IP 或网段必须在 Content 中或在 IP 组中存在。</li>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYSECURITYIPGROUPREQUEST_H_
