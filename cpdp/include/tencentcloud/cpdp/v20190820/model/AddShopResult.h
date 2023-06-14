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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ADDSHOPRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ADDSHOPRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 添加门店响应对象
                */
                class AddShopResult : public AbstractModel
                {
                public:
                    AddShopResult();
                    ~AddShopResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ShopNo 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetShopNo() const;

                    /**
                     * 设置门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _shopNo 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetShopNo(const std::string& _shopNo);

                    /**
                     * 判断参数 ShopNo 是否已赋值
                     * @return ShopNo 是否已赋值
                     * 
                     */
                    bool ShopNoHasBeenSet() const;

                private:

                    /**
                     * 门店编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_shopNo;
                    bool m_shopNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ADDSHOPRESULT_H_
