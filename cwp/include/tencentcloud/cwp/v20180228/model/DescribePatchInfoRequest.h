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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFOREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribePatchInfo请求参数结构体
                */
                class DescribePatchInfoRequest : public AbstractModel
                {
                public:
                    DescribePatchInfoRequest();
                    ~DescribePatchInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取补丁id
                     * @return KbId 补丁id
                     * 
                     */
                    uint64_t GetKbId() const;

                    /**
                     * 设置补丁id
                     * @param _kbId 补丁id
                     * 
                     */
                    void SetKbId(const uint64_t& _kbId);

                    /**
                     * 判断参数 KbId 是否已赋值
                     * @return KbId 是否已赋值
                     * 
                     */
                    bool KbIdHasBeenSet() const;

                private:

                    /**
                     * 补丁id
                     */
                    uint64_t m_kbId;
                    bool m_kbIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEPATCHINFOREQUEST_H_
