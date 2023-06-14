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

#ifndef TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCETYPESREQUEST_H_
#define TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCETYPESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdc
    {
        namespace V20201214
        {
            namespace Model
            {
                /**
                * DescribeDedicatedClusterInstanceTypes请求参数结构体
                */
                class DescribeDedicatedClusterInstanceTypesRequest : public AbstractModel
                {
                public:
                    DescribeDedicatedClusterInstanceTypesRequest();
                    ~DescribeDedicatedClusterInstanceTypesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的专用集群id
                     * @return DedicatedClusterId 查询的专用集群id
                     * 
                     */
                    std::string GetDedicatedClusterId() const;

                    /**
                     * 设置查询的专用集群id
                     * @param _dedicatedClusterId 查询的专用集群id
                     * 
                     */
                    void SetDedicatedClusterId(const std::string& _dedicatedClusterId);

                    /**
                     * 判断参数 DedicatedClusterId 是否已赋值
                     * @return DedicatedClusterId 是否已赋值
                     * 
                     */
                    bool DedicatedClusterIdHasBeenSet() const;

                private:

                    /**
                     * 查询的专用集群id
                     */
                    std::string m_dedicatedClusterId;
                    bool m_dedicatedClusterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDC_V20201214_MODEL_DESCRIBEDEDICATEDCLUSTERINSTANCETYPESREQUEST_H_
