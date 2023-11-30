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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESSLREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESSLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSSL请求参数结构体
                */
                class ModifyDBInstanceSSLRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSSLRequest();
                    ~ModifyDBInstanceSSLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取操作类型。enable-开启SSL，disable-关闭SSL，renew-更新证书有效期
                     * @return Type 操作类型。enable-开启SSL，disable-关闭SSL，renew-更新证书有效期
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置操作类型。enable-开启SSL，disable-关闭SSL，renew-更新证书有效期
                     * @param _type 操作类型。enable-开启SSL，disable-关闭SSL，renew-更新证书有效期
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
                     * 获取操作设置。0-立即执行，1- 维护时间内执行，默认取值0。
                     * @return WaitSwitch 操作设置。0-立即执行，1- 维护时间内执行，默认取值0。
                     * 
                     */
                    uint64_t GetWaitSwitch() const;

                    /**
                     * 设置操作设置。0-立即执行，1- 维护时间内执行，默认取值0。
                     * @param _waitSwitch 操作设置。0-立即执行，1- 维护时间内执行，默认取值0。
                     * 
                     */
                    void SetWaitSwitch(const uint64_t& _waitSwitch);

                    /**
                     * 判断参数 WaitSwitch 是否已赋值
                     * @return WaitSwitch 是否已赋值
                     * 
                     */
                    bool WaitSwitchHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 操作类型。enable-开启SSL，disable-关闭SSL，renew-更新证书有效期
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 操作设置。0-立即执行，1- 维护时间内执行，默认取值0。
                     */
                    uint64_t m_waitSwitch;
                    bool m_waitSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_MODIFYDBINSTANCESSLREQUEST_H_
