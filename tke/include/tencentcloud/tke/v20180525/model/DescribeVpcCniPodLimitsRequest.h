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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeVpcCniPodLimits请求参数结构体
                */
                class DescribeVpcCniPodLimitsRequest : public AbstractModel
                {
                public:
                    DescribeVpcCniPodLimitsRequest();
                    ~DescribeVpcCniPodLimitsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的机型所在可用区，如：ap-guangzhou-3，默认为空，即不按可用区过滤信息
                     * @return Zone 查询的机型所在可用区，如：ap-guangzhou-3，默认为空，即不按可用区过滤信息
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置查询的机型所在可用区，如：ap-guangzhou-3，默认为空，即不按可用区过滤信息
                     * @param _zone 查询的机型所在可用区，如：ap-guangzhou-3，默认为空，即不按可用区过滤信息
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取查询的实例机型系列信息，如：S5，默认为空，即不按机型系列过滤信息
                     * @return InstanceFamily 查询的实例机型系列信息，如：S5，默认为空，即不按机型系列过滤信息
                     * 
                     */
                    std::string GetInstanceFamily() const;

                    /**
                     * 设置查询的实例机型系列信息，如：S5，默认为空，即不按机型系列过滤信息
                     * @param _instanceFamily 查询的实例机型系列信息，如：S5，默认为空，即不按机型系列过滤信息
                     * 
                     */
                    void SetInstanceFamily(const std::string& _instanceFamily);

                    /**
                     * 判断参数 InstanceFamily 是否已赋值
                     * @return InstanceFamily 是否已赋值
                     * 
                     */
                    bool InstanceFamilyHasBeenSet() const;

                    /**
                     * 获取查询的实例机型信息，如：S5.LARGE8，默认为空，即不按机型过滤信息
                     * @return InstanceType 查询的实例机型信息，如：S5.LARGE8，默认为空，即不按机型过滤信息
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置查询的实例机型信息，如：S5.LARGE8，默认为空，即不按机型过滤信息
                     * @param _instanceType 查询的实例机型信息，如：S5.LARGE8，默认为空，即不按机型过滤信息
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                private:

                    /**
                     * 查询的机型所在可用区，如：ap-guangzhou-3，默认为空，即不按可用区过滤信息
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * 查询的实例机型系列信息，如：S5，默认为空，即不按机型系列过滤信息
                     */
                    std::string m_instanceFamily;
                    bool m_instanceFamilyHasBeenSet;

                    /**
                     * 查询的实例机型信息，如：S5.LARGE8，默认为空，即不按机型过滤信息
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEVPCCNIPODLIMITSREQUEST_H_
