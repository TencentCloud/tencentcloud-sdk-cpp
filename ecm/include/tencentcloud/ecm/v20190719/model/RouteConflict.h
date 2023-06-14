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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_ROUTECONFLICT_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_ROUTECONFLICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Route.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * 路由冲突对象
                */
                class RouteConflict : public AbstractModel
                {
                public:
                    RouteConflict();
                    ~RouteConflict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由表实例ID
                     * @return RouteTableId 路由表实例ID
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表实例ID
                     * @param _routeTableId 路由表实例ID
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                    /**
                     * 获取要检查的与之冲突的目的端
                     * @return DestinationCidrBlock 要检查的与之冲突的目的端
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置要检查的与之冲突的目的端
                     * @param _destinationCidrBlock 要检查的与之冲突的目的端
                     * 
                     */
                    void SetDestinationCidrBlock(const std::string& _destinationCidrBlock);

                    /**
                     * 判断参数 DestinationCidrBlock 是否已赋值
                     * @return DestinationCidrBlock 是否已赋值
                     * 
                     */
                    bool DestinationCidrBlockHasBeenSet() const;

                    /**
                     * 获取冲突的路由策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConflictSet 冲突的路由策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Route> GetConflictSet() const;

                    /**
                     * 设置冲突的路由策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _conflictSet 冲突的路由策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConflictSet(const std::vector<Route>& _conflictSet);

                    /**
                     * 判断参数 ConflictSet 是否已赋值
                     * @return ConflictSet 是否已赋值
                     * 
                     */
                    bool ConflictSetHasBeenSet() const;

                private:

                    /**
                     * 路由表实例ID
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                    /**
                     * 要检查的与之冲突的目的端
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * 冲突的路由策略列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Route> m_conflictSet;
                    bool m_conflictSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_ROUTECONFLICT_H_
