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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_CLOSEWAFPROTECTIONREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_CLOSEWAFPROTECTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * CloseWafProtection请求参数结构体
                */
                class CloseWafProtectionRequest : public AbstractModel
                {
                public:
                    CloseWafProtectionRequest();
                    ~CloseWafProtectionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取网关ID
                     * @return GatewayId 网关ID
                     * 
                     */
                    std::string GetGatewayId() const;

                    /**
                     * 设置网关ID
                     * @param _gatewayId 网关ID
                     * 
                     */
                    void SetGatewayId(const std::string& _gatewayId);

                    /**
                     * 判断参数 GatewayId 是否已赋值
                     * @return GatewayId 是否已赋值
                     * 
                     */
                    bool GatewayIdHasBeenSet() const;

                    /**
                     * 获取 防护资源的类型。
- Global  实例
- Service  服务
- Route  路由
- Object  对象
                     * @return Type  防护资源的类型。
- Global  实例
- Service  服务
- Route  路由
- Object  对象
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置 防护资源的类型。
- Global  实例
- Service  服务
- Route  路由
- Object  对象
                     * @param _type  防护资源的类型。
- Global  实例
- Service  服务
- Route  路由
- Object  对象
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取当资源类型 Type 是 Service 或 Route 的时候，传入的服务或路由的列表
                     * @return List 当资源类型 Type 是 Service 或 Route 的时候，传入的服务或路由的列表
                     * 
                     */
                    std::vector<std::string> GetList() const;

                    /**
                     * 设置当资源类型 Type 是 Service 或 Route 的时候，传入的服务或路由的列表
                     * @param _list 当资源类型 Type 是 Service 或 Route 的时候，传入的服务或路由的列表
                     * 
                     */
                    void SetList(const std::vector<std::string>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 网关ID
                     */
                    std::string m_gatewayId;
                    bool m_gatewayIdHasBeenSet;

                    /**
                     *  防护资源的类型。
- Global  实例
- Service  服务
- Route  路由
- Object  对象
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 当资源类型 Type 是 Service 或 Route 的时候，传入的服务或路由的列表
                     */
                    std::vector<std::string> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_CLOSEWAFPROTECTIONREQUEST_H_
