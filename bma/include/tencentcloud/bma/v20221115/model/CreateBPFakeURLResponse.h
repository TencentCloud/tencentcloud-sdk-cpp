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

#ifndef TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLRESPONSE_H_
#define TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20221115
        {
            namespace Model
            {
                /**
                * CreateBPFakeURL返回参数结构体
                */
                class CreateBPFakeURLResponse : public AbstractModel
                {
                public:
                    CreateBPFakeURLResponse();
                    ~CreateBPFakeURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取FakeURLId
                     * @return FakeURLId FakeURLId
                     * 
                     */
                    int64_t GetFakeURLId() const;

                    /**
                     * 判断参数 FakeURLId 是否已赋值
                     * @return FakeURLId 是否已赋值
                     * 
                     */
                    bool FakeURLIdHasBeenSet() const;

                private:

                    /**
                     * FakeURLId
                     */
                    int64_t m_fakeURLId;
                    bool m_fakeURLIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20221115_MODEL_CREATEBPFAKEURLRESPONSE_H_
