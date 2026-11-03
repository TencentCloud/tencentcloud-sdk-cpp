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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILDECISIONCONFIG_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILDECISIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/CustomGuardrailFieldMapping.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 自定义安全护栏审核响应判定配置
                */
                class CustomGuardrailDecisionConfig : public AbstractModel
                {
                public:
                    CustomGuardrailDecisionConfig();
                    ~CustomGuardrailDecisionConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>已保存的判定模式。新配置仅支持 field_mapping；存量策略可能返回 standard_v2，查询、删除或停用不要求迁移，修改判定配置或重新启用前必须迁移。</p>
                     * @return ContractMode <p>已保存的判定模式。新配置仅支持 field_mapping；存量策略可能返回 standard_v2，查询、删除或停用不要求迁移，修改判定配置或重新启用前必须迁移。</p>
                     * 
                     */
                    std::string GetContractMode() const;

                    /**
                     * 设置<p>已保存的判定模式。新配置仅支持 field_mapping；存量策略可能返回 standard_v2，查询、删除或停用不要求迁移，修改判定配置或重新启用前必须迁移。</p>
                     * @param _contractMode <p>已保存的判定模式。新配置仅支持 field_mapping；存量策略可能返回 standard_v2，查询、删除或停用不要求迁移，修改判定配置或重新启用前必须迁移。</p>
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
                     * 获取<p>必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     * @return BlockMessageMode <p>必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     * 
                     */
                    std::string GetBlockMessageMode() const;

                    /**
                     * 设置<p>必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     * @param _blockMessageMode <p>必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
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
                     * 获取<p>本策略默认/兜底拦截提示，最长 512 个字符。未配置或为空时使用系统按请求语言选择的默认提示；不是替换后的业务响应 Body。</p>
                     * @return BlockMessage <p>本策略默认/兜底拦截提示，最长 512 个字符。未配置或为空时使用系统按请求语言选择的默认提示；不是替换后的业务响应 Body。</p>
                     * 
                     */
                    std::string GetBlockMessage() const;

                    /**
                     * 设置<p>本策略默认/兜底拦截提示，最长 512 个字符。未配置或为空时使用系统按请求语言选择的默认提示；不是替换后的业务响应 Body。</p>
                     * @param _blockMessage <p>本策略默认/兜底拦截提示，最长 512 个字符。未配置或为空时使用系统按请求语言选择的默认提示；不是替换后的业务响应 Body。</p>
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
                     * 获取<p>是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
                     * @return RewriteEnabled <p>是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
                     * 
                     */
                    bool GetRewriteEnabled() const;

                    /**
                     * 设置<p>是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
                     * @param _rewriteEnabled <p>是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
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
                     * 获取<p>自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * @return FieldMapping <p>自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * 
                     */
                    CustomGuardrailFieldMapping GetFieldMapping() const;

                    /**
                     * 设置<p>自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * @param _fieldMapping <p>自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     * 
                     */
                    void SetFieldMapping(const CustomGuardrailFieldMapping& _fieldMapping);

                    /**
                     * 判断参数 FieldMapping 是否已赋值
                     * @return FieldMapping 是否已赋值
                     * 
                     */
                    bool FieldMappingHasBeenSet() const;

                private:

                    /**
                     * <p>已保存的判定模式。新配置仅支持 field_mapping；存量策略可能返回 standard_v2，查询、删除或停用不要求迁移，修改判定配置或重新启用前必须迁移。</p>
                     */
                    std::string m_contractMode;
                    bool m_contractModeHasBeenSet;

                    /**
                     * <p>必须显式填写 default 或 response。default 使用 BlockMessage；response 使用 FieldMapping.MessageFieldPath 读取提示，值缺失或不合法时回退默认文案。default 时 BlockMessage 必填，response 时 MessageFieldPath 必填。</p>
                     */
                    std::string m_blockMessageMode;
                    bool m_blockMessageModeHasBeenSet;

                    /**
                     * <p>本策略默认/兜底拦截提示，最长 512 个字符。未配置或为空时使用系统按请求语言选择的默认提示；不是替换后的业务响应 Body。</p>
                     */
                    std::string m_blockMessage;
                    bool m_blockMessageHasBeenSet;

                    /**
                     * <p>是否允许输出内容替换，省略为 false。开启且配置 RewriteFieldPath 后，输出审核响应只要存在该字段就优先 replace，不要求 HitFieldPath/HitValue 命中，也不要求引擎 decision=replace；替换字段不存在才按命中规则处理。输入永不替换；observe 只记录、不阻断或替换。非法替换正文是审核异常。流式仅替换当前未发送批次，不可撤回已发送内容。</p>
                     */
                    bool m_rewriteEnabled;
                    bool m_rewriteEnabledHasBeenSet;

                    /**
                     * <p>自定义模式必填的响应字段映射。HitFieldPath 和 HitValue 必填。输出启用替换且替换字段存在时优先 replace；否则要求命中字段存在且为有效同类型标量，值相等时 block，不相等时 allow。缺失或非法命中字段属于无效审核响应，不能等同于安全放行。</p>
                     */
                    CustomGuardrailFieldMapping m_fieldMapping;
                    bool m_fieldMappingHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CUSTOMGUARDRAILDECISIONCONFIG_H_
