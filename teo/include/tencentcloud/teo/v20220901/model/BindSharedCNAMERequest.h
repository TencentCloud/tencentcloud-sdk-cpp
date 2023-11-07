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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BindSharedCNAMEMap.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * BindSharedCNAME请求参数结构体
                */
                class BindSharedCNAMERequest : public AbstractModel
                {
                public:
                    BindSharedCNAMERequest();
                    ~BindSharedCNAMERequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取加速域名所属站点 ID。	
                     * @return ZoneId 加速域名所属站点 ID。	
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置加速域名所属站点 ID。	
                     * @param _zoneId 加速域名所属站点 ID。	
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
                     * 获取绑定类型，取值有：
<li>bind：绑定；</li>
<li>unbind：解绑。</li>
                     * @return BindType 绑定类型，取值有：
<li>bind：绑定；</li>
<li>unbind：解绑。</li>
                     * 
                     */
                    std::string GetBindType() const;

                    /**
                     * 设置绑定类型，取值有：
<li>bind：绑定；</li>
<li>unbind：解绑。</li>
                     * @param _bindType 绑定类型，取值有：
<li>bind：绑定；</li>
<li>unbind：解绑。</li>
                     * 
                     */
                    void SetBindType(const std::string& _bindType);

                    /**
                     * 判断参数 BindType 是否已赋值
                     * @return BindType 是否已赋值
                     * 
                     */
                    bool BindTypeHasBeenSet() const;

                    /**
                     * 获取接入域名与共享 CNAME 的绑定关系。
                     * @return BindSharedCNAMEMaps 接入域名与共享 CNAME 的绑定关系。
                     * 
                     */
                    std::vector<BindSharedCNAMEMap> GetBindSharedCNAMEMaps() const;

                    /**
                     * 设置接入域名与共享 CNAME 的绑定关系。
                     * @param _bindSharedCNAMEMaps 接入域名与共享 CNAME 的绑定关系。
                     * 
                     */
                    void SetBindSharedCNAMEMaps(const std::vector<BindSharedCNAMEMap>& _bindSharedCNAMEMaps);

                    /**
                     * 判断参数 BindSharedCNAMEMaps 是否已赋值
                     * @return BindSharedCNAMEMaps 是否已赋值
                     * 
                     */
                    bool BindSharedCNAMEMapsHasBeenSet() const;

                private:

                    /**
                     * 加速域名所属站点 ID。	
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 绑定类型，取值有：
<li>bind：绑定；</li>
<li>unbind：解绑。</li>
                     */
                    std::string m_bindType;
                    bool m_bindTypeHasBeenSet;

                    /**
                     * 接入域名与共享 CNAME 的绑定关系。
                     */
                    std::vector<BindSharedCNAMEMap> m_bindSharedCNAMEMaps;
                    bool m_bindSharedCNAMEMapsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BINDSHAREDCNAMEREQUEST_H_
