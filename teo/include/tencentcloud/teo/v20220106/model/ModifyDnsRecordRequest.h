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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyDnsRecord请求参数结构体
                */
                class ModifyDnsRecordRequest : public AbstractModel
                {
                public:
                    ModifyDnsRecordRequest();
                    ~ModifyDnsRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取记录 ID
                     * @return Id 记录 ID
                     */
                    std::string GetId() const;

                    /**
                     * 设置记录 ID
                     * @param Id 记录 ID
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取站点 ID
                     * @return ZoneId 站点 ID
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点 ID
                     * @param ZoneId 站点 ID
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取记录类型
                     * @return Type 记录类型
                     */
                    std::string GetType() const;

                    /**
                     * 设置记录类型
                     * @param Type 记录类型
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取记录名称
                     * @return Name 记录名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置记录名称
                     * @param Name 记录名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取记录内容
                     * @return Content 记录内容
                     */
                    std::string GetContent() const;

                    /**
                     * 设置记录内容
                     * @param Content 记录内容
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取生存时间值
                     * @return Ttl 生存时间值
                     */
                    int64_t GetTtl() const;

                    /**
                     * 设置生存时间值
                     * @param Ttl 生存时间值
                     */
                    void SetTtl(const int64_t& _ttl);

                    /**
                     * 判断参数 Ttl 是否已赋值
                     * @return Ttl 是否已赋值
                     */
                    bool TtlHasBeenSet() const;

                    /**
                     * 获取优先级
                     * @return Priority 优先级
                     */
                    int64_t GetPriority() const;

                    /**
                     * 设置优先级
                     * @param Priority 优先级
                     */
                    void SetPriority(const int64_t& _priority);

                    /**
                     * 判断参数 Priority 是否已赋值
                     * @return Priority 是否已赋值
                     */
                    bool PriorityHasBeenSet() const;

                    /**
                     * 获取代理模式
                     * @return Mode 代理模式
                     */
                    std::string GetMode() const;

                    /**
                     * 设置代理模式
                     * @param Mode 代理模式
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     */
                    bool ModeHasBeenSet() const;

                private:

                    /**
                     * 记录 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点 ID
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 记录类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 记录名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 记录内容
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 生存时间值
                     */
                    int64_t m_ttl;
                    bool m_ttlHasBeenSet;

                    /**
                     * 优先级
                     */
                    int64_t m_priority;
                    bool m_priorityHasBeenSet;

                    /**
                     * 代理模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSRECORDREQUEST_H_
