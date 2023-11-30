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

#ifndef TENCENTCLOUD_SCF_V20180416_MODEL_ROUTINGCONFIG_H_
#define TENCENTCLOUD_SCF_V20180416_MODEL_ROUTINGCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/scf/v20180416/model/VersionWeight.h>
#include <tencentcloud/scf/v20180416/model/VersionMatch.h>


namespace TencentCloud
{
    namespace Scf
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 别名的版本路由配置
其中：随机权重路由附加版本和规则路由附加版本不可以同时配置
                */
                class RoutingConfig : public AbstractModel
                {
                public:
                    RoutingConfig();
                    ~RoutingConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取随机权重路由附加版本
                     * @return AdditionalVersionWeights 随机权重路由附加版本
                     * 
                     */
                    std::vector<VersionWeight> GetAdditionalVersionWeights() const;

                    /**
                     * 设置随机权重路由附加版本
                     * @param _additionalVersionWeights 随机权重路由附加版本
                     * 
                     */
                    void SetAdditionalVersionWeights(const std::vector<VersionWeight>& _additionalVersionWeights);

                    /**
                     * 判断参数 AdditionalVersionWeights 是否已赋值
                     * @return AdditionalVersionWeights 是否已赋值
                     * 
                     */
                    bool AdditionalVersionWeightsHasBeenSet() const;

                    /**
                     * 获取规则路由附加版本
                     * @return AddtionVersionMatchs 规则路由附加版本
                     * 
                     */
                    std::vector<VersionMatch> GetAddtionVersionMatchs() const;

                    /**
                     * 设置规则路由附加版本
                     * @param _addtionVersionMatchs 规则路由附加版本
                     * 
                     */
                    void SetAddtionVersionMatchs(const std::vector<VersionMatch>& _addtionVersionMatchs);

                    /**
                     * 判断参数 AddtionVersionMatchs 是否已赋值
                     * @return AddtionVersionMatchs 是否已赋值
                     * 
                     */
                    bool AddtionVersionMatchsHasBeenSet() const;

                private:

                    /**
                     * 随机权重路由附加版本
                     */
                    std::vector<VersionWeight> m_additionalVersionWeights;
                    bool m_additionalVersionWeightsHasBeenSet;

                    /**
                     * 规则路由附加版本
                     */
                    std::vector<VersionMatch> m_addtionVersionMatchs;
                    bool m_addtionVersionMatchsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SCF_V20180416_MODEL_ROUTINGCONFIG_H_
