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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRWORKRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRWORKRESPONSE_H_

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
                * CreateCRWork返回参数结构体
                */
                class CreateCRWorkResponse : public AbstractModel
                {
                public:
                    CreateCRWorkResponse();
                    ~CreateCRWorkResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作品ID，一个作品对应唯一的workid
                     * @return WorkId 作品ID，一个作品对应唯一的workid
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取存证ID，忽略该字段
                     * @return EvidenceId 存证ID，忽略该字段
                     * 
                     */
                    int64_t GetEvidenceId() const;

                    /**
                     * 判断参数 EvidenceId 是否已赋值
                     * @return EvidenceId 是否已赋值
                     * 
                     */
                    bool EvidenceIdHasBeenSet() const;

                private:

                    /**
                     * 作品ID，一个作品对应唯一的workid
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 存证ID，忽略该字段
                     */
                    int64_t m_evidenceId;
                    bool m_evidenceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRWORKRESPONSE_H_
