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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetPolicyList请求参数结构体
                */
                class GetPolicyListRequest : public AbstractModel
                {
                public:
                    GetPolicyListRequest();
                    ~GetPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始位置
                     * @return DisplayStart 起始位置
                     */
                    int64_t GetDisplayStart() const;

                    /**
                     * 设置起始位置
                     * @param DisplayStart 起始位置
                     */
                    void SetDisplayStart(const int64_t& _displayStart);

                    /**
                     * 判断参数 DisplayStart 是否已赋值
                     * @return DisplayStart 是否已赋值
                     */
                    bool DisplayStartHasBeenSet() const;

                    /**
                     * 获取长度
                     * @return DisplayLength 长度
                     */
                    int64_t GetDisplayLength() const;

                    /**
                     * 设置长度
                     * @param DisplayLength 长度
                     */
                    void SetDisplayLength(const int64_t& _displayLength);

                    /**
                     * 判断参数 DisplayLength 是否已赋值
                     * @return DisplayLength 是否已赋值
                     */
                    bool DisplayLengthHasBeenSet() const;

                private:

                    /**
                     * 起始位置
                     */
                    int64_t m_displayStart;
                    bool m_displayStartHasBeenSet;

                    /**
                     * 长度
                     */
                    int64_t m_displayLength;
                    bool m_displayLengthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETPOLICYLISTREQUEST_H_
