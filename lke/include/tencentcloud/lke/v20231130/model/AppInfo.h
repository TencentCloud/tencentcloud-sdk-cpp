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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 应用详情
                */
                class AppInfo : public AbstractModel
                {
                public:
                    AppInfo();
                    ~AppInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppType 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appType 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppTypeDesc 应用类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppTypeDesc() const;

                    /**
                     * 设置应用类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appTypeDesc 应用类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppTypeDesc(const std::string& _appTypeDesc);

                    /**
                     * 判断参数 AppTypeDesc 是否已赋值
                     * @return AppTypeDesc 是否已赋值
                     * 
                     */
                    bool AppTypeDescHasBeenSet() const;

                    /**
                     * 获取应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppBizId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appBizId 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 应用名称
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
                     * 获取应用头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Avatar 应用头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAvatar() const;

                    /**
                     * 设置应用头像
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _avatar 应用头像
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAvatar(const std::string& _avatar);

                    /**
                     * 判断参数 Avatar 是否已赋值
                     * @return Avatar 是否已赋值
                     * 
                     */
                    bool AvatarHasBeenSet() const;

                    /**
                     * 获取应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Desc 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDesc() const;

                    /**
                     * 设置应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _desc 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDesc(const std::string& _desc);

                    /**
                     * 判断参数 Desc 是否已赋值
                     * @return Desc 是否已赋值
                     * 
                     */
                    bool DescHasBeenSet() const;

                    /**
                     * 获取应用状态，1：未上线，2：运行中，3：停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppStatus 应用状态，1：未上线，2：运行中，3：停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetAppStatus() const;

                    /**
                     * 设置应用状态，1：未上线，2：运行中，3：停用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appStatus 应用状态，1：未上线，2：运行中，3：停用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppStatus(const uint64_t& _appStatus);

                    /**
                     * 判断参数 AppStatus 是否已赋值
                     * @return AppStatus 是否已赋值
                     * 
                     */
                    bool AppStatusHasBeenSet() const;

                    /**
                     * 获取状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppStatusDesc 状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAppStatusDesc() const;

                    /**
                     * 设置状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _appStatusDesc 状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAppStatusDesc(const std::string& _appStatusDesc);

                    /**
                     * 判断参数 AppStatusDesc 是否已赋值
                     * @return AppStatusDesc 是否已赋值
                     * 
                     */
                    bool AppStatusDescHasBeenSet() const;

                    /**
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpdateTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _updateTime 修改时间
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
                     * 获取最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Operator 最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _operator 最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelName 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取生成模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModelAliasName 生成模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModelAliasName() const;

                    /**
                     * 设置生成模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modelAliasName 生成模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModelAliasName(const std::string& _modelAliasName);

                    /**
                     * 判断参数 ModelAliasName 是否已赋值
                     * @return ModelAliasName 是否已赋值
                     * 
                     */
                    bool ModelAliasNameHasBeenSet() const;

                    /**
                     * 获取应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Pattern 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pattern 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取思考模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ThoughtModelAliasName 思考模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetThoughtModelAliasName() const;

                    /**
                     * 设置思考模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _thoughtModelAliasName 思考模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetThoughtModelAliasName(const std::string& _thoughtModelAliasName);

                    /**
                     * 判断参数 ThoughtModelAliasName 是否已赋值
                     * @return ThoughtModelAliasName 是否已赋值
                     * 
                     */
                    bool ThoughtModelAliasNameHasBeenSet() const;

                private:

                    /**
                     * 应用类型；knowledge_qa-知识问答管理；summary-知识摘要；classifys-知识标签提取
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 应用类型描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appTypeDesc;
                    bool m_appTypeDescHasBeenSet;

                    /**
                     * 应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 应用名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用头像
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_avatar;
                    bool m_avatarHasBeenSet;

                    /**
                     * 应用描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_desc;
                    bool m_descHasBeenSet;

                    /**
                     * 应用状态，1：未上线，2：运行中，3：停用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_appStatus;
                    bool m_appStatusHasBeenSet;

                    /**
                     * 状态说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_appStatusDesc;
                    bool m_appStatusDescHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 最后修改人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 模型名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 生成模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modelAliasName;
                    bool m_modelAliasNameHasBeenSet;

                    /**
                     * 应用模式 standard:标准模式, agent: agent模式，single_workflow：单工作流模式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * 思考模型别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_thoughtModelAliasName;
                    bool m_thoughtModelAliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPINFO_H_
