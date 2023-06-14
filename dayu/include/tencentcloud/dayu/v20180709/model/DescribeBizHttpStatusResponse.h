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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSRESPONSE_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dayu/v20180709/model/HttpStatusMap.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeBizHttpStatus返回参数结构体
                */
                class DescribeBizHttpStatusResponse : public AbstractModel
                {
                public:
                    DescribeBizHttpStatusResponse();
                    ~DescribeBizHttpStatusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务流量http状态码统计数据
                     * @return HttpStatusMap 业务流量http状态码统计数据
                     * 
                     */
                    HttpStatusMap GetHttpStatusMap() const;

                    /**
                     * 判断参数 HttpStatusMap 是否已赋值
                     * @return HttpStatusMap 是否已赋值
                     * 
                     */
                    bool HttpStatusMapHasBeenSet() const;

                private:

                    /**
                     * 业务流量http状态码统计数据
                     */
                    HttpStatusMap m_httpStatusMap;
                    bool m_httpStatusMapHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_DESCRIBEBIZHTTPSTATUSRESPONSE_H_
