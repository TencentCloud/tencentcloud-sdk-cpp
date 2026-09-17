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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYQUOTA_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYQUOTA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * VPN网关配额对象
                */
                class VpnGatewayQuota : public AbstractModel
                {
                public:
                    VpnGatewayQuota();
                    ~VpnGatewayQuota() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>带宽配额，单位：Mbps。</p>
                     * @return Bandwidth <p>带宽配额，单位：Mbps。</p>
                     * 
                     */
                    uint64_t GetBandwidth() const;

                    /**
                     * 设置<p>带宽配额，单位：Mbps。</p>
                     * @param _bandwidth <p>带宽配额，单位：Mbps。</p>
                     * 
                     */
                    void SetBandwidth(const uint64_t& _bandwidth);

                    /**
                     * 判断参数 Bandwidth 是否已赋值
                     * @return Bandwidth 是否已赋值
                     * 
                     */
                    bool BandwidthHasBeenSet() const;

                    /**
                     * 获取<p>配额中文名称</p>
                     * @return Cname <p>配额中文名称</p>
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置<p>配额中文名称</p>
                     * @param _cname <p>配额中文名称</p>
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取<p>配额英文名称</p>
                     * @return Name <p>配额英文名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>配额英文名称</p>
                     * @param _name <p>配额英文名称</p>
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
                     * 获取<p>SSL 连接数可选配额</p>
                     * @return MaxConnection <p>SSL 连接数可选配额</p>
                     * 
                     */
                    std::vector<uint64_t> GetMaxConnection() const;

                    /**
                     * 设置<p>SSL 连接数可选配额</p>
                     * @param _maxConnection <p>SSL 连接数可选配额</p>
                     * 
                     */
                    void SetMaxConnection(const std::vector<uint64_t>& _maxConnection);

                    /**
                     * 判断参数 MaxConnection 是否已赋值
                     * @return MaxConnection 是否已赋值
                     * 
                     */
                    bool MaxConnectionHasBeenSet() const;

                private:

                    /**
                     * <p>带宽配额，单位：Mbps。</p>
                     */
                    uint64_t m_bandwidth;
                    bool m_bandwidthHasBeenSet;

                    /**
                     * <p>配额中文名称</p>
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * <p>配额英文名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>SSL 连接数可选配额</p>
                     */
                    std::vector<uint64_t> m_maxConnection;
                    bool m_maxConnectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_VPNGATEWAYQUOTA_H_
