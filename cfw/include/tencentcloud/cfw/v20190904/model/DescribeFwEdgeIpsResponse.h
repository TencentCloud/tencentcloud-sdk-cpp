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
                     * 获取ip 开关列表
                     * @return Data ip 开关列表
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
                     * 获取ip 开关列表个数
                     * @return Total ip 开关列表个数
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
                     * 获取地域列表
                     * @return RegionLst 地域列表
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
                     * 获取实例类型列表
                     * @return InstanceTypeLst 实例类型列表
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
                     * 获取串行模式开关个数
                     * @return SerilCount 串行模式开关个数
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
                     * ip 开关列表
                     */
                    std::vector<EdgeIpInfo> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * ip 开关列表个数
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 地域列表
                     */
                    std::vector<std::string> m_regionLst;
                    bool m_regionLstHasBeenSet;

                    /**
                     * 实例类型列表
                     */
                    std::vector<std::string> m_instanceTypeLst;
                    bool m_instanceTypeLstHasBeenSet;

                    /**
                     * 串行模式开关个数
                     */
                    int64_t m_serilCount;
                    bool m_serilCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEFWEDGEIPSRESPONSE_H_
