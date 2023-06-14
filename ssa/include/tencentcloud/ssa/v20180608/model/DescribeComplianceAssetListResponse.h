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

#ifndef TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEASSETLISTRESPONSE_H_
#define TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEASSETLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssa/v20180608/model/CheckAssetItem.h>


namespace TencentCloud
{
    namespace Ssa
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeComplianceAssetList返回参数结构体
                */
                class DescribeComplianceAssetListResponse : public AbstractModel
                {
                public:
                    DescribeComplianceAssetListResponse();
                    ~DescribeComplianceAssetListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产组列表
                     * @return CheckAssetsList 资产组列表
                     * 
                     */
                    std::vector<CheckAssetItem> GetCheckAssetsList() const;

                    /**
                     * 判断参数 CheckAssetsList 是否已赋值
                     * @return CheckAssetsList 是否已赋值
                     * 
                     */
                    bool CheckAssetsListHasBeenSet() const;

                    /**
                     * 获取资产组列表总数
                     * @return Total 资产组列表总数
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
                     * 资产组列表
                     */
                    std::vector<CheckAssetItem> m_checkAssetsList;
                    bool m_checkAssetsListHasBeenSet;

                    /**
                     * 资产组列表总数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSA_V20180608_MODEL_DESCRIBECOMPLIANCEASSETLISTRESPONSE_H_
