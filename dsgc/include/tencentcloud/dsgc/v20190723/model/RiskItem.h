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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_RISKITEM_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_RISKITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 风险TOP5统计项
                */
                class RiskItem : public AbstractModel
                {
                public:
                    RiskItem();
                    ~RiskItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return ItemName 名称
                     * 
                     */
                    std::string GetItemName() const;

                    /**
                     * 设置名称
                     * @param _itemName 名称
                     * 
                     */
                    void SetItemName(const std::string& _itemName);

                    /**
                     * 判断参数 ItemName 是否已赋值
                     * @return ItemName 是否已赋值
                     * 
                     */
                    bool ItemNameHasBeenSet() const;

                    /**
                     * 获取风险数量
                     * @return RiskNum 风险数量
                     * 
                     */
                    uint64_t GetRiskNum() const;

                    /**
                     * 设置风险数量
                     * @param _riskNum 风险数量
                     * 
                     */
                    void SetRiskNum(const uint64_t& _riskNum);

                    /**
                     * 判断参数 RiskNum 是否已赋值
                     * @return RiskNum 是否已赋值
                     * 
                     */
                    bool RiskNumHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_itemName;
                    bool m_itemNameHasBeenSet;

                    /**
                     * 风险数量
                     */
                    uint64_t m_riskNum;
                    bool m_riskNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_RISKITEM_H_
