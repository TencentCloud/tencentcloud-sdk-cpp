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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLOUDFUNCTIONLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLOUDFUNCTIONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/CloudFunctionItem.h>
#include <tencentcloud/csip/v20221121/model/AttributeOptionSet.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeCloudFunctionList返回参数结构体
                */
                class DescribeCloudFunctionListResponse : public AbstractModel
                {
                public:
                    DescribeCloudFunctionListResponse();
                    ~DescribeCloudFunctionListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取云函数数量
                     * @return TotalCount 云函数数量
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
                     * 获取云函数列表
                     * @return FunctionList 云函数列表
                     * 
                     */
                    std::vector<CloudFunctionItem> GetFunctionList() const;

                    /**
                     * 判断参数 FunctionList 是否已赋值
                     * @return FunctionList 是否已赋值
                     * 
                     */
                    bool FunctionListHasBeenSet() const;

                    /**
                     * 获取地域列表选项
                     * @return RegionList 地域列表选项
                     * 
                     */
                    std::vector<AttributeOptionSet> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * 云函数数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 云函数列表
                     */
                    std::vector<CloudFunctionItem> m_functionList;
                    bool m_functionListHasBeenSet;

                    /**
                     * 地域列表选项
                     */
                    std::vector<AttributeOptionSet> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLOUDFUNCTIONLISTRESPONSE_H_
