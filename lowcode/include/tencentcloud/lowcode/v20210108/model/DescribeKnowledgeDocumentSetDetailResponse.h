/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETDETAILRESPONSE_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETDETAILRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lowcode/v20210108/model/DescribeKnowledgeDocumentSetDetailRsp.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * DescribeKnowledgeDocumentSetDetail返回参数结构体
                */
                class DescribeKnowledgeDocumentSetDetailResponse : public AbstractModel
                {
                public:
                    DescribeKnowledgeDocumentSetDetailResponse();
                    ~DescribeKnowledgeDocumentSetDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取新增文件返回信息
                     * @return Data 新增文件返回信息
                     * 
                     */
                    DescribeKnowledgeDocumentSetDetailRsp GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 新增文件返回信息
                     */
                    DescribeKnowledgeDocumentSetDetailRsp m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DESCRIBEKNOWLEDGEDOCUMENTSETDETAILRESPONSE_H_
