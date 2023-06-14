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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESQLFILTERRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESQLFILTERRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * CreateSqlFilter返回参数结构体
                */
                class CreateSqlFilterResponse : public AbstractModel
                {
                public:
                    CreateSqlFilterResponse();
                    ~CreateSqlFilterResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取限流任务ID。
                     * @return FilterId 限流任务ID。
                     * 
                     */
                    int64_t GetFilterId() const;

                    /**
                     * 判断参数 FilterId 是否已赋值
                     * @return FilterId 是否已赋值
                     * 
                     */
                    bool FilterIdHasBeenSet() const;

                private:

                    /**
                     * 限流任务ID。
                     */
                    int64_t m_filterId;
                    bool m_filterIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_CREATESQLFILTERRESPONSE_H_
