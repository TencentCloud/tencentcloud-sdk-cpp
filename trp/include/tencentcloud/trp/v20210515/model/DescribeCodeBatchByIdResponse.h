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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEBATCHBYIDRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEBATCHBYIDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/CodeBatch.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * DescribeCodeBatchById返回参数结构体
                */
                class DescribeCodeBatchByIdResponse : public AbstractModel
                {
                public:
                    DescribeCodeBatchByIdResponse();
                    ~DescribeCodeBatchByIdResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批次
                     * @return CodeBatch 批次
                     * 
                     */
                    CodeBatch GetCodeBatch() const;

                    /**
                     * 判断参数 CodeBatch 是否已赋值
                     * @return CodeBatch 是否已赋值
                     * 
                     */
                    bool CodeBatchHasBeenSet() const;

                private:

                    /**
                     * 批次
                     */
                    CodeBatch m_codeBatch;
                    bool m_codeBatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_DESCRIBECODEBATCHBYIDRESPONSE_H_
