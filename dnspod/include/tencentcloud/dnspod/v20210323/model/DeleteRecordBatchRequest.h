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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHREQUEST_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DeleteRecordBatch请求参数结构体
                */
                class DeleteRecordBatchRequest : public AbstractModel
                {
                public:
                    DeleteRecordBatchRequest();
                    ~DeleteRecordBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取解析记录 ID 数组
                     * @return RecordIdList 解析记录 ID 数组
                     * 
                     */
                    std::vector<uint64_t> GetRecordIdList() const;

                    /**
                     * 设置解析记录 ID 数组
                     * @param _recordIdList 解析记录 ID 数组
                     * 
                     */
                    void SetRecordIdList(const std::vector<uint64_t>& _recordIdList);

                    /**
                     * 判断参数 RecordIdList 是否已赋值
                     * @return RecordIdList 是否已赋值
                     * 
                     */
                    bool RecordIdListHasBeenSet() const;

                private:

                    /**
                     * 解析记录 ID 数组
                     */
                    std::vector<uint64_t> m_recordIdList;
                    bool m_recordIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHREQUEST_H_
