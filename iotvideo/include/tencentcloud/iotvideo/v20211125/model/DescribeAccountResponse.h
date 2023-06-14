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

#ifndef TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEACCOUNTRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20211125
        {
            namespace Model
            {
                /**
                * DescribeAccount返回参数结构体
                */
                class DescribeAccountResponse : public AbstractModel
                {
                public:
                    DescribeAccountResponse();
                    ~DescribeAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询的账号id
                     * @return Uin 查询的账号id
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取1线上计费，2线下计费
                     * @return BillType 1线上计费，2线下计费
                     * 
                     */
                    uint64_t GetBillType() const;

                    /**
                     * 判断参数 BillType 是否已赋值
                     * @return BillType 是否已赋值
                     * 
                     */
                    bool BillTypeHasBeenSet() const;

                    /**
                     * 获取0未定义，1按套餐预付费，2按量后付费
                     * @return BillMode 0未定义，1按套餐预付费，2按量后付费
                     * 
                     */
                    uint64_t GetBillMode() const;

                    /**
                     * 判断参数 BillMode 是否已赋值
                     * @return BillMode 是否已赋值
                     * 
                     */
                    bool BillModeHasBeenSet() const;

                private:

                    /**
                     * 查询的账号id
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 1线上计费，2线下计费
                     */
                    uint64_t m_billType;
                    bool m_billTypeHasBeenSet;

                    /**
                     * 0未定义，1按套餐预付费，2按量后付费
                     */
                    uint64_t m_billMode;
                    bool m_billModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20211125_MODEL_DESCRIBEACCOUNTRESPONSE_H_
