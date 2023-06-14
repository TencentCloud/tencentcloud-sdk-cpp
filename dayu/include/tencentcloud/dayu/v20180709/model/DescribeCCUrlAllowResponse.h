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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCURLALLOWRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCURLALLOWRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/KeyValue.h>
#include <tencentcloud/dayu/v20180709/model/KeyValueRecord.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeCCUrlAllow返回参数结构体
                */
                class DescribeCCUrlAllowResponse : public AbstractModel
                {
                public:
                    DescribeCCUrlAllowResponse();
                    ~DescribeCCUrlAllowResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取该字段被RecordList字段替代了，请不要使用
                     * @return Data 该字段被RecordList字段替代了，请不要使用
                     * 
                     */
                    std::vector<KeyValue> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取记录总数
                     * @return Total 记录总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取返回黑/白名单的记录，
"Key":"url"时，"Value":值表示URL;
"Key":"domain"时， "Value":值表示域名;
"Key":"type"时，"Value":值表示黑白名单类型(white为白名单，block为黑名单);
"Key":"protocol"时，"Value":值表示CC的防护类型(HTTP防护或HTTPS域名防护);
                     * @return RecordList 返回黑/白名单的记录，
"Key":"url"时，"Value":值表示URL;
"Key":"domain"时， "Value":值表示域名;
"Key":"type"时，"Value":值表示黑白名单类型(white为白名单，block为黑名单);
"Key":"protocol"时，"Value":值表示CC的防护类型(HTTP防护或HTTPS域名防护);
                     * 
                     */
                    std::vector<KeyValueRecord> GetRecordList() const;

                    /**
                     * 判断参数 RecordList 是否已赋值
                     * @return RecordList 是否已赋值
                     * 
                     */
                    bool RecordListHasBeenSet() const;

                private:

                    /**
                     * 该字段被RecordList字段替代了，请不要使用
                     */
                    std::vector<KeyValue> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 记录总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 返回黑/白名单的记录，
"Key":"url"时，"Value":值表示URL;
"Key":"domain"时， "Value":值表示域名;
"Key":"type"时，"Value":值表示黑白名单类型(white为白名单，block为黑名单);
"Key":"protocol"时，"Value":值表示CC的防护类型(HTTP防护或HTTPS域名防护);
                     */
                    std::vector<KeyValueRecord> m_recordList;
                    bool m_recordListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBECCURLALLOWRESPONSE_H_
