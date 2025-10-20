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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESTINATIONREGIONBLUEPRINT_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESTINATIONREGIONBLUEPRINT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 目标地域镜像信息。
                */
                class DestinationRegionBlueprint : public AbstractModel
                {
                public:
                    DestinationRegionBlueprint();
                    ~DestinationRegionBlueprint() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标地域。
                     * @return Region 目标地域。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置目标地域。
                     * @param _region 目标地域。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取目标地域镜像ID。
                     * @return BlueprintId 目标地域镜像ID。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置目标地域镜像ID。
                     * @param _blueprintId 目标地域镜像ID。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                private:

                    /**
                     * 目标地域。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 目标地域镜像ID。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_DESTINATIONREGIONBLUEPRINT_H_
