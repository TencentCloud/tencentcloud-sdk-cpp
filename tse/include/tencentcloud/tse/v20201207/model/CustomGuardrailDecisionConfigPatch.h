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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILDECISIONCONFIGPATCH_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILDECISIONCONFIGPATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CustomGuardrailFieldMappingPatch.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 局部更新配置。只更新显式提供字段；未传字段保留。条件必填按合并后的完整策略校验，不会要求每次重传全部配置。
                */
                class CustomGuardrailDecisionConfigPatch : public AbstractModel
                {
                public:
                    CustomGuardrailDecisionConfigPatch();
                    ~CustomGuardrailDecisionConfigPatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。仅支持 field_mapping（自定义字段映射），必须显式填写；不允许 standard_v2、空字符串或 null。只决定如何解析审核响应，网关送审请求仍使用统一 Schema 2.0 封装。</p>
                     * @return ContractMode <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。仅支持 field_mapping（自定义字段映射），必须显式填写；不允许 standard_v2、空字符串或 null。只决定如何解析审核响应，网关送审请求仍使用统一 Schema 2.0 封装。</p>
                     * 
                     */
                    std::string GetContractMode() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。仅支持 field_mapping（自定义字段映射），必须显式填写；不允许 standard_v2、空字符串或 null。只决定如何解析审核响应，网关送审请求仍使用统一 Schema 2.0 封装。</p>
                     * @param _contractMode <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。仅支持 field_mapping（自定义字段映射），必须显式填写；不允许 standard_v2、空字符串或 null。只决定如何解析审核响应，网关送审请求仍使用统一 Schema 2.0 封装。</p>
                     * 
                     */
                    void SetContractMode(const std::string& _contractMode);

                    /**
                     * 判断参数 ContractMode 是否已赋值
                     * @return ContractMode 是否已赋值
                     * 
                     */
                    bool ContractModeHasBeenSet() const;

                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     * @return BlockMessageMode <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     * 
                     */
                    std::string GetBlockMessageMode() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     * @param _blockMessageMode <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     * 
                     */
                    void SetBlockMessageMode(const std::string& _blockMessageMode);

                    /**
                     * 判断参数 BlockMessageMode 是否已赋值
                     * @return BlockMessageMode 是否已赋值
                     * 
                     */
                    bool BlockMessageModeHasBeenSet() const;

                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。默认/兜底拦截提示，长度 1～512 字符，不是替换 Body。BlockMessageMode=default 时必填且不能为空白；创建/草稿测试使用 response 模式时可省略，后端补充系统兜底提示。修改时省略保留原值，显式空值不用于清空文案。</p>
                     * @return BlockMessage <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。默认/兜底拦截提示，长度 1～512 字符，不是替换 Body。BlockMessageMode=default 时必填且不能为空白；创建/草稿测试使用 response 模式时可省略，后端补充系统兜底提示。修改时省略保留原值，显式空值不用于清空文案。</p>
                     * 
                     */
                    std::string GetBlockMessage() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。默认/兜底拦截提示，长度 1～512 字符，不是替换 Body。BlockMessageMode=default 时必填且不能为空白；创建/草稿测试使用 response 模式时可省略，后端补充系统兜底提示。修改时省略保留原值，显式空值不用于清空文案。</p>
                     * @param _blockMessage <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。默认/兜底拦截提示，长度 1～512 字符，不是替换 Body。BlockMessageMode=default 时必填且不能为空白；创建/草稿测试使用 response 模式时可省略，后端补充系统兜底提示。修改时省略保留原值，显式空值不用于清空文案。</p>
                     * 
                     */
                    void SetBlockMessage(const std::string& _blockMessage);

                    /**
                     * 判断参数 BlockMessage 是否已赋值
                     * @return BlockMessage 是否已赋值
                     * 
                     */
                    bool BlockMessageHasBeenSet() const;

                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RewriteEnabled <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetRewriteEnabled() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rewriteEnabled <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRewriteEnabled(const bool& _rewriteEnabled);

                    /**
                     * 判断参数 RewriteEnabled 是否已赋值
                     * @return RewriteEnabled 是否已赋值
                     * 
                     */
                    bool RewriteEnabledHasBeenSet() const;

                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * @return FieldMapping <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * 
                     */
                    CustomGuardrailFieldMappingPatch GetFieldMapping() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * @param _fieldMapping <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * 
                     */
                    void SetFieldMapping(const CustomGuardrailFieldMappingPatch& _fieldMapping);

                    /**
                     * 判断参数 FieldMapping 是否已赋值
                     * @return FieldMapping 是否已赋值
                     * 
                     */
                    bool FieldMappingHasBeenSet() const;

                private:

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。仅支持 field_mapping（自定义字段映射），必须显式填写；不允许 standard_v2、空字符串或 null。只决定如何解析审核响应，网关送审请求仍使用统一 Schema 2.0 封装。</p>
                     */
                    std::string m_contractMode;
                    bool m_contractModeHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     */
                    std::string m_blockMessageMode;
                    bool m_blockMessageModeHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。默认/兜底拦截提示，长度 1～512 字符，不是替换 Body。BlockMessageMode=default 时必填且不能为空白；创建/草稿测试使用 response 模式时可省略，后端补充系统兜底提示。修改时省略保留原值，显式空值不用于清空文案。</p>
                     */
                    std::string m_blockMessage;
                    bool m_blockMessageHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_rewriteEnabled;
                    bool m_rewriteEnabledHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     */
                    CustomGuardrailFieldMappingPatch m_fieldMapping;
                    bool m_fieldMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILDECISIONCONFIGPATCH_H_
