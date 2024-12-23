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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACATEGORYTREERESPONSE_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACATEGORYTREERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * DescribeDSPACategoryTree返回参数结构体
                */
                class DescribeDSPACategoryTreeResponse : public AbstractModel
                {
                public:
                    DescribeDSPACategoryTreeResponse();
                    ~DescribeDSPACategoryTreeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取分类树json
                     * @return ResultJson 分类树json
                     * 
                     */
                    std::string GetResultJson() const;

                    /**
                     * 判断参数 ResultJson 是否已赋值
                     * @return ResultJson 是否已赋值
                     * 
                     */
                    bool ResultJsonHasBeenSet() const;

                private:

                    /**
                     * 分类树json
                     */
                    std::string m_resultJson;
                    bool m_resultJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DESCRIBEDSPACATEGORYTREERESPONSE_H_
