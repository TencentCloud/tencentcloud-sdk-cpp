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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKDOWNLOADRECORDSRESPONSE_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKDOWNLOADRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/DownloadAttackRecordInfo.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * GetAttackDownloadRecords返回参数结构体
                */
                class GetAttackDownloadRecordsResponse : public AbstractModel
                {
                public:
                    GetAttackDownloadRecordsResponse();
                    ~GetAttackDownloadRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取下载攻击日志记录数组
                     * @return Records 下载攻击日志记录数组
                     * 
                     */
                    std::vector<DownloadAttackRecordInfo> GetRecords() const;

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                private:

                    /**
                     * 下载攻击日志记录数组
                     */
                    std::vector<DownloadAttackRecordInfo> m_records;
                    bool m_recordsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_GETATTACKDOWNLOADRECORDSRESPONSE_H_
