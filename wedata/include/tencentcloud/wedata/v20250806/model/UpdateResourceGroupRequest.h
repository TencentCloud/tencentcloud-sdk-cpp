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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourceNumber.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * UpdateResourceGroup请求参数结构体
                */
                class UpdateResourceGroupRequest : public AbstractModel
                {
                public:
                    UpdateResourceGroupRequest();
                    ~UpdateResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组id
                     * @return Id 资源组id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置资源组id
                     * @param _id 资源组id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取**变更配置(变配、续费、修改资源包数量 不能同时操作), 变配无法修改资源组类型**

实时集成资源组  
- i32c(实时数据同步-16C64G)

离线集成资源组
- integrated(离线数据同步-8C16G)
- i16(离线数据同步-8C32G)

调度资源组
- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)

数据服务资源组
- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     * @return Type **变更配置(变配、续费、修改资源包数量 不能同时操作), 变配无法修改资源组类型**

实时集成资源组  
- i32c(实时数据同步-16C64G)

离线集成资源组
- integrated(离线数据同步-8C16G)
- i16(离线数据同步-8C32G)

调度资源组
- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)

数据服务资源组
- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置**变更配置(变配、续费、修改资源包数量 不能同时操作), 变配无法修改资源组类型**

实时集成资源组  
- i32c(实时数据同步-16C64G)

离线集成资源组
- integrated(离线数据同步-8C16G)
- i16(离线数据同步-8C32G)

调度资源组
- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)

数据服务资源组
- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     * @param _type **变更配置(变配、续费、修改资源包数量 不能同时操作), 变配无法修改资源组类型**

实时集成资源组  
- i32c(实时数据同步-16C64G)

离线集成资源组
- integrated(离线数据同步-8C16G)
- i16(离线数据同步-8C32G)

调度资源组
- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)

数据服务资源组
- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
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
                     * 获取续费时长，单位月(变配、续费、修改资源包数量 不能同时操作)
                     * @return PurchasePeriod 续费时长，单位月(变配、续费、修改资源包数量 不能同时操作)
                     * 
                     */
                    int64_t GetPurchasePeriod() const;

                    /**
                     * 设置续费时长，单位月(变配、续费、修改资源包数量 不能同时操作)
                     * @param _purchasePeriod 续费时长，单位月(变配、续费、修改资源包数量 不能同时操作)
                     * 
                     */
                    void SetPurchasePeriod(const int64_t& _purchasePeriod);

                    /**
                     * 判断参数 PurchasePeriod 是否已赋值
                     * @return PurchasePeriod 是否已赋值
                     * 
                     */
                    bool PurchasePeriodHasBeenSet() const;

                    /**
                     * 获取增加/减少资源包的数量(变配、续费、修改资源包数量 不能同时操作)
                     * @return Number 增加/减少资源包的数量(变配、续费、修改资源包数量 不能同时操作)
                     * 
                     */
                    ResourceNumber GetNumber() const;

                    /**
                     * 设置增加/减少资源包的数量(变配、续费、修改资源包数量 不能同时操作)
                     * @param _number 增加/减少资源包的数量(变配、续费、修改资源包数量 不能同时操作)
                     * 
                     */
                    void SetNumber(const ResourceNumber& _number);

                    /**
                     * 判断参数 Number 是否已赋值
                     * @return Number 是否已赋值
                     * 
                     */
                    bool NumberHasBeenSet() const;

                    /**
                     * 获取是否自动续费，续费参数PurchasePeriod不为空时可以生效
                     * @return AutoRenewEnabled 是否自动续费，续费参数PurchasePeriod不为空时可以生效
                     * 
                     */
                    bool GetAutoRenewEnabled() const;

                    /**
                     * 设置是否自动续费，续费参数PurchasePeriod不为空时可以生效
                     * @param _autoRenewEnabled 是否自动续费，续费参数PurchasePeriod不为空时可以生效
                     * 
                     */
                    void SetAutoRenewEnabled(const bool& _autoRenewEnabled);

                    /**
                     * 判断参数 AutoRenewEnabled 是否已赋值
                     * @return AutoRenewEnabled 是否已赋值
                     * 
                     */
                    bool AutoRenewEnabledHasBeenSet() const;

                private:

                    /**
                     * 资源组id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * **变更配置(变配、续费、修改资源包数量 不能同时操作), 变配无法修改资源组类型**

实时集成资源组  
- i32c(实时数据同步-16C64G)

离线集成资源组
- integrated(离线数据同步-8C16G)
- i16(离线数据同步-8C32G)

调度资源组
- s_test(测试规格)
- s_small(基础规格)
- s_medium(普及规格)
- s_large(专业规格)

数据服务资源组
- ds_t(测试规格)
- ds_s(基础规格)
- ds_m(普及规格)
- ds_l(专业规格)
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 续费时长，单位月(变配、续费、修改资源包数量 不能同时操作)
                     */
                    int64_t m_purchasePeriod;
                    bool m_purchasePeriodHasBeenSet;

                    /**
                     * 增加/减少资源包的数量(变配、续费、修改资源包数量 不能同时操作)
                     */
                    ResourceNumber m_number;
                    bool m_numberHasBeenSet;

                    /**
                     * 是否自动续费，续费参数PurchasePeriod不为空时可以生效
                     */
                    bool m_autoRenewEnabled;
                    bool m_autoRenewEnabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_UPDATERESOURCEGROUPREQUEST_H_
