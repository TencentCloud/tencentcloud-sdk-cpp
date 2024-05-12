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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERVERIFYSTATUSREQUEST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERVERIFYSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * DescribeUserVerifyStatus请求参数结构体
                */
                class DescribeUserVerifyStatusRequest : public AbstractModel
                {
                public:
                    DescribeUserVerifyStatusRequest();
                    ~DescribeUserVerifyStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户信息
                     * @return Operator 用户信息
                     * 
                     */
                    UserInfo GetOperator() const;

                    /**
                     * 设置用户信息
                     * @param _operator 用户信息
                     * 
                     */
                    void SetOperator(const UserInfo& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取姓名
                     * @return Name 姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置姓名
                     * @param _name 姓名
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
                     * 获取证件号，身份证如果有x的话，统一按照大写X传递
                     * @return IdCardNumber 证件号，身份证如果有x的话，统一按照大写X传递
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置证件号，身份证如果有x的话，统一按照大写X传递
                     * @param _idCardNumber 证件号，身份证如果有x的话，统一按照大写X传递
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                private:

                    /**
                     * 用户信息
                     */
                    UserInfo m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 证件号，身份证如果有x的话，统一按照大写X传递
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_DESCRIBEUSERVERIFYSTATUSREQUEST_H_
