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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * TerminateInstances请求参数结构体
                */
                class TerminateInstancesRequest : public AbstractModel
                {
                public:
                    TerminateInstancesRequest();
                    ~TerminateInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100。</p>
                     * @return InstanceIds <p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100。</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100。</p>
                     * @param _instanceIds <p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100。</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>释放弹性IP。EIP2.0下，仅提供主网卡下首个EIP，EIP类型限定在HighQualityEIP、AntiDDoSEIP、EIPv6、HighQualityEIPv6这几种类型。默认行为不释放。</p><p>默认值：false</p>
                     * @return ReleaseAddress <p>释放弹性IP。EIP2.0下，仅提供主网卡下首个EIP，EIP类型限定在HighQualityEIP、AntiDDoSEIP、EIPv6、HighQualityEIPv6这几种类型。默认行为不释放。</p><p>默认值：false</p>
                     * 
                     */
                    bool GetReleaseAddress() const;

                    /**
                     * 设置<p>释放弹性IP。EIP2.0下，仅提供主网卡下首个EIP，EIP类型限定在HighQualityEIP、AntiDDoSEIP、EIPv6、HighQualityEIPv6这几种类型。默认行为不释放。</p><p>默认值：false</p>
                     * @param _releaseAddress <p>释放弹性IP。EIP2.0下，仅提供主网卡下首个EIP，EIP类型限定在HighQualityEIP、AntiDDoSEIP、EIPv6、HighQualityEIPv6这几种类型。默认行为不释放。</p><p>默认值：false</p>
                     * 
                     */
                    void SetReleaseAddress(const bool& _releaseAddress);

                    /**
                     * 判断参数 ReleaseAddress 是否已赋值
                     * @return ReleaseAddress 是否已赋值
                     * 
                     */
                    bool ReleaseAddressHasBeenSet() const;

                    /**
                     * 获取<p>释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。<br>默认值：false</p>
                     * @return ReleasePrepaidDataDisks <p>释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。<br>默认值：false</p>
                     * 
                     */
                    bool GetReleasePrepaidDataDisks() const;

                    /**
                     * 设置<p>释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。<br>默认值：false</p>
                     * @param _releasePrepaidDataDisks <p>释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。<br>默认值：false</p>
                     * 
                     */
                    void SetReleasePrepaidDataDisks(const bool& _releasePrepaidDataDisks);

                    /**
                     * 判断参数 ReleasePrepaidDataDisks 是否已赋值
                     * @return ReleasePrepaidDataDisks 是否已赋值
                     * 
                     */
                    bool ReleasePrepaidDataDisksHasBeenSet() const;

                private:

                    /**
                     * <p>一个或多个待操作的实例ID。可通过 <a href="https://cloud.tencent.com/document/api/213/15728">DescribeInstances</a> 接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100。</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>释放弹性IP。EIP2.0下，仅提供主网卡下首个EIP，EIP类型限定在HighQualityEIP、AntiDDoSEIP、EIPv6、HighQualityEIPv6这几种类型。默认行为不释放。</p><p>默认值：false</p>
                     */
                    bool m_releaseAddress;
                    bool m_releaseAddressHasBeenSet;

                    /**
                     * <p>释放实例挂载的包年包月数据盘。true表示销毁实例同时释放包年包月数据盘，false表示只销毁实例。<br>默认值：false</p>
                     */
                    bool m_releasePrepaidDataDisks;
                    bool m_releasePrepaidDataDisksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_TERMINATEINSTANCESREQUEST_H_
