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

#ifndef TENCENTCLOUD_KMS_V20190118_MODEL_LISTALGORITHMSRESPONSE_H_
#define TENCENTCLOUD_KMS_V20190118_MODEL_LISTALGORITHMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/kms/v20190118/model/AlgorithmInfo.h>


namespace TencentCloud
{
    namespace Kms
    {
        namespace V20190118
        {
            namespace Model
            {
                /**
                * ListAlgorithms返回参数结构体
                */
                class ListAlgorithmsResponse : public AbstractModel
                {
                public:
                    ListAlgorithmsResponse();
                    ~ListAlgorithmsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取本地区支持的对称加密算法
                     * @return SymmetricAlgorithms 本地区支持的对称加密算法
                     * 
                     */
                    std::vector<AlgorithmInfo> GetSymmetricAlgorithms() const;

                    /**
                     * 判断参数 SymmetricAlgorithms 是否已赋值
                     * @return SymmetricAlgorithms 是否已赋值
                     * 
                     */
                    bool SymmetricAlgorithmsHasBeenSet() const;

                    /**
                     * 获取本地区支持的非对称加密算法
                     * @return AsymmetricAlgorithms 本地区支持的非对称加密算法
                     * 
                     */
                    std::vector<AlgorithmInfo> GetAsymmetricAlgorithms() const;

                    /**
                     * 判断参数 AsymmetricAlgorithms 是否已赋值
                     * @return AsymmetricAlgorithms 是否已赋值
                     * 
                     */
                    bool AsymmetricAlgorithmsHasBeenSet() const;

                    /**
                     * 获取本地区支持的非对称签名验签算法
                     * @return AsymmetricSignVerifyAlgorithms 本地区支持的非对称签名验签算法
                     * 
                     */
                    std::vector<AlgorithmInfo> GetAsymmetricSignVerifyAlgorithms() const;

                    /**
                     * 判断参数 AsymmetricSignVerifyAlgorithms 是否已赋值
                     * @return AsymmetricSignVerifyAlgorithms 是否已赋值
                     * 
                     */
                    bool AsymmetricSignVerifyAlgorithmsHasBeenSet() const;

                private:

                    /**
                     * 本地区支持的对称加密算法
                     */
                    std::vector<AlgorithmInfo> m_symmetricAlgorithms;
                    bool m_symmetricAlgorithmsHasBeenSet;

                    /**
                     * 本地区支持的非对称加密算法
                     */
                    std::vector<AlgorithmInfo> m_asymmetricAlgorithms;
                    bool m_asymmetricAlgorithmsHasBeenSet;

                    /**
                     * 本地区支持的非对称签名验签算法
                     */
                    std::vector<AlgorithmInfo> m_asymmetricSignVerifyAlgorithms;
                    bool m_asymmetricSignVerifyAlgorithmsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KMS_V20190118_MODEL_LISTALGORITHMSRESPONSE_H_
