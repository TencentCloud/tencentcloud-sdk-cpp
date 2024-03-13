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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_UPDATESERVERLESSINSTANCEREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_UPDATESERVERLESSINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/KibanaPublicAcl.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * UpdateServerlessInstance请求参数结构体
                */
                class UpdateServerlessInstanceRequest : public AbstractModel
                {
                public:
                    UpdateServerlessInstanceRequest();
                    ~UpdateServerlessInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Serveless实例ID
                     * @return InstanceId Serveless实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置Serveless实例ID
                     * @param _instanceId Serveless实例ID
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
                     * 获取更新的索引元数据JSON，如mappings、settings
                     * @return UpdateMetaJson 更新的索引元数据JSON，如mappings、settings
                     * 
                     */
                    std::string GetUpdateMetaJson() const;

                    /**
                     * 设置更新的索引元数据JSON，如mappings、settings
                     * @param _updateMetaJson 更新的索引元数据JSON，如mappings、settings
                     * 
                     */
                    void SetUpdateMetaJson(const std::string& _updateMetaJson);

                    /**
                     * 判断参数 UpdateMetaJson 是否已赋值
                     * @return UpdateMetaJson 是否已赋值
                     * 
                     */
                    bool UpdateMetaJsonHasBeenSet() const;

                    /**
                     * 获取实例访问密码
                     * @return Password 实例访问密码
                     * 
                     */
                    std::string GetPassword() const;

                    /**
                     * 设置实例访问密码
                     * @param _password 实例访问密码
                     * 
                     */
                    void SetPassword(const std::string& _password);

                    /**
                     * 判断参数 Password 是否已赋值
                     * @return Password 是否已赋值
                     * 
                     */
                    bool PasswordHasBeenSet() const;

                    /**
                     * 获取开启kibana内网访问，如OPEN、CLOSE
                     * @return KibanaPrivateAccess 开启kibana内网访问，如OPEN、CLOSE
                     * 
                     */
                    std::string GetKibanaPrivateAccess() const;

                    /**
                     * 设置开启kibana内网访问，如OPEN、CLOSE
                     * @param _kibanaPrivateAccess 开启kibana内网访问，如OPEN、CLOSE
                     * 
                     */
                    void SetKibanaPrivateAccess(const std::string& _kibanaPrivateAccess);

                    /**
                     * 判断参数 KibanaPrivateAccess 是否已赋值
                     * @return KibanaPrivateAccess 是否已赋值
                     * 
                     */
                    bool KibanaPrivateAccessHasBeenSet() const;

                    /**
                     * 获取开启kibana外网访问，如OPEN、CLOSE
                     * @return KibanaPublicAccess 开启kibana外网访问，如OPEN、CLOSE
                     * 
                     */
                    std::string GetKibanaPublicAccess() const;

                    /**
                     * 设置开启kibana外网访问，如OPEN、CLOSE
                     * @param _kibanaPublicAccess 开启kibana外网访问，如OPEN、CLOSE
                     * 
                     */
                    void SetKibanaPublicAccess(const std::string& _kibanaPublicAccess);

                    /**
                     * 判断参数 KibanaPublicAccess 是否已赋值
                     * @return KibanaPublicAccess 是否已赋值
                     * 
                     */
                    bool KibanaPublicAccessHasBeenSet() const;

                    /**
                     * 获取访问控制列表
                     * @return KibanaPublicAcl 访问控制列表
                     * 
                     */
                    KibanaPublicAcl GetKibanaPublicAcl() const;

                    /**
                     * 设置访问控制列表
                     * @param _kibanaPublicAcl 访问控制列表
                     * 
                     */
                    void SetKibanaPublicAcl(const KibanaPublicAcl& _kibanaPublicAcl);

                    /**
                     * 判断参数 KibanaPublicAcl 是否已赋值
                     * @return KibanaPublicAcl 是否已赋值
                     * 
                     */
                    bool KibanaPublicAclHasBeenSet() const;

                private:

                    /**
                     * Serveless实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 更新的索引元数据JSON，如mappings、settings
                     */
                    std::string m_updateMetaJson;
                    bool m_updateMetaJsonHasBeenSet;

                    /**
                     * 实例访问密码
                     */
                    std::string m_password;
                    bool m_passwordHasBeenSet;

                    /**
                     * 开启kibana内网访问，如OPEN、CLOSE
                     */
                    std::string m_kibanaPrivateAccess;
                    bool m_kibanaPrivateAccessHasBeenSet;

                    /**
                     * 开启kibana外网访问，如OPEN、CLOSE
                     */
                    std::string m_kibanaPublicAccess;
                    bool m_kibanaPublicAccessHasBeenSet;

                    /**
                     * 访问控制列表
                     */
                    KibanaPublicAcl m_kibanaPublicAcl;
                    bool m_kibanaPublicAclHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_UPDATESERVERLESSINSTANCEREQUEST_H_
