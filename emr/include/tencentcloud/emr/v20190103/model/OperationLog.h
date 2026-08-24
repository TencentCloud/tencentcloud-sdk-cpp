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
                     * 获取<p>EMR实例ID</p>
                     * @return InstanceId <p>EMR实例ID</p>
                     * 
                     */
                    int64_t GetInstanceId() const;

                    /**
                     * 设置<p>EMR实例ID</p>
                     * @param _instanceId <p>EMR实例ID</p>
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
                     * 获取<p>操作名称</p>
                     * @return Operation <p>操作名称</p>
                     * 
                     */
                    std::string GetOperation() const;

                    /**
                     * 设置<p>操作名称</p>
                     * @param _operation <p>操作名称</p>
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
                     * 获取<p>操作类型</p>
                     * @return OperationType <p>操作类型</p>
                     * 
                     */
                    int64_t GetOperationType() const;

                    /**
                     * 设置<p>操作类型</p>
                     * @param _operationType <p>操作类型</p>
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
                     * 获取<p>用户类型</p>
                     * @return UserType <p>用户类型</p>
                     * 
                     */
                    int64_t GetUserType() const;

                    /**
                     * 设置<p>用户类型</p>
                     * @param _userType <p>用户类型</p>
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
                     * 获取<p>操作者</p>
                     * @return Operator <p>操作者</p>
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置<p>操作者</p>
                     * @param _operator <p>操作者</p>
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
                     * 获取<p>操作时间</p>
                     * @return CreateTime <p>操作时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>操作时间</p>
                     * @param _createTime <p>操作时间</p>
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
                     * 获取<p>操作对象</p>
                     * @return Operand <p>操作对象</p>
                     * 
                     */
                    std::string GetOperand() const;

                    /**
                     * 设置<p>操作对象</p>
                     * @param _operand <p>操作对象</p>
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
                     * 获取<p>操作详情</p>
                     * @return OperationDesc <p>操作详情</p>
                     * 
                     */
                    std::string GetOperationDesc() const;

                    /**
                     * 设置<p>操作详情</p>
                     * @param _operationDesc <p>操作详情</p>
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
                     * 获取<p>安全级别</p>
                     * @return SecurityLevel <p>安全级别</p>
                     * 
                     */
                    std::string GetSecurityLevel() const;

                    /**
                     * 设置<p>安全级别</p>
                     * @param _securityLevel <p>安全级别</p>
                     * 
                     */
                    void SetSecurityLevel(const std::string& _securityLevel);

                    /**
                     * 判断参数 SecurityLevel 是否已赋值
                     * @return SecurityLevel 是否已赋值
                     * 
                     */
                    bool SecurityLevelHasBeenSet() const;

                    /**
                     * 获取<p>操作者名称</p>
                     * @return OperatorName <p>操作者名称</p>
                     * 
                     */
                    std::string GetOperatorName() const;

                    /**
                     * 设置<p>操作者名称</p>
                     * @param _operatorName <p>操作者名称</p>
                     * 
                     */
                    void SetOperatorName(const std::string& _operatorName);

                    /**
                     * 判断参数 OperatorName 是否已赋值
                     * @return OperatorName 是否已赋值
                     * 
                     */
                    bool OperatorNameHasBeenSet() const;

                private:

                    /**
                     * <p>EMR实例ID</p>
                     */
                    int64_t m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>操作名称</p>
                     */
                    std::string m_operation;
                    bool m_operationHasBeenSet;

                    /**
                     * <p>操作类型</p>
                     */
                    int64_t m_operationType;
                    bool m_operationTypeHasBeenSet;

                    /**
                     * <p>用户类型</p>
                     */
                    int64_t m_userType;
                    bool m_userTypeHasBeenSet;

                    /**
                     * <p>操作者</p>
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * <p>操作时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>操作对象</p>
                     */
                    std::string m_operand;
                    bool m_operandHasBeenSet;

                    /**
                     * <p>操作详情</p>
                     */
                    std::string m_operationDesc;
                    bool m_operationDescHasBeenSet;

                    /**
                     * <p>安全级别</p>
                     */
                    std::string m_securityLevel;
                    bool m_securityLevelHasBeenSet;

                    /**
                     * <p>操作者名称</p>
                     */
                    std::string m_operatorName;
                    bool m_operatorNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_OPERATIONLOG_H_
