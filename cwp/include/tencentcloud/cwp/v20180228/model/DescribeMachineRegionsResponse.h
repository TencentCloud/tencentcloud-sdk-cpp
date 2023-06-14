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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEREGIONSRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEREGIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/RegionInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeMachineRegions返回参数结构体
                */
                class DescribeMachineRegionsResponse : public AbstractModel
                {
                public:
                    DescribeMachineRegionsResponse();
                    ~DescribeMachineRegionsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取CVM 云服务器地域列表
                     * @return CVM CVM 云服务器地域列表
                     * 
                     */
                    std::vector<RegionInfo> GetCVM() const;

                    /**
                     * 判断参数 CVM 是否已赋值
                     * @return CVM 是否已赋值
                     * 
                     */
                    bool CVMHasBeenSet() const;

                    /**
                     * 获取BM 黑石机器地域列表
                     * @return BM BM 黑石机器地域列表
                     * 
                     */
                    std::vector<RegionInfo> GetBM() const;

                    /**
                     * 判断参数 BM 是否已赋值
                     * @return BM 是否已赋值
                     * 
                     */
                    bool BMHasBeenSet() const;

                    /**
                     * 获取LH 轻量应用服务器地域列表
                     * @return LH LH 轻量应用服务器地域列表
                     * 
                     */
                    std::vector<RegionInfo> GetLH() const;

                    /**
                     * 判断参数 LH 是否已赋值
                     * @return LH 是否已赋值
                     * 
                     */
                    bool LHHasBeenSet() const;

                    /**
                     * 获取ECM 边缘计算服务器地域列表
                     * @return ECM ECM 边缘计算服务器地域列表
                     * 
                     */
                    std::vector<RegionInfo> GetECM() const;

                    /**
                     * 判断参数 ECM 是否已赋值
                     * @return ECM 是否已赋值
                     * 
                     */
                    bool ECMHasBeenSet() const;

                    /**
                     * 获取Other 混合云地域列表
                     * @return Other Other 混合云地域列表
                     * 
                     */
                    std::vector<RegionInfo> GetOther() const;

                    /**
                     * 判断参数 Other 是否已赋值
                     * @return Other 是否已赋值
                     * 
                     */
                    bool OtherHasBeenSet() const;

                    /**
                     * 获取所有地域列表(包含以上所有地域)
                     * @return ALL 所有地域列表(包含以上所有地域)
                     * 
                     */
                    std::vector<RegionInfo> GetALL() const;

                    /**
                     * 判断参数 ALL 是否已赋值
                     * @return ALL 是否已赋值
                     * 
                     */
                    bool ALLHasBeenSet() const;

                private:

                    /**
                     * CVM 云服务器地域列表
                     */
                    std::vector<RegionInfo> m_cVM;
                    bool m_cVMHasBeenSet;

                    /**
                     * BM 黑石机器地域列表
                     */
                    std::vector<RegionInfo> m_bM;
                    bool m_bMHasBeenSet;

                    /**
                     * LH 轻量应用服务器地域列表
                     */
                    std::vector<RegionInfo> m_lH;
                    bool m_lHHasBeenSet;

                    /**
                     * ECM 边缘计算服务器地域列表
                     */
                    std::vector<RegionInfo> m_eCM;
                    bool m_eCMHasBeenSet;

                    /**
                     * Other 混合云地域列表
                     */
                    std::vector<RegionInfo> m_other;
                    bool m_otherHasBeenSet;

                    /**
                     * 所有地域列表(包含以上所有地域)
                     */
                    std::vector<RegionInfo> m_aLL;
                    bool m_aLLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBEMACHINEREGIONSRESPONSE_H_
