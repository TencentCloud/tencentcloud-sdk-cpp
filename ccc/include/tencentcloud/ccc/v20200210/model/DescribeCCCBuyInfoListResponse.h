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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECCCBUYINFOLISTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECCCBUYINFOLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/SdkAppIdBuyInfo.h>
#include <tencentcloud/ccc/v20200210/model/PackageBuyInfo.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeCCCBuyInfoList返回参数结构体
                */
                class DescribeCCCBuyInfoListResponse : public AbstractModel
                {
                public:
                    DescribeCCCBuyInfoListResponse();
                    ~DescribeCCCBuyInfoListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取应用总数
                     * @return TotalCount 应用总数
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
                     * 获取应用购买信息列表
                     * @return SdkAppIdBuyList 应用购买信息列表
                     * 
                     */
                    std::vector<SdkAppIdBuyInfo> GetSdkAppIdBuyList() const;

                    /**
                     * 判断参数 SdkAppIdBuyList 是否已赋值
                     * @return SdkAppIdBuyList 是否已赋值
                     * 
                     */
                    bool SdkAppIdBuyListHasBeenSet() const;

                    /**
                     * 获取套餐包购买信息列表
                     * @return PackageBuyList 套餐包购买信息列表
                     * 
                     */
                    std::vector<PackageBuyInfo> GetPackageBuyList() const;

                    /**
                     * 判断参数 PackageBuyList 是否已赋值
                     * @return PackageBuyList 是否已赋值
                     * 
                     */
                    bool PackageBuyListHasBeenSet() const;

                private:

                    /**
                     * 应用总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 应用购买信息列表
                     */
                    std::vector<SdkAppIdBuyInfo> m_sdkAppIdBuyList;
                    bool m_sdkAppIdBuyListHasBeenSet;

                    /**
                     * 套餐包购买信息列表
                     */
                    std::vector<PackageBuyInfo> m_packageBuyList;
                    bool m_packageBuyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBECCCBUYINFOLISTRESPONSE_H_
