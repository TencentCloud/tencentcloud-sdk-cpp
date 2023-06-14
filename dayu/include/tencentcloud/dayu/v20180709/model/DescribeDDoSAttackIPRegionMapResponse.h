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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKIPREGIONMAPRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKIPREGIONMAPRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeDDoSAttackIPRegionMap返回参数结构体
                */
                class DescribeDDoSAttackIPRegionMapResponse : public AbstractModel
                {
                public:
                    DescribeDDoSAttackIPRegionMapResponse();
                    ~DescribeDDoSAttackIPRegionMapResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取全球地域分布数据
                     * @return NationCount 全球地域分布数据
                     * 
                     */
                    std::vector<KeyValueRecord> GetNationCount() const;

                    /**
                     * 判断参数 NationCount 是否已赋值
                     * @return NationCount 是否已赋值
                     * 
                     */
                    bool NationCountHasBeenSet() const;

                    /**
                     * 获取国内省份地域分布数据
                     * @return ProvinceCount 国内省份地域分布数据
                     * 
                     */
                    std::vector<KeyValueRecord> GetProvinceCount() const;

                    /**
                     * 判断参数 ProvinceCount 是否已赋值
                     * @return ProvinceCount 是否已赋值
                     * 
                     */
                    bool ProvinceCountHasBeenSet() const;

                private:

                    /**
                     * 全球地域分布数据
                     */
                    std::vector<KeyValueRecord> m_nationCount;
                    bool m_nationCountHasBeenSet;

                    /**
                     * 国内省份地域分布数据
                     */
                    std::vector<KeyValueRecord> m_provinceCount;
                    bool m_provinceCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEDDOSATTACKIPREGIONMAPRESPONSE_H_
