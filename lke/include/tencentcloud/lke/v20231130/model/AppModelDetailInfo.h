/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_APPMODELDETAILINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_APPMODELDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ModelParams.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 模型详情
                */
                class AppModelDetailInfo : public AbstractModel
                {
                public:
                    AppModelDetailInfo();
                    ~AppModelDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取模型名称
                     * @return ModelName 模型名称
                     * 
                     */
                    std::string GetModelName() const;

                    /**
                     * 设置模型名称
                     * @param _modelName 模型名称
                     * 
                     */
                    void SetModelName(const std::string& _modelName);

                    /**
                     * 判断参数 ModelName 是否已赋值
                     * @return ModelName 是否已赋值
                     * 
                     */
                    bool ModelNameHasBeenSet() const;

                    /**
                     * 获取模型参数
                     * @return ModelParams 模型参数
                     * 
                     */
                    ModelParams GetModelParams() const;

                    /**
                     * 设置模型参数
                     * @param _modelParams 模型参数
                     * 
                     */
                    void SetModelParams(const ModelParams& _modelParams);

                    /**
                     * 判断参数 ModelParams 是否已赋值
                     * @return ModelParams 是否已赋值
                     * 
                     */
                    bool ModelParamsHasBeenSet() const;

                    /**
                     * 获取限制
                     * @return HistoryLimit 限制
                     * 
                     */
                    uint64_t GetHistoryLimit() const;

                    /**
                     * 设置限制
                     * @param _historyLimit 限制
                     * 
                     */
                    void SetHistoryLimit(const uint64_t& _historyLimit);

                    /**
                     * 判断参数 HistoryLimit 是否已赋值
                     * @return HistoryLimit 是否已赋值
                     * 
                     */
                    bool HistoryLimitHasBeenSet() const;

                    /**
                     * 获取模型别名
                     * @return AliasName 模型别名
                     * 
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置模型别名
                     * @param _aliasName 模型别名
                     * 
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     * 
                     */
                    bool AliasNameHasBeenSet() const;

                private:

                    /**
                     * 模型名称
                     */
                    std::string m_modelName;
                    bool m_modelNameHasBeenSet;

                    /**
                     * 模型参数
                     */
                    ModelParams m_modelParams;
                    bool m_modelParamsHasBeenSet;

                    /**
                     * 限制
                     */
                    uint64_t m_historyLimit;
                    bool m_historyLimitHasBeenSet;

                    /**
                     * 模型别名
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_APPMODELDETAILINFO_H_
