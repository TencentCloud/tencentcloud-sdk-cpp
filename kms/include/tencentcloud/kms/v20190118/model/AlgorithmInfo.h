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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_ALGORITHMINFO_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_ALGORITHMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * 算法的名称 和 标识
                */
                class AlgorithmInfo : public AbstractModel
                {
                public:
                    AlgorithmInfo();
                    ~AlgorithmInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取算法的标识
                     * @return KeyUsage 算法的标识
                     * 
                     */
                    std::string GetKeyUsage() const;

                    /**
                     * 设置算法的标识
                     * @param _keyUsage 算法的标识
                     * 
                     */
                    void SetKeyUsage(const std::string& _keyUsage);

                    /**
                     * 判断参数 KeyUsage 是否已赋值
                     * @return KeyUsage 是否已赋值
                     * 
                     */
                    bool KeyUsageHasBeenSet() const;

                    /**
                     * 获取算法的名称
                     * @return Algorithm 算法的名称
                     * 
                     */
                    std::string GetAlgorithm() const;

                    /**
                     * 设置算法的名称
                     * @param _algorithm 算法的名称
                     * 
                     */
                    void SetAlgorithm(const std::string& _algorithm);

                    /**
                     * 判断参数 Algorithm 是否已赋值
                     * @return Algorithm 是否已赋值
                     * 
                     */
                    bool AlgorithmHasBeenSet() const;

                private:

                    /**
                     * 算法的标识
                     */
                    std::string m_keyUsage;
                    bool m_keyUsageHasBeenSet;

                    /**
                     * 算法的名称
                     */
                    std::string m_algorithm;
                    bool m_algorithmHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_ALGORITHMINFO_H_
