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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPREGIONINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPREGIONINFO_H_

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
                * IP 归属信息查询
                */
                class IPRegionInfo : public AbstractModel
                {
                public:
                    IPRegionInfo();
                    ~IPRegionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP 地址，IPV4 或 IPV6。
                     * @return IP IP 地址，IPV4 或 IPV6。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP 地址，IPV4 或 IPV6。
                     * @param _iP IP 地址，IPV4 或 IPV6。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取IP 是否属于 EdgeOne 节点，取值有：
<li>yes：该 IP 属于 EdgeOne 节点；</li>
<li>no：该 IP 不属于 EdgeOne 节点。</li>
                     * @return IsEdgeOneIP IP 是否属于 EdgeOne 节点，取值有：
<li>yes：该 IP 属于 EdgeOne 节点；</li>
<li>no：该 IP 不属于 EdgeOne 节点。</li>
                     * 
                     */
                    std::string GetIsEdgeOneIP() const;

                    /**
                     * 设置IP 是否属于 EdgeOne 节点，取值有：
<li>yes：该 IP 属于 EdgeOne 节点；</li>
<li>no：该 IP 不属于 EdgeOne 节点。</li>
                     * @param _isEdgeOneIP IP 是否属于 EdgeOne 节点，取值有：
<li>yes：该 IP 属于 EdgeOne 节点；</li>
<li>no：该 IP 不属于 EdgeOne 节点。</li>
                     * 
                     */
                    void SetIsEdgeOneIP(const std::string& _isEdgeOneIP);

                    /**
                     * 判断参数 IsEdgeOneIP 是否已赋值
                     * @return IsEdgeOneIP 是否已赋值
                     * 
                     */
                    bool IsEdgeOneIPHasBeenSet() const;

                private:

                    /**
                     * IP 地址，IPV4 或 IPV6。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * IP 是否属于 EdgeOne 节点，取值有：
<li>yes：该 IP 属于 EdgeOne 节点；</li>
<li>no：该 IP 不属于 EdgeOne 节点。</li>
                     */
                    std::string m_isEdgeOneIP;
                    bool m_isEdgeOneIPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPREGIONINFO_H_
