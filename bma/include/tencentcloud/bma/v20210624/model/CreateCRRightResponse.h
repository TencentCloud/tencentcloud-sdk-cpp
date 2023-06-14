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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * CreateCRRight返回参数结构体
                */
                class CreateCRRightResponse : public AbstractModel
                {
                public:
                    CreateCRRightResponse();
                    ~CreateCRRightResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取侵权ID
                     * @return TortId 侵权ID
                     * 
                     */
                    int64_t GetTortId() const;

                    /**
                     * 判断参数 TortId 是否已赋值
                     * @return TortId 是否已赋值
                     * 
                     */
                    bool TortIdHasBeenSet() const;

                    /**
                     * 获取该字段已废弃
                     * @return TortNum 该字段已废弃
                     * 
                     */
                    std::string GetTortNum() const;

                    /**
                     * 判断参数 TortNum 是否已赋值
                     * @return TortNum 是否已赋值
                     * 
                     */
                    bool TortNumHasBeenSet() const;

                private:

                    /**
                     * 侵权ID
                     */
                    int64_t m_tortId;
                    bool m_tortIdHasBeenSet;

                    /**
                     * 该字段已废弃
                     */
                    std::string m_tortNum;
                    bool m_tortNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRRIGHTRESPONSE_H_
