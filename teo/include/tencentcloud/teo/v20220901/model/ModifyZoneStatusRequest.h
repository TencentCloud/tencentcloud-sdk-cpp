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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONESTATUSREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONESTATUSREQUEST_H_

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
                * ModifyZoneStatus请求参数结构体
                */
                class ModifyZoneStatusRequest : public AbstractModel
                {
                public:
                    ModifyZoneStatusRequest();
                    ~ModifyZoneStatusRequest() = default;
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
                     * 获取站点状态，取值有：
<li> false：开启站点；</li>
<li> true：关闭站点。</li>
                     * @return Paused 站点状态，取值有：
<li> false：开启站点；</li>
<li> true：关闭站点。</li>
                     * 
                     */
                    bool GetPaused() const;

                    /**
                     * 设置站点状态，取值有：
<li> false：开启站点；</li>
<li> true：关闭站点。</li>
                     * @param _paused 站点状态，取值有：
<li> false：开启站点；</li>
<li> true：关闭站点。</li>
                     * 
                     */
                    void SetPaused(const bool& _paused);

                    /**
                     * 判断参数 Paused 是否已赋值
                     * @return Paused 是否已赋值
                     * 
                     */
                    bool PausedHasBeenSet() const;

                private:

                    /**
                     * 站点 ID。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点状态，取值有：
<li> false：开启站点；</li>
<li> true：关闭站点。</li>
                     */
                    bool m_paused;
                    bool m_pausedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_MODIFYZONESTATUSREQUEST_H_
