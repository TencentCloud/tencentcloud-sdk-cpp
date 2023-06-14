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

#ifndef TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBESUBNETBYHOSTEDDEVICEREQUEST_H_
#define TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBESUBNETBYHOSTEDDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bmvpc
    {
        namespace V20180625
        {
            namespace Model
            {
                /**
                * DescribeSubnetByHostedDevice请求参数结构体
                */
                class DescribeSubnetByHostedDeviceRequest : public AbstractModel
                {
                public:
                    DescribeSubnetByHostedDeviceRequest();
                    ~DescribeSubnetByHostedDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取托管机器ID, 如chm-xasdfx2j
                     * @return InstanceId 托管机器ID, 如chm-xasdfx2j
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置托管机器ID, 如chm-xasdfx2j
                     * @param _instanceId 托管机器ID, 如chm-xasdfx2j
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
                     * 获取子网类型。0: 物理机子网; 7: DOCKER子网 8: 虚拟子网
                     * @return Types 子网类型。0: 物理机子网; 7: DOCKER子网 8: 虚拟子网
                     * 
                     */
                    std::vector<uint64_t> GetTypes() const;

                    /**
                     * 设置子网类型。0: 物理机子网; 7: DOCKER子网 8: 虚拟子网
                     * @param _types 子网类型。0: 物理机子网; 7: DOCKER子网 8: 虚拟子网
                     * 
                     */
                    void SetTypes(const std::vector<uint64_t>& _types);

                    /**
                     * 判断参数 Types 是否已赋值
                     * @return Types 是否已赋值
                     * 
                     */
                    bool TypesHasBeenSet() const;

                    /**
                     * 获取查询的起始位置。
                     * @return Offset 查询的起始位置。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询的起始位置。
                     * @param _offset 查询的起始位置。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询的个数。
                     * @return Limit 查询的个数。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置查询的个数。
                     * @param _limit 查询的个数。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 托管机器ID, 如chm-xasdfx2j
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 子网类型。0: 物理机子网; 7: DOCKER子网 8: 虚拟子网
                     */
                    std::vector<uint64_t> m_types;
                    bool m_typesHasBeenSet;

                    /**
                     * 查询的起始位置。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询的个数。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMVPC_V20180625_MODEL_DESCRIBESUBNETBYHOSTEDDEVICEREQUEST_H_
