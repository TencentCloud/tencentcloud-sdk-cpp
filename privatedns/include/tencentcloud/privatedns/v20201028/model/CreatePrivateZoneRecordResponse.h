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

#ifndef TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDRESPONSE_H_
#define TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Privatedns
    {
        namespace V20201028
        {
            namespace Model
            {
                /**
                * CreatePrivateZoneRecord返回参数结构体
                */
                class CreatePrivateZoneRecordResponse : public AbstractModel
                {
                public:
                    CreatePrivateZoneRecordResponse();
                    ~CreatePrivateZoneRecordResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录Id
                     * @return RecordId 记录Id
                     * 
                     */
                    std::string GetRecordId() const;

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     * 
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * 记录Id
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PRIVATEDNS_V20201028_MODEL_CREATEPRIVATEZONERECORDRESPONSE_H_
