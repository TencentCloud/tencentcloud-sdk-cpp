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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_CONTINUERUNFAILEDTASKBATCHREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_CONTINUERUNFAILEDTASKBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * ContinueRunFailedTaskBatch请求参数结构体
                */
                class ContinueRunFailedTaskBatchRequest : public AbstractModel
                {
                public:
                    ContinueRunFailedTaskBatchRequest();
                    ~ContinueRunFailedTaskBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取批次ID。
                     * @return BatchId 批次ID。
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID。
                     * @param _batchId 批次ID。
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                private:

                    /**
                     * 批次ID。
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_CONTINUERUNFAILEDTASKBATCHREQUEST_H_
