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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_FREQUENCYLIMITCONFIG_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_FREQUENCYLIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 安全网关版本路由信息限额配置
                */
                class FrequencyLimitConfig : public AbstractModel
                {
                public:
                    FrequencyLimitConfig();
                    ~FrequencyLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取限额对象 "ConnectionsLimit" 或 "QPSLimit"
                     * @return LimitObject 限额对象 "ConnectionsLimit" 或 "QPSLimit"
                     * 
                     */
                    std::string GetLimitObject() const;

                    /**
                     * 设置限额对象 "ConnectionsLimit" 或 "QPSLimit"
                     * @param _limitObject 限额对象 "ConnectionsLimit" 或 "QPSLimit"
                     * 
                     */
                    void SetLimitObject(const std::string& _limitObject);

                    /**
                     * 判断参数 LimitObject 是否已赋值
                     * @return LimitObject 是否已赋值
                     * 
                     */
                    bool LimitObjectHasBeenSet() const;

                    /**
                     * 获取限额配置
                     * @return LimitConfig 限额配置
                     * 
                     */
                    std::string GetLimitConfig() const;

                    /**
                     * 设置限额配置
                     * @param _limitConfig 限额配置
                     * 
                     */
                    void SetLimitConfig(const std::string& _limitConfig);

                    /**
                     * 判断参数 LimitConfig 是否已赋值
                     * @return LimitConfig 是否已赋值
                     * 
                     */
                    bool LimitConfigHasBeenSet() const;

                private:

                    /**
                     * 限额对象 "ConnectionsLimit" 或 "QPSLimit"
                     */
                    std::string m_limitObject;
                    bool m_limitObjectHasBeenSet;

                    /**
                     * 限额配置
                     */
                    std::string m_limitConfig;
                    bool m_limitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_FREQUENCYLIMITCONFIG_H_
