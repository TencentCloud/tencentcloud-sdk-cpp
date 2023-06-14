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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAYCCNROUTE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAYCCNROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 专线网关云联网路由（IDC网段）对象
                */
                class DirectConnectGatewayCcnRoute : public AbstractModel
                {
                public:
                    DirectConnectGatewayCcnRoute();
                    ~DirectConnectGatewayCcnRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取路由ID。
                     * @return RouteId 路由ID。
                     * 
                     */
                    std::string GetRouteId() const;

                    /**
                     * 设置路由ID。
                     * @param _routeId 路由ID。
                     * 
                     */
                    void SetRouteId(const std::string& _routeId);

                    /**
                     * 判断参数 RouteId 是否已赋值
                     * @return RouteId 是否已赋值
                     * 
                     */
                    bool RouteIdHasBeenSet() const;

                    /**
                     * 获取IDC网段。
                     * @return DestinationCidrBlock IDC网段。
                     * 
                     */
                    std::string GetDestinationCidrBlock() const;

                    /**
                     * 设置IDC网段。
                     * @param _destinationCidrBlock IDC网段。
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
                     * 获取`BGP`的`AS-Path`属性。
                     * @return ASPath `BGP`的`AS-Path`属性。
                     * 
                     */
                    std::vector<std::string> GetASPath() const;

                    /**
                     * 设置`BGP`的`AS-Path`属性。
                     * @param _aSPath `BGP`的`AS-Path`属性。
                     * 
                     */
                    void SetASPath(const std::vector<std::string>& _aSPath);

                    /**
                     * 判断参数 ASPath 是否已赋值
                     * @return ASPath 是否已赋值
                     * 
                     */
                    bool ASPathHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Description 备注
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注
                     * @param _description 备注
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return UpdateTime 最后更新时间
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _updateTime 最后更新时间
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 路由ID。
                     */
                    std::string m_routeId;
                    bool m_routeIdHasBeenSet;

                    /**
                     * IDC网段。
                     */
                    std::string m_destinationCidrBlock;
                    bool m_destinationCidrBlockHasBeenSet;

                    /**
                     * `BGP`的`AS-Path`属性。
                     */
                    std::vector<std::string> m_aSPath;
                    bool m_aSPathHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_DIRECTCONNECTGATEWAYCCNROUTE_H_
