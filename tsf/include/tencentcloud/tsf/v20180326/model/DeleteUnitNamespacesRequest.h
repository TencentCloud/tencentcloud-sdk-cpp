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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DELETEUNITNAMESPACESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DELETEUNITNAMESPACESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DeleteUnitNamespaces请求参数结构体
                */
                class DeleteUnitNamespacesRequest : public AbstractModel
                {
                public:
                    DeleteUnitNamespacesRequest();
                    ~DeleteUnitNamespacesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关实体ID
                     * @return GatewayInstanceId 网关实体ID
                     * 
                     */
                    std::string GetGatewayInstanceId() const;

                    /**
                     * 设置网关实体ID
                     * @param _gatewayInstanceId 网关实体ID
                     * 
                     */
                    void SetGatewayInstanceId(const std::string& _gatewayInstanceId);

                    /**
                     * 判断参数 GatewayInstanceId 是否已赋值
                     * @return GatewayInstanceId 是否已赋值
                     * 
                     */
                    bool GatewayInstanceIdHasBeenSet() const;

                    /**
                     * 获取单元化命名空间ID数组
                     * @return UnitNamespaceList 单元化命名空间ID数组
                     * 
                     */
                    std::vector<std::string> GetUnitNamespaceList() const;

                    /**
                     * 设置单元化命名空间ID数组
                     * @param _unitNamespaceList 单元化命名空间ID数组
                     * 
                     */
                    void SetUnitNamespaceList(const std::vector<std::string>& _unitNamespaceList);

                    /**
                     * 判断参数 UnitNamespaceList 是否已赋值
                     * @return UnitNamespaceList 是否已赋值
                     * 
                     */
                    bool UnitNamespaceListHasBeenSet() const;

                private:

                    /**
                     * 网关实体ID
                     */
                    std::string m_gatewayInstanceId;
                    bool m_gatewayInstanceIdHasBeenSet;

                    /**
                     * 单元化命名空间ID数组
                     */
                    std::vector<std::string> m_unitNamespaceList;
                    bool m_unitNamespaceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DELETEUNITNAMESPACESREQUEST_H_
