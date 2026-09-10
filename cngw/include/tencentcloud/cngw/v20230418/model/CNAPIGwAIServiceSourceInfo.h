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

#ifndef TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWAISERVICESOURCEINFO_H_
#define TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWAISERVICESOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cngw/v20230418/model/CNAPIGwAIServiceSourceAuth.h>


namespace TencentCloud
{
    namespace Cngw
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * AI 的服务来源配置信息
                */
                class CNAPIGwAIServiceSourceInfo : public AbstractModel
                {
                public:
                    CNAPIGwAIServiceSourceInfo();
                    ~CNAPIGwAIServiceSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>服务来源实例id</p>
                     * @return InstanceId <p>服务来源实例id</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>服务来源实例id</p>
                     * @param _instanceId <p>服务来源实例id</p>
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
                     * 获取<p>授权信息</p>
                     * @return Auth <p>授权信息</p>
                     * 
                     */
                    CNAPIGwAIServiceSourceAuth GetAuth() const;

                    /**
                     * 设置<p>授权信息</p>
                     * @param _auth <p>授权信息</p>
                     * 
                     */
                    void SetAuth(const CNAPIGwAIServiceSourceAuth& _auth);

                    /**
                     * 判断参数 Auth 是否已赋值
                     * @return Auth 是否已赋值
                     * 
                     */
                    bool AuthHasBeenSet() const;

                    /**
                     * 获取<p>地址列表</p>
                     * @return Addresses <p>地址列表</p>
                     * 
                     */
                    std::vector<std::string> GetAddresses() const;

                    /**
                     * 设置<p>地址列表</p>
                     * @param _addresses <p>地址列表</p>
                     * 
                     */
                    void SetAddresses(const std::vector<std::string>& _addresses);

                    /**
                     * 判断参数 Addresses 是否已赋值
                     * @return Addresses 是否已赋值
                     * 
                     */
                    bool AddressesHasBeenSet() const;

                private:

                    /**
                     * <p>服务来源实例id</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>授权信息</p>
                     */
                    CNAPIGwAIServiceSourceAuth m_auth;
                    bool m_authHasBeenSet;

                    /**
                     * <p>地址列表</p>
                     */
                    std::vector<std::string> m_addresses;
                    bool m_addressesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CNGW_V20230418_MODEL_CNAPIGWAISERVICESOURCEINFO_H_
