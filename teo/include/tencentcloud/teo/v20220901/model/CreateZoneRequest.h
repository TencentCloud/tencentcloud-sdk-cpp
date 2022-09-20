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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/Tag.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateZone请求参数结构体
                */
                class CreateZoneRequest : public AbstractModel
                {
                public:
                    CreateZoneRequest();
                    ~CreateZoneRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点名称。
                     * @return ZoneName 站点名称。
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。
                     * @param ZoneName 站点名称。
                     */
                    void SetZoneName(const std::string& _zoneName);

                    /**
                     * 判断参数 ZoneName 是否已赋值
                     * @return ZoneName 是否已赋值
                     */
                    bool ZoneNameHasBeenSet() const;

                    /**
                     * 获取接入方式，取值有：
<li> full：NS接入；</li>
<li> partial：CNAME接入。</li>不填写使用默认值full。
                     * @return Type 接入方式，取值有：
<li> full：NS接入；</li>
<li> partial：CNAME接入。</li>不填写使用默认值full。
                     */
                    std::string GetType() const;

                    /**
                     * 设置接入方式，取值有：
<li> full：NS接入；</li>
<li> partial：CNAME接入。</li>不填写使用默认值full。
                     * @param Type 接入方式，取值有：
<li> full：NS接入；</li>
<li> partial：CNAME接入。</li>不填写使用默认值full。
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否跳过站点现有的DNS记录扫描。默认值：false。
                     * @return JumpStart 是否跳过站点现有的DNS记录扫描。默认值：false。
                     */
                    bool GetJumpStart() const;

                    /**
                     * 设置是否跳过站点现有的DNS记录扫描。默认值：false。
                     * @param JumpStart 是否跳过站点现有的DNS记录扫描。默认值：false。
                     */
                    void SetJumpStart(const bool& _jumpStart);

                    /**
                     * 判断参数 JumpStart 是否已赋值
                     * @return JumpStart 是否已赋值
                     */
                    bool JumpStartHasBeenSet() const;

                    /**
                     * 获取资源标签。
                     * @return Tags 资源标签。
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置资源标签。
                     * @param Tags 资源标签。
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 站点名称。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * 接入方式，取值有：
<li> full：NS接入；</li>
<li> partial：CNAME接入。</li>不填写使用默认值full。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否跳过站点现有的DNS记录扫描。默认值：false。
                     */
                    bool m_jumpStart;
                    bool m_jumpStartHasBeenSet;

                    /**
                     * 资源标签。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
