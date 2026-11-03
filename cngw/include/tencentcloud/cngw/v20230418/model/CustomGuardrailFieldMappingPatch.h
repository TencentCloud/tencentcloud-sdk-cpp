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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILFIELDMAPPINGPATCH_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILFIELDMAPPINGPATCH_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 局部更新配置。只更新显式提供字段；未传字段保留。条件必填按合并后的完整策略校验，不会要求每次重传全部配置。
                */
                class CustomGuardrailFieldMappingPatch : public AbstractModel
                {
                public:
                    CustomGuardrailFieldMappingPatch();
                    ~CustomGuardrailFieldMappingPatch() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填。命中字段的点分隔对象路径，例如 decision 或 result.blocked；不支持数组下标、JSONPath 或通配符。</p>
                     * @return HitFieldPath <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填。命中字段的点分隔对象路径，例如 decision 或 result.blocked；不支持数组下标、JSONPath 或通配符。</p>
                     * 
                     */
                    std::string GetHitFieldPath() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填。命中字段的点分隔对象路径，例如 decision 或 result.blocked；不支持数组下标、JSONPath 或通配符。</p>
                     * @param _hitFieldPath <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填。命中字段的点分隔对象路径，例如 decision 或 result.blocked；不支持数组下标、JSONPath 或通配符。</p>
                     * 
                     */
                    void SetHitFieldPath(const std::string& _hitFieldPath);

                    /**
                     * 判断参数 HitFieldPath 是否已赋值
                     * @return HitFieldPath 是否已赋值
                     * 
                     */
                    bool HitFieldPathHasBeenSet() const;

                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填，API 类型为 string。可填写 JSON 字符串、数字或布尔标量文本，也接受 block 等非空普通文本并规范化为 JSON 字符串。示例：block 或 "block" 匹配字符串，true 匹配布尔值，0 匹配数字。null、对象、数组和空白文本不支持；类型不同不视为普通未命中。</p>
                     * @return HitValue <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填，API 类型为 string。可填写 JSON 字符串、数字或布尔标量文本，也接受 block 等非空普通文本并规范化为 JSON 字符串。示例：block 或 "block" 匹配字符串，true 匹配布尔值，0 匹配数字。null、对象、数组和空白文本不支持；类型不同不视为普通未命中。</p>
                     * 
                     */
                    std::string GetHitValue() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填，API 类型为 string。可填写 JSON 字符串、数字或布尔标量文本，也接受 block 等非空普通文本并规范化为 JSON 字符串。示例：block 或 "block" 匹配字符串，true 匹配布尔值，0 匹配数字。null、对象、数组和空白文本不支持；类型不同不视为普通未命中。</p>
                     * @param _hitValue <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填，API 类型为 string。可填写 JSON 字符串、数字或布尔标量文本，也接受 block 等非空普通文本并规范化为 JSON 字符串。示例：block 或 "block" 匹配字符串，true 匹配布尔值，0 匹配数字。null、对象、数组和空白文本不支持；类型不同不视为普通未命中。</p>
                     * 
                     */
                    void SetHitValue(const std::string& _hitValue);

                    /**
                     * 判断参数 HitValue 是否已赋值
                     * @return HitValue 是否已赋值
                     * 
                     */
                    bool HitValueHasBeenSet() const;

                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。BlockMessageMode=response 时必填，例如 message 或 result.message；读取结果应为 1～512 字符的字符串，否则使用兜底文案。</p>
                     * @return MessageFieldPath <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。BlockMessageMode=response 时必填，例如 message 或 result.message；读取结果应为 1～512 字符的字符串，否则使用兜底文案。</p>
                     * 
                     */
                    std::string GetMessageFieldPath() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。BlockMessageMode=response 时必填，例如 message 或 result.message；读取结果应为 1～512 字符的字符串，否则使用兜底文案。</p>
                     * @param _messageFieldPath <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。BlockMessageMode=response 时必填，例如 message 或 result.message；读取结果应为 1～512 字符的字符串，否则使用兜底文案。</p>
                     * 
                     */
                    void SetMessageFieldPath(const std::string& _messageFieldPath);

                    /**
                     * 判断参数 MessageFieldPath 是否已赋值
                     * @return MessageFieldPath 是否已赋值
                     * 
                     */
                    bool MessageFieldPathHasBeenSet() const;

                    /**
                     * 获取<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。RewriteEnabled=true 时必填，例如 content.body；仅输出审核读取。字段存在即优先 replace，与命中值是否相等无关。JSON 替换值应是完整业务 JSON；SSE 必须是以空行结束的完整事件文本，替换当前未发送的 event_batch，不是整个流或某个 TCP chunk。输入不替换。</p>
                     * @return RewriteFieldPath <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。RewriteEnabled=true 时必填，例如 content.body；仅输出审核读取。字段存在即优先 replace，与命中值是否相等无关。JSON 替换值应是完整业务 JSON；SSE 必须是以空行结束的完整事件文本，替换当前未发送的 event_batch，不是整个流或某个 TCP chunk。输入不替换。</p>
                     * 
                     */
                    std::string GetRewriteFieldPath() const;

                    /**
                     * 设置<p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。RewriteEnabled=true 时必填，例如 content.body；仅输出审核读取。字段存在即优先 replace，与命中值是否相等无关。JSON 替换值应是完整业务 JSON；SSE 必须是以空行结束的完整事件文本，替换当前未发送的 event_batch，不是整个流或某个 TCP chunk。输入不替换。</p>
                     * @param _rewriteFieldPath <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。RewriteEnabled=true 时必填，例如 content.body；仅输出审核读取。字段存在即优先 replace，与命中值是否相等无关。JSON 替换值应是完整业务 JSON；SSE 必须是以空行结束的完整事件文本，替换当前未发送的 event_batch，不是整个流或某个 TCP chunk。输入不替换。</p>
                     * 
                     */
                    void SetRewriteFieldPath(const std::string& _rewriteFieldPath);

                    /**
                     * 判断参数 RewriteFieldPath 是否已赋值
                     * @return RewriteFieldPath 是否已赋值
                     * 
                     */
                    bool RewriteFieldPathHasBeenSet() const;

                private:

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填。命中字段的点分隔对象路径，例如 decision 或 result.blocked；不支持数组下标、JSONPath 或通配符。</p>
                     */
                    std::string m_hitFieldPath;
                    bool m_hitFieldPathHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。必填，API 类型为 string。可填写 JSON 字符串、数字或布尔标量文本，也接受 block 等非空普通文本并规范化为 JSON 字符串。示例：block 或 "block" 匹配字符串，true 匹配布尔值，0 匹配数字。null、对象、数组和空白文本不支持；类型不同不视为普通未命中。</p>
                     */
                    std::string m_hitValue;
                    bool m_hitValueHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。BlockMessageMode=response 时必填，例如 message 或 result.message；读取结果应为 1～512 字符的字符串，否则使用兜底文案。</p>
                     */
                    std::string m_messageFieldPath;
                    bool m_messageFieldPathHasBeenSet;

                    /**
                     * <p>局部更新：省略本字段保留原值；显式填写须满足枚举及条件必填约束。RewriteEnabled=true 时必填，例如 content.body；仅输出审核读取。字段存在即优先 replace，与命中值是否相等无关。JSON 替换值应是完整业务 JSON；SSE 必须是以空行结束的完整事件文本，替换当前未发送的 event_batch，不是整个流或某个 TCP chunk。输入不替换。</p>
                     */
                    std::string m_rewriteFieldPath;
                    bool m_rewriteFieldPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CUSTOMGUARDRAILFIELDMAPPINGPATCH_H_
