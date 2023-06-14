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

#ifndef TENCENTCLOUD_IRP_V20220324_MODEL_REPORTACTIONREQUEST_H_
#define TENCENTCLOUD_IRP_V20220324_MODEL_REPORTACTIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/irp/v20220324/model/DocBehavior.h>


namespace TencentCloud
{
    namespace Irp
    {
        namespace V20220324
        {
            namespace Model
            {
                /**
                * ReportAction请求参数结构体
                */
                class ReportActionRequest : public AbstractModel
                {
                public:
                    ReportActionRequest();
                    ~ReportActionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务id
                     * @return Bid 业务id
                     * 
                     */
                    std::string GetBid() const;

                    /**
                     * 设置业务id
                     * @param _bid 业务id
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
                     * 获取上报的行为对象数组，数量不超过50
                     * @return DocBehaviorList 上报的行为对象数组，数量不超过50
                     * 
                     */
                    std::vector<DocBehavior> GetDocBehaviorList() const;

                    /**
                     * 设置上报的行为对象数组，数量不超过50
                     * @param _docBehaviorList 上报的行为对象数组，数量不超过50
                     * 
                     */
                    void SetDocBehaviorList(const std::vector<DocBehavior>& _docBehaviorList);

                    /**
                     * 判断参数 DocBehaviorList 是否已赋值
                     * @return DocBehaviorList 是否已赋值
                     * 
                     */
                    bool DocBehaviorListHasBeenSet() const;

                private:

                    /**
                     * 业务id
                     */
                    std::string m_bid;
                    bool m_bidHasBeenSet;

                    /**
                     * 上报的行为对象数组，数量不超过50
                     */
                    std::vector<DocBehavior> m_docBehaviorList;
                    bool m_docBehaviorListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IRP_V20220324_MODEL_REPORTACTIONREQUEST_H_
