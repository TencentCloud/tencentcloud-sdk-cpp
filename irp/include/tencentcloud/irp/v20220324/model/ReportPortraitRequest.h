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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_REPORTPORTRAITREQUEST_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_REPORTPORTRAITREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220324/model/PortraitInfo.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * ReportPortrait请求参数结构体
                */
                class ReportPortraitRequest : public AbstractModel
                {
                public:
                    ReportPortraitRequest();
                    ~ReportPortraitRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取推荐平台上的业务id
                     * @return Bid 推荐平台上的业务id
                     * 
                     */
                    std::string GetBid() const;

                    /**
                     * 设置推荐平台上的业务id
                     * @param _bid 推荐平台上的业务id
                     * 
                     */
                    void SetBid(const std::string& _bid);

                    /**
                     * 判断参数 Bid 是否已赋值
                     * @return Bid 是否已赋值
                     * 
                     */
                    bool BidHasBeenSet() const;

                    /**
                     * 获取上报的用户画像数组，数量不超过50
                     * @return PortraitList 上报的用户画像数组，数量不超过50
                     * 
                     */
                    std::vector<PortraitInfo> GetPortraitList() const;

                    /**
                     * 设置上报的用户画像数组，数量不超过50
                     * @param _portraitList 上报的用户画像数组，数量不超过50
                     * 
                     */
                    void SetPortraitList(const std::vector<PortraitInfo>& _portraitList);

                    /**
                     * 判断参数 PortraitList 是否已赋值
                     * @return PortraitList 是否已赋值
                     * 
                     */
                    bool PortraitListHasBeenSet() const;

                private:

                    /**
                     * 推荐平台上的业务id
                     */
                    std::string m_bid;
                    bool m_bidHasBeenSet;

                    /**
                     * 上报的用户画像数组，数量不超过50
                     */
                    std::vector<PortraitInfo> m_portraitList;
                    bool m_portraitListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_REPORTPORTRAITREQUEST_H_
