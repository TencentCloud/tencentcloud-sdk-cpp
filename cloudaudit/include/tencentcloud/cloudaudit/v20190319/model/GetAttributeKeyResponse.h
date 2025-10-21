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

#ifndef TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_GETATTRIBUTEKEYRESPONSE_H_
#define TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_GETATTRIBUTEKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudaudit/v20190319/model/AttributeKeyDetail.h>


namespace TencentCloud
{
    namespace Cloudaudit
    {
        namespace V20190319
        {
            namespace Model
            {
                /**
                * GetAttributeKey返回参数结构体
                */
                class GetAttributeKeyResponse : public AbstractModel
                {
                public:
                    GetAttributeKeyResponse();
                    ~GetAttributeKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取AttributeKey的有效取值范围
                     * @return AttributeKeyDetails AttributeKey的有效取值范围
                     * 
                     */
                    std::vector<AttributeKeyDetail> GetAttributeKeyDetails() const;

                    /**
                     * 判断参数 AttributeKeyDetails 是否已赋值
                     * @return AttributeKeyDetails 是否已赋值
                     * 
                     */
                    bool AttributeKeyDetailsHasBeenSet() const;

                private:

                    /**
                     * AttributeKey的有效取值范围
                     */
                    std::vector<AttributeKeyDetail> m_attributeKeyDetails;
                    bool m_attributeKeyDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDAUDIT_V20190319_MODEL_GETATTRIBUTEKEYRESPONSE_H_
