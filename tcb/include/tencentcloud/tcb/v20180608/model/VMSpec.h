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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_VMSPEC_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_VMSPEC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/VMSpecLightHouse.h>
#include <tencentcloud/tcb/v20180608/model/VMPrice.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * VM规格
                */
                class VMSpec : public AbstractModel
                {
                public:
                    VMSpec();
                    ~VMSpec() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取LightHouse=轻量云服务器
CVM=云服务器
                     * @return Type LightHouse=轻量云服务器
CVM=云服务器
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置LightHouse=轻量云服务器
CVM=云服务器
                     * @param _type LightHouse=轻量云服务器
CVM=云服务器
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
                     * 获取轻量云服务器规格。
当Type=LightHouse时有效
                     * @return LightHouseSpec 轻量云服务器规格。
当Type=LightHouse时有效
                     * 
                     */
                    VMSpecLightHouse GetLightHouseSpec() const;

                    /**
                     * 设置轻量云服务器规格。
当Type=LightHouse时有效
                     * @param _lightHouseSpec 轻量云服务器规格。
当Type=LightHouse时有效
                     * 
                     */
                    void SetLightHouseSpec(const VMSpecLightHouse& _lightHouseSpec);

                    /**
                     * 判断参数 LightHouseSpec 是否已赋值
                     * @return LightHouseSpec 是否已赋值
                     * 
                     */
                    bool LightHouseSpecHasBeenSet() const;

                    /**
                     * 获取价格信息
                     * @return Price 价格信息
                     * 
                     */
                    VMPrice GetPrice() const;

                    /**
                     * 设置价格信息
                     * @param _price 价格信息
                     * 
                     */
                    void SetPrice(const VMPrice& _price);

                    /**
                     * 判断参数 Price 是否已赋值
                     * @return Price 是否已赋值
                     * 
                     */
                    bool PriceHasBeenSet() const;

                private:

                    /**
                     * LightHouse=轻量云服务器
CVM=云服务器
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 轻量云服务器规格。
当Type=LightHouse时有效
                     */
                    VMSpecLightHouse m_lightHouseSpec;
                    bool m_lightHouseSpecHasBeenSet;

                    /**
                     * 价格信息
                     */
                    VMPrice m_price;
                    bool m_priceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_VMSPEC_H_
