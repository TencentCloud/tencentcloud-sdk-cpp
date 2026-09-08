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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYUSERREQUEST_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * ModifyUser请求参数结构体
                */
                class ModifyUserRequest : public AbstractModel
                {
                public:
                    ModifyUserRequest();
                    ~ModifyUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @return InstanceId <p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     * @param _instanceId <p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
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
                     * 获取<p>用户名</p>
                     * @return Username <p>用户名</p>
                     * 
                     */
                    std::string GetUsername() const;

                    /**
                     * 设置<p>用户名</p>
                     * @param _username <p>用户名</p>
                     * 
                     */
                    void SetUsername(const std::string& _username);

                    /**
                     * 判断参数 Username 是否已赋值
                     * @return Username 是否已赋值
                     * 
                     */
                    bool UsernameHasBeenSet() const;

                    /**
                     * 获取<p>备注，长度不超过128个字符。</p>
                     * @return Remark <p>备注，长度不超过128个字符。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注，长度不超过128个字符。</p>
                     * @param _remark <p>备注，长度不超过128个字符。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * <p>实例ID，从 <a href="https://cloud.tencent.com/document/api/1778/111029">DescribeInstanceList</a>接口或控制台获得。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>用户名</p>
                     */
                    std::string m_username;
                    bool m_usernameHasBeenSet;

                    /**
                     * <p>备注，长度不超过128个字符。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_MODIFYUSERREQUEST_H_
