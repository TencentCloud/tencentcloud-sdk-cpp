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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONTARGET_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONTARGET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/clb/v20180317/model/FunctionInfo.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * SCF云函数（Serverless Cloud Function）作为后端服务
                */
                class FunctionTarget : public AbstractModel
                {
                public:
                    FunctionTarget();
                    ~FunctionTarget() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云函数相关信息
                     * @return Function 云函数相关信息
                     * 
                     */
                    FunctionInfo GetFunction() const;

                    /**
                     * 设置云函数相关信息
                     * @param _function 云函数相关信息
                     * 
                     */
                    void SetFunction(const FunctionInfo& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取权重
                     * @return Weight 权重
                     * 
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置权重
                     * @param _weight 权重
                     * 
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                private:

                    /**
                     * 云函数相关信息
                     */
                    FunctionInfo m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_FUNCTIONTARGET_H_
