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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDDOSDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDDOSDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DDoSTopData.h>
#include <tencentcloud/cdn/v20180606/model/DDoSAttackIPTopData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ListTopDDoSData返回参数结构体
                */
                class ListTopDDoSDataResponse : public AbstractModel
                {
                public:
                    ListTopDDoSDataResponse();
                    ~ListTopDDoSDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取DDoS 攻击类型的top数据，当Metric=AttackType的时候返回攻击类型的统计数据，IPData为空
                     * @return Data DDoS 攻击类型的top数据，当Metric=AttackType的时候返回攻击类型的统计数据，IPData为空
                     * 
                     */
                    std::vector<DDoSTopData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取ddos攻击ip的top数据，Metric=AttackIP的时候返回IPData，Data为空
                     * @return IPData ddos攻击ip的top数据，Metric=AttackIP的时候返回IPData，Data为空
                     * 
                     */
                    std::vector<DDoSAttackIPTopData> GetIPData() const;

                    /**
                     * 判断参数 IPData 是否已赋值
                     * @return IPData 是否已赋值
                     * 
                     */
                    bool IPDataHasBeenSet() const;

                private:

                    /**
                     * DDoS 攻击类型的top数据，当Metric=AttackType的时候返回攻击类型的统计数据，IPData为空
                     */
                    std::vector<DDoSTopData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * ddos攻击ip的top数据，Metric=AttackIP的时候返回IPData，Data为空
                     */
                    std::vector<DDoSAttackIPTopData> m_iPData;
                    bool m_iPDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_LISTTOPDDOSDATARESPONSE_H_
