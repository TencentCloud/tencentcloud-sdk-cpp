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

#ifndef TENCENTCLOUD_IGTM_V20231024_MODEL_COSTITEM_H_
#define TENCENTCLOUD_IGTM_V20231024_MODEL_COSTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Igtm
    {
        namespace V20231024
        {
            namespace Model
            {
                /**
                * 计费项
                */
                class CostItem : public AbstractModel
                {
                public:
                    CostItem();
                    ~CostItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费项名称
                     * @return CostName 计费项名称
                     * 
                     */
                    std::string GetCostName() const;

                    /**
                     * 设置计费项名称
                     * @param _costName 计费项名称
                     * 
                     */
                    void SetCostName(const std::string& _costName);

                    /**
                     * 判断参数 CostName 是否已赋值
                     * @return CostName 是否已赋值
                     * 
                     */
                    bool CostNameHasBeenSet() const;

                    /**
                     * 获取计费项值
                     * @return CostValue 计费项值
                     * 
                     */
                    uint64_t GetCostValue() const;

                    /**
                     * 设置计费项值
                     * @param _costValue 计费项值
                     * 
                     */
                    void SetCostValue(const uint64_t& _costValue);

                    /**
                     * 判断参数 CostValue 是否已赋值
                     * @return CostValue 是否已赋值
                     * 
                     */
                    bool CostValueHasBeenSet() const;

                private:

                    /**
                     * 计费项名称
                     */
                    std::string m_costName;
                    bool m_costNameHasBeenSet;

                    /**
                     * 计费项值
                     */
                    uint64_t m_costValue;
                    bool m_costValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IGTM_V20231024_MODEL_COSTITEM_H_
