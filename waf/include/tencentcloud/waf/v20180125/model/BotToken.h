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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BOTTOKEN_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BOTTOKEN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * bot-token配置
                */
                class BotToken : public AbstractModel
                {
                public:
                    BotToken();
                    ~BotToken() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话名称
                     * @return Name 会话名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置会话名称
                     * @param _name 会话名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取会话描述
                     * @return Description 会话描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置会话描述
                     * @param _description 会话描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取会话id
                     * @return Id 会话id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置会话id
                     * @param _id 会话id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取策略的开关状态
                     * @return Status 策略的开关状态
                     * 
                     */
                    bool GetStatus() const;

                    /**
                     * 设置策略的开关状态
                     * @param _status 策略的开关状态
                     * 
                     */
                    void SetStatus(const bool& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取会话位置
                     * @return Location 会话位置
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 设置会话位置
                     * @param _location 会话位置
                     * 
                     */
                    void SetLocation(const std::string& _location);

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取会话key
                     * @return Key 会话key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置会话key
                     * @param _key 会话key
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
                     * 获取会话匹配方式，前缀匹配、后缀匹配等
                     * @return Operator 会话匹配方式，前缀匹配、后缀匹配等
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置会话匹配方式，前缀匹配、后缀匹配等
                     * @param _operator 会话匹配方式，前缀匹配、后缀匹配等
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取会话更新的时间戳
                     * @return Timestamp 会话更新的时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置会话更新的时间戳
                     * @param _timestamp 会话更新的时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取场景列表，内容为空表示全部场景应用
                     * @return Scene 场景列表，内容为空表示全部场景应用
                     * 
                     */
                    std::vector<std::string> GetScene() const;

                    /**
                     * 设置场景列表，内容为空表示全部场景应用
                     * @param _scene 场景列表，内容为空表示全部场景应用
                     * 
                     */
                    void SetScene(const std::vector<std::string>& _scene);

                    /**
                     * 判断参数 Scene 是否已赋值
                     * @return Scene 是否已赋值
                     * 
                     */
                    bool SceneHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     * 
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param _priority 优先级
                     * 
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     * 
                     */
                    bool PriorityHasBeenSet() const;

                private:

                    /**
                     * 会话名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 会话描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 会话id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 策略的开关状态
                     */
                    bool m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 会话位置
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 会话key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 会话匹配方式，前缀匹配、后缀匹配等
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 会话更新的时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 场景列表，内容为空表示全部场景应用
                     */
                    std::vector<std::string> m_scene;
                    bool m_sceneHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BOTTOKEN_H_
