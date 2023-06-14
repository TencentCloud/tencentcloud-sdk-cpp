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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADEREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryTrade请求参数结构体
                */
                class QueryTradeRequest : public AbstractModel
                {
                public:
                    QueryTradeRequest();
                    ~QueryTradeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取贸易材料流水号
                     * @return TradeFileId 贸易材料流水号
                     * 
                     */
                    std::string GetTradeFileId() const;

                    /**
                     * 设置贸易材料流水号
                     * @param _tradeFileId 贸易材料流水号
                     * 
                     */
                    void SetTradeFileId(const std::string& _tradeFileId);

                    /**
                     * 判断参数 TradeFileId 是否已赋值
                     * @return TradeFileId 是否已赋值
                     * 
                     */
                    bool TradeFileIdHasBeenSet() const;

                    /**
                     * 获取接入环境。沙箱环境填sandbox
                     * @return Profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置接入环境。沙箱环境填sandbox
                     * @param _profile 接入环境。沙箱环境填sandbox
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 贸易材料流水号
                     */
                    std::string m_tradeFileId;
                    bool m_tradeFileIdHasBeenSet;

                    /**
                     * 接入环境。沙箱环境填sandbox
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRADEREQUEST_H_
