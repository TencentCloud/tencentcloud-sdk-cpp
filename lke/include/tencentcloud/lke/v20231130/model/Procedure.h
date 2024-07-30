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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDURE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDURE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ProcedureDebugging.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 执行过程信息记录
                */
                class Procedure : public AbstractModel
                {
                public:
                    Procedure();
                    ~Procedure() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 执行过程英语名
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
                     * 获取中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Count 消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _count 消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Debugging 调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProcedureDebugging GetDebugging() const;

                    /**
                     * 设置调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _debugging 调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDebugging(const ProcedureDebugging& _debugging);

                    /**
                     * 判断参数 Debugging 是否已赋值
                     * @return Debugging 是否已赋值
                     * 
                     */
                    bool DebuggingHasBeenSet() const;

                    /**
                     * 获取计费资源状态，1：可用，2：不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResourceStatus 计费资源状态，1：可用，2：不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetResourceStatus() const;

                    /**
                     * 设置计费资源状态，1：可用，2：不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resourceStatus 计费资源状态，1：可用，2：不可用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResourceStatus(const uint64_t& _resourceStatus);

                    /**
                     * 判断参数 ResourceStatus 是否已赋值
                     * @return ResourceStatus 是否已赋值
                     * 
                     */
                    bool ResourceStatusHasBeenSet() const;

                private:

                    /**
                     * 执行过程英语名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 中文名, 用于展示
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 状态常量: 使用中: processing, 成功: success, 失败: failed
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 消耗 token 数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 调试信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcedureDebugging m_debugging;
                    bool m_debuggingHasBeenSet;

                    /**
                     * 计费资源状态，1：可用，2：不可用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_resourceStatus;
                    bool m_resourceStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_PROCEDURE_H_
