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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONREQUEST_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONREQUEST_H_

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
                * DescribeWafProtection请求参数结构体
                */
                class DescribeWafProtectionRequest : public AbstractModel
                {
                public:
                    DescribeWafProtectionRequest();
                    ~DescribeWafProtectionRequest() = default;
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
                     * @deprecated
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
                     * @deprecated
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * @deprecated
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取防护资源类型列表，支持查询多个类型（Global、Service、Route、Object）。为空时，默认查询Global类型。
                     * @return TypeList 防护资源类型列表，支持查询多个类型（Global、Service、Route、Object）。为空时，默认查询Global类型。
                     * 
                     */
                    std::vector<std::string> GetTypeList() const;

                    /**
                     * 设置防护资源类型列表，支持查询多个类型（Global、Service、Route、Object）。为空时，默认查询Global类型。
                     * @param _typeList 防护资源类型列表，支持查询多个类型（Global、Service、Route、Object）。为空时，默认查询Global类型。
                     * 
                     */
                    void SetTypeList(const std::vector<std::string>& _typeList);

                    /**
                     * 判断参数 TypeList 是否已赋值
                     * @return TypeList 是否已赋值
                     * 
                     */
                    bool TypeListHasBeenSet() const;

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
                     * 防护资源类型列表，支持查询多个类型（Global、Service、Route、Object）。为空时，默认查询Global类型。
                     */
                    std::vector<std::string> m_typeList;
                    bool m_typeListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_DESCRIBEWAFPROTECTIONREQUEST_H_
