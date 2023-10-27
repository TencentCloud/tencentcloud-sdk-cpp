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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEPLANQRCODESRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEPLANQRCODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/PlanQRCode.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribePlanQRCodes返回参数结构体
                */
                class DescribePlanQRCodesResponse : public AbstractModel
                {
                public:
                    DescribePlanQRCodesResponse();
                    ~DescribePlanQRCodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回码
                     * @return Ret 返回码
                     * 
                     */
                    int64_t GetRet() const;

                    /**
                     * 判断参数 Ret 是否已赋值
                     * @return Ret 是否已赋值
                     * 
                     */
                    bool RetHasBeenSet() const;

                    /**
                     * 获取总数
                     * @return Total 总数
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
                     * 获取数据
                     * @return Data 数据
                     * 
                     */
                    std::vector<PlanQRCode> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 返回码
                     */
                    int64_t m_ret;
                    bool m_retHasBeenSet;

                    /**
                     * 总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 数据
                     */
                    std::vector<PlanQRCode> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBEPLANQRCODESRESPONSE_H_
