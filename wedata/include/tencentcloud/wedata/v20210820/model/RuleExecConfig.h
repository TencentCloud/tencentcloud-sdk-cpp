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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECCONFIG_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 规则执行配置
                */
                class RuleExecConfig : public AbstractModel
                {
                public:
                    RuleExecConfig();
                    ~RuleExecConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计算队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return QueueName 计算队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置计算队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _queueName 计算队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorGroupId 执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorGroupId() const;

                    /**
                     * 设置执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorGroupId 执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorGroupId(const std::string& _executorGroupId);

                    /**
                     * 判断参数 ExecutorGroupId 是否已赋值
                     * @return ExecutorGroupId 是否已赋值
                     * 
                     */
                    bool ExecutorGroupIdHasBeenSet() const;

                    /**
                     * 获取运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EngineType 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEngineType() const;

                    /**
                     * 设置运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _engineType 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEngineType(const std::string& _engineType);

                    /**
                     * 判断参数 EngineType 是否已赋值
                     * @return EngineType 是否已赋值
                     * 
                     */
                    bool EngineTypeHasBeenSet() const;

                    /**
                     * 获取DLC执行引擎资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DlcGroupName DLC执行引擎资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDlcGroupName() const;

                    /**
                     * 设置DLC执行引擎资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dlcGroupName DLC执行引擎资源组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDlcGroupName(const std::string& _dlcGroupName);

                    /**
                     * 判断参数 DlcGroupName 是否已赋值
                     * @return DlcGroupName 是否已赋值
                     * 
                     */
                    bool DlcGroupNameHasBeenSet() const;

                private:

                    /**
                     * 计算队列名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * 执行资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorGroupId;
                    bool m_executorGroupIdHasBeenSet;

                    /**
                     * 运行的执行引擎，不传时会请求该数据源下默认的执行引擎
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_engineType;
                    bool m_engineTypeHasBeenSet;

                    /**
                     * DLC执行引擎资源组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dlcGroupName;
                    bool m_dlcGroupNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_RULEEXECCONFIG_H_
