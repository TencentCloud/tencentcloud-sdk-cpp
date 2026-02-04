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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEFLASHSMSLISTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEFLASHSMSLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/FlashSMSRecord.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeFlashSMSList返回参数结构体
                */
                class DescribeFlashSMSListResponse : public AbstractModel
                {
                public:
                    DescribeFlashSMSListResponse();
                    ~DescribeFlashSMSListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数
                     * @return Total 记录总数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取闪信记录列表
                     * @return FlashSMSList 闪信记录列表
                     * 
                     */
                    std::vector<FlashSMSRecord> GetFlashSMSList() const;

                    /**
                     * 判断参数 FlashSMSList 是否已赋值
                     * @return FlashSMSList 是否已赋值
                     * 
                     */
                    bool FlashSMSListHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 闪信记录列表
                     */
                    std::vector<FlashSMSRecord> m_flashSMSList;
                    bool m_flashSMSListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEFLASHSMSLISTRESPONSE_H_
