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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSREQUEST_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DescribeBasicDeviceStatus请求参数结构体
                */
                class DescribeBasicDeviceStatusRequest : public AbstractModel
                {
                public:
                    DescribeBasicDeviceStatusRequest();
                    ~DescribeBasicDeviceStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>IP 资源列表</p>
                     * @return IpList <p>IP 资源列表</p>
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置<p>IP 资源列表</p>
                     * @param _ipList <p>IP 资源列表</p>
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取<p>域名化资源传id</p>
                     * @return IdList <p>域名化资源传id</p>
                     * 
                     */
                    std::vector<std::string> GetIdList() const;

                    /**
                     * 设置<p>域名化资源传id</p>
                     * @param _idList <p>域名化资源传id</p>
                     * 
                     */
                    void SetIdList(const std::vector<std::string>& _idList);

                    /**
                     * 判断参数 IdList 是否已赋值
                     * @return IdList 是否已赋值
                     * 
                     */
                    bool IdListHasBeenSet() const;

                    /**
                     * 获取<p>地域名称</p>
                     * @return FilterRegion <p>地域名称</p>
                     * 
                     */
                    uint64_t GetFilterRegion() const;

                    /**
                     * 设置<p>地域名称</p>
                     * @param _filterRegion <p>地域名称</p>
                     * 
                     */
                    void SetFilterRegion(const uint64_t& _filterRegion);

                    /**
                     * 判断参数 FilterRegion 是否已赋值
                     * @return FilterRegion 是否已赋值
                     * 
                     */
                    bool FilterRegionHasBeenSet() const;

                    /**
                     * 获取<p>cnameWaf资源</p>
                     * @return CnameWafIdList <p>cnameWaf资源</p>
                     * 
                     */
                    std::vector<std::string> GetCnameWafIdList() const;

                    /**
                     * 设置<p>cnameWaf资源</p>
                     * @param _cnameWafIdList <p>cnameWaf资源</p>
                     * 
                     */
                    void SetCnameWafIdList(const std::vector<std::string>& _cnameWafIdList);

                    /**
                     * 判断参数 CnameWafIdList 是否已赋值
                     * @return CnameWafIdList 是否已赋值
                     * 
                     */
                    bool CnameWafIdListHasBeenSet() const;

                private:

                    /**
                     * <p>IP 资源列表</p>
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * <p>域名化资源传id</p>
                     */
                    std::vector<std::string> m_idList;
                    bool m_idListHasBeenSet;

                    /**
                     * <p>地域名称</p>
                     */
                    uint64_t m_filterRegion;
                    bool m_filterRegionHasBeenSet;

                    /**
                     * <p>cnameWaf资源</p>
                     */
                    std::vector<std::string> m_cnameWafIdList;
                    bool m_cnameWafIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DESCRIBEBASICDEVICESTATUSREQUEST_H_
