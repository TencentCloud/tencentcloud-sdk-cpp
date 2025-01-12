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

#ifndef TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTSRESPONSE_H_
#define TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dc/v20180410/model/DirectConnect.h>


namespace TencentCloud
{
    namespace Dc
    {
        namespace V20180410
        {
            namespace Model
            {
                /**
                * DescribeDirectConnects返回参数结构体
                */
                class DescribeDirectConnectsResponse : public AbstractModel
                {
                public:
                    DescribeDirectConnectsResponse();
                    ~DescribeDirectConnectsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取物理专线列表。
                     * @return DirectConnectSet 物理专线列表。
                     * 
                     */
                    std::vector<DirectConnect> GetDirectConnectSet() const;

                    /**
                     * 判断参数 DirectConnectSet 是否已赋值
                     * @return DirectConnectSet 是否已赋值
                     * 
                     */
                    bool DirectConnectSetHasBeenSet() const;

                    /**
                     * 获取符合物理专线列表数量。
                     * @return TotalCount 符合物理专线列表数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取用户名下物理专线是否都签署了用户协议。
                     * @return AllSignLaw 用户名下物理专线是否都签署了用户协议。
                     * 
                     */
                    bool GetAllSignLaw() const;

                    /**
                     * 判断参数 AllSignLaw 是否已赋值
                     * @return AllSignLaw 是否已赋值
                     * 
                     */
                    bool AllSignLawHasBeenSet() const;

                private:

                    /**
                     * 物理专线列表。
                     */
                    std::vector<DirectConnect> m_directConnectSet;
                    bool m_directConnectSetHasBeenSet;

                    /**
                     * 符合物理专线列表数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 用户名下物理专线是否都签署了用户协议。
                     */
                    bool m_allSignLaw;
                    bool m_allSignLawHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DC_V20180410_MODEL_DESCRIBEDIRECTCONNECTSRESPONSE_H_
