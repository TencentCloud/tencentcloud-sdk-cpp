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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESDISASTERRECOVERGROUPREQUEST_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESDISASTERRECOVERGROUPREQUEST_H_

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
                * ModifyInstancesDisasterRecoverGroup请求参数结构体
                */
                class ModifyInstancesDisasterRecoverGroupRequest : public AbstractModel
                {
                public:
                    ModifyInstancesDisasterRecoverGroupRequest();
                    ~ModifyInstancesDisasterRecoverGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728"> DescribeInstances </a>接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100</p>
                     * @return InstanceIds <p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728"> DescribeInstances </a>接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728"> DescribeInstances </a>接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100</p>
                     * @param _instanceIds <p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728"> DescribeInstances </a>接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100</p>
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
                     * 获取<p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取</p>
                     * @return DisasterRecoverGroupId <p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取</p>
                     * @deprecated
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置<p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取</p>
                     * @param _disasterRecoverGroupId <p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取</p>
                     * @deprecated
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     * @deprecated
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否强制更换实例宿主机。取值范围：<br><li>true：表示允许实例更换宿主机，允许重启实例。本地盘子机不支持指定此参数。</li><br><li>false：不允许实例更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li><br><br>默认取值：false</p>
                     * @return Force <p>是否强制更换实例宿主机。取值范围：<br><li>true：表示允许实例更换宿主机，允许重启实例。本地盘子机不支持指定此参数。</li><br><li>false：不允许实例更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li><br><br>默认取值：false</p>
                     * 
                     */
                    bool GetForce() const;

                    /**
                     * 设置<p>是否强制更换实例宿主机。取值范围：<br><li>true：表示允许实例更换宿主机，允许重启实例。本地盘子机不支持指定此参数。</li><br><li>false：不允许实例更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li><br><br>默认取值：false</p>
                     * @param _force <p>是否强制更换实例宿主机。取值范围：<br><li>true：表示允许实例更换宿主机，允许重启实例。本地盘子机不支持指定此参数。</li><br><li>false：不允许实例更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li><br><br>默认取值：false</p>
                     * 
                     */
                    void SetForce(const bool& _force);

                    /**
                     * 判断参数 Force 是否已赋值
                     * @return Force 是否已赋值
                     * 
                     */
                    bool ForceHasBeenSet() const;

                    /**
                     * 获取<p>置放群组id列表(目前仅支持指定一个)</p>
                     * @return DisasterRecoverGroupIds <p>置放群组id列表(目前仅支持指定一个)</p>
                     * 
                     */
                    std::vector<std::string> GetDisasterRecoverGroupIds() const;

                    /**
                     * 设置<p>置放群组id列表(目前仅支持指定一个)</p>
                     * @param _disasterRecoverGroupIds <p>置放群组id列表(目前仅支持指定一个)</p>
                     * 
                     */
                    void SetDisasterRecoverGroupIds(const std::vector<std::string>& _disasterRecoverGroupIds);

                    /**
                     * 判断参数 DisasterRecoverGroupIds 是否已赋值
                     * @return DisasterRecoverGroupIds 是否已赋值
                     * 
                     */
                    bool DisasterRecoverGroupIdsHasBeenSet() const;

                    /**
                     * 获取<p>分区置放群组的分区Id，取值范围：1-10，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机(该功能灰度中)</p>
                     * @return PartitionNumber <p>分区置放群组的分区Id，取值范围：1-10，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机(该功能灰度中)</p>
                     * 
                     */
                    int64_t GetPartitionNumber() const;

                    /**
                     * 设置<p>分区置放群组的分区Id，取值范围：1-10，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机(该功能灰度中)</p>
                     * @param _partitionNumber <p>分区置放群组的分区Id，取值范围：1-10，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机(该功能灰度中)</p>
                     * 
                     */
                    void SetPartitionNumber(const int64_t& _partitionNumber);

                    /**
                     * 判断参数 PartitionNumber 是否已赋值
                     * @return PartitionNumber 是否已赋值
                     * 
                     */
                    bool PartitionNumberHasBeenSet() const;

                private:

                    /**
                     * <p>一个或多个待操作的实例ID。可通过<a href="https://cloud.tencent.com/document/api/213/15728"> DescribeInstances </a>接口返回值中的<code>InstanceId</code>获取。每次请求批量实例的上限为100</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>分散置放群组ID，可使用<a href="https://cloud.tencent.com/document/api/213/17810">DescribeDisasterRecoverGroups</a>接口获取</p>
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * <p>是否强制更换实例宿主机。取值范围：<br><li>true：表示允许实例更换宿主机，允许重启实例。本地盘子机不支持指定此参数。</li><br><li>false：不允许实例更换宿主机，只在当前宿主机上加入置放群组。这可能导致更换置放群组失败。</li><br><br>默认取值：false</p>
                     */
                    bool m_force;
                    bool m_forceHasBeenSet;

                    /**
                     * <p>置放群组id列表(目前仅支持指定一个)</p>
                     */
                    std::vector<std::string> m_disasterRecoverGroupIds;
                    bool m_disasterRecoverGroupIdsHasBeenSet;

                    /**
                     * <p>分区置放群组的分区Id，取值范围：1-10，具体取决于所选置放群组的分区数量，如果选中的置放群组是分区置放群组，该值不传默认随机(该功能灰度中)</p>
                     */
                    int64_t m_partitionNumber;
                    bool m_partitionNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_MODIFYINSTANCESDISASTERRECOVERGROUPREQUEST_H_
