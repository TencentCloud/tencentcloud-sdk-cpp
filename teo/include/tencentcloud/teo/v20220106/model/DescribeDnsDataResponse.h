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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSDATARESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DataItem.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeDnsData返回参数结构体
                */
                class DescribeDnsDataResponse : public AbstractModel
                {
                public:
                    DescribeDnsDataResponse();
                    ~DescribeDnsDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取统计曲线数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 统计曲线数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataItem> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取时间粒度
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Interval 时间粒度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     */
                    bool IntervalHasBeenSet() const;

                private:

                    /**
                     * 统计曲线数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DataItem> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 时间粒度
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBEDNSDATARESPONSE_H_
