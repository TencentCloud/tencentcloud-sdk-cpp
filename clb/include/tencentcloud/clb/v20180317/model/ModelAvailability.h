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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_MODELAVAILABILITY_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_MODELAVAILABILITY_H_

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
                * 模型可用性
                */
                class ModelAvailability : public AbstractModel
                {
                public:
                    ModelAvailability();
                    ~ModelAvailability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>该模型所有健康BYOK实例下支持的输入多模态能力的并集。模型不健康时返回空列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * @return InputModalities <p>该模型所有健康BYOK实例下支持的输入多模态能力的并集。模型不健康时返回空列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * 
                     */
                    std::vector<std::string> GetInputModalities() const;

                    /**
                     * 设置<p>该模型所有健康BYOK实例下支持的输入多模态能力的并集。模型不健康时返回空列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * @param _inputModalities <p>该模型所有健康BYOK实例下支持的输入多模态能力的并集。模型不健康时返回空列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     * 
                     */
                    void SetInputModalities(const std::vector<std::string>& _inputModalities);

                    /**
                     * 判断参数 InputModalities 是否已赋值
                     * @return InputModalities 是否已赋值
                     * 
                     */
                    bool InputModalitiesHasBeenSet() const;

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
                     * 获取<p>可用性状态</p><p>枚举值：</p><ul><li>Available： 可用</li><li>Unavailable： 不可用</li><li>Unknown： 未探测</li></ul>
                     * @return Status <p>可用性状态</p><p>枚举值：</p><ul><li>Available： 可用</li><li>Unavailable： 不可用</li><li>Unknown： 未探测</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>可用性状态</p><p>枚举值：</p><ul><li>Available： 可用</li><li>Unavailable： 不可用</li><li>Unknown： 未探测</li></ul>
                     * @param _status <p>可用性状态</p><p>枚举值：</p><ul><li>Available： 可用</li><li>Unavailable： 不可用</li><li>Unknown： 未探测</li></ul>
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
                     * <p>该模型所有健康BYOK实例下支持的输入多模态能力的并集。模型不健康时返回空列表。</p><p>枚举值：</p><ul><li>text： 支持文本输入</li><li>image： 支持图像输入</li><li>file： 支持文件输入（当前仅支持pdf）</li></ul>
                     */
                    std::vector<std::string> m_inputModalities;
                    bool m_inputModalitiesHasBeenSet;

                    /**
                     * <p>模型</p>
                     */
                    std::string m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>可用性状态</p><p>枚举值：</p><ul><li>Available： 可用</li><li>Unavailable： 不可用</li><li>Unknown： 未探测</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_MODELAVAILABILITY_H_
