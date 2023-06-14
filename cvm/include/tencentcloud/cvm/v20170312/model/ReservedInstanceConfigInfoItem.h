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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCECONFIGINFOITEM_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCECONFIGINFOITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/ReservedInstanceFamilyItem.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 预留实例静态配置信息。预留实例当前只针对国际站白名单用户开放。
                */
                class ReservedInstanceConfigInfoItem : public AbstractModel
                {
                public:
                    ReservedInstanceConfigInfoItem();
                    ~ReservedInstanceConfigInfoItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例规格。
                     * @return Type 实例规格。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置实例规格。
                     * @param _type 实例规格。
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
                     * 获取实例规格名称。
                     * @return TypeName 实例规格名称。
                     * 
                     */
                    std::string GetTypeName() const;

                    /**
                     * 设置实例规格名称。
                     * @param _typeName 实例规格名称。
                     * 
                     */
                    void SetTypeName(const std::string& _typeName);

                    /**
                     * 判断参数 TypeName 是否已赋值
                     * @return TypeName 是否已赋值
                     * 
                     */
                    bool TypeNameHasBeenSet() const;

                    /**
                     * 获取优先级。
                     * @return Order 优先级。
                     * 
                     */
                    int64_t GetOrder() const;

                    /**
                     * 设置优先级。
                     * @param _order 优先级。
                     * 
                     */
                    void SetOrder(const int64_t& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取实例族信息列表。
                     * @return InstanceFamilies 实例族信息列表。
                     * 
                     */
                    std::vector<ReservedInstanceFamilyItem> GetInstanceFamilies() const;

                    /**
                     * 设置实例族信息列表。
                     * @param _instanceFamilies 实例族信息列表。
                     * 
                     */
                    void SetInstanceFamilies(const std::vector<ReservedInstanceFamilyItem>& _instanceFamilies);

                    /**
                     * 判断参数 InstanceFamilies 是否已赋值
                     * @return InstanceFamilies 是否已赋值
                     * 
                     */
                    bool InstanceFamiliesHasBeenSet() const;

                private:

                    /**
                     * 实例规格。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 实例规格名称。
                     */
                    std::string m_typeName;
                    bool m_typeNameHasBeenSet;

                    /**
                     * 优先级。
                     */
                    int64_t m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * 实例族信息列表。
                     */
                    std::vector<ReservedInstanceFamilyItem> m_instanceFamilies;
                    bool m_instanceFamiliesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_RESERVEDINSTANCECONFIGINFOITEM_H_
