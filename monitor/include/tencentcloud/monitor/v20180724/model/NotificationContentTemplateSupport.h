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

#ifndef TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTIFICATIONCONTENTTEMPLATESUPPORT_H_
#define TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTIFICATIONCONTENTTEMPLATESUPPORT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/monitor/v20180724/model/NotificationContentTemplateSupportDetail.h>


namespace TencentCloud
{
    namespace Monitor
    {
        namespace V20180724
        {
            namespace Model
            {
                /**
                * 告警通知内容模板支持的变量或者函数列表
                */
                class NotificationContentTemplateSupport : public AbstractModel
                {
                public:
                    NotificationContentTemplateSupport();
                    ~NotificationContentTemplateSupport() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控类型
                     * @return MonitorType 监控类型
                     * 
                     */
                    std::string GetMonitorType() const;

                    /**
                     * 设置监控类型
                     * @param _monitorType 监控类型
                     * 
                     */
                    void SetMonitorType(const std::string& _monitorType);

                    /**
                     * 判断参数 MonitorType 是否已赋值
                     * @return MonitorType 是否已赋值
                     * 
                     */
                    bool MonitorTypeHasBeenSet() const;

                    /**
                     * 获取支持的变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Variables 支持的变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NotificationContentTemplateSupportDetail> GetVariables() const;

                    /**
                     * 设置支持的变量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _variables 支持的变量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVariables(const std::vector<NotificationContentTemplateSupportDetail>& _variables);

                    /**
                     * 判断参数 Variables 是否已赋值
                     * @return Variables 是否已赋值
                     * 
                     */
                    bool VariablesHasBeenSet() const;

                    /**
                     * 获取支持的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Functions 支持的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<NotificationContentTemplateSupportDetail> GetFunctions() const;

                    /**
                     * 设置支持的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _functions 支持的函数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFunctions(const std::vector<NotificationContentTemplateSupportDetail>& _functions);

                    /**
                     * 判断参数 Functions 是否已赋值
                     * @return Functions 是否已赋值
                     * 
                     */
                    bool FunctionsHasBeenSet() const;

                private:

                    /**
                     * 监控类型
                     */
                    std::string m_monitorType;
                    bool m_monitorTypeHasBeenSet;

                    /**
                     * 支持的变量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NotificationContentTemplateSupportDetail> m_variables;
                    bool m_variablesHasBeenSet;

                    /**
                     * 支持的函数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<NotificationContentTemplateSupportDetail> m_functions;
                    bool m_functionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONITOR_V20180724_MODEL_NOTIFICATIONCONTENTTEMPLATESUPPORT_H_
