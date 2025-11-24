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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_OPERATIONLOG_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_OPERATIONLOG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 操作日志描述
                */
                class OperationLog : public AbstractModel
                {
                public:
                    OperationLog();
                    ~OperationLog() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取EMR实例ID
                     * @return InstanceId EMR实例ID
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置EMR实例ID
                     * @param _instanceId EMR实例ID
                     * 
                     */
                    void SetInstanceId(const int64_t& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取操作名称
                     * @return Operation 操作名称
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置操作名称
                     * @param _operation 操作名称
                     * 
                     */
                    void SetOperation(const std::string& _operation);

                    /**
                     * 判断参数 Operation 是否已赋值
                     * @return Operation 是否已赋值
                     * 
                     */
                    bool OperationHasBeenSet() const;

                    /**
                     * 获取操作类型
                     * @return OperationType 操作类型
                     * 
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置操作类型
                     * @param _operationType 操作类型
                     * 
                     */
                    void SetOperationType(const int64_t& _operationType);

                    /**
                     * 判断参数 OperationType 是否已赋值
                     * @return OperationType 是否已赋值
                     * 
                     */
                    bool OperationTypeHasBeenSet() const;

                    /**
                     * 获取用户类型
                     * @return UserType 用户类型
                     * 
                     */
                    int64_t GetUserType() const;

                    /**
                     * 设置用户类型
                     * @param _userType 用户类型
                     * 
                     */
                    void SetUserType(const int64_t& _userType);

                    /**
                     * 判断参数 UserType 是否已赋值
                     * @return UserType 是否已赋值
                     * 
                     */
                    bool UserTypeHasBeenSet() const;

                    /**
                     * 获取操作者
                     * @return Operator 操作者
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者
                     * @param _operator 操作者
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
                     * 获取操作时间
                     * @return CreateTime 操作时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置操作时间
                     * @param _createTime 操作时间
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
                     * 获取操作对象
                     * @return Operand 操作对象
                     * 
                     */
                    std::string GetOperand() const;

                    /**
                     * 设置操作对象
                     * @param _operand 操作对象
                     * 
                     */
                    void SetOperand(const std::string& _operand);

                    /**
                     * 判断参数 Operand 是否已赋值
                     * @return Operand 是否已赋值
                     * 
                     */
                    bool OperandHasBeenSet() const;

                    /**
                     * 获取操作详情
                     * @return OperationDesc 操作详情
                     * 
                     */
                    std::string GetOperationDesc() const;

                    /**
                     * 设置操作详情
                     * @param _operationDesc 操作详情
                     * 
                     */
                    void SetOperationDesc(const std::string& _operationDesc);

                    /**
                     * 判断参数 OperationDesc 是否已赋值
                     * @return OperationDesc 是否已赋值
                     * 
                     */
                    bool OperationDescHasBeenSet() const;

                    /**
                     * 获取安全级别
                     * @return SecurityLevel 安全级别
                     * 
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置安全级别
                     * @param _securityLevel 安全级别
                     * 
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     * 
                     */
                    bool SecurityLevelHasBeenSet() const;

                private:

                    /**
                     * EMR实例ID
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作名称
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * 操作类型
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * 用户类型
                     */
                    int64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * 操作者
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 操作时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 操作对象
                     */
                    std::string m_operand;
                    bool m_operandHasBeenSet;

                    /**
                     * 操作详情
                     */
                    std::string m_operationDesc;
                    bool m_operationDescHasBeenSet;

                    /**
                     * 安全级别
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OPERATIONLOG_H_
