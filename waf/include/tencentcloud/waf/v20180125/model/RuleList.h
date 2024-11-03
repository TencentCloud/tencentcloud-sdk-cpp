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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_RULELIST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_RULELIST_H_

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
                * 规则白名单
                */
                class RuleList : public AbstractModel
                {
                public:
                    RuleList();
                    ~RuleList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则Id
                     * @return Id 规则Id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则Id
                     * @param _id 规则Id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取规则列表的id
                     * @return Rules 规则列表的id
                     * 
                     */
                    std::vector<uint64_t> GetRules() const;

                    /**
                     * 设置规则列表的id
                     * @param _rules 规则列表的id
                     * 
                     */
                    void SetRules(const std::vector<uint64_t>& _rules);

                    /**
                     * 判断参数 Rules 是否已赋值
                     * @return Rules 是否已赋值
                     * 
                     */
                    bool RulesHasBeenSet() const;

                    /**
                     * 获取请求url
                     * @return Url 请求url
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置请求url
                     * @param _url 请求url
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取请求的方法
                     * @return Function 请求的方法
                     * 
                     */
                    std::string GetFunction() const;

                    /**
                     * 设置请求的方法
                     * @param _function 请求的方法
                     * 
                     */
                    void SetFunction(const std::string& _function);

                    /**
                     * 判断参数 Function 是否已赋值
                     * @return Function 是否已赋值
                     * 
                     */
                    bool FunctionHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return Time 时间戳
                     * 
                     */
                    std::string GetTime() const;

                    /**
                     * 设置时间戳
                     * @param _time 时间戳
                     * 
                     */
                    void SetTime(const std::string& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取开关状态
                     * @return Status 开关状态
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置开关状态
                     * @param _status 开关状态
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 规则Id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 规则列表的id
                     */
                    std::vector<uint64_t> m_rules;
                    bool m_rulesHasBeenSet;

                    /**
                     * 请求url
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 请求的方法
                     */
                    std::string m_function;
                    bool m_functionHasBeenSet;

                    /**
                     * 时间戳
                     */
                    std::string m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * 开关状态
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_RULELIST_H_
