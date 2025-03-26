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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGHISTORY_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * ConfigHistory1
                */
                class ConfigHistory : public AbstractModel
                {
                public:
                    ConfigHistory();
                    ~ConfigHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return Id id
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置id
                     * @param _id id
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
                     * 获取实例名
                     * @return InstanceId 实例名
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例名
                     * @param _instanceId 实例名
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
                     * 获取创建时间
                     * @return CreatedAt 创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置创建时间
                     * @param _createdAt 创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取更新时间
                     * @return UpdatedAt 更新时间
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置更新时间
                     * @param _updatedAt 更新时间
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取dn/cn
                     * @return NodeType dn/cn
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置dn/cn
                     * @param _nodeType dn/cn
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取参数名
                     * @return ParamName 参数名
                     * 
                     */
                    std::string GetParamName() const;

                    /**
                     * 设置参数名
                     * @param _paramName 参数名
                     * 
                     */
                    void SetParamName(const std::string& _paramName);

                    /**
                     * 判断参数 ParamName 是否已赋值
                     * @return ParamName 是否已赋值
                     * 
                     */
                    bool ParamNameHasBeenSet() const;

                    /**
                     * 获取新参数值
                     * @return ParamNewValue 新参数值
                     * 
                     */
                    std::string GetParamNewValue() const;

                    /**
                     * 设置新参数值
                     * @param _paramNewValue 新参数值
                     * 
                     */
                    void SetParamNewValue(const std::string& _paramNewValue);

                    /**
                     * 判断参数 ParamNewValue 是否已赋值
                     * @return ParamNewValue 是否已赋值
                     * 
                     */
                    bool ParamNewValueHasBeenSet() const;

                    /**
                     * 获取旧参数值
                     * @return ParamOldValue 旧参数值
                     * 
                     */
                    std::string GetParamOldValue() const;

                    /**
                     * 设置旧参数值
                     * @param _paramOldValue 旧参数值
                     * 
                     */
                    void SetParamOldValue(const std::string& _paramOldValue);

                    /**
                     * 判断参数 ParamOldValue 是否已赋值
                     * @return ParamOldValue 是否已赋值
                     * 
                     */
                    bool ParamOldValueHasBeenSet() const;

                    /**
                     * 获取状态 doing/success
                     * @return Status 状态 doing/success
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置状态 doing/success
                     * @param _status 状态 doing/success
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 实例名
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 更新时间
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * dn/cn
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * 参数名
                     */
                    std::string m_paramName;
                    bool m_paramNameHasBeenSet;

                    /**
                     * 新参数值
                     */
                    std::string m_paramNewValue;
                    bool m_paramNewValueHasBeenSet;

                    /**
                     * 旧参数值
                     */
                    std::string m_paramOldValue;
                    bool m_paramOldValueHasBeenSet;

                    /**
                     * 状态 doing/success
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_CONFIGHISTORY_H_
