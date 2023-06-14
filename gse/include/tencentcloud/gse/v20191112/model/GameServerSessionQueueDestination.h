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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONQUEUEDESTINATION_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONQUEUEDESTINATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * 服务部署组目的集合
                */
                class GameServerSessionQueueDestination : public AbstractModel
                {
                public:
                    GameServerSessionQueueDestination();
                    ~GameServerSessionQueueDestination() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取服务部署组目的的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DestinationArn 服务部署组目的的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDestinationArn() const;

                    /**
                     * 设置服务部署组目的的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _destinationArn 服务部署组目的的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDestinationArn(const std::string& _destinationArn);

                    /**
                     * 判断参数 DestinationArn 是否已赋值
                     * @return DestinationArn 是否已赋值
                     * 
                     */
                    bool DestinationArnHasBeenSet() const;

                    /**
                     * 获取服务部署组目的的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetStatus 服务部署组目的的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFleetStatus() const;

                    /**
                     * 设置服务部署组目的的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fleetStatus 服务部署组目的的状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFleetStatus(const std::string& _fleetStatus);

                    /**
                     * 判断参数 FleetStatus 是否已赋值
                     * @return FleetStatus 是否已赋值
                     * 
                     */
                    bool FleetStatusHasBeenSet() const;

                private:

                    /**
                     * 服务部署组目的的资源描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_destinationArn;
                    bool m_destinationArnHasBeenSet;

                    /**
                     * 服务部署组目的的状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fleetStatus;
                    bool m_fleetStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_GAMESERVERSESSIONQUEUEDESTINATION_H_
