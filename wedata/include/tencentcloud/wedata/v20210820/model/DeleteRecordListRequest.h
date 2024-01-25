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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETERECORDLISTREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETERECORDLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DeleteRecordList请求参数结构体
                */
                class DeleteRecordListRequest : public AbstractModel
                {
                public:
                    DeleteRecordListRequest();
                    ~DeleteRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取任务提交记录Id列表
                     * @return RecordIds 任务提交记录Id列表
                     * 
                     */
                    std::vector<uint64_t> GetRecordIds() const;

                    /**
                     * 设置任务提交记录Id列表
                     * @param _recordIds 任务提交记录Id列表
                     * 
                     */
                    void SetRecordIds(const std::vector<uint64_t>& _recordIds);

                    /**
                     * 判断参数 RecordIds 是否已赋值
                     * @return RecordIds 是否已赋值
                     * 
                     */
                    bool RecordIdsHasBeenSet() const;

                private:

                    /**
                     * 任务提交记录Id列表
                     */
                    std::vector<uint64_t> m_recordIds;
                    bool m_recordIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DELETERECORDLISTREQUEST_H_
