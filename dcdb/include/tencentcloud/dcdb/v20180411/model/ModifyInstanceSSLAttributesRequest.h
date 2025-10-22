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

#ifndef TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYINSTANCESSLATTRIBUTESREQUEST_H_
#define TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYINSTANCESSLATTRIBUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dcdb
    {
        namespace V20180411
        {
            namespace Model
            {
                /**
                * ModifyInstanceSSLAttributes请求参数结构体
                */
                class ModifyInstanceSSLAttributesRequest : public AbstractModel
                {
                public:
                    ModifyInstanceSSLAttributesRequest();
                    ~ModifyInstanceSSLAttributesRequest() = default;
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
                     * 获取是否开启实例的SSL认证。0-关闭；1-开启
                     * @return SSLEnabled 是否开启实例的SSL认证。0-关闭；1-开启
                     * 
                     */
                    int64_t GetSSLEnabled() const;

                    /**
                     * 设置是否开启实例的SSL认证。0-关闭；1-开启
                     * @param _sSLEnabled 是否开启实例的SSL认证。0-关闭；1-开启
                     * 
                     */
                    void SetSSLEnabled(const int64_t& _sSLEnabled);

                    /**
                     * 判断参数 SSLEnabled 是否已赋值
                     * @return SSLEnabled 是否已赋值
                     * 
                     */
                    bool SSLEnabledHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 是否开启实例的SSL认证。0-关闭；1-开启
                     */
                    int64_t m_sSLEnabled;
                    bool m_sSLEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DCDB_V20180411_MODEL_MODIFYINSTANCESSLATTRIBUTESREQUEST_H_
