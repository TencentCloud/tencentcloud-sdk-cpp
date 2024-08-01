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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEALERTLISTRESPONSE_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEALERTLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/AlertInfo.h>
#include <tencentcloud/csip/v20221121/model/TagCount.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAlertList返回参数结构体
                */
                class DescribeAlertListResponse : public AbstractModel
                {
                public:
                    DescribeAlertListResponse();
                    ~DescribeAlertListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取全量告警列表
                     * @return AlertList 全量告警列表
                     * 
                     */
                    std::vector<AlertInfo> GetAlertList() const;

                    /**
                     * 判断参数 AlertList 是否已赋值
                     * @return AlertList 是否已赋值
                     * 
                     */
                    bool AlertListHasBeenSet() const;

                    /**
                     * 获取告警大类数量
                     * @return AlertTypeCount 告警大类数量
                     * 
                     */
                    std::vector<TagCount> GetAlertTypeCount() const;

                    /**
                     * 判断参数 AlertTypeCount 是否已赋值
                     * @return AlertTypeCount 是否已赋值
                     * 
                     */
                    bool AlertTypeCountHasBeenSet() const;

                    /**
                     * 获取告警总数
                     * @return TotalCount 告警总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取0：succeed 1：timeout
                     * @return ReturnCode 0：succeed 1：timeout
                     * 
                     */
                    int64_t GetReturnCode() const;

                    /**
                     * 判断参数 ReturnCode 是否已赋值
                     * @return ReturnCode 是否已赋值
                     * 
                     */
                    bool ReturnCodeHasBeenSet() const;

                    /**
                     * 获取返回状态信息
                     * @return ReturnMsg 返回状态信息
                     * 
                     */
                    std::string GetReturnMsg() const;

                    /**
                     * 判断参数 ReturnMsg 是否已赋值
                     * @return ReturnMsg 是否已赋值
                     * 
                     */
                    bool ReturnMsgHasBeenSet() const;

                private:

                    /**
                     * 全量告警列表
                     */
                    std::vector<AlertInfo> m_alertList;
                    bool m_alertListHasBeenSet;

                    /**
                     * 告警大类数量
                     */
                    std::vector<TagCount> m_alertTypeCount;
                    bool m_alertTypeCountHasBeenSet;

                    /**
                     * 告警总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 0：succeed 1：timeout
                     */
                    int64_t m_returnCode;
                    bool m_returnCodeHasBeenSet;

                    /**
                     * 返回状态信息
                     */
                    std::string m_returnMsg;
                    bool m_returnMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEALERTLISTRESPONSE_H_
