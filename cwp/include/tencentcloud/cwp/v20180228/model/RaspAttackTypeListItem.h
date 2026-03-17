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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPATTACKTYPELISTITEM_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPATTACKTYPELISTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 应用防护白名单攻击类型列表
                */
                class RaspAttackTypeListItem : public AbstractModel
                {
                public:
                    RaspAttackTypeListItem();
                    ~RaspAttackTypeListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取攻击类型名称
                     * @return AttackTypeName 攻击类型名称
                     * 
                     */
                    std::string GetAttackTypeName() const;

                    /**
                     * 设置攻击类型名称
                     * @param _attackTypeName 攻击类型名称
                     * 
                     */
                    void SetAttackTypeName(const std::string& _attackTypeName);

                    /**
                     * 判断参数 AttackTypeName 是否已赋值
                     * @return AttackTypeName 是否已赋值
                     * 
                     */
                    bool AttackTypeNameHasBeenSet() const;

                    /**
                     * 获取攻击类型ID
                     * @return AttackTypeID 攻击类型ID
                     * 
                     */
                    int64_t GetAttackTypeID() const;

                    /**
                     * 设置攻击类型ID
                     * @param _attackTypeID 攻击类型ID
                     * 
                     */
                    void SetAttackTypeID(const int64_t& _attackTypeID);

                    /**
                     * 判断参数 AttackTypeID 是否已赋值
                     * @return AttackTypeID 是否已赋值
                     * 
                     */
                    bool AttackTypeIDHasBeenSet() const;

                    /**
                     * 获取漏洞对应的功能类型，rasp:漏洞防御,memshell_inject:内存马注入
                     * @return Source 漏洞对应的功能类型，rasp:漏洞防御,memshell_inject:内存马注入
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置漏洞对应的功能类型，rasp:漏洞防御,memshell_inject:内存马注入
                     * @param _source 漏洞对应的功能类型，rasp:漏洞防御,memshell_inject:内存马注入
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                private:

                    /**
                     * 攻击类型名称
                     */
                    std::string m_attackTypeName;
                    bool m_attackTypeNameHasBeenSet;

                    /**
                     * 攻击类型ID
                     */
                    int64_t m_attackTypeID;
                    bool m_attackTypeIDHasBeenSet;

                    /**
                     * 漏洞对应的功能类型，rasp:漏洞防御,memshell_inject:内存马注入
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPATTACKTYPELISTITEM_H_
