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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_LIFECYCLEHOOK_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_LIFECYCLEHOOK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/HttpGetOption.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * LifeCycleHook
                */
                class LifeCycleHook : public AbstractModel
                {
                public:
                    LifeCycleHook();
                    ~LifeCycleHook() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命周期函数类型：PostStart|PreStop
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HookType 生命周期函数类型：PostStart|PreStop
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHookType() const;

                    /**
                     * 设置生命周期函数类型：PostStart|PreStop
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hookType 生命周期函数类型：PostStart|PreStop
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHookType(const std::string& _hookType);

                    /**
                     * 判断参数 HookType 是否已赋值
                     * @return HookType 是否已赋值
                     * 
                     */
                    bool HookTypeHasBeenSet() const;

                    /**
                     * 获取函数执行方式：execCommand|httpGet|none
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecMode 函数执行方式：execCommand|httpGet|none
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecMode() const;

                    /**
                     * 设置函数执行方式：execCommand|httpGet|none
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execMode 函数执行方式：execCommand|httpGet|none
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecMode(const std::string& _execMode);

                    /**
                     * 判断参数 ExecMode 是否已赋值
                     * @return ExecMode 是否已赋值
                     * 
                     */
                    bool ExecModeHasBeenSet() const;

                    /**
                     * 获取execCommand函数执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecCommandContent execCommand函数执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecCommandContent() const;

                    /**
                     * 设置execCommand函数执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _execCommandContent execCommand函数执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecCommandContent(const std::string& _execCommandContent);

                    /**
                     * 判断参数 ExecCommandContent 是否已赋值
                     * @return ExecCommandContent 是否已赋值
                     * 
                     */
                    bool ExecCommandContentHasBeenSet() const;

                    /**
                     * 获取HttpGet执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HttpGetOption HttpGet执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    HttpGetOption GetHttpGetOption() const;

                    /**
                     * 设置HttpGet执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _httpGetOption HttpGet执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHttpGetOption(const HttpGetOption& _httpGetOption);

                    /**
                     * 判断参数 HttpGetOption 是否已赋值
                     * @return HttpGetOption 是否已赋值
                     * 
                     */
                    bool HttpGetOptionHasBeenSet() const;

                private:

                    /**
                     * 生命周期函数类型：PostStart|PreStop
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hookType;
                    bool m_hookTypeHasBeenSet;

                    /**
                     * 函数执行方式：execCommand|httpGet|none
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execMode;
                    bool m_execModeHasBeenSet;

                    /**
                     * execCommand函数执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_execCommandContent;
                    bool m_execCommandContentHasBeenSet;

                    /**
                     * HttpGet执行内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    HttpGetOption m_httpGetOption;
                    bool m_httpGetOptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_LIFECYCLEHOOK_H_
