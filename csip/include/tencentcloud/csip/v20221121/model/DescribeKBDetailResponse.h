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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBDETAILRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/KBDetail.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeKBDetail返回参数结构体
                */
                class DescribeKBDetailResponse : public AbstractModel
                {
                public:
                    DescribeKBDetailResponse();
                    ~DescribeKBDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Windows KB 补丁详细信息
                     * @return KBDetail Windows KB 补丁详细信息
                     * 
                     */
                    KBDetail GetKBDetail() const;

                    /**
                     * 判断参数 KBDetail 是否已赋值
                     * @return KBDetail 是否已赋值
                     * 
                     */
                    bool KBDetailHasBeenSet() const;

                private:

                    /**
                     * Windows KB 补丁详细信息
                     */
                    KBDetail m_kBDetail;
                    bool m_kBDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEKBDETAILRESPONSE_H_
