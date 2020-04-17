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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeWhiteBoxKeyDetails请求参数结构体
                */
                class DescribeWhiteBoxKeyDetailsRequest : public AbstractModel
                {
                public:
                    DescribeWhiteBoxKeyDetailsRequest();
                    ~DescribeWhiteBoxKeyDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取过滤条件：密钥的状态，0：disabled，1：enabled
                     * @return KeyStatus 过滤条件：密钥的状态，0：disabled，1：enabled
                     */
                    int64_t GetKeyStatus() const;

                    /**
                     * 设置过滤条件：密钥的状态，0：disabled，1：enabled
                     * @param KeyStatus 过滤条件：密钥的状态，0：disabled，1：enabled
                     */
                    void SetKeyStatus(const int64_t& _keyStatus);

                    /**
                     * 判断参数 KeyStatus 是否已赋值
                     * @return KeyStatus 是否已赋值
                     */
                    bool KeyStatusHasBeenSet() const;

                private:

                    /**
                     * 过滤条件：密钥的状态，0：disabled，1：enabled
                     */
                    int64_t m_keyStatus;
                    bool m_keyStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYDETAILSREQUEST_H_
