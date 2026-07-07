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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELHEALTHCHECKRESULTS_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELHEALTHCHECKRESULTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * BYOK的健康检查结果
                */
                class ModelHealthCheckResults : public AbstractModel
                {
                public:
                    ModelHealthCheckResults();
                    ~ModelHealthCheckResults() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>BYOK的KeyID</p>
                     * @return ProviderKeyId <p>BYOK的KeyID</p>
                     * 
                     */
                    std::string GetProviderKeyId() const;

                    /**
                     * 设置<p>BYOK的KeyID</p>
                     * @param _providerKeyId <p>BYOK的KeyID</p>
                     * 
                     */
                    void SetProviderKeyId(const std::string& _providerKeyId);

                    /**
                     * 判断参数 ProviderKeyId 是否已赋值
                     * @return ProviderKeyId 是否已赋值
                     * 
                     */
                    bool ProviderKeyIdHasBeenSet() const;

                    /**
                     * 获取<p>模型</p>
                     * @return Model <p>模型</p>
                     * 
                     */
                    std::string GetModel() const;

                    /**
                     * 设置<p>模型</p>
                     * @param _model <p>模型</p>
                     * 
                     */
                    void SetModel(const std::string& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>健康检查状态</p>
                     * @return Status <p>健康检查状态</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>健康检查状态</p>
                     * @param _status <p>健康检查状态</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>BYOK的KeyID</p>
                     */
                    std::string m_providerKeyId;
                    bool m_providerKeyIdHasBeenSet;

                    /**
                     * <p>模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>健康检查状态</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELHEALTHCHECKRESULTS_H_
