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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCELISTRESPONSE_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCELISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/emr/v20190103/model/RayCluster.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * DescribeDynamicInstanceList返回参数结构体
                */
                class DescribeDynamicInstanceListResponse : public AbstractModel
                {
                public:
                    DescribeDynamicInstanceListResponse();
                    ~DescribeDynamicInstanceListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取RayCluster 集群列表
                     * @return DynamicInstanceList RayCluster 集群列表
                     * 
                     */
                    std::vector<RayCluster> GetDynamicInstanceList() const;

                    /**
                     * 判断参数 DynamicInstanceList 是否已赋值
                     * @return DynamicInstanceList 是否已赋值
                     * 
                     */
                    bool DynamicInstanceListHasBeenSet() const;

                private:

                    /**
                     * RayCluster 集群列表
                     */
                    std::vector<RayCluster> m_dynamicInstanceList;
                    bool m_dynamicInstanceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_DESCRIBEDYNAMICINSTANCELISTRESPONSE_H_
