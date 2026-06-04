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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TOOLBILLING_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TOOLBILLING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * ToolBilling
                */
                class ToolBilling : public AbstractModel
                {
                public:
                    ToolBilling();
                    ~ToolBilling() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 免费 |
| 1 | 限时免费 |
| 2 | 官方收费 |
| 3 | 官方收费(存量老用户限时免费) |
                     * @return BillingType 计费类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 免费 |
| 1 | 限时免费 |
| 2 | 官方收费 |
| 3 | 官方收费(存量老用户限时免费) |
                     * 
                     */
                    int64_t GetBillingType() const;

                    /**
                     * 设置计费类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 免费 |
| 1 | 限时免费 |
| 2 | 官方收费 |
| 3 | 官方收费(存量老用户限时免费) |
                     * @param _billingType 计费类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 免费 |
| 1 | 限时免费 |
| 2 | 官方收费 |
| 3 | 官方收费(存量老用户限时免费) |
                     * 
                     */
                    void SetBillingType(const int64_t& _billingType);

                    /**
                     * 判断参数 BillingType 是否已赋值
                     * @return BillingType 是否已赋值
                     * 
                     */
                    bool BillingTypeHasBeenSet() const;

                private:

                    /**
                     * 计费类型
枚举值:
| uint | 描述 |
| --- | --- |
| 0 | 免费 |
| 1 | 限时免费 |
| 2 | 官方收费 |
| 3 | 官方收费(存量老用户限时免费) |
                     */
                    int64_t m_billingType;
                    bool m_billingTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TOOLBILLING_H_
