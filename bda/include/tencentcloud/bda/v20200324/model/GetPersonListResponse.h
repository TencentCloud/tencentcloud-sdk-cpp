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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_GETPERSONLISTRESPONSE_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_GETPERSONLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bda/v20200324/model/PersonInfo.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * GetPersonList返回参数结构体
                */
                class GetPersonListResponse : public AbstractModel
                {
                public:
                    GetPersonListResponse();
                    ~GetPersonListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的人员信息。
                     * @return PersonInfos 返回的人员信息。
                     * 
                     */
                    std::vector<PersonInfo> GetPersonInfos() const;

                    /**
                     * 判断参数 PersonInfos 是否已赋值
                     * @return PersonInfos 是否已赋值
                     * 
                     */
                    bool PersonInfosHasBeenSet() const;

                    /**
                     * 获取该人体库的人员数量。
                     * @return PersonNum 该人体库的人员数量。
                     * 
                     */
                    uint64_t GetPersonNum() const;

                    /**
                     * 判断参数 PersonNum 是否已赋值
                     * @return PersonNum 是否已赋值
                     * 
                     */
                    bool PersonNumHasBeenSet() const;

                    /**
                     * 获取人体识别所用的算法模型版本。
                     * @return BodyModelVersion 人体识别所用的算法模型版本。
                     * 
                     */
                    std::string GetBodyModelVersion() const;

                    /**
                     * 判断参数 BodyModelVersion 是否已赋值
                     * @return BodyModelVersion 是否已赋值
                     * 
                     */
                    bool BodyModelVersionHasBeenSet() const;

                private:

                    /**
                     * 返回的人员信息。
                     */
                    std::vector<PersonInfo> m_personInfos;
                    bool m_personInfosHasBeenSet;

                    /**
                     * 该人体库的人员数量。
                     */
                    uint64_t m_personNum;
                    bool m_personNumHasBeenSet;

                    /**
                     * 人体识别所用的算法模型版本。
                     */
                    std::string m_bodyModelVersion;
                    bool m_bodyModelVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_GETPERSONLISTRESPONSE_H_
