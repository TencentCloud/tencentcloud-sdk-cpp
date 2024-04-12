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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_LISTQARESPONSE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_LISTQARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ListQaItem.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * ListQA返回参数结构体
                */
                class ListQAResponse : public AbstractModel
                {
                public:
                    ListQAResponse();
                    ~ListQAResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取问答数量
                     * @return Total 问答数量
                     * 
                     */
                    std::string GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取待校验问答数量
                     * @return WaitVerifyTotal 待校验问答数量
                     * 
                     */
                    std::string GetWaitVerifyTotal() const;

                    /**
                     * 判断参数 WaitVerifyTotal 是否已赋值
                     * @return WaitVerifyTotal 是否已赋值
                     * 
                     */
                    bool WaitVerifyTotalHasBeenSet() const;

                    /**
                     * 获取未采纳问答数量
                     * @return NotAcceptedTotal 未采纳问答数量
                     * 
                     */
                    std::string GetNotAcceptedTotal() const;

                    /**
                     * 判断参数 NotAcceptedTotal 是否已赋值
                     * @return NotAcceptedTotal 是否已赋值
                     * 
                     */
                    bool NotAcceptedTotalHasBeenSet() const;

                    /**
                     * 获取已采纳问答数量
                     * @return AcceptedTotal 已采纳问答数量
                     * 
                     */
                    std::string GetAcceptedTotal() const;

                    /**
                     * 判断参数 AcceptedTotal 是否已赋值
                     * @return AcceptedTotal 是否已赋值
                     * 
                     */
                    bool AcceptedTotalHasBeenSet() const;

                    /**
                     * 获取页码
                     * @return PageNumber 页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取问答详情
                     * @return List 问答详情
                     * 
                     */
                    std::vector<ListQaItem> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 问答数量
                     */
                    std::string m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 待校验问答数量
                     */
                    std::string m_waitVerifyTotal;
                    bool m_waitVerifyTotalHasBeenSet;

                    /**
                     * 未采纳问答数量
                     */
                    std::string m_notAcceptedTotal;
                    bool m_notAcceptedTotalHasBeenSet;

                    /**
                     * 已采纳问答数量
                     */
                    std::string m_acceptedTotal;
                    bool m_acceptedTotalHasBeenSet;

                    /**
                     * 页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 问答详情
                     */
                    std::vector<ListQaItem> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_LISTQARESPONSE_H_
