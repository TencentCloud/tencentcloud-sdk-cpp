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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGREQUEST_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * ModifyResourceScheduleConfig请求参数结构体
                */
                class ModifyResourceScheduleConfigRequest : public AbstractModel
                {
                public:
                    ModifyResourceScheduleConfigRequest();
                    ~ModifyResourceScheduleConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取emr集群的英文id
                     * @return InstanceId emr集群的英文id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置emr集群的英文id
                     * @param _instanceId emr集群的英文id
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
                     * 获取业务标识，fair表示编辑公平的配置项，fairPlan表示编辑执行计划，capacity表示编辑容量的配置项
                     * @return Key 业务标识，fair表示编辑公平的配置项，fairPlan表示编辑执行计划，capacity表示编辑容量的配置项
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置业务标识，fair表示编辑公平的配置项，fairPlan表示编辑执行计划，capacity表示编辑容量的配置项
                     * @param _key 业务标识，fair表示编辑公平的配置项，fairPlan表示编辑执行计划，capacity表示编辑容量的配置项
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取修改后的模块消息
                     * @return Value 修改后的模块消息
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置修改后的模块消息
                     * @param _value 修改后的模块消息
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                private:

                    /**
                     * emr集群的英文id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 业务标识，fair表示编辑公平的配置项，fairPlan表示编辑执行计划，capacity表示编辑容量的配置项
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 修改后的模块消息
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MODIFYRESOURCESCHEDULECONFIGREQUEST_H_
