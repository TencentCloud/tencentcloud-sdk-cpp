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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYKBREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYKBREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/KBSpec.h>
#include <tencentcloud/adp/v20260520/model/FieldMask.h>
#include <tencentcloud/adp/v20260520/model/KBModifyExtendFields.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ModifyKB请求参数结构体
                */
                class ModifyKBRequest : public AbstractModel
                {
                public:
                    ModifyKBRequest();
                    ~ModifyKBRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>知识库 ID</p>
                     * @return KbId <p>知识库 ID</p>
                     * 
                     */
                    std::string GetKbId() const;

                    /**
                     * 设置<p>知识库 ID</p>
                     * @param _kbId <p>知识库 ID</p>
                     * 
                     */
                    void SetKbId(const std::string& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                    /**
                     * 获取<p>可写属性（与 update_mask 配合使用）</p>
                     * @return Spec <p>可写属性（与 update_mask 配合使用）</p>
                     * 
                     */
                    KBSpec GetSpec() const;

                    /**
                     * 设置<p>可写属性（与 update_mask 配合使用）</p>
                     * @param _spec <p>可写属性（与 update_mask 配合使用）</p>
                     * 
                     */
                    void SetSpec(const KBSpec& _spec);

                    /**
                     * 判断参数 Spec 是否已赋值
                     * @return Spec 是否已赋值
                     * 
                     */
                    bool SpecHasBeenSet() const;

                    /**
                     * 获取<p>字段掩码：指定要修改的字段（蛇形字段名），未列出的字段忽略</p>
                     * @return UpdateMask <p>字段掩码：指定要修改的字段（蛇形字段名），未列出的字段忽略</p>
                     * 
                     */
                    FieldMask GetUpdateMask() const;

                    /**
                     * 设置<p>字段掩码：指定要修改的字段（蛇形字段名），未列出的字段忽略</p>
                     * @param _updateMask <p>字段掩码：指定要修改的字段（蛇形字段名），未列出的字段忽略</p>
                     * 
                     */
                    void SetUpdateMask(const FieldMask& _updateMask);

                    /**
                     * 判断参数 UpdateMask 是否已赋值
                     * @return UpdateMask 是否已赋值
                     * 
                     */
                    bool UpdateMaskHasBeenSet() const;

                    /**
                     * 获取<p>扩展操作（用于承载无法归类到常规字段修改的特殊操作，例如触发超量恢复等；需在 update_mask 中同时传入 &#39;extend_fields&#39; 才会生效，取值参见 KBExtendedAction：1=触发恢复超量）</p>
                     * @return ExtendFields <p>扩展操作（用于承载无法归类到常规字段修改的特殊操作，例如触发超量恢复等；需在 update_mask 中同时传入 &#39;extend_fields&#39; 才会生效，取值参见 KBExtendedAction：1=触发恢复超量）</p>
                     * 
                     */
                    KBModifyExtendFields GetExtendFields() const;

                    /**
                     * 设置<p>扩展操作（用于承载无法归类到常规字段修改的特殊操作，例如触发超量恢复等；需在 update_mask 中同时传入 &#39;extend_fields&#39; 才会生效，取值参见 KBExtendedAction：1=触发恢复超量）</p>
                     * @param _extendFields <p>扩展操作（用于承载无法归类到常规字段修改的特殊操作，例如触发超量恢复等；需在 update_mask 中同时传入 &#39;extend_fields&#39; 才会生效，取值参见 KBExtendedAction：1=触发恢复超量）</p>
                     * 
                     */
                    void SetExtendFields(const KBModifyExtendFields& _extendFields);

                    /**
                     * 判断参数 ExtendFields 是否已赋值
                     * @return ExtendFields 是否已赋值
                     * 
                     */
                    bool ExtendFieldsHasBeenSet() const;

                private:

                    /**
                     * <p>知识库 ID</p>
                     */
                    std::string m_kbId;
                    bool m_kbIdHasBeenSet;

                    /**
                     * <p>可写属性（与 update_mask 配合使用）</p>
                     */
                    KBSpec m_spec;
                    bool m_specHasBeenSet;

                    /**
                     * <p>字段掩码：指定要修改的字段（蛇形字段名），未列出的字段忽略</p>
                     */
                    FieldMask m_updateMask;
                    bool m_updateMaskHasBeenSet;

                    /**
                     * <p>扩展操作（用于承载无法归类到常规字段修改的特殊操作，例如触发超量恢复等；需在 update_mask 中同时传入 &#39;extend_fields&#39; 才会生效，取值参见 KBExtendedAction：1=触发恢复超量）</p>
                     */
                    KBModifyExtendFields m_extendFields;
                    bool m_extendFieldsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_MODIFYKBREQUEST_H_
