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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/WhiteboxKeyInfo.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * DescribeWhiteBoxKey返回参数结构体
                */
                class DescribeWhiteBoxKeyResponse : public AbstractModel
                {
                public:
                    DescribeWhiteBoxKeyResponse();
                    ~DescribeWhiteBoxKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取白盒密钥信息
                     * @return KeyInfo 白盒密钥信息
                     * 
                     */
                    WhiteboxKeyInfo GetKeyInfo() const;

                    /**
                     * 判断参数 KeyInfo 是否已赋值
                     * @return KeyInfo 是否已赋值
                     * 
                     */
                    bool KeyInfoHasBeenSet() const;

                private:

                    /**
                     * 白盒密钥信息
                     */
                    WhiteboxKeyInfo m_keyInfo;
                    bool m_keyInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_DESCRIBEWHITEBOXKEYRESPONSE_H_
