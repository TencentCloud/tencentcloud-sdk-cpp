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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICERESULTV2_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICERESULTV2_H_

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
                * 红票结果V2
                */
                class CreateRedInvoiceResultV2 : public AbstractModel
                {
                public:
                    CreateRedInvoiceResultV2();
                    ~CreateRedInvoiceResultV2() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取红票ID
                     * @return InvoiceId 红票ID
                     * 
                     */
                    std::string GetInvoiceId() const;

                    /**
                     * 设置红票ID
                     * @param _invoiceId 红票ID
                     * 
                     */
                    void SetInvoiceId(const std::string& _invoiceId);

                    /**
                     * 判断参数 InvoiceId 是否已赋值
                     * @return InvoiceId 是否已赋值
                     * 
                     */
                    bool InvoiceIdHasBeenSet() const;

                private:

                    /**
                     * 红票ID
                     */
                    std::string m_invoiceId;
                    bool m_invoiceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEREDINVOICERESULTV2_H_
