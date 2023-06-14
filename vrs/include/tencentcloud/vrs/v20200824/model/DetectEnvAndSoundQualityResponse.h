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

#ifndef TENCENTCLOUD_VRS_V20200824_MODEL_DETECTENVANDSOUNDQUALITYRESPONSE_H_
#define TENCENTCLOUD_VRS_V20200824_MODEL_DETECTENVANDSOUNDQUALITYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vrs/v20200824/model/DetectionEnvAndSoundQualityRespData.h>


namespace TencentCloud
{
    namespace Vrs
    {
        namespace V20200824
        {
            namespace Model
            {
                /**
                * DetectEnvAndSoundQuality返回参数结构体
                */
                class DetectEnvAndSoundQualityResponse : public AbstractModel
                {
                public:
                    DetectEnvAndSoundQualityResponse();
                    ~DetectEnvAndSoundQualityResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取检测结果
                     * @return Data 检测结果
                     * 
                     */
                    DetectionEnvAndSoundQualityRespData GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 检测结果
                     */
                    DetectionEnvAndSoundQualityRespData m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VRS_V20200824_MODEL_DETECTENVANDSOUNDQUALITYRESPONSE_H_
