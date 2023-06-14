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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETELORAFREQUENCYREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETELORAFREQUENCYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * DeleteLoRaFrequency请求参数结构体
                */
                class DeleteLoRaFrequencyRequest : public AbstractModel
                {
                public:
                    DeleteLoRaFrequencyRequest();
                    ~DeleteLoRaFrequencyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取频点唯一ID
                     * @return FreqId 频点唯一ID
                     * 
                     */
                    std::string GetFreqId() const;

                    /**
                     * 设置频点唯一ID
                     * @param _freqId 频点唯一ID
                     * 
                     */
                    void SetFreqId(const std::string& _freqId);

                    /**
                     * 判断参数 FreqId 是否已赋值
                     * @return FreqId 是否已赋值
                     * 
                     */
                    bool FreqIdHasBeenSet() const;

                private:

                    /**
                     * 频点唯一ID
                     */
                    std::string m_freqId;
                    bool m_freqIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DELETELORAFREQUENCYREQUEST_H_
