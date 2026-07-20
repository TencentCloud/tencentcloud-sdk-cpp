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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWEDGEIPSRESPONSE_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWEDGEIPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/EdgeIpInfo.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeFwEdgeIps返回参数结构体
                */
                class DescribeFwEdgeIpsResponse : public AbstractModel
                {
                public:
                    DescribeFwEdgeIpsResponse();
                    ~DescribeFwEdgeIpsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ip 开关列表</p>
                     * @return Data <p>ip 开关列表</p>
                     * 
                     */
                    std::vector<EdgeIpInfo> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取<p>ip 开关列表个数</p>
                     * @return Total <p>ip 开关列表个数</p>
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
                     * 获取<p>地域列表</p>
                     * @return RegionLst <p>地域列表</p>
                     * 
                     */
                    std::vector<std::string> GetRegionLst() const;

                    /**
                     * 判断参数 RegionLst 是否已赋值
                     * @return RegionLst 是否已赋值
                     * 
                     */
                    bool RegionLstHasBeenSet() const;

                    /**
                     * 获取<p>实例类型列表</p>
                     * @return InstanceTypeLst <p>实例类型列表</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceTypeLst() const;

                    /**
                     * 判断参数 InstanceTypeLst 是否已赋值
                     * @return InstanceTypeLst 是否已赋值
                     * 
                     */
                    bool InstanceTypeLstHasBeenSet() const;

                    /**
                     * 获取<p>串行模式开关个数</p>
                     * @return SerilCount <p>串行模式开关个数</p>
                     * 
                     */
                    int64_t GetSerilCount() const;

                    /**
                     * 判断参数 SerilCount 是否已赋值
                     * @return SerilCount 是否已赋值
                     * 
                     */
                    bool SerilCountHasBeenSet() const;

                private:

                    /**
                     * <p>ip 开关列表</p>
                     */
                    std::vector<EdgeIpInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * <p>ip 开关列表个数</p>
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * <p>地域列表</p>
                     */
                    std::vector<std::string> m_regionLst;
                    bool m_regionLstHasBeenSet;

                    /**
                     * <p>实例类型列表</p>
                     */
                    std::vector<std::string> m_instanceTypeLst;
                    bool m_instanceTypeLstHasBeenSet;

                    /**
                     * <p>串行模式开关个数</p>
                     */
                    int64_t m_serilCount;
                    bool m_serilCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWEDGEIPSRESPONSE_H_
