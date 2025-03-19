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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_BILLCOMPONENT_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_BILLCOMPONENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * 组件类型筛选列表
                */
                class BillComponent : public AbstractModel
                {
                public:
                    BillComponent();
                    ~BillComponent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组件类型编码
                     * @return ComponentCode 组件类型编码
                     * 
                     */
                    std::string GetComponentCode() const;

                    /**
                     * 设置组件类型编码
                     * @param _componentCode 组件类型编码
                     * 
                     */
                    void SetComponentCode(const std::string& _componentCode);

                    /**
                     * 判断参数 ComponentCode 是否已赋值
                     * @return ComponentCode 是否已赋值
                     * 
                     */
                    bool ComponentCodeHasBeenSet() const;

                    /**
                     * 获取组件类型：用户购买的产品或服务对应的组件大类
                     * @return ComponentCodeName 组件类型：用户购买的产品或服务对应的组件大类
                     * 
                     */
                    std::string GetComponentCodeName() const;

                    /**
                     * 设置组件类型：用户购买的产品或服务对应的组件大类
                     * @param _componentCodeName 组件类型：用户购买的产品或服务对应的组件大类
                     * 
                     */
                    void SetComponentCodeName(const std::string& _componentCodeName);

                    /**
                     * 判断参数 ComponentCodeName 是否已赋值
                     * @return ComponentCodeName 是否已赋值
                     * 
                     */
                    bool ComponentCodeNameHasBeenSet() const;

                private:

                    /**
                     * 组件类型编码
                     */
                    std::string m_componentCode;
                    bool m_componentCodeHasBeenSet;

                    /**
                     * 组件类型：用户购买的产品或服务对应的组件大类
                     */
                    std::string m_componentCodeName;
                    bool m_componentCodeNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_BILLCOMPONENT_H_
