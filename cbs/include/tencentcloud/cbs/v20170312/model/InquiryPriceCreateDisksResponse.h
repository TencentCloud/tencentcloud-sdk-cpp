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

#ifndef TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSRESPONSE_H_
#define TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cbs/v20170312/model/Price.h>


namespace TencentCloud
{
    namespace Cbs
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * InquiryPriceCreateDisks返回参数结构体
                */
                class InquiryPriceCreateDisksResponse : public AbstractModel
                {
                public:
                    InquiryPriceCreateDisksResponse();
                    ~InquiryPriceCreateDisksResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取描述了新购云盘的价格。
                     * @return DiskPrice 描述了新购云盘的价格。
                     * 
                     */
                    Price GetDiskPrice() const;

                    /**
                     * 判断参数 DiskPrice 是否已赋值
                     * @return DiskPrice 是否已赋值
                     * 
                     */
                    bool DiskPriceHasBeenSet() const;

                private:

                    /**
                     * 描述了新购云盘的价格。
                     */
                    Price m_diskPrice;
                    bool m_diskPriceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CBS_V20170312_MODEL_INQUIRYPRICECREATEDISKSRESPONSE_H_
