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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPSSLConfig.h>
#include <tencentcloud/teo/v20220901/model/ReferenceHolder.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 共享CNAME明细
                */
                class SharedCNAMEInfo : public AbstractModel
                {
                public:
                    SharedCNAMEInfo();
                    ~SharedCNAMEInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取共享CNAME类型：取值范围如下：
<li>custom：由用户创建的自定义共享CNAME</li>
<li>ip-ssl：IP SSL类型的共享CNAME</li>
                     * @return Type 共享CNAME类型：取值范围如下：
<li>custom：由用户创建的自定义共享CNAME</li>
<li>ip-ssl：IP SSL类型的共享CNAME</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置共享CNAME类型：取值范围如下：
<li>custom：由用户创建的自定义共享CNAME</li>
<li>ip-ssl：IP SSL类型的共享CNAME</li>
                     * @param _type 共享CNAME类型：取值范围如下：
<li>custom：由用户创建的自定义共享CNAME</li>
<li>ip-ssl：IP SSL类型的共享CNAME</li>
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
                     * 获取共享CNAME名称。
                     * @return SharedCNAME 共享CNAME名称。
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置共享CNAME名称。
                     * @param _sharedCNAME 共享CNAME名称。
                     * 
                     */
                    void SetSharedCNAME(const std::string& _sharedCNAME);

                    /**
                     * 判断参数 SharedCNAME 是否已赋值
                     * @return SharedCNAME 是否已赋值
                     * 
                     */
                    bool SharedCNAMEHasBeenSet() const;

                    /**
                     * 获取描述。
                     * @return Description 描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述。
                     * @param _description 描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。
                     * @return IPSSLConfig 当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。
                     * 
                     */
                    IPSSLConfig GetIPSSLConfig() const;

                    /**
                     * 设置当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。
                     * @param _iPSSLConfig 当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。
                     * 
                     */
                    void SetIPSSLConfig(const IPSSLConfig& _iPSSLConfig);

                    /**
                     * 判断参数 IPSSLConfig 是否已赋值
                     * @return IPSSLConfig 是否已赋值
                     * 
                     */
                    bool IPSSLConfigHasBeenSet() const;

                    /**
                     * 获取共享CNAME绑定的加速域名数量。
                     * @return BindDomainCount 共享CNAME绑定的加速域名数量。
                     * 
                     */
                    int64_t GetBindDomainCount() const;

                    /**
                     * 设置共享CNAME绑定的加速域名数量。
                     * @param _bindDomainCount 共享CNAME绑定的加速域名数量。
                     * 
                     */
                    void SetBindDomainCount(const int64_t& _bindDomainCount);

                    /**
                     * 判断参数 BindDomainCount 是否已赋值
                     * @return BindDomainCount 是否已赋值
                     * 
                     */
                    bool BindDomainCountHasBeenSet() const;

                    /**
                     * 获取加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。
                     * @return AccelerationDomains 加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。
                     * 
                     */
                    std::vector<ReferenceHolder> GetAccelerationDomains() const;

                    /**
                     * 设置加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。
                     * @param _accelerationDomains 加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。
                     * 
                     */
                    void SetAccelerationDomains(const std::vector<ReferenceHolder>& _accelerationDomains);

                    /**
                     * 判断参数 AccelerationDomains 是否已赋值
                     * @return AccelerationDomains 是否已赋值
                     * 
                     */
                    bool AccelerationDomainsHasBeenSet() const;

                private:

                    /**
                     * 共享CNAME类型：取值范围如下：
<li>custom：由用户创建的自定义共享CNAME</li>
<li>ip-ssl：IP SSL类型的共享CNAME</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 共享CNAME名称。
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * 描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。
                     */
                    IPSSLConfig m_iPSSLConfig;
                    bool m_iPSSLConfigHasBeenSet;

                    /**
                     * 共享CNAME绑定的加速域名数量。
                     */
                    int64_t m_bindDomainCount;
                    bool m_bindDomainCountHasBeenSet;

                    /**
                     * 加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。
                     */
                    std::vector<ReferenceHolder> m_accelerationDomains;
                    bool m_accelerationDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_
