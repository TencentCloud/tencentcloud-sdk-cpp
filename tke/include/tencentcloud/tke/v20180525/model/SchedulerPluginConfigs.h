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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_SCHEDULERPLUGINCONFIGS_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_SCHEDULERPLUGINCONFIGS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 调度器plugin配置参数
                */
                class SchedulerPluginConfigs : public AbstractModel
                {
                public:
                    SchedulerPluginConfigs();
                    ~SchedulerPluginConfigs() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置的插件的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 配置的插件的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置的插件的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 配置的插件的名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取初始化时传递给插件的参数，对{"apiVersion":"kubescheduler.config.k8s.io/v1beta3","kind":"NodeResourcesFitArgs","scoringStrategy":{"type":"LeastAllocated"}}base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Args 初始化时传递给插件的参数，对{"apiVersion":"kubescheduler.config.k8s.io/v1beta3","kind":"NodeResourcesFitArgs","scoringStrategy":{"type":"LeastAllocated"}}base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetArgs() const;

                    /**
                     * 设置初始化时传递给插件的参数，对{"apiVersion":"kubescheduler.config.k8s.io/v1beta3","kind":"NodeResourcesFitArgs","scoringStrategy":{"type":"LeastAllocated"}}base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _args 初始化时传递给插件的参数，对{"apiVersion":"kubescheduler.config.k8s.io/v1beta3","kind":"NodeResourcesFitArgs","scoringStrategy":{"type":"LeastAllocated"}}base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetArgs(const std::string& _args);

                    /**
                     * 判断参数 Args 是否已赋值
                     * @return Args 是否已赋值
                     * 
                     */
                    bool ArgsHasBeenSet() const;

                private:

                    /**
                     * 配置的插件的名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 初始化时传递给插件的参数，对{"apiVersion":"kubescheduler.config.k8s.io/v1beta3","kind":"NodeResourcesFitArgs","scoringStrategy":{"type":"LeastAllocated"}}base64后的结果
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_args;
                    bool m_argsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_SCHEDULERPLUGINCONFIGS_H_
