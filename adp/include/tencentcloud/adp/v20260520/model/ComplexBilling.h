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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_COMPLEXBILLING_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_COMPLEXBILLING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ComplexBillingItem.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ComplexBilling
                */
                class ComplexBilling : public AbstractModel
                {
                public:
                    ComplexBilling();
                    ~ComplexBilling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>复合计费列表</p>
                     * @return ComplexList <p>复合计费列表</p>
                     * 
                     */
                    std::vector<ComplexBillingItem> GetComplexList() const;

                    /**
                     * 设置<p>复合计费列表</p>
                     * @param _complexList <p>复合计费列表</p>
                     * 
                     */
                    void SetComplexList(const std::vector<ComplexBillingItem>& _complexList);

                    /**
                     * 判断参数 ComplexList 是否已赋值
                     * @return ComplexList 是否已赋值
                     * 
                     */
                    bool ComplexListHasBeenSet() const;

                private:

                    /**
                     * <p>复合计费列表</p>
                     */
                    std::vector<ComplexBillingItem> m_complexList;
                    bool m_complexListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_COMPLEXBILLING_H_
