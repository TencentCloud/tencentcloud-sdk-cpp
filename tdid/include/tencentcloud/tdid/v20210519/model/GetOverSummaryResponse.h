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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_GETOVERSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_GETOVERSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdid/v20210519/model/ResourceCounterData.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * GetOverSummary返回参数结构体
                */
                class GetOverSummaryResponse : public AbstractModel
                {
                public:
                    GetOverSummaryResponse();
                    ~GetOverSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取用户参与应用的统计指标
                     * @return AppCounter 用户参与应用的统计指标
                     * 
                     */
                    ResourceCounterData GetAppCounter() const;

                    /**
                     * 判断参数 AppCounter 是否已赋值
                     * @return AppCounter 是否已赋值
                     * 
                     */
                    bool AppCounterHasBeenSet() const;

                    /**
                     * 获取用户部署应用的统计指标
                     * @return UserCounter 用户部署应用的统计指标
                     * 
                     */
                    ResourceCounterData GetUserCounter() const;

                    /**
                     * 判断参数 UserCounter 是否已赋值
                     * @return UserCounter 是否已赋值
                     * 
                     */
                    bool UserCounterHasBeenSet() const;

                    /**
                     * 获取用户参与的应用总数
                     * @return AppCnt 用户参与的应用总数
                     * 
                     */
                    uint64_t GetAppCnt() const;

                    /**
                     * 判断参数 AppCnt 是否已赋值
                     * @return AppCnt 是否已赋值
                     * 
                     */
                    bool AppCntHasBeenSet() const;

                    /**
                     * 获取用户部署的应用总数
                     * @return DeployCnt 用户部署的应用总数
                     * 
                     */
                    uint64_t GetDeployCnt() const;

                    /**
                     * 判断参数 DeployCnt 是否已赋值
                     * @return DeployCnt 是否已赋值
                     * 
                     */
                    bool DeployCntHasBeenSet() const;

                    /**
                     * 获取部署网络子链总数
                     * @return ChainCnt 部署网络子链总数
                     * 
                     */
                    uint64_t GetChainCnt() const;

                    /**
                     * 判断参数 ChainCnt 是否已赋值
                     * @return ChainCnt 是否已赋值
                     * 
                     */
                    bool ChainCntHasBeenSet() const;

                private:

                    /**
                     * 用户参与应用的统计指标
                     */
                    ResourceCounterData m_appCounter;
                    bool m_appCounterHasBeenSet;

                    /**
                     * 用户部署应用的统计指标
                     */
                    ResourceCounterData m_userCounter;
                    bool m_userCounterHasBeenSet;

                    /**
                     * 用户参与的应用总数
                     */
                    uint64_t m_appCnt;
                    bool m_appCntHasBeenSet;

                    /**
                     * 用户部署的应用总数
                     */
                    uint64_t m_deployCnt;
                    bool m_deployCntHasBeenSet;

                    /**
                     * 部署网络子链总数
                     */
                    uint64_t m_chainCnt;
                    bool m_chainCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_GETOVERSUMMARYRESPONSE_H_
