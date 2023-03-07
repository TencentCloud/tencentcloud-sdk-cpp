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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/intlpartnersmgt/v20220928/model/QueryVoucherListByUinVoucherItem.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * 单个客户代金券数据
                */
                class QueryVoucherListByUinItem : public AbstractModel
                {
                public:
                    QueryVoucherListByUinItem();
                    ~QueryVoucherListByUinItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子客uin
                     * @return ClientUin 子客uin
                     */
                    int64_t GetClientUin() const;

                    /**
                     * 设置子客uin
                     * @param ClientUin 子客uin
                     */
                    void SetClientUin(const int64_t& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取券总数量
                     * @return TotalCount 券总数量
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置券总数量
                     * @param TotalCount 券总数量
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取券详情
                     * @return Data 券详情
                     */
                    std::vector<QueryVoucherListByUinVoucherItem> GetData() const;

                    /**
                     * 设置券详情
                     * @param Data 券详情
                     */
                    void SetData(const std::vector<QueryVoucherListByUinVoucherItem>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 子客uin
                     */
                    int64_t m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 券总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 券详情
                     */
                    std::vector<QueryVoucherListByUinVoucherItem> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINITEM_H_
