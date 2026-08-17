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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_ACCESSPOINTINFO_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_ACCESSPOINTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 接入点信息
                */
                class AccessPointInfo : public AbstractModel
                {
                public:
                    AccessPointInfo();
                    ~AccessPointInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>接入点运营商。</p>
                     * @return Vendor <p>接入点运营商。</p>
                     * 
                     */
                    std::string GetVendor() const;

                    /**
                     * 设置<p>接入点运营商。</p>
                     * @param _vendor <p>接入点运营商。</p>
                     * 
                     */
                    void SetVendor(const std::string& _vendor);

                    /**
                     * 判断参数 Vendor 是否已赋值
                     * @return Vendor 是否已赋值
                     * 
                     */
                    bool VendorHasBeenSet() const;

                    /**
                     * 获取<p>接入点地址。</p>
                     * @return PublicAddr <p>接入点地址。</p>
                     * 
                     */
                    std::string GetPublicAddr() const;

                    /**
                     * 设置<p>接入点地址。</p>
                     * @param _publicAddr <p>接入点地址。</p>
                     * 
                     */
                    void SetPublicAddr(const std::string& _publicAddr);

                    /**
                     * 判断参数 PublicAddr 是否已赋值
                     * @return PublicAddr 是否已赋值
                     * 
                     */
                    bool PublicAddrHasBeenSet() const;

                    /**
                     * 获取<p>接入点地域。</p>
                     * @return Region <p>接入点地域。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>接入点地域。</p>
                     * @param _region <p>接入点地域。</p>
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取<p>接入点大区。</p>
                     * @return BigArea <p>接入点大区。</p>
                     * 
                     */
                    std::string GetBigArea() const;

                    /**
                     * 设置<p>接入点大区。</p>
                     * @param _bigArea <p>接入点大区。</p>
                     * 
                     */
                    void SetBigArea(const std::string& _bigArea);

                    /**
                     * 判断参数 BigArea 是否已赋值
                     * @return BigArea 是否已赋值
                     * 
                     */
                    bool BigAreaHasBeenSet() const;

                    /**
                     * 获取<p>接入点是否可用。</p><p>枚举值：</p><ul><li>true： 接入点可用</li><li>false： 接入点不可用</li></ul>
                     * @return Available <p>接入点是否可用。</p><p>枚举值：</p><ul><li>true： 接入点可用</li><li>false： 接入点不可用</li></ul>
                     * 
                     */
                    bool GetAvailable() const;

                    /**
                     * 设置<p>接入点是否可用。</p><p>枚举值：</p><ul><li>true： 接入点可用</li><li>false： 接入点不可用</li></ul>
                     * @param _available <p>接入点是否可用。</p><p>枚举值：</p><ul><li>true： 接入点可用</li><li>false： 接入点不可用</li></ul>
                     * 
                     */
                    void SetAvailable(const bool& _available);

                    /**
                     * 判断参数 Available 是否已赋值
                     * @return Available 是否已赋值
                     * 
                     */
                    bool AvailableHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return GwGroupId <p>集群ID</p>
                     * 
                     */
                    std::string GetGwGroupId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _gwGroupId <p>集群ID</p>
                     * 
                     */
                    void SetGwGroupId(const std::string& _gwGroupId);

                    /**
                     * 判断参数 GwGroupId 是否已赋值
                     * @return GwGroupId 是否已赋值
                     * 
                     */
                    bool GwGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>接入点运营商。</p>
                     */
                    std::string m_vendor;
                    bool m_vendorHasBeenSet;

                    /**
                     * <p>接入点地址。</p>
                     */
                    std::string m_publicAddr;
                    bool m_publicAddrHasBeenSet;

                    /**
                     * <p>接入点地域。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>接入点大区。</p>
                     */
                    std::string m_bigArea;
                    bool m_bigAreaHasBeenSet;

                    /**
                     * <p>接入点是否可用。</p><p>枚举值：</p><ul><li>true： 接入点可用</li><li>false： 接入点不可用</li></ul>
                     */
                    bool m_available;
                    bool m_availableHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_gwGroupId;
                    bool m_gwGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_ACCESSPOINTINFO_H_
