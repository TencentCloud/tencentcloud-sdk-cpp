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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_ROUTETABLECONFLICT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_ROUTETABLECONFLICT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 路由表冲突对象
                */
                class RouteTableConflict : public AbstractModel
                {
                public:
                    RouteTableConflict();
                    ~RouteTableConflict() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由表类型。
                     * @return RouteTableType 路由表类型。
                     * 
                     */
                    std::string GetRouteTableType() const;

                    /**
                     * 设置路由表类型。
                     * @param _routeTableType 路由表类型。
                     * 
                     */
                    void SetRouteTableType(const std::string& _routeTableType);

                    /**
                     * 判断参数 RouteTableType 是否已赋值
                     * @return RouteTableType 是否已赋值
                     * 
                     */
                    bool RouteTableTypeHasBeenSet() const;

                    /**
                     * 获取路由表CIDR。
                     * @return RouteTableCidrBlock 路由表CIDR。
                     * 
                     */
                    std::string GetRouteTableCidrBlock() const;

                    /**
                     * 设置路由表CIDR。
                     * @param _routeTableCidrBlock 路由表CIDR。
                     * 
                     */
                    void SetRouteTableCidrBlock(const std::string& _routeTableCidrBlock);

                    /**
                     * 判断参数 RouteTableCidrBlock 是否已赋值
                     * @return RouteTableCidrBlock 是否已赋值
                     * 
                     */
                    bool RouteTableCidrBlockHasBeenSet() const;

                    /**
                     * 获取路由表名称。
                     * @return RouteTableName 路由表名称。
                     * 
                     */
                    std::string GetRouteTableName() const;

                    /**
                     * 设置路由表名称。
                     * @param _routeTableName 路由表名称。
                     * 
                     */
                    void SetRouteTableName(const std::string& _routeTableName);

                    /**
                     * 判断参数 RouteTableName 是否已赋值
                     * @return RouteTableName 是否已赋值
                     * 
                     */
                    bool RouteTableNameHasBeenSet() const;

                    /**
                     * 获取路由表ID。
                     * @return RouteTableId 路由表ID。
                     * 
                     */
                    std::string GetRouteTableId() const;

                    /**
                     * 设置路由表ID。
                     * @param _routeTableId 路由表ID。
                     * 
                     */
                    void SetRouteTableId(const std::string& _routeTableId);

                    /**
                     * 判断参数 RouteTableId 是否已赋值
                     * @return RouteTableId 是否已赋值
                     * 
                     */
                    bool RouteTableIdHasBeenSet() const;

                private:

                    /**
                     * 路由表类型。
                     */
                    std::string m_routeTableType;
                    bool m_routeTableTypeHasBeenSet;

                    /**
                     * 路由表CIDR。
                     */
                    std::string m_routeTableCidrBlock;
                    bool m_routeTableCidrBlockHasBeenSet;

                    /**
                     * 路由表名称。
                     */
                    std::string m_routeTableName;
                    bool m_routeTableNameHasBeenSet;

                    /**
                     * 路由表ID。
                     */
                    std::string m_routeTableId;
                    bool m_routeTableIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_ROUTETABLECONFLICT_H_
