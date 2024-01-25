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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCRECORDINFODTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCRECORDINFODTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/AdhocSubTaskDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 任务执行记录
                */
                class AdhocRecordInfoDto : public AbstractModel
                {
                public:
                    AdhocRecordInfoDto();
                    ~AdhocRecordInfoDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务提交记录
                     * @return Id 任务提交记录
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置任务提交记录
                     * @param _id 任务提交记录
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ScriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScriptContent() const;

                    /**
                     * 设置脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _scriptContent 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScriptContent(const std::string& _scriptContent);

                    /**
                     * 判断参数 ScriptContent 是否已赋值
                     * @return ScriptContent 是否已赋值
                     * 
                     */
                    bool ScriptContentHasBeenSet() const;

                    /**
                     * 获取任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务状态
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
                     * 获取子任务执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Details 子任务执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AdhocSubTaskDto> GetDetails() const;

                    /**
                     * 设置子任务执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _details 子任务执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetails(const std::vector<AdhocSubTaskDto>& _details);

                    /**
                     * 判断参数 Details 是否已赋值
                     * @return Details 是否已赋值
                     * 
                     */
                    bool DetailsHasBeenSet() const;

                    /**
                     * 获取任务实例id
                     * @return InstanceId 任务实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置任务实例id
                     * @param _instanceId 任务实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取任务执行者Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorId 任务执行者Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorId() const;

                    /**
                     * 设置任务执行者Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorId 任务执行者Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorId(const std::string& _executorId);

                    /**
                     * 判断参数 ExecutorId 是否已赋值
                     * @return ExecutorId 是否已赋值
                     * 
                     */
                    bool ExecutorIdHasBeenSet() const;

                    /**
                     * 获取任务执行者显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecutorDisplayName 任务执行者显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecutorDisplayName() const;

                    /**
                     * 设置任务执行者显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executorDisplayName 任务执行者显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecutorDisplayName(const std::string& _executorDisplayName);

                    /**
                     * 判断参数 ExecutorDisplayName 是否已赋值
                     * @return ExecutorDisplayName 是否已赋值
                     * 
                     */
                    bool ExecutorDisplayNameHasBeenSet() const;

                private:

                    /**
                     * 任务提交记录
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 脚本内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_scriptContent;
                    bool m_scriptContentHasBeenSet;

                    /**
                     * 任务创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 子任务执行记录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AdhocSubTaskDto> m_details;
                    bool m_detailsHasBeenSet;

                    /**
                     * 任务实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 任务执行者Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorId;
                    bool m_executorIdHasBeenSet;

                    /**
                     * 任务执行者显示名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executorDisplayName;
                    bool m_executorDisplayNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ADHOCRECORDINFODTO_H_
