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

#ifndef TENCENTCLOUD_BRI_V20190328_MODEL_DESCRIBEBRIRESPONSE_H_
#define TENCENTCLOUD_BRI_V20190328_MODEL_DESCRIBEBRIRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bri/v20190328/model/BRIResponse.h>


namespace TencentCloud
{
    namespace Bri
    {
        namespace V20190328
        {
            namespace Model
            {
                /**
                * DescribeBRI返回参数结构体
                */
                class DescribeBRIResponse : public AbstractModel
                {
                public:
                    DescribeBRIResponse();
                    ~DescribeBRIResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务风险情报响应体
                     * @return ResponseData 业务风险情报响应体
                     * 
                     */
                    BRIResponse GetResponseData() const;

                    /**
                     * 判断参数 ResponseData 是否已赋值
                     * @return ResponseData 是否已赋值
                     * 
                     */
                    bool ResponseDataHasBeenSet() const;

                private:

                    /**
                     * 业务风险情报响应体
                     */
                    BRIResponse m_responseData;
                    bool m_responseDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BRI_V20190328_MODEL_DESCRIBEBRIRESPONSE_H_
