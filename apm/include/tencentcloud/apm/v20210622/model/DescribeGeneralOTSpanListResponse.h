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

#ifndef TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTRESPONSE_H_
#define TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Apm
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeGeneralOTSpanList返回参数结构体
                */
                class DescribeGeneralOTSpanListResponse : public AbstractModel
                {
                public:
                    DescribeGeneralOTSpanListResponse();
                    ~DescribeGeneralOTSpanListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取总数量
                     * @return TotalCount 总数量
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取Spans字段中包含了链路数据的全部内容，由于数据经过了压缩，需要对结果进行如下三步转换，以还原始的文本。
1. 将Spans字段中的文本进行 Base64 解码，得到经过压缩后字节数组。
2. 使用 gzip 对压缩后的字节数组进行解压，得到压缩前的字节数组。
3. 使用 UTF-8 字符集，将压缩前的字节数组转换为文本。

                     * @return Spans Spans字段中包含了链路数据的全部内容，由于数据经过了压缩，需要对结果进行如下三步转换，以还原始的文本。
1. 将Spans字段中的文本进行 Base64 解码，得到经过压缩后字节数组。
2. 使用 gzip 对压缩后的字节数组进行解压，得到压缩前的字节数组。
3. 使用 UTF-8 字符集，将压缩前的字节数组转换为文本。

                     * 
                     */
                    std::string GetSpans() const;

                    /**
                     * 判断参数 Spans 是否已赋值
                     * @return Spans 是否已赋值
                     * 
                     */
                    bool SpansHasBeenSet() const;

                private:

                    /**
                     * 总数量
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * Spans字段中包含了链路数据的全部内容，由于数据经过了压缩，需要对结果进行如下三步转换，以还原始的文本。
1. 将Spans字段中的文本进行 Base64 解码，得到经过压缩后字节数组。
2. 使用 gzip 对压缩后的字节数组进行解压，得到压缩前的字节数组。
3. 使用 UTF-8 字符集，将压缩前的字节数组转换为文本。

                     */
                    std::string m_spans;
                    bool m_spansHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APM_V20210622_MODEL_DESCRIBEGENERALOTSPANLISTRESPONSE_H_
