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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCERESPONSE_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * GenerateReflectSequence返回参数结构体
                */
                class GenerateReflectSequenceResponse : public AbstractModel
                {
                public:
                    GenerateReflectSequenceResponse();
                    ~GenerateReflectSequenceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取光线序列的资源链接，下载后透传给SDK即可开始核身。
                     * @return ReflectSequenceUrl 光线序列的资源链接，下载后透传给SDK即可开始核身。
                     */
                    std::string GetReflectSequenceUrl() const;

                    /**
                     * 判断参数 ReflectSequenceUrl 是否已赋值
                     * @return ReflectSequenceUrl 是否已赋值
                     */
                    bool ReflectSequenceUrlHasBeenSet() const;

                    /**
                     * 获取光线序列的资源MD5值，用于校验改序列是否被篡改。
                     * @return ReflectSequenceMd5 光线序列的资源MD5值，用于校验改序列是否被篡改。
                     */
                    std::string GetReflectSequenceMd5() const;

                    /**
                     * 判断参数 ReflectSequenceMd5 是否已赋值
                     * @return ReflectSequenceMd5 是否已赋值
                     */
                    bool ReflectSequenceMd5HasBeenSet() const;

                private:

                    /**
                     * 光线序列的资源链接，下载后透传给SDK即可开始核身。
                     */
                    std::string m_reflectSequenceUrl;
                    bool m_reflectSequenceUrlHasBeenSet;

                    /**
                     * 光线序列的资源MD5值，用于校验改序列是否被篡改。
                     */
                    std::string m_reflectSequenceMd5;
                    bool m_reflectSequenceMd5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_GENERATEREFLECTSEQUENCERESPONSE_H_
