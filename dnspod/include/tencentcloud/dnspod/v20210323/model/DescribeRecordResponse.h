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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/RecordInfo.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DescribeRecord返回参数结构体
                */
                class DescribeRecordResponse : public AbstractModel
                {
                public:
                    DescribeRecordResponse();
                    ~DescribeRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录信息
                     * @return RecordInfo 记录信息
                     * 
                     */
                    RecordInfo GetRecordInfo() const;

                    /**
                     * 判断参数 RecordInfo 是否已赋值
                     * @return RecordInfo 是否已赋值
                     * 
                     */
                    bool RecordInfoHasBeenSet() const;

                private:

                    /**
                     * 记录信息
                     */
                    RecordInfo m_recordInfo;
                    bool m_recordInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DESCRIBERECORDRESPONSE_H_
