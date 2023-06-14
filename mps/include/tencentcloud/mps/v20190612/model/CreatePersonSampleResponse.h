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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLERESPONSE_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/AiSamplePerson.h>
#include <tencentcloud/mps/v20190612/model/AiSampleFailFaceInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * CreatePersonSample返回参数结构体
                */
                class CreatePersonSampleResponse : public AbstractModel
                {
                public:
                    CreatePersonSampleResponse();
                    ~CreatePersonSampleResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取素材信息。
                     * @return Person 素材信息。
                     * 
                     */
                    AiSamplePerson GetPerson() const;

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取处理失败的五官定位信息。
                     * @return FailFaceInfoSet 处理失败的五官定位信息。
                     * 
                     */
                    std::vector<AiSampleFailFaceInfo> GetFailFaceInfoSet() const;

                    /**
                     * 判断参数 FailFaceInfoSet 是否已赋值
                     * @return FailFaceInfoSet 是否已赋值
                     * 
                     */
                    bool FailFaceInfoSetHasBeenSet() const;

                private:

                    /**
                     * 素材信息。
                     */
                    AiSamplePerson m_person;
                    bool m_personHasBeenSet;

                    /**
                     * 处理失败的五官定位信息。
                     */
                    std::vector<AiSampleFailFaceInfo> m_failFaceInfoSet;
                    bool m_failFaceInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEPERSONSAMPLERESPONSE_H_
