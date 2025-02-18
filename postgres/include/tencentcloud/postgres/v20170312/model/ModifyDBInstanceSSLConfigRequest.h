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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyDBInstanceSSLConfig请求参数结构体
                */
                class ModifyDBInstanceSSLConfigRequest : public AbstractModel
                {
                public:
                    ModifyDBInstanceSSLConfigRequest();
                    ~ModifyDBInstanceSSLConfigRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID
                     * @return DBInstanceId 实例 ID
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例 ID
                     * @param _dBInstanceId 实例 ID
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取开启或关闭SSL
                     * @return SSLEnabled 开启或关闭SSL
                     * 
                     */
                    bool GetSSLEnabled() const;

                    /**
                     * 设置开启或关闭SSL
                     * @param _sSLEnabled 开启或关闭SSL
                     * 
                     */
                    void SetSSLEnabled(const bool& _sSLEnabled);

                    /**
                     * 判断参数 SSLEnabled 是否已赋值
                     * @return SSLEnabled 是否已赋值
                     * 
                     */
                    bool SSLEnabledHasBeenSet() const;

                    /**
                     * 获取SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。
                     * @return ConnectAddress SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。
                     * 
                     */
                    std::string GetConnectAddress() const;

                    /**
                     * 设置SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。
                     * @param _connectAddress SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。
                     * 
                     */
                    void SetConnectAddress(const std::string& _connectAddress);

                    /**
                     * 判断参数 ConnectAddress 是否已赋值
                     * @return ConnectAddress 是否已赋值
                     * 
                     */
                    bool ConnectAddressHasBeenSet() const;

                private:

                    /**
                     * 实例 ID
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 开启或关闭SSL
                     */
                    bool m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                    /**
                     * SSL证书保护的唯一连接地址，若为主实例，可设置为内外网IP地址；若为只读实例，可设置为实例IP或只读组IP。在开启SSL或修改SSL保护的连接地址时，该参数为必传项；在关闭SSL时，该参数将被忽略。
                     */
                    std::string m_connectAddress;
                    bool m_connectAddressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_MODIFYDBINSTANCESSLCONFIGREQUEST_H_
