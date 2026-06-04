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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECLUSTERNATCCNFWSWITCHLISTRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECLUSTERNATCCNFWSWITCHLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/NatFwSwitchDetailS.h>
#include <tencentcloud/cfw/v20190904/model/FilterDataObject.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeClusterNatCcnFwSwitchList返回参数结构体
                */
                class DescribeClusterNatCcnFwSwitchListResponse : public AbstractModel
                {
                public:
                    DescribeClusterNatCcnFwSwitchListResponse();
                    ~DescribeClusterNatCcnFwSwitchListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>符合条件的总记录数</p>
                     * @return Total <p>符合条件的总记录数</p>
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
                     * 获取<p>NAT防火墙开关详情列表</p>
                     * @return Data <p>NAT防火墙开关详情列表</p>
                     * 
                     */
                    std::vector<NatFwSwitchDetailS> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>地域列表</p>
                     * @return RegionList <p>地域列表</p>
                     * 
                     */
                    std::vector<FilterDataObject> GetRegionList() const;

                    /**
                     * 判断参数 RegionList 是否已赋值
                     * @return RegionList 是否已赋值
                     * 
                     */
                    bool RegionListHasBeenSet() const;

                private:

                    /**
                     * <p>符合条件的总记录数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>NAT防火墙开关详情列表</p>
                     */
                    std::vector<NatFwSwitchDetailS> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>地域列表</p>
                     */
                    std::vector<FilterDataObject> m_regionList;
                    bool m_regionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBECLUSTERNATCCNFWSWITCHLISTRESPONSE_H_
