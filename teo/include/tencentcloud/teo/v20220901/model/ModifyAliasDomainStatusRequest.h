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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALIASDOMAINSTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALIASDOMAINSTATUSREQUEST_H_

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
                * ModifyAliasDomainStatus请求参数结构体
                */
                class ModifyAliasDomainStatusRequest : public AbstractModel
                {
                public:
                    ModifyAliasDomainStatusRequest();
                    ~ModifyAliasDomainStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID。
                     * @return ZoneId 站点 ID。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。
                     * @param _zoneId 站点 ID。
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
                     * 获取别称域名状态，取值有：
<li> false：开启别称域名；</li>
<li> true：关闭别称域名。</li>
                     * @return Paused 别称域名状态，取值有：
<li> false：开启别称域名；</li>
<li> true：关闭别称域名。</li>
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 设置别称域名状态，取值有：
<li> false：开启别称域名；</li>
<li> true：关闭别称域名。</li>
                     * @param _paused 别称域名状态，取值有：
<li> false：开启别称域名；</li>
<li> true：关闭别称域名。</li>
                     * 
                     */
                    void SetPaused(const bool& _paused);

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     * 
                     */
                    bool PausedHasBeenSet() const;

                    /**
                     * 获取待修改状态的别称域名名称。如果为空，则不执行修改状态操作。
                     * @return AliasNames 待修改状态的别称域名名称。如果为空，则不执行修改状态操作。
                     * 
                     */
                    std::vector<std::string> GetAliasNames() const;

                    /**
                     * 设置待修改状态的别称域名名称。如果为空，则不执行修改状态操作。
                     * @param _aliasNames 待修改状态的别称域名名称。如果为空，则不执行修改状态操作。
                     * 
                     */
                    void SetAliasNames(const std::vector<std::string>& _aliasNames);

                    /**
                     * 判断参数 AliasNames 是否已赋值
                     * @return AliasNames 是否已赋值
                     * 
                     */
                    bool AliasNamesHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 别称域名状态，取值有：
<li> false：开启别称域名；</li>
<li> true：关闭别称域名。</li>
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                    /**
                     * 待修改状态的别称域名名称。如果为空，则不执行修改状态操作。
                     */
                    std::vector<std::string> m_aliasNames;
                    bool m_aliasNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYALIASDOMAINSTATUSREQUEST_H_
