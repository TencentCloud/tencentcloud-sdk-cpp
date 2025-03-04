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
                     * 获取站点接入类型。该参数取值如下，不填写时默认为 partial：
<li>partial：CNAME 接入；</li>
<li>full：NS 接入；</li>
<li>noDomainAccess：无域名接入；</li>
<li>dnsPodAccess：DNSPod 托管接入，该接入模式要求您的域名已托管在 DNSPod 内。</li>
                     * @return Type 站点接入类型。该参数取值如下，不填写时默认为 partial：
<li>partial：CNAME 接入；</li>
<li>full：NS 接入；</li>
<li>noDomainAccess：无域名接入；</li>
<li>dnsPodAccess：DNSPod 托管接入，该接入模式要求您的域名已托管在 DNSPod 内。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置站点接入类型。该参数取值如下，不填写时默认为 partial：
<li>partial：CNAME 接入；</li>
<li>full：NS 接入；</li>
<li>noDomainAccess：无域名接入；</li>
<li>dnsPodAccess：DNSPod 托管接入，该接入模式要求您的域名已托管在 DNSPod 内。</li>
                     * @param _type 站点接入类型。该参数取值如下，不填写时默认为 partial：
<li>partial：CNAME 接入；</li>
<li>full：NS 接入；</li>
<li>noDomainAccess：无域名接入；</li>
<li>dnsPodAccess：DNSPod 托管接入，该接入模式要求您的域名已托管在 DNSPod 内。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取站点名称。CNAME/NS 接入的时，请传入二级域名（example.com）作为站点名称；无域名接入时，该值请保留为空。
                     * @return ZoneName 站点名称。CNAME/NS 接入的时，请传入二级域名（example.com）作为站点名称；无域名接入时，该值请保留为空。
                     * 
                     */
                    std::string GetZoneName() const;

                    /**
                     * 设置站点名称。CNAME/NS 接入的时，请传入二级域名（example.com）作为站点名称；无域名接入时，该值请保留为空。
                     * @param _zoneName 站点名称。CNAME/NS 接入的时，请传入二级域名（example.com）作为站点名称；无域名接入时，该值请保留为空。
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
                     * 获取Type 取值为 partial/full 时，七层域名的加速区域。以下为该参数取值，不填写时该值默认为 overseas。Type 取值为 noDomainAccess 时该值请保留为空：
<li> global: 全球可用区；</li>
<li> mainland: 中国大陆可用区；</li>
<li> overseas: 全球可用区（不含中国大陆）。</li>
                     * @return Area Type 取值为 partial/full 时，七层域名的加速区域。以下为该参数取值，不填写时该值默认为 overseas。Type 取值为 noDomainAccess 时该值请保留为空：
<li> global: 全球可用区；</li>
<li> mainland: 中国大陆可用区；</li>
<li> overseas: 全球可用区（不含中国大陆）。</li>
                     * 
                     */
                    std::string GetArea() const;

                    /**
                     * 设置Type 取值为 partial/full 时，七层域名的加速区域。以下为该参数取值，不填写时该值默认为 overseas。Type 取值为 noDomainAccess 时该值请保留为空：
<li> global: 全球可用区；</li>
<li> mainland: 中国大陆可用区；</li>
<li> overseas: 全球可用区（不含中国大陆）。</li>
                     * @param _area Type 取值为 partial/full 时，七层域名的加速区域。以下为该参数取值，不填写时该值默认为 overseas。Type 取值为 noDomainAccess 时该值请保留为空：
<li> global: 全球可用区；</li>
<li> mainland: 中国大陆可用区；</li>
<li> overseas: 全球可用区（不含中国大陆）。</li>
                     * 
                     */
                    void SetArea(const std::string& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     * 
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取待绑定的目标套餐 ID。当您账号下已存在套餐时，可以填写此参数，直接将站点绑定至该套餐。若您当前没有可绑定的套餐时，请前往控制台购买套餐完成站点创建。
                     * @return PlanId 待绑定的目标套餐 ID。当您账号下已存在套餐时，可以填写此参数，直接将站点绑定至该套餐。若您当前没有可绑定的套餐时，请前往控制台购买套餐完成站点创建。
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置待绑定的目标套餐 ID。当您账号下已存在套餐时，可以填写此参数，直接将站点绑定至该套餐。若您当前没有可绑定的套餐时，请前往控制台购买套餐完成站点创建。
                     * @param _planId 待绑定的目标套餐 ID。当您账号下已存在套餐时，可以填写此参数，直接将站点绑定至该套餐。若您当前没有可绑定的套餐时，请前往控制台购买套餐完成站点创建。
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取同名站点标识。限制输入数字、英文、"." 、"-" 和 "_"，长度 200 个字符以内。详情参考 [同名站点标识](https://cloud.tencent.com/document/product/1552/70202)，无此使用场景时，该字段保留为空即可。
                     * @return AliasZoneName 同名站点标识。限制输入数字、英文、"." 、"-" 和 "_"，长度 200 个字符以内。详情参考 [同名站点标识](https://cloud.tencent.com/document/product/1552/70202)，无此使用场景时，该字段保留为空即可。
                     * 
                     */
                    std::string GetAliasZoneName() const;

                    /**
                     * 设置同名站点标识。限制输入数字、英文、"." 、"-" 和 "_"，长度 200 个字符以内。详情参考 [同名站点标识](https://cloud.tencent.com/document/product/1552/70202)，无此使用场景时，该字段保留为空即可。
                     * @param _aliasZoneName 同名站点标识。限制输入数字、英文、"." 、"-" 和 "_"，长度 200 个字符以内。详情参考 [同名站点标识](https://cloud.tencent.com/document/product/1552/70202)，无此使用场景时，该字段保留为空即可。
                     * 
                     */
                    void SetAliasZoneName(const std::string& _aliasZoneName);

                    /**
                     * 判断参数 AliasZoneName 是否已赋值
                     * @return AliasZoneName 是否已赋值
                     * 
                     */
                    bool AliasZoneNameHasBeenSet() const;

                    /**
                     * 获取标签。该参数用于对站点进行分权限管控、分账。需要先前往 [标签控制台](https://console.cloud.tencent.com/tag/taglist) 创建对应的标签才可以在此处传入对应的标签键和标签值。
                     * @return Tags 标签。该参数用于对站点进行分权限管控、分账。需要先前往 [标签控制台](https://console.cloud.tencent.com/tag/taglist) 创建对应的标签才可以在此处传入对应的标签键和标签值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签。该参数用于对站点进行分权限管控、分账。需要先前往 [标签控制台](https://console.cloud.tencent.com/tag/taglist) 创建对应的标签才可以在此处传入对应的标签键和标签值。
                     * @param _tags 标签。该参数用于对站点进行分权限管控、分账。需要先前往 [标签控制台](https://console.cloud.tencent.com/tag/taglist) 创建对应的标签才可以在此处传入对应的标签键和标签值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取是否允许重复接入。
<li> true：允许重复接入；</li>
<li> false：不允许重复接入。</li>不填写使用默认值false。
                     * @return AllowDuplicates 是否允许重复接入。
<li> true：允许重复接入；</li>
<li> false：不允许重复接入。</li>不填写使用默认值false。
                     * @deprecated
                     */
                    bool GetAllowDuplicates() const;

                    /**
                     * 设置是否允许重复接入。
<li> true：允许重复接入；</li>
<li> false：不允许重复接入。</li>不填写使用默认值false。
                     * @param _allowDuplicates 是否允许重复接入。
<li> true：允许重复接入；</li>
<li> false：不允许重复接入。</li>不填写使用默认值false。
                     * @deprecated
                     */
                    void SetAllowDuplicates(const bool& _allowDuplicates);

                    /**
                     * 判断参数 AllowDuplicates 是否已赋值
                     * @return AllowDuplicates 是否已赋值
                     * @deprecated
                     */
                    bool AllowDuplicatesHasBeenSet() const;

                    /**
                     * 获取是否跳过站点现有的DNS记录扫描。默认值：false。
                     * @return JumpStart 是否跳过站点现有的DNS记录扫描。默认值：false。
                     * @deprecated
                     */
                    bool GetJumpStart() const;

                    /**
                     * 设置是否跳过站点现有的DNS记录扫描。默认值：false。
                     * @param _jumpStart 是否跳过站点现有的DNS记录扫描。默认值：false。
                     * @deprecated
                     */
                    void SetJumpStart(const bool& _jumpStart);

                    /**
                     * 判断参数 JumpStart 是否已赋值
                     * @return JumpStart 是否已赋值
                     * @deprecated
                     */
                    bool JumpStartHasBeenSet() const;

                private:

                    /**
                     * 站点接入类型。该参数取值如下，不填写时默认为 partial：
<li>partial：CNAME 接入；</li>
<li>full：NS 接入；</li>
<li>noDomainAccess：无域名接入；</li>
<li>dnsPodAccess：DNSPod 托管接入，该接入模式要求您的域名已托管在 DNSPod 内。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 站点名称。CNAME/NS 接入的时，请传入二级域名（example.com）作为站点名称；无域名接入时，该值请保留为空。
                     */
                    std::string m_zoneName;
                    bool m_zoneNameHasBeenSet;

                    /**
                     * Type 取值为 partial/full 时，七层域名的加速区域。以下为该参数取值，不填写时该值默认为 overseas。Type 取值为 noDomainAccess 时该值请保留为空：
<li> global: 全球可用区；</li>
<li> mainland: 中国大陆可用区；</li>
<li> overseas: 全球可用区（不含中国大陆）。</li>
                     */
                    std::string m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 待绑定的目标套餐 ID。当您账号下已存在套餐时，可以填写此参数，直接将站点绑定至该套餐。若您当前没有可绑定的套餐时，请前往控制台购买套餐完成站点创建。
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 同名站点标识。限制输入数字、英文、"." 、"-" 和 "_"，长度 200 个字符以内。详情参考 [同名站点标识](https://cloud.tencent.com/document/product/1552/70202)，无此使用场景时，该字段保留为空即可。
                     */
                    std::string m_aliasZoneName;
                    bool m_aliasZoneNameHasBeenSet;

                    /**
                     * 标签。该参数用于对站点进行分权限管控、分账。需要先前往 [标签控制台](https://console.cloud.tencent.com/tag/taglist) 创建对应的标签才可以在此处传入对应的标签键和标签值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 是否允许重复接入。
<li> true：允许重复接入；</li>
<li> false：不允许重复接入。</li>不填写使用默认值false。
                     */
                    bool m_allowDuplicates;
                    bool m_allowDuplicatesHasBeenSet;

                    /**
                     * 是否跳过站点现有的DNS记录扫描。默认值：false。
                     */
                    bool m_jumpStart;
                    bool m_jumpStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATEZONEREQUEST_H_
