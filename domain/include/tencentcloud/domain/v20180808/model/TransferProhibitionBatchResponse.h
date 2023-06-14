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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERPROHIBITIONBATCHRESPONSE_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERPROHIBITIONBATCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * TransferProhibitionBatch返回参数结构体
                */
                class TransferProhibitionBatchResponse : public AbstractModel
                {
                public:
                    TransferProhibitionBatchResponse();
                    ~TransferProhibitionBatchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志ID
                     * @return LogId 日志ID
                     * 
                     */
                    uint64_t GetLogId() const;

                    /**
                     * 判断参数 LogId 是否已赋值
                     * @return LogId 是否已赋值
                     * 
                     */
                    bool LogIdHasBeenSet() const;

                private:

                    /**
                     * 日志ID
                     */
                    uint64_t m_logId;
                    bool m_logIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_TRANSFERPROHIBITIONBATCHRESPONSE_H_
