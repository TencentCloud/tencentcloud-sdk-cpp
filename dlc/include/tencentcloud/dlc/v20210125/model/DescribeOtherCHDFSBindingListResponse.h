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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEOTHERCHDFSBINDINGLISTRESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEOTHERCHDFSBINDINGLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/OtherCHDFSBinding.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeOtherCHDFSBindingList返回参数结构体
                */
                class DescribeOtherCHDFSBindingListResponse : public AbstractModel
                {
                public:
                    DescribeOtherCHDFSBindingListResponse();
                    ~DescribeOtherCHDFSBindingListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取非DLC 产品绑定列表
                     * @return OtherCHDFSBindingList 非DLC 产品绑定列表
                     * 
                     */
                    std::vector<OtherCHDFSBinding> GetOtherCHDFSBindingList() const;

                    /**
                     * 判断参数 OtherCHDFSBindingList 是否已赋值
                     * @return OtherCHDFSBindingList 是否已赋值
                     * 
                     */
                    bool OtherCHDFSBindingListHasBeenSet() const;

                    /**
                     * 获取总记录数
                     * @return Total 总记录数
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 非DLC 产品绑定列表
                     */
                    std::vector<OtherCHDFSBinding> m_otherCHDFSBindingList;
                    bool m_otherCHDFSBindingListHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEOTHERCHDFSBINDINGLISTRESPONSE_H_
