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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTHIGHRISKTOP10OVERVIEWRESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTHIGHRISKTOP10OVERVIEWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/HighRiskAssetsDetail.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPAAssessmentHighRiskTop10Overview返回参数结构体
                */
                class DescribeDSPAAssessmentHighRiskTop10OverviewResponse : public AbstractModel
                {
                public:
                    DescribeDSPAAssessmentHighRiskTop10OverviewResponse();
                    ~DescribeDSPAAssessmentHighRiskTop10OverviewResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取含高风险资产TOP10的列表数据
                     * @return AssetsList 含高风险资产TOP10的列表数据
                     * 
                     */
                    std::vector<HighRiskAssetsDetail> GetAssetsList() const;

                    /**
                     * 判断参数 AssetsList 是否已赋值
                     * @return AssetsList 是否已赋值
                     * 
                     */
                    bool AssetsListHasBeenSet() const;

                private:

                    /**
                     * 含高风险资产TOP10的列表数据
                     */
                    std::vector<HighRiskAssetsDetail> m_assetsList;
                    bool m_assetsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPAASSESSMENTHIGHRISKTOP10OVERVIEWRESPONSE_H_
