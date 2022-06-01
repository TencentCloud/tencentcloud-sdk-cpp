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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_SCANDNSRECORDSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_SCANDNSRECORDSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ScanDnsRecords返回参数结构体
                */
                class ScanDnsRecordsResponse : public AbstractModel
                {
                public:
                    ScanDnsRecordsResponse();
                    ~ScanDnsRecordsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取扫描状态
- doing 扫描中
- done 扫描完成
                     * @return Status 扫描状态
- doing 扫描中
- done 扫描完成
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取扫描后添加的记录数
                     * @return RecordsAdded 扫描后添加的记录数
                     */
                    int64_t GetRecordsAdded() const;

                    /**
                     * 判断参数 RecordsAdded 是否已赋值
                     * @return RecordsAdded 是否已赋值
                     */
                    bool RecordsAddedHasBeenSet() const;

                private:

                    /**
                     * 扫描状态
- doing 扫描中
- done 扫描完成
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 扫描后添加的记录数
                     */
                    int64_t m_recordsAdded;
                    bool m_recordsAddedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_SCANDNSRECORDSRESPONSE_H_
