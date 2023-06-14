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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFORESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFORESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/QueryExceedingInfoData.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 超额信息结果
                */
                class QueryExceedingInfoResult : public AbstractModel
                {
                public:
                    QueryExceedingInfoResult();
                    ~QueryExceedingInfoResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录总数。
                     * @return Count 记录总数。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置记录总数。
                     * @param _count 记录总数。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取超额信息数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 超额信息数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<QueryExceedingInfoData> GetData() const;

                    /**
                     * 设置超额信息数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 超额信息数据。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::vector<QueryExceedingInfoData>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 记录总数。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 超额信息数据。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<QueryExceedingInfoData> m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYEXCEEDINGINFORESULT_H_
