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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTARGET_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcr/v20190924/model/Header.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * 触发器目标
                */
                class WebhookTarget : public AbstractModel
                {
                public:
                    WebhookTarget();
                    ~WebhookTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目标地址
                     * @return Address 目标地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置目标地址
                     * @param _address 目标地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                    /**
                     * 获取自定义 Headers
                     * @return Headers 自定义 Headers
                     * 
                     */
                    std::vector<Header> GetHeaders() const;

                    /**
                     * 设置自定义 Headers
                     * @param _headers 自定义 Headers
                     * 
                     */
                    void SetHeaders(const std::vector<Header>& _headers);

                    /**
                     * 判断参数 Headers 是否已赋值
                     * @return Headers 是否已赋值
                     * 
                     */
                    bool HeadersHasBeenSet() const;

                private:

                    /**
                     * 目标地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                    /**
                     * 自定义 Headers
                     */
                    std::vector<Header> m_headers;
                    bool m_headersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_WEBHOOKTARGET_H_
