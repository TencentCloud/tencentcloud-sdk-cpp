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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_LINKMATERIAL_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_LINKMATERIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/LinkMaterialInfo.h>
#include <tencentcloud/cme/v20191029/model/ClassInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 链接类型的素材信息
                */
                class LinkMaterial : public AbstractModel
                {
                public:
                    LinkMaterial();
                    ~LinkMaterial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取链接类型取值:
<li>CLASS: 分类链接;</li>
<li> MATERIAL：素材链接。</li>
                     * @return LinkType 链接类型取值:
<li>CLASS: 分类链接;</li>
<li> MATERIAL：素材链接。</li>
                     * 
                     */
                    std::string GetLinkType() const;

                    /**
                     * 设置链接类型取值:
<li>CLASS: 分类链接;</li>
<li> MATERIAL：素材链接。</li>
                     * @param _linkType 链接类型取值:
<li>CLASS: 分类链接;</li>
<li> MATERIAL：素材链接。</li>
                     * 
                     */
                    void SetLinkType(const std::string& _linkType);

                    /**
                     * 判断参数 LinkType 是否已赋值
                     * @return LinkType 是否已赋值
                     * 
                     */
                    bool LinkTypeHasBeenSet() const;

                    /**
                     * 获取链接状态取值：
<li> Normal：正常 ；</li>
<li>NotFound：链接目标不存在；</li> <li>Forbidden：无权限。</li>
                     * @return LinkStatus 链接状态取值：
<li> Normal：正常 ；</li>
<li>NotFound：链接目标不存在；</li> <li>Forbidden：无权限。</li>
                     * 
                     */
                    std::string GetLinkStatus() const;

                    /**
                     * 设置链接状态取值：
<li> Normal：正常 ；</li>
<li>NotFound：链接目标不存在；</li> <li>Forbidden：无权限。</li>
                     * @param _linkStatus 链接状态取值：
<li> Normal：正常 ；</li>
<li>NotFound：链接目标不存在；</li> <li>Forbidden：无权限。</li>
                     * 
                     */
                    void SetLinkStatus(const std::string& _linkStatus);

                    /**
                     * 判断参数 LinkStatus 是否已赋值
                     * @return LinkStatus 是否已赋值
                     * 
                     */
                    bool LinkStatusHasBeenSet() const;

                    /**
                     * 获取素材链接详细信息，当LinkType="MATERIAL"时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkMaterialInfo 素材链接详细信息，当LinkType="MATERIAL"时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    LinkMaterialInfo GetLinkMaterialInfo() const;

                    /**
                     * 设置素材链接详细信息，当LinkType="MATERIAL"时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkMaterialInfo 素材链接详细信息，当LinkType="MATERIAL"时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkMaterialInfo(const LinkMaterialInfo& _linkMaterialInfo);

                    /**
                     * 判断参数 LinkMaterialInfo 是否已赋值
                     * @return LinkMaterialInfo 是否已赋值
                     * 
                     */
                    bool LinkMaterialInfoHasBeenSet() const;

                    /**
                     * 获取分类链接目标信息，当LinkType=“CLASS”时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkClassInfo 分类链接目标信息，当LinkType=“CLASS”时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClassInfo GetLinkClassInfo() const;

                    /**
                     * 设置分类链接目标信息，当LinkType=“CLASS”时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _linkClassInfo 分类链接目标信息，当LinkType=“CLASS”时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLinkClassInfo(const ClassInfo& _linkClassInfo);

                    /**
                     * 判断参数 LinkClassInfo 是否已赋值
                     * @return LinkClassInfo 是否已赋值
                     * 
                     */
                    bool LinkClassInfoHasBeenSet() const;

                private:

                    /**
                     * 链接类型取值:
<li>CLASS: 分类链接;</li>
<li> MATERIAL：素材链接。</li>
                     */
                    std::string m_linkType;
                    bool m_linkTypeHasBeenSet;

                    /**
                     * 链接状态取值：
<li> Normal：正常 ；</li>
<li>NotFound：链接目标不存在；</li> <li>Forbidden：无权限。</li>
                     */
                    std::string m_linkStatus;
                    bool m_linkStatusHasBeenSet;

                    /**
                     * 素材链接详细信息，当LinkType="MATERIAL"时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    LinkMaterialInfo m_linkMaterialInfo;
                    bool m_linkMaterialInfoHasBeenSet;

                    /**
                     * 分类链接目标信息，当LinkType=“CLASS”时有值。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClassInfo m_linkClassInfo;
                    bool m_linkClassInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_LINKMATERIAL_H_
