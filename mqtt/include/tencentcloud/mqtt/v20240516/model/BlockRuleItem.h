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

#ifndef TENCENTCLOUD_MQTT_V20240516_MODEL_BLOCKRULEITEM_H_
#define TENCENTCLOUD_MQTT_V20240516_MODEL_BLOCKRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mqtt
    {
        namespace V20240516
        {
            namespace Model
            {
                /**
                * MQTT集群用户信息
                */
                class BlockRuleItem : public AbstractModel
                {
                public:
                    BlockRuleItem();
                    ~BlockRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>封禁策略名</p>
                     * @return Name <p>封禁策略名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>封禁策略名</p>
                     * @param _name <p>封禁策略名</p>
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
                     * 获取<p>封禁策略类型</p>
                     * @return Type <p>封禁策略类型</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>封禁策略类型</p>
                     * @param _type <p>封禁策略类型</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>备注信息</p>
                     * @return Remark <p>备注信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注信息</p>
                     * @param _remark <p>备注信息</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>包含规则</p>
                     * @return Include <p>包含规则</p>
                     * 
                     */
                    std::string GetInclude() const;

                    /**
                     * 设置<p>包含规则</p>
                     * @param _include <p>包含规则</p>
                     * 
                     */
                    void SetInclude(const std::string& _include);

                    /**
                     * 判断参数 Include 是否已赋值
                     * @return Include 是否已赋值
                     * 
                     */
                    bool IncludeHasBeenSet() const;

                    /**
                     * 获取<p>排除规则</p>
                     * @return Excludes <p>排除规则</p>
                     * 
                     */
                    std::vector<std::string> GetExcludes() const;

                    /**
                     * 设置<p>排除规则</p>
                     * @param _excludes <p>排除规则</p>
                     * 
                     */
                    void SetExcludes(const std::vector<std::string>& _excludes);

                    /**
                     * 判断参数 Excludes 是否已赋值
                     * @return Excludes 是否已赋值
                     * 
                     */
                    bool ExcludesHasBeenSet() const;

                    /**
                     * 获取<p>过期时间，毫秒级时间戳 。</p>
                     * @return ExpireTime <p>过期时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetExpireTime() const;

                    /**
                     * 设置<p>过期时间，毫秒级时间戳 。</p>
                     * @param _expireTime <p>过期时间，毫秒级时间戳 。</p>
                     * 
                     */
                    void SetExpireTime(const int64_t& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>修改时间，毫秒级时间戳 。</p>
                     * @return UpdateTime <p>修改时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置<p>修改时间，毫秒级时间戳 。</p>
                     * @param _updateTime <p>修改时间，毫秒级时间戳 。</p>
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，毫秒级时间戳 。</p>
                     * @return CreateTime <p>创建时间，毫秒级时间戳 。</p>
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，毫秒级时间戳 。</p>
                     * @param _createTime <p>创建时间，毫秒级时间戳 。</p>
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>封禁策略名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>封禁策略类型</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>备注信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>包含规则</p>
                     */
                    std::string m_include;
                    bool m_includeHasBeenSet;

                    /**
                     * <p>排除规则</p>
                     */
                    std::vector<std::string> m_excludes;
                    bool m_excludesHasBeenSet;

                    /**
                     * <p>过期时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>修改时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>创建时间，毫秒级时间戳 。</p>
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MQTT_V20240516_MODEL_BLOCKRULEITEM_H_
