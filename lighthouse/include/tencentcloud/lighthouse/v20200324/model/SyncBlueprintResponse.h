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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/DestinationRegionBlueprint.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * SyncBlueprint返回参数结构体
                */
                class SyncBlueprintResponse : public AbstractModel
                {
                public:
                    SyncBlueprintResponse();
                    ~SyncBlueprintResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取目标地域镜像信息。
                     * @return DestinationRegionBlueprintSet 目标地域镜像信息。
                     * 
                     */
                    std::vector<DestinationRegionBlueprint> GetDestinationRegionBlueprintSet() const;

                    /**
                     * 判断参数 DestinationRegionBlueprintSet 是否已赋值
                     * @return DestinationRegionBlueprintSet 是否已赋值
                     * 
                     */
                    bool DestinationRegionBlueprintSetHasBeenSet() const;

                private:

                    /**
                     * 目标地域镜像信息。
                     */
                    std::vector<DestinationRegionBlueprint> m_destinationRegionBlueprintSet;
                    bool m_destinationRegionBlueprintSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTRESPONSE_H_
