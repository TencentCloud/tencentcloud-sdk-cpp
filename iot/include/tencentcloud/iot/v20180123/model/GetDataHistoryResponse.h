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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDATAHISTORYRESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDATAHISTORYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/DataHistoryEntry.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetDataHistory返回参数结构体
                */
                class GetDataHistoryResponse : public AbstractModel
                {
                public:
                    GetDataHistoryResponse();
                    ~GetDataHistoryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据历史
                     * @return DataHistory 数据历史
                     * 
                     */
                    std::vector<DataHistoryEntry> GetDataHistory() const;

                    /**
                     * 判断参数 DataHistory 是否已赋值
                     * @return DataHistory 是否已赋值
                     * 
                     */
                    bool DataHistoryHasBeenSet() const;

                    /**
                     * 获取查询游标
                     * @return ScrollId 查询游标
                     * 
                     */
                    std::string GetScrollId() const;

                    /**
                     * 判断参数 ScrollId 是否已赋值
                     * @return ScrollId 是否已赋值
                     * 
                     */
                    bool ScrollIdHasBeenSet() const;

                    /**
                     * 获取查询游标超时
                     * @return ScrollTimeout 查询游标超时
                     * 
                     */
                    uint64_t GetScrollTimeout() const;

                    /**
                     * 判断参数 ScrollTimeout 是否已赋值
                     * @return ScrollTimeout 是否已赋值
                     * 
                     */
                    bool ScrollTimeoutHasBeenSet() const;

                private:

                    /**
                     * 数据历史
                     */
                    std::vector<DataHistoryEntry> m_dataHistory;
                    bool m_dataHistoryHasBeenSet;

                    /**
                     * 查询游标
                     */
                    std::string m_scrollId;
                    bool m_scrollIdHasBeenSet;

                    /**
                     * 查询游标超时
                     */
                    uint64_t m_scrollTimeout;
                    bool m_scrollTimeoutHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDATAHISTORYRESPONSE_H_
