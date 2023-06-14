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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_GENERATERANDOMREQUEST_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_GENERATERANDOMREQUEST_H_

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
                * GenerateRandom请求参数结构体
                */
                class GenerateRandomRequest : public AbstractModel
                {
                public:
                    GenerateRandomRequest();
                    ~GenerateRandomRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取生成的随机数的长度。最小值为1， 最大值为1024。
                     * @return NumberOfBytes 生成的随机数的长度。最小值为1， 最大值为1024。
                     * 
                     */
                    uint64_t GetNumberOfBytes() const;

                    /**
                     * 设置生成的随机数的长度。最小值为1， 最大值为1024。
                     * @param _numberOfBytes 生成的随机数的长度。最小值为1， 最大值为1024。
                     * 
                     */
                    void SetNumberOfBytes(const uint64_t& _numberOfBytes);

                    /**
                     * 判断参数 NumberOfBytes 是否已赋值
                     * @return NumberOfBytes 是否已赋值
                     * 
                     */
                    bool NumberOfBytesHasBeenSet() const;

                private:

                    /**
                     * 生成的随机数的长度。最小值为1， 最大值为1024。
                     */
                    uint64_t m_numberOfBytes;
                    bool m_numberOfBytesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_GENERATERANDOMREQUEST_H_
