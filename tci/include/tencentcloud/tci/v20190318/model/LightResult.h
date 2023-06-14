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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTRESULT_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * LightResult
                */
                class LightResult : public AbstractModel
                {
                public:
                    LightResult();
                    ~LightResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取光照程度，参考提交任务时的LightStandard指定的Name参数
                     * @return LightLevel 光照程度，参考提交任务时的LightStandard指定的Name参数
                     * 
                     */
                    std::string GetLightLevel() const;

                    /**
                     * 设置光照程度，参考提交任务时的LightStandard指定的Name参数
                     * @param _lightLevel 光照程度，参考提交任务时的LightStandard指定的Name参数
                     * 
                     */
                    void SetLightLevel(const std::string& _lightLevel);

                    /**
                     * 判断参数 LightLevel 是否已赋值
                     * @return LightLevel 是否已赋值
                     * 
                     */
                    bool LightLevelHasBeenSet() const;

                    /**
                     * 获取光照亮度
                     * @return LightValue 光照亮度
                     * 
                     */
                    double GetLightValue() const;

                    /**
                     * 设置光照亮度
                     * @param _lightValue 光照亮度
                     * 
                     */
                    void SetLightValue(const double& _lightValue);

                    /**
                     * 判断参数 LightValue 是否已赋值
                     * @return LightValue 是否已赋值
                     * 
                     */
                    bool LightValueHasBeenSet() const;

                private:

                    /**
                     * 光照程度，参考提交任务时的LightStandard指定的Name参数
                     */
                    std::string m_lightLevel;
                    bool m_lightLevelHasBeenSet;

                    /**
                     * 光照亮度
                     */
                    double m_lightValue;
                    bool m_lightValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_LIGHTRESULT_H_
