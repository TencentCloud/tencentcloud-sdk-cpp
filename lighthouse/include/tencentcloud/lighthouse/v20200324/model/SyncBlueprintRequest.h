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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTREQUEST_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * SyncBlueprint请求参数结构体
                */
                class SyncBlueprintRequest : public AbstractModel
                {
                public:
                    SyncBlueprintRequest();
                    ~SyncBlueprintRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取镜像ID。
                     * @return BlueprintId 镜像ID。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 设置镜像ID。
                     * @param _blueprintId 镜像ID。
                     * 
                     */
                    void SetBlueprintId(const std::string& _blueprintId);

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                    /**
                     * 获取同步镜像的目的地域列表。
                     * @return DestinationRegions 同步镜像的目的地域列表。
                     * 
                     */
                    std::vector<std::string> GetDestinationRegions() const;

                    /**
                     * 设置同步镜像的目的地域列表。
                     * @param _destinationRegions 同步镜像的目的地域列表。
                     * 
                     */
                    void SetDestinationRegions(const std::vector<std::string>& _destinationRegions);

                    /**
                     * 判断参数 DestinationRegions 是否已赋值
                     * @return DestinationRegions 是否已赋值
                     * 
                     */
                    bool DestinationRegionsHasBeenSet() const;

                private:

                    /**
                     * 镜像ID。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                    /**
                     * 同步镜像的目的地域列表。
                     */
                    std::vector<std::string> m_destinationRegions;
                    bool m_destinationRegionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_SYNCBLUEPRINTREQUEST_H_
