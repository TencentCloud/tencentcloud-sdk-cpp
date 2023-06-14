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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRUSERVERIFYRESPONSE_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRUSERVERIFYRESPONSE_H_

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
                * CreateCRUserVerify返回参数结构体
                */
                class CreateCRUserVerifyResponse : public AbstractModel
                {
                public:
                    CreateCRUserVerifyResponse();
                    ~CreateCRUserVerifyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取认证状态：0-认证成功 1-认证失败
                     * @return Status 认证状态：0-认证成功 1-认证失败
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取认证状态说明，包括认证失败原因等
                     * @return Note 认证状态说明，包括认证失败原因等
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                private:

                    /**
                     * 认证状态：0-认证成功 1-认证失败
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 认证状态说明，包括认证失败原因等
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_CREATECRUSERVERIFYRESPONSE_H_
