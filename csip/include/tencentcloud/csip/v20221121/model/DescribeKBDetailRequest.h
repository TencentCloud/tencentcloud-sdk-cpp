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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeKBDetail请求参数结构体
                */
                class DescribeKBDetailRequest : public AbstractModel
                {
                public:
                    DescribeKBDetailRequest();
                    ~DescribeKBDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取KB 补丁内部 ID（kb_info.id）
                     * @return KBID KB 补丁内部 ID（kb_info.id）
                     * 
                     */
                    uint64_t GetKBID() const;

                    /**
                     * 设置KB 补丁内部 ID（kb_info.id）
                     * @param _kBID KB 补丁内部 ID（kb_info.id）
                     * 
                     */
                    void SetKBID(const uint64_t& _kBID);

                    /**
                     * 判断参数 KBID 是否已赋值
                     * @return KBID 是否已赋值
                     * 
                     */
                    bool KBIDHasBeenSet() const;

                private:

                    /**
                     * KB 补丁内部 ID（kb_info.id）
                     */
                    uint64_t m_kBID;
                    bool m_kBIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBDETAILREQUEST_H_
