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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELGROUP_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/AIModel.h>
#include <tencentcloud/tcb/v20180608/model/AIModelSecret.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * AI 模型信息
                */
                class AIModelGroup : public AbstractModel
                {
                public:
                    AIModelGroup();
                    ~AIModelGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>模型分组</p><p>枚举值：</p><ul><li>hunyuan-exp： 内置 hunyuan 分组，Models 中包含混元生文模型</li><li>hunyuan-image： 内置 hunyuan 分组，Models 中包含混元生图模型</li><li>deepseek： 内置 deepseek 分组，Models 中包含Deepseek生文模型</li><li>cloudbase： 内置 cloudbase 分组，Models 中包含云开发提供的模型，支持的所有模型可从 DescribeManagedAIModelList 获取</li><li>custom-xxxx： 自定义模型分组，Models 中包含用户自行配置的模型</li></ul>
                     * @return GroupName <p>模型分组</p><p>枚举值：</p><ul><li>hunyuan-exp： 内置 hunyuan 分组，Models 中包含混元生文模型</li><li>hunyuan-image： 内置 hunyuan 分组，Models 中包含混元生图模型</li><li>deepseek： 内置 deepseek 分组，Models 中包含Deepseek生文模型</li><li>cloudbase： 内置 cloudbase 分组，Models 中包含云开发提供的模型，支持的所有模型可从 DescribeManagedAIModelList 获取</li><li>custom-xxxx： 自定义模型分组，Models 中包含用户自行配置的模型</li></ul>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>模型分组</p><p>枚举值：</p><ul><li>hunyuan-exp： 内置 hunyuan 分组，Models 中包含混元生文模型</li><li>hunyuan-image： 内置 hunyuan 分组，Models 中包含混元生图模型</li><li>deepseek： 内置 deepseek 分组，Models 中包含Deepseek生文模型</li><li>cloudbase： 内置 cloudbase 分组，Models 中包含云开发提供的模型，支持的所有模型可从 DescribeManagedAIModelList 获取</li><li>custom-xxxx： 自定义模型分组，Models 中包含用户自行配置的模型</li></ul>
                     * @param _groupName <p>模型分组</p><p>枚举值：</p><ul><li>hunyuan-exp： 内置 hunyuan 分组，Models 中包含混元生文模型</li><li>hunyuan-image： 内置 hunyuan 分组，Models 中包含混元生图模型</li><li>deepseek： 内置 deepseek 分组，Models 中包含Deepseek生文模型</li><li>cloudbase： 内置 cloudbase 分组，Models 中包含云开发提供的模型，支持的所有模型可从 DescribeManagedAIModelList 获取</li><li>custom-xxxx： 自定义模型分组，Models 中包含用户自行配置的模型</li></ul>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Models <p>模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<AIModel> GetModels() const;

                    /**
                     * 设置<p>模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _models <p>模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModels(const std::vector<AIModel>& _models);

                    /**
                     * 判断参数 Models 是否已赋值
                     * @return Models 是否已赋值
                     * 
                     */
                    bool ModelsHasBeenSet() const;

                    /**
                     * 获取<p>模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型分组类别</li><li>custom： 用户自定义模型分组类别</li></ul>
                     * @return Type <p>模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型分组类别</li><li>custom： 用户自定义模型分组类别</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型分组类别</li><li>custom： 用户自定义模型分组类别</li></ul>
                     * @param _type <p>模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型分组类别</li><li>custom： 用户自定义模型分组类别</li></ul>
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
                     * 获取<p>原始模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型类型</li><li>custom： 用户自定义模型类型</li></ul>
                     * @return OriginType <p>原始模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型类型</li><li>custom： 用户自定义模型类型</li></ul>
                     * 
                     */
                    std::string GetOriginType() const;

                    /**
                     * 设置<p>原始模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型类型</li><li>custom： 用户自定义模型类型</li></ul>
                     * @param _originType <p>原始模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型类型</li><li>custom： 用户自定义模型类型</li></ul>
                     * 
                     */
                    void SetOriginType(const std::string& _originType);

                    /**
                     * 判断参数 OriginType 是否已赋值
                     * @return OriginType 是否已赋值
                     * 
                     */
                    bool OriginTypeHasBeenSet() const;

                    /**
                     * 获取<p>备注</p>
                     * @return Remark <p>备注</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注</p>
                     * @param _remark <p>备注</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>模型地址</p>
                     * @return BaseUrl <p>模型地址</p>
                     * 
                     */
                    std::string GetBaseUrl() const;

                    /**
                     * 设置<p>模型地址</p>
                     * @param _baseUrl <p>模型地址</p>
                     * 
                     */
                    void SetBaseUrl(const std::string& _baseUrl);

                    /**
                     * 判断参数 BaseUrl 是否已赋值
                     * @return BaseUrl 是否已赋值
                     * 
                     */
                    bool BaseUrlHasBeenSet() const;

                    /**
                     * 获取<p>模型状态, 1: 开启, 2: 关闭</p>
                     * @return Status <p>模型状态, 1: 开启, 2: 关闭</p>
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>模型状态, 1: 开启, 2: 关闭</p>
                     * @param _status <p>模型状态, 1: 开启, 2: 关闭</p>
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>模型密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Secret <p>模型密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    AIModelSecret GetSecret() const;

                    /**
                     * 设置<p>模型密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _secret <p>模型密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSecret(const AIModelSecret& _secret);

                    /**
                     * 判断参数 Secret 是否已赋值
                     * @return Secret 是否已赋值
                     * 
                     */
                    bool SecretHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return CreateTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createTime <p>创建时间</p>
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
                     * 获取<p>更新时间</p>
                     * @return UpdateTime <p>更新时间</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>更新时间</p>
                     * @param _updateTime <p>更新时间</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>模型分组</p><p>枚举值：</p><ul><li>hunyuan-exp： 内置 hunyuan 分组，Models 中包含混元生文模型</li><li>hunyuan-image： 内置 hunyuan 分组，Models 中包含混元生图模型</li><li>deepseek： 内置 deepseek 分组，Models 中包含Deepseek生文模型</li><li>cloudbase： 内置 cloudbase 分组，Models 中包含云开发提供的模型，支持的所有模型可从 DescribeManagedAIModelList 获取</li><li>custom-xxxx： 自定义模型分组，Models 中包含用户自行配置的模型</li></ul>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>模型列表</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<AIModel> m_models;
                    bool m_modelsHasBeenSet;

                    /**
                     * <p>模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型分组类别</li><li>custom： 用户自定义模型分组类别</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>原始模型类型</p><p>枚举值：</p><ul><li>builtin： 内置模型类型</li><li>custom： 用户自定义模型类型</li></ul>
                     */
                    std::string m_originType;
                    bool m_originTypeHasBeenSet;

                    /**
                     * <p>备注</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>模型地址</p>
                     */
                    std::string m_baseUrl;
                    bool m_baseUrlHasBeenSet;

                    /**
                     * <p>模型状态, 1: 开启, 2: 关闭</p>
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>模型密钥</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    AIModelSecret m_secret;
                    bool m_secretHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_AIMODELGROUP_H_
