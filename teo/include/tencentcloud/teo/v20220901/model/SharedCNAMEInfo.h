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
                     * 获取<p>共享CNAME类型：取值范围如下：</p><li>custom：由用户创建的自定义共享CNAME</li><li>ip-ssl：IP SSL类型的共享CNAME</li><li>zero-rating：免流类型的共享CNAME</li><li>preset：预置资源类型的共享CNAME</li>
                     * @return Type <p>共享CNAME类型：取值范围如下：</p><li>custom：由用户创建的自定义共享CNAME</li><li>ip-ssl：IP SSL类型的共享CNAME</li><li>zero-rating：免流类型的共享CNAME</li><li>preset：预置资源类型的共享CNAME</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>共享CNAME类型：取值范围如下：</p><li>custom：由用户创建的自定义共享CNAME</li><li>ip-ssl：IP SSL类型的共享CNAME</li><li>zero-rating：免流类型的共享CNAME</li><li>preset：预置资源类型的共享CNAME</li>
                     * @param _type <p>共享CNAME类型：取值范围如下：</p><li>custom：由用户创建的自定义共享CNAME</li><li>ip-ssl：IP SSL类型的共享CNAME</li><li>zero-rating：免流类型的共享CNAME</li><li>preset：预置资源类型的共享CNAME</li>
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
                     * 获取<p>共享CNAME名称。</p>
                     * @return SharedCNAME <p>共享CNAME名称。</p>
                     * 
                     */
                    std::string GetSharedCNAME() const;

                    /**
                     * 设置<p>共享CNAME名称。</p>
                     * @param _sharedCNAME <p>共享CNAME名称。</p>
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
                     * 获取<p>描述。</p>
                     * @return Description <p>描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述。</p>
                     * @param _description <p>描述。</p>
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
                     * 获取<p>当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。</p>
                     * @return IPSSLConfig <p>当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。</p>
                     * 
                     */
                    IPSSLConfig GetIPSSLConfig() const;

                    /**
                     * 设置<p>当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。</p>
                     * @param _iPSSLConfig <p>当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。</p>
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
                     * 获取<p>共享CNAME绑定的加速域名数量。</p>
                     * @return BindDomainCount <p>共享CNAME绑定的加速域名数量。</p>
                     * 
                     */
                    int64_t GetBindDomainCount() const;

                    /**
                     * 设置<p>共享CNAME绑定的加速域名数量。</p>
                     * @param _bindDomainCount <p>共享CNAME绑定的加速域名数量。</p>
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
                     * 获取<p>加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。</p>
                     * @return AccelerationDomains <p>加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。</p>
                     * 
                     */
                    std::vector<ReferenceHolder> GetAccelerationDomains() const;

                    /**
                     * 设置<p>加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。</p>
                     * @param _accelerationDomains <p>加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。</p>
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
                     * <p>共享CNAME类型：取值范围如下：</p><li>custom：由用户创建的自定义共享CNAME</li><li>ip-ssl：IP SSL类型的共享CNAME</li><li>zero-rating：免流类型的共享CNAME</li><li>preset：预置资源类型的共享CNAME</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>共享CNAME名称。</p>
                     */
                    std::string m_sharedCNAME;
                    bool m_sharedCNAMEHasBeenSet;

                    /**
                     * <p>描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>当type为ip-ssl时，展示该共享CNAME关联的 IP SSL 配置信息。</p>
                     */
                    IPSSLConfig m_iPSSLConfig;
                    bool m_iPSSLConfigHasBeenSet;

                    /**
                     * <p>共享CNAME绑定的加速域名数量。</p>
                     */
                    int64_t m_bindDomainCount;
                    bool m_bindDomainCountHasBeenSet;

                    /**
                     * <p>加入该共享CNAME的加速域名列表。当加入的域名数量超过100个时，只返回前100个加速域名。</p>
                     */
                    std::vector<ReferenceHolder> m_accelerationDomains;
                    bool m_accelerationDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_SHAREDCNAMEINFO_H_
