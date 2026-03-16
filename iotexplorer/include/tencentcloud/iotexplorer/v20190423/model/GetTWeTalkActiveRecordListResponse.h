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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWETALKACTIVERECORDLISTRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWETALKACTIVERECORDLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TalkActivateRecordLogInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetTWeTalkActiveRecordList返回参数结构体
                */
                class GetTWeTalkActiveRecordListResponse : public AbstractModel
                {
                public:
                    GetTWeTalkActiveRecordListResponse();
                    ~GetTWeTalkActiveRecordListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备激活记录列表。
                     * @return ActiveRecords 设备激活记录列表。
                     * 
                     */
                    std::vector<TalkActivateRecordLogInfo> GetActiveRecords() const;

                    /**
                     * 判断参数 ActiveRecords 是否已赋值
                     * @return ActiveRecords 是否已赋值
                     * 
                     */
                    bool ActiveRecordsHasBeenSet() const;

                    /**
                     * 获取数据总数量。
                     * @return Total 数据总数量。
                     * 
                     */
                    int64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                private:

                    /**
                     * 设备激活记录列表。
                     */
                    std::vector<TalkActivateRecordLogInfo> m_activeRecords;
                    bool m_activeRecordsHasBeenSet;

                    /**
                     * 数据总数量。
                     */
                    int64_t m_total;
                    bool m_totalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWETALKACTIVERECORDLISTRESPONSE_H_
