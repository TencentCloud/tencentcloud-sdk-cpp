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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/SgUnit.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeUsg返回参数结构体
                */
                class DescribeUsgResponse : public AbstractModel
                {
                public:
                    DescribeUsgResponse();
                    ~DescribeUsgResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户的安全组列表
                     * @return SgList 用户的安全组列表
                     * 
                     */
                    std::vector<SgUnit> GetSgList() const;

                    /**
                     * 判断参数 SgList 是否已赋值
                     * @return SgList 是否已赋值
                     * 
                     */
                    bool SgListHasBeenSet() const;

                    /**
                     * 获取返回的安全组数量
                     * @return TotalCount 返回的安全组数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 用户的安全组列表
                     */
                    std::vector<SgUnit> m_sgList;
                    bool m_sgListHasBeenSet;

                    /**
                     * 返回的安全组数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBEUSGRESPONSE_H_
