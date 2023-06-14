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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETPRODUCTSREQUEST_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETPRODUCTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetProducts请求参数结构体
                */
                class GetProductsRequest : public AbstractModel
                {
                public:
                    GetProductsRequest();
                    ~GetProductsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移
                     * @return Offset 偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移
                     * @param _offset 偏移
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取长度
                     * @return Length 长度
                     * 
                     */
                    uint64_t GetLength() const;

                    /**
                     * 设置长度
                     * @param _length 长度
                     * 
                     */
                    void SetLength(const uint64_t& _length);

                    /**
                     * 判断参数 Length 是否已赋值
                     * @return Length 是否已赋值
                     * 
                     */
                    bool LengthHasBeenSet() const;

                private:

                    /**
                     * 偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 长度
                     */
                    uint64_t m_length;
                    bool m_lengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETPRODUCTSREQUEST_H_
