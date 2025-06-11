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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERTASKINDSDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERTASKINDSDTO_H_

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
                * 查询任务输入参数Dto
                */
                class ParameterTaskInDsDto : public AbstractModel
                {
                public:
                    ParameterTaskInDsDto();
                    ~ParameterTaskInDsDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamKey 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamKey() const;

                    /**
                     * 设置参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramKey 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamKey(const std::string& _paramKey);

                    /**
                     * 判断参数 ParamKey 是否已赋值
                     * @return ParamKey 是否已赋值
                     * 
                     */
                    bool ParamKeyHasBeenSet() const;

                    /**
                     * 获取参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParamDesc 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParamDesc() const;

                    /**
                     * 设置参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _paramDesc 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParamDesc(const std::string& _paramDesc);

                    /**
                     * 判断参数 ParamDesc 是否已赋值
                     * @return ParamDesc 是否已赋值
                     * 
                     */
                    bool ParamDescHasBeenSet() const;

                    /**
                     * 获取父任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromTaskId 父任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFromTaskId() const;

                    /**
                     * 设置父任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromTaskId 父任务id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromTaskId(const std::string& _fromTaskId);

                    /**
                     * 判断参数 FromTaskId 是否已赋值
                     * @return FromTaskId 是否已赋值
                     * 
                     */
                    bool FromTaskIdHasBeenSet() const;

                    /**
                     * 获取父任务参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromParamKey 父任务参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFromParamKey() const;

                    /**
                     * 设置父任务参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromParamKey 父任务参数key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromParamKey(const std::string& _fromParamKey);

                    /**
                     * 判断参数 FromParamKey 是否已赋值
                     * @return FromParamKey 是否已赋值
                     * 
                     */
                    bool FromParamKeyHasBeenSet() const;

                    /**
                     * 获取创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 创建时间
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
                     * 获取升级时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 升级时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置升级时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 升级时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取父任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromTaskName 父任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFromTaskName() const;

                    /**
                     * 设置父任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromTaskName 父任务名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromTaskName(const std::string& _fromTaskName);

                    /**
                     * 判断参数 FromTaskName 是否已赋值
                     * @return FromTaskName 是否已赋值
                     * 
                     */
                    bool FromTaskNameHasBeenSet() const;

                    /**
                     * 获取父任务项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromProjectId 父任务项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFromProjectId() const;

                    /**
                     * 设置父任务项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromProjectId 父任务项目id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromProjectId(const std::string& _fromProjectId);

                    /**
                     * 判断参数 FromProjectId 是否已赋值
                     * @return FromProjectId 是否已赋值
                     * 
                     */
                    bool FromProjectIdHasBeenSet() const;

                    /**
                     * 获取父任务项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FromProjectName 父任务项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFromProjectName() const;

                    /**
                     * 设置父任务项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fromProjectName 父任务项目名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFromProjectName(const std::string& _fromProjectName);

                    /**
                     * 判断参数 FromProjectName 是否已赋值
                     * @return FromProjectName 是否已赋值
                     * 
                     */
                    bool FromProjectNameHasBeenSet() const;

                private:

                    /**
                     * 唯一标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 参数名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramKey;
                    bool m_paramKeyHasBeenSet;

                    /**
                     * 参数描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_paramDesc;
                    bool m_paramDescHasBeenSet;

                    /**
                     * 父任务id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fromTaskId;
                    bool m_fromTaskIdHasBeenSet;

                    /**
                     * 父任务参数key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fromParamKey;
                    bool m_fromParamKeyHasBeenSet;

                    /**
                     * 创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 升级时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 父任务名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fromTaskName;
                    bool m_fromTaskNameHasBeenSet;

                    /**
                     * 父任务项目id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fromProjectId;
                    bool m_fromProjectIdHasBeenSet;

                    /**
                     * 父任务项目名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fromProjectName;
                    bool m_fromProjectNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_PARAMETERTASKINDSDTO_H_
