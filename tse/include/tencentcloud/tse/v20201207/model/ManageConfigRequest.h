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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_MANAGECONFIGREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_MANAGECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * ManageConfig请求参数结构体
                */
                class ManageConfigRequest : public AbstractModel
                {
                public:
                    ManageConfigRequest();
                    ~ManageConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取配置中心类型（consul、zookeeper、apollo等）
                     * @return Type 配置中心类型（consul、zookeeper、apollo等）
                     */
                    std::string GetType() const;

                    /**
                     * 设置配置中心类型（consul、zookeeper、apollo等）
                     * @param Type 配置中心类型（consul、zookeeper、apollo等）
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取请求命名 PUT GET DELETE
                     * @return Command 请求命名 PUT GET DELETE
                     */
                    std::string GetCommand() const;

                    /**
                     * 设置请求命名 PUT GET DELETE
                     * @param Command 请求命名 PUT GET DELETE
                     */
                    void SetCommand(const std::string& _command);

                    /**
                     * 判断参数 Command 是否已赋值
                     * @return Command 是否已赋值
                     */
                    bool CommandHasBeenSet() const;

                    /**
                     * 获取配置的Key
                     * @return Key 配置的Key
                     */
                    std::string GetKey() const;

                    /**
                     * 设置配置的Key
                     * @param Key 配置的Key
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取配置的Value
                     * @return Value 配置的Value
                     */
                    std::string GetValue() const;

                    /**
                     * 设置配置的Value
                     * @param Value 配置的Value
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 配置中心类型（consul、zookeeper、apollo等）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 请求命名 PUT GET DELETE
                     */
                    std::string m_command;
                    bool m_commandHasBeenSet;

                    /**
                     * 配置的Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 配置的Value
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_MANAGECONFIGREQUEST_H_
