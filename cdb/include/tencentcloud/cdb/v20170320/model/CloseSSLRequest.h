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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_CLOSESSLREQUEST_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_CLOSESSLREQUEST_H_

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
                * CloseSSL请求参数结构体
                */
                class CloseSSLRequest : public AbstractModel
                {
                public:
                    CloseSSLRequest();
                    ~CloseSSLRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID。只读组 ID 为空时必填。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @return InstanceId 实例 ID。只读组 ID 为空时必填。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID。只读组 ID 为空时必填。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     * @param _instanceId 实例 ID。只读组 ID 为空时必填。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
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
                     * 获取只读组 ID。实例 ID 为空时必填。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 接口获取。
                     * @return RoGroupId 只读组 ID。实例 ID 为空时必填。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 接口获取。
                     * 
                     */
                    std::string GetRoGroupId() const;

                    /**
                     * 设置只读组 ID。实例 ID 为空时必填。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 接口获取。
                     * @param _roGroupId 只读组 ID。实例 ID 为空时必填。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 接口获取。
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
                     * 实例 ID。只读组 ID 为空时必填。可通过 [DescribeDBInstances](https://cloud.tencent.com/document/product/236/15872) 接口获取。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 只读组 ID。实例 ID 为空时必填。可通过 [DescribeRoGroups](https://cloud.tencent.com/document/api/236/40939) 接口获取。
                     */
                    std::string m_roGroupId;
                    bool m_roGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_CLOSESSLREQUEST_H_
