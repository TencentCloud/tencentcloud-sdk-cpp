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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_SETTINGDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_SETTINGDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 智能运维集群配置详情
                */
                class SettingDetail : public AbstractModel
                {
                public:
                    SettingDetail();
                    ~SettingDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取配置key
                     * @return Key 配置key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置配置key
                     * @param _key 配置key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取配置当前值
                     * @return Value 配置当前值
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置配置当前值
                     * @param _value 配置当前值
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取配置处理建议
                     * @return Advise 配置处理建议
                     * 
                     */
                    std::string GetAdvise() const;

                    /**
                     * 设置配置处理建议
                     * @param _advise 配置处理建议
                     * 
                     */
                    void SetAdvise(const std::string& _advise);

                    /**
                     * 判断参数 Advise 是否已赋值
                     * @return Advise 是否已赋值
                     * 
                     */
                    bool AdviseHasBeenSet() const;

                private:

                    /**
                     * 配置key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 配置当前值
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 配置处理建议
                     */
                    std::string m_advise;
                    bool m_adviseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_SETTINGDETAIL_H_
