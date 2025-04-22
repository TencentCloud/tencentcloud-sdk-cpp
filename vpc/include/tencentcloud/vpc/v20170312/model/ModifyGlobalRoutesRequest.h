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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGLOBALROUTESREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGLOBALROUTESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/GlobalRoute.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyGlobalRoutes请求参数结构体
                */
                class ModifyGlobalRoutesRequest : public AbstractModel
                {
                public:
                    ModifyGlobalRoutesRequest();
                    ~ModifyGlobalRoutesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取VPC唯一Id。
                     * @return VpcId VPC唯一Id。
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置VPC唯一Id。
                     * @param _vpcId VPC唯一Id。
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取全局路由对象。仅支持修改：'Description'，其他字段暂不支持。
                     * @return GlobalRoutes 全局路由对象。仅支持修改：'Description'，其他字段暂不支持。
                     * 
                     */
                    std::vector<GlobalRoute> GetGlobalRoutes() const;

                    /**
                     * 设置全局路由对象。仅支持修改：'Description'，其他字段暂不支持。
                     * @param _globalRoutes 全局路由对象。仅支持修改：'Description'，其他字段暂不支持。
                     * 
                     */
                    void SetGlobalRoutes(const std::vector<GlobalRoute>& _globalRoutes);

                    /**
                     * 判断参数 GlobalRoutes 是否已赋值
                     * @return GlobalRoutes 是否已赋值
                     * 
                     */
                    bool GlobalRoutesHasBeenSet() const;

                private:

                    /**
                     * VPC唯一Id。
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 全局路由对象。仅支持修改：'Description'，其他字段暂不支持。
                     */
                    std::vector<GlobalRoute> m_globalRoutes;
                    bool m_globalRoutesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYGLOBALROUTESREQUEST_H_
