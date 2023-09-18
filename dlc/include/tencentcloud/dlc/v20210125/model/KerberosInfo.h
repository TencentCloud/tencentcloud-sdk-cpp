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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_KERBEROSINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_KERBEROSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * Kerberos详细信息
                */
                class KerberosInfo : public AbstractModel
                {
                public:
                    KerberosInfo();
                    ~KerberosInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Krb5Conf文件值
                     * @return Krb5Conf Krb5Conf文件值
                     * 
                     */
                    std::string GetKrb5Conf() const;

                    /**
                     * 设置Krb5Conf文件值
                     * @param _krb5Conf Krb5Conf文件值
                     * 
                     */
                    void SetKrb5Conf(const std::string& _krb5Conf);

                    /**
                     * 判断参数 Krb5Conf 是否已赋值
                     * @return Krb5Conf 是否已赋值
                     * 
                     */
                    bool Krb5ConfHasBeenSet() const;

                    /**
                     * 获取KeyTab文件值
                     * @return KeyTab KeyTab文件值
                     * 
                     */
                    std::string GetKeyTab() const;

                    /**
                     * 设置KeyTab文件值
                     * @param _keyTab KeyTab文件值
                     * 
                     */
                    void SetKeyTab(const std::string& _keyTab);

                    /**
                     * 判断参数 KeyTab 是否已赋值
                     * @return KeyTab 是否已赋值
                     * 
                     */
                    bool KeyTabHasBeenSet() const;

                    /**
                     * 获取服务主体
                     * @return ServicePrincipal 服务主体
                     * 
                     */
                    std::string GetServicePrincipal() const;

                    /**
                     * 设置服务主体
                     * @param _servicePrincipal 服务主体
                     * 
                     */
                    void SetServicePrincipal(const std::string& _servicePrincipal);

                    /**
                     * 判断参数 ServicePrincipal 是否已赋值
                     * @return ServicePrincipal 是否已赋值
                     * 
                     */
                    bool ServicePrincipalHasBeenSet() const;

                private:

                    /**
                     * Krb5Conf文件值
                     */
                    std::string m_krb5Conf;
                    bool m_krb5ConfHasBeenSet;

                    /**
                     * KeyTab文件值
                     */
                    std::string m_keyTab;
                    bool m_keyTabHasBeenSet;

                    /**
                     * 服务主体
                     */
                    std::string m_servicePrincipal;
                    bool m_servicePrincipalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_KERBEROSINFO_H_
