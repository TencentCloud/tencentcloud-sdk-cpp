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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/TagPair.h>
#include <tencentcloud/gaap/v20180529/model/AccessConfiguration.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * CreateProxyGroup请求参数结构体
                */
                class CreateProxyGroupRequest : public AbstractModel
                {
                public:
                    CreateProxyGroupRequest();
                    ~CreateProxyGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道组所属项目ID</p>
                     * @return ProjectId <p>通道组所属项目ID</p>
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置<p>通道组所属项目ID</p>
                     * @param _projectId <p>通道组所属项目ID</p>
                     * 
                     */
                    void SetProjectId(const uint64_t& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>通道组别名</p>
                     * @return GroupName <p>通道组别名</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>通道组别名</p>
                     * @param _groupName <p>通道组别名</p>
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取<p>源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId</p>
                     * @return RealServerRegion <p>源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId</p>
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置<p>源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId</p>
                     * @param _realServerRegion <p>源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId</p>
                     * 
                     */
                    void SetRealServerRegion(const std::string& _realServerRegion);

                    /**
                     * 判断参数 RealServerRegion 是否已赋值
                     * @return RealServerRegion 是否已赋值
                     * 
                     */
                    bool RealServerRegionHasBeenSet() const;

                    /**
                     * 获取<p>标签列表</p>
                     * @return TagSet <p>标签列表</p>
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置<p>标签列表</p>
                     * @param _tagSet <p>标签列表</p>
                     * 
                     */
                    void SetTagSet(const std::vector<TagPair>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取<p>加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。</p>
                     * @return AccessRegionSet <p>加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。</p>
                     * 
                     */
                    std::vector<AccessConfiguration> GetAccessRegionSet() const;

                    /**
                     * 设置<p>加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。</p>
                     * @param _accessRegionSet <p>加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。</p>
                     * 
                     */
                    void SetAccessRegionSet(const std::vector<AccessConfiguration>& _accessRegionSet);

                    /**
                     * 判断参数 AccessRegionSet 是否已赋值
                     * @return AccessRegionSet 是否已赋值
                     * 
                     */
                    bool AccessRegionSetHasBeenSet() const;

                    /**
                     * 获取<p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     * @return IPAddressVersion <p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     * 
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置<p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     * @param _iPAddressVersion <p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     * 
                     */
                    void SetIPAddressVersion(const std::string& _iPAddressVersion);

                    /**
                     * 判断参数 IPAddressVersion 是否已赋值
                     * @return IPAddressVersion 是否已赋值
                     * 
                     */
                    bool IPAddressVersionHasBeenSet() const;

                    /**
                     * 获取<p>通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder</p>
                     * @return PackageType <p>通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder</p>
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置<p>通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder</p>
                     * @param _packageType <p>通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder</p>
                     * 
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     * 
                     */
                    bool PackageTypeHasBeenSet() const;

                    /**
                     * 获取<p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     * @return Http3Supported <p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置<p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     * @param _http3Supported <p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     * 
                     */
                    void SetHttp3Supported(const int64_t& _http3Supported);

                    /**
                     * 判断参数 Http3Supported 是否已赋值
                     * @return Http3Supported 是否已赋值
                     * 
                     */
                    bool Http3SupportedHasBeenSet() const;

                private:

                    /**
                     * <p>通道组所属项目ID</p>
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>通道组别名</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId</p>
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * <p>标签列表</p>
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。</p>
                     */
                    std::vector<AccessConfiguration> m_accessRegionSet;
                    bool m_accessRegionSetHasBeenSet;

                    /**
                     * <p>IP版本，可取值：IPv4、IPv6，默认值IPv4</p>
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * <p>通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder</p>
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * <p>该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。</p>
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_
