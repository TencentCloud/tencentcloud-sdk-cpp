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
                     * 获取通道组所属项目ID
                     * @return ProjectId 通道组所属项目ID
                     * 
                     */
                    uint64_t GetProjectId() const;

                    /**
                     * 设置通道组所属项目ID
                     * @param _projectId 通道组所属项目ID
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
                     * 获取通道组别名
                     * @return GroupName 通道组别名
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置通道组别名
                     * @param _groupName 通道组别名
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
                     * 获取源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId
                     * @return RealServerRegion 源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId
                     * 
                     */
                    std::string GetRealServerRegion() const;

                    /**
                     * 设置源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId
                     * @param _realServerRegion 源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId
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
                     * 获取标签列表
                     * @return TagSet 标签列表
                     * 
                     */
                    std::vector<TagPair> GetTagSet() const;

                    /**
                     * 设置标签列表
                     * @param _tagSet 标签列表
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
                     * 获取加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。
                     * @return AccessRegionSet 加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。
                     * 
                     */
                    std::vector<AccessConfiguration> GetAccessRegionSet() const;

                    /**
                     * 设置加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。
                     * @param _accessRegionSet 加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。
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
                     * 获取IP版本，可取值：IPv4、IPv6，默认值IPv4
                     * @return IPAddressVersion IP版本，可取值：IPv4、IPv6，默认值IPv4
                     * 
                     */
                    std::string GetIPAddressVersion() const;

                    /**
                     * 设置IP版本，可取值：IPv4、IPv6，默认值IPv4
                     * @param _iPAddressVersion IP版本，可取值：IPv4、IPv6，默认值IPv4
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
                     * 获取通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder
                     * @return PackageType 通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder
                     * 
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder
                     * @param _packageType 通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder
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
                     * 获取该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     * @return Http3Supported 该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     * 
                     */
                    int64_t GetHttp3Supported() const;

                    /**
                     * 设置该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     * @param _http3Supported 该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。
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
                     * 通道组所属项目ID
                     */
                    uint64_t m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 通道组别名
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 源站地域，参考接口 [https://cloud.tencent.com/document/api/608/36964] 返回参数RegionDetail中的RegionId
                     */
                    std::string m_realServerRegion;
                    bool m_realServerRegionHasBeenSet;

                    /**
                     * 标签列表
                     */
                    std::vector<TagPair> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * 加速地域列表，包括加速地域名，及该地域对应的带宽和并发配置。
                     */
                    std::vector<AccessConfiguration> m_accessRegionSet;
                    bool m_accessRegionSetHasBeenSet;

                    /**
                     * IP版本，可取值：IPv4、IPv6，默认值IPv4
                     */
                    std::string m_iPAddressVersion;
                    bool m_iPAddressVersionHasBeenSet;

                    /**
                     * 通道组套餐类型，可取值：Thunder、Accelerator，默认值Thunder
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                    /**
                     * 该字段已废弃，当IPAddressVersion为IPv4时，所创建的通道组默认支持Http3.0；当为IPv6，默认不支持Http3.0。
                     */
                    int64_t m_http3Supported;
                    bool m_http3SupportedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_CREATEPROXYGROUPREQUEST_H_
