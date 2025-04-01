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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERBEHAVIOR_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERBEHAVIOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tse/v20201207/model/AutoScalerRules.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 指标伸缩行为
                */
                class AutoScalerBehavior : public AbstractModel
                {
                public:
                    AutoScalerBehavior();
                    ~AutoScalerBehavior() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扩容行为配置
                     * @return ScaleUp 扩容行为配置
                     * 
                     */
                    AutoScalerRules GetScaleUp() const;

                    /**
                     * 设置扩容行为配置
                     * @param _scaleUp 扩容行为配置
                     * 
                     */
                    void SetScaleUp(const AutoScalerRules& _scaleUp);

                    /**
                     * 判断参数 ScaleUp 是否已赋值
                     * @return ScaleUp 是否已赋值
                     * 
                     */
                    bool ScaleUpHasBeenSet() const;

                    /**
                     * 获取缩容行为配置
                     * @return ScaleDown 缩容行为配置
                     * 
                     */
                    AutoScalerRules GetScaleDown() const;

                    /**
                     * 设置缩容行为配置
                     * @param _scaleDown 缩容行为配置
                     * 
                     */
                    void SetScaleDown(const AutoScalerRules& _scaleDown);

                    /**
                     * 判断参数 ScaleDown 是否已赋值
                     * @return ScaleDown 是否已赋值
                     * 
                     */
                    bool ScaleDownHasBeenSet() const;

                private:

                    /**
                     * 扩容行为配置
                     */
                    AutoScalerRules m_scaleUp;
                    bool m_scaleUpHasBeenSet;

                    /**
                     * 缩容行为配置
                     */
                    AutoScalerRules m_scaleDown;
                    bool m_scaleDownHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AUTOSCALERBEHAVIOR_H_
