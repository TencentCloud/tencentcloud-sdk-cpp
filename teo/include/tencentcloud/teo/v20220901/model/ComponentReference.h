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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_COMPONENTREFERENCE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_COMPONENTREFERENCE_H_

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
                * 组件被引用的实例信息，用于展示该组件与边缘函数等资源的绑定关系。当边缘函数需要访问组件（如 KV 命名空间）时，会建立引用关系，通过此结构体可查看引用的具体实例详情及所属站点信息。
                */
                class ComponentReference : public AbstractModel
                {
                public:
                    ComponentReference();
                    ~ComponentReference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取引用的实例类型。取值有：
<li>edge-function：边缘函数。</li>
                     * @return ReferenceType 引用的实例类型。取值有：
<li>edge-function：边缘函数。</li>
                     * 
                     */
                    std::string GetReferenceType() const;

                    /**
                     * 设置引用的实例类型。取值有：
<li>edge-function：边缘函数。</li>
                     * @param _referenceType 引用的实例类型。取值有：
<li>edge-function：边缘函数。</li>
                     * 
                     */
                    void SetReferenceType(const std::string& _referenceType);

                    /**
                     * 判断参数 ReferenceType 是否已赋值
                     * @return ReferenceType 是否已赋值
                     * 
                     */
                    bool ReferenceTypeHasBeenSet() const;

                    /**
                     * 获取引用的实例 ID。根据 ReferenceType 的取值不同，返回对应的实例 ID：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数 ID，格式形如：ef-2vc5oe9mzqhm。</li>

                     * @return ReferenceId 引用的实例 ID。根据 ReferenceType 的取值不同，返回对应的实例 ID：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数 ID，格式形如：ef-2vc5oe9mzqhm。</li>

                     * 
                     */
                    std::string GetReferenceId() const;

                    /**
                     * 设置引用的实例 ID。根据 ReferenceType 的取值不同，返回对应的实例 ID：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数 ID，格式形如：ef-2vc5oe9mzqhm。</li>

                     * @param _referenceId 引用的实例 ID。根据 ReferenceType 的取值不同，返回对应的实例 ID：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数 ID，格式形如：ef-2vc5oe9mzqhm。</li>

                     * 
                     */
                    void SetReferenceId(const std::string& _referenceId);

                    /**
                     * 判断参数 ReferenceId 是否已赋值
                     * @return ReferenceId 是否已赋值
                     * 
                     */
                    bool ReferenceIdHasBeenSet() const;

                    /**
                     * 获取引用的实例名称。根据 ReferenceType 的取值不同，返回对应的实例名称：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数名称。</li>

                     * @return ReferenceName 引用的实例名称。根据 ReferenceType 的取值不同，返回对应的实例名称：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数名称。</li>

                     * 
                     */
                    std::string GetReferenceName() const;

                    /**
                     * 设置引用的实例名称。根据 ReferenceType 的取值不同，返回对应的实例名称：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数名称。</li>

                     * @param _referenceName 引用的实例名称。根据 ReferenceType 的取值不同，返回对应的实例名称：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数名称。</li>

                     * 
                     */
                    void SetReferenceName(const std::string& _referenceName);

                    /**
                     * 判断参数 ReferenceName 是否已赋值
                     * @return ReferenceName 是否已赋值
                     * 
                     */
                    bool ReferenceNameHasBeenSet() const;

                    /**
                     * 获取站点 ID。引用该命名空间的实例所属的站点标识。
                     * @return ZoneId 站点 ID。引用该命名空间的实例所属的站点标识。
                     * 
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID。引用该命名空间的实例所属的站点标识。
                     * @param _zoneId 站点 ID。引用该命名空间的实例所属的站点标识。
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
                     * 获取站点名称。引用该命名空间的实例所属的站点名称。
                     * @return ZoneName 站点名称。引用该命名空间的实例所属的站点名称。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。引用该命名空间的实例所属的站点名称。
                     * @param _zoneName 站点名称。引用该命名空间的实例所属的站点名称。
                     * 
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     * 
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取引用该命名空间的实例所属站点的别名。若未设置站点别名，则返回空字符串。
                     * @return AliasZoneName 引用该命名空间的实例所属站点的别名。若未设置站点别名，则返回空字符串。
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置引用该命名空间的实例所属站点的别名。若未设置站点别名，则返回空字符串。
                     * @param _aliasZoneName 引用该命名空间的实例所属站点的别名。若未设置站点别名，则返回空字符串。
                     * 
                     */
                    void SetAliasZoneName(const std::string& _aliasZoneName);

                    /**
                     * 判断参数 AliasZoneName 是否已赋值
                     * @return AliasZoneName 是否已赋值
                     * 
                     */
                    bool AliasZoneNameHasBeenSet() const;

                private:

                    /**
                     * 引用的实例类型。取值有：
<li>edge-function：边缘函数。</li>
                     */
                    std::string m_referenceType;
                    bool m_referenceTypeHasBeenSet;

                    /**
                     * 引用的实例 ID。根据 ReferenceType 的取值不同，返回对应的实例 ID：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数 ID，格式形如：ef-2vc5oe9mzqhm。</li>

                     */
                    std::string m_referenceId;
                    bool m_referenceIdHasBeenSet;

                    /**
                     * 引用的实例名称。根据 ReferenceType 的取值不同，返回对应的实例名称：
<li>当 ReferenceType 为 edge-function 时：返回边缘函数名称。</li>

                     */
                    std::string m_referenceName;
                    bool m_referenceNameHasBeenSet;

                    /**
                     * 站点 ID。引用该命名空间的实例所属的站点标识。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 站点名称。引用该命名空间的实例所属的站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 引用该命名空间的实例所属站点的别名。若未设置站点别名，则返回空字符串。
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_COMPONENTREFERENCE_H_
