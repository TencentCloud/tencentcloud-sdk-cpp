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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_CHECKSAVEPOINTRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_CHECKSAVEPOINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * CheckSavepoint返回参数结构体
                */
                class CheckSavepointResponse : public AbstractModel
                {
                public:
                    CheckSavepointResponse();
                    ~CheckSavepointResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资源 id
                     * @return SerialId 资源 id
                     * 
                     */
                    std::string GetSerialId() const;

                    /**
                     * 判断参数 SerialId 是否已赋值
                     * @return SerialId 是否已赋值
                     * 
                     */
                    bool SerialIdHasBeenSet() const;

                    /**
                     * 获取1=可用，2=不可用
                     * @return SavepointStatus 1=可用，2=不可用
                     * 
                     */
                    int64_t GetSavepointStatus() const;

                    /**
                     * 判断参数 SavepointStatus 是否已赋值
                     * @return SavepointStatus 是否已赋值
                     * 
                     */
                    bool SavepointStatusHasBeenSet() const;

                private:

                    /**
                     * 资源 id
                     */
                    std::string m_serialId;
                    bool m_serialIdHasBeenSet;

                    /**
                     * 1=可用，2=不可用
                     */
                    int64_t m_savepointStatus;
                    bool m_savepointStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_CHECKSAVEPOINTRESPONSE_H_
