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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GETWECHATBILLDETAILSRESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GETWECHATBILLDETAILSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/faceid/v20180301/model/WeChatBillDetail.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GetWeChatBillDetails返回参数结构体
                */
                class GetWeChatBillDetailsResponse : public AbstractModel
                {
                public:
                    GetWeChatBillDetailsResponse();
                    ~GetWeChatBillDetailsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取是否还有下一页。
- 该字段为true时，需要将NextCursor的值作为入参Cursor继续调用本接口。
                     * @return HasNextPage 是否还有下一页。
- 该字段为true时，需要将NextCursor的值作为入参Cursor继续调用本接口。
                     * 
                     */
                    bool GetHasNextPage() const;

                    /**
                     * 判断参数 HasNextPage 是否已赋值
                     * @return HasNextPage 是否已赋值
                     * 
                     */
                    bool HasNextPageHasBeenSet() const;

                    /**
                     * 获取下一页的游标，用于分页。
                     * @return NextCursor 下一页的游标，用于分页。
                     * 
                     */
                    uint64_t GetNextCursor() const;

                    /**
                     * 判断参数 NextCursor 是否已赋值
                     * @return NextCursor 是否已赋值
                     * 
                     */
                    bool NextCursorHasBeenSet() const;

                    /**
                     * 获取数据。
                     * @return WeChatBillDetails 数据。
                     * 
                     */
                    std::vector<WeChatBillDetail> GetWeChatBillDetails() const;

                    /**
                     * 判断参数 WeChatBillDetails 是否已赋值
                     * @return WeChatBillDetails 是否已赋值
                     * 
                     */
                    bool WeChatBillDetailsHasBeenSet() const;

                private:

                    /**
                     * 是否还有下一页。
- 该字段为true时，需要将NextCursor的值作为入参Cursor继续调用本接口。
                     */
                    bool m_hasNextPage;
                    bool m_hasNextPageHasBeenSet;

                    /**
                     * 下一页的游标，用于分页。
                     */
                    uint64_t m_nextCursor;
                    bool m_nextCursorHasBeenSet;

                    /**
                     * 数据。
                     */
                    std::vector<WeChatBillDetail> m_weChatBillDetails;
                    bool m_weChatBillDetailsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GETWECHATBILLDETAILSRESPONSE_H_
