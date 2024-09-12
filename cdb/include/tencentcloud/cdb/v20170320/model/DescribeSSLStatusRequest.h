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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESSLSTATUSREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESSLSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * DescribeSSLStatus请求参数结构体
                */
                class DescribeSSLStatusRequest : public AbstractModel
                {
                public:
                    DescribeSSLStatusRequest();
                    ~DescribeSSLStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询双节点、三节点实例 SSL 开通情况，请填写实例 ID 参数进行查询。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     * @return InstanceId 实例 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询双节点、三节点实例 SSL 开通情况，请填写实例 ID 参数进行查询。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询双节点、三节点实例 SSL 开通情况，请填写实例 ID 参数进行查询。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     * @param _instanceId 实例 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询双节点、三节点实例 SSL 开通情况，请填写实例 ID 参数进行查询。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
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
                     * 获取只读组 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询只读实例或只读组 SSL 开通情况，请填写 RoGroupId 参数，并注意填写的都是只读组 ID。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     * @return RoGroupId 只读组 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询只读实例或只读组 SSL 开通情况，请填写 RoGroupId 参数，并注意填写的都是只读组 ID。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置只读组 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询只读实例或只读组 SSL 开通情况，请填写 RoGroupId 参数，并注意填写的都是只读组 ID。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     * @param _roGroupId 只读组 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询只读实例或只读组 SSL 开通情况，请填写 RoGroupId 参数，并注意填写的都是只读组 ID。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     * 
                     */
                    void SetRoGroupId(const std::string& _roGroupId);

                    /**
                     * 判断参数 RoGroupId 是否已赋值
                     * @return RoGroupId 是否已赋值
                     * 
                     */
                    bool RoGroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询双节点、三节点实例 SSL 开通情况，请填写实例 ID 参数进行查询。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 只读组 ID。
说明：实例 ID 和实例组 ID 两个参数选其一填写即可。若要查询只读实例或只读组 SSL 开通情况，请填写 RoGroupId 参数，并注意填写的都是只读组 ID。单节点（云盘）、集群版实例不支持开启 SSL，因此不支持查询。
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_DESCRIBESSLSTATUSREQUEST_H_
