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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTINSTANCESRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/BlueprintInstance.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * DescribeBlueprintInstances返回参数结构体
                */
                class DescribeBlueprintInstancesResponse : public AbstractModel
                {
                public:
                    DescribeBlueprintInstancesResponse();
                    ~DescribeBlueprintInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的镜像实例数量。
                     * @return TotalCount 符合条件的镜像实例数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取镜像实例列表信息。
                     * @return BlueprintInstanceSet 镜像实例列表信息。
                     * 
                     */
                    std::vector<BlueprintInstance> GetBlueprintInstanceSet() const;

                    /**
                     * 判断参数 BlueprintInstanceSet 是否已赋值
                     * @return BlueprintInstanceSet 是否已赋值
                     * 
                     */
                    bool BlueprintInstanceSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的镜像实例数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 镜像实例列表信息。
                     */
                    std::vector<BlueprintInstance> m_blueprintInstanceSet;
                    bool m_blueprintInstanceSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESCRIBEBLUEPRINTINSTANCESRESPONSE_H_
