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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_

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
                * 回源 URL 重写 配置参数。
                */
                class UpstreamURLRewriteParameters : public AbstractModel
                {
                public:
                    UpstreamURLRewriteParameters();
                    ~UpstreamURLRewriteParameters() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取回源 URL 重写类型，仅支持填写 Path。
                     * @return Type 回源 URL 重写类型，仅支持填写 Path。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置回源 URL 重写类型，仅支持填写 Path。
                     * @param _type 回源 URL 重写类型，仅支持填写 Path。
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
                     * 获取回源 URL 重写动作。取值有：
<li>replace：替换路径前缀；</li>
<li>addPrefix：增加路径前缀；</li>
<li>rmvPrefix：移除路径前缀。</li>
                     * @return Action 回源 URL 重写动作。取值有：
<li>replace：替换路径前缀；</li>
<li>addPrefix：增加路径前缀；</li>
<li>rmvPrefix：移除路径前缀。</li>
                     * 
                     */
                    std::string GetAction() const;

                    /**
                     * 设置回源 URL 重写动作。取值有：
<li>replace：替换路径前缀；</li>
<li>addPrefix：增加路径前缀；</li>
<li>rmvPrefix：移除路径前缀。</li>
                     * @param _action 回源 URL 重写动作。取值有：
<li>replace：替换路径前缀；</li>
<li>addPrefix：增加路径前缀；</li>
<li>rmvPrefix：移除路径前缀。</li>
                     * 
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     * 
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取回源 URL 重写值，最大长度 1024，必须以 / 开头。<br>注意：当 Action 为 addPrefix 时，不能以 / 结尾；当 Action 为 rmvPrefix 时，不能存在 *。
                     * @return Value 回源 URL 重写值，最大长度 1024，必须以 / 开头。<br>注意：当 Action 为 addPrefix 时，不能以 / 结尾；当 Action 为 rmvPrefix 时，不能存在 *。
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置回源 URL 重写值，最大长度 1024，必须以 / 开头。<br>注意：当 Action 为 addPrefix 时，不能以 / 结尾；当 Action 为 rmvPrefix 时，不能存在 *。
                     * @param _value 回源 URL 重写值，最大长度 1024，必须以 / 开头。<br>注意：当 Action 为 addPrefix 时，不能以 / 结尾；当 Action 为 rmvPrefix 时，不能存在 *。
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 回源 URL 重写类型，仅支持填写 Path。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 回源 URL 重写动作。取值有：
<li>replace：替换路径前缀；</li>
<li>addPrefix：增加路径前缀；</li>
<li>rmvPrefix：移除路径前缀。</li>
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 回源 URL 重写值，最大长度 1024，必须以 / 开头。<br>注意：当 Action 为 addPrefix 时，不能以 / 结尾；当 Action 为 rmvPrefix 时，不能存在 *。
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_UPSTREAMURLREWRITEPARAMETERS_H_
