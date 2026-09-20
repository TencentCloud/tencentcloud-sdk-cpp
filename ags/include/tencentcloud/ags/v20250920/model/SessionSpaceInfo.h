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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONSPACEINFO_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONSPACEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * 描述会话空间的完整信息。会话空间是用户状态、会话和事件的上级资源及隔离边界，同一个会话只能属于一个会话空间。
                */
                class SessionSpaceInfo : public AbstractModel
                {
                public:
                    SessionSpaceInfo();
                    ~SessionSpaceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>会话空间唯一标识，由服务端生成，最大长度为 128 个字符。调用方不应自行构造或解析。</p>
                     * @return SpaceId <p>会话空间唯一标识，由服务端生成，最大长度为 128 个字符。调用方不应自行构造或解析。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>会话空间唯一标识，由服务端生成，最大长度为 128 个字符。调用方不应自行构造或解析。</p>
                     * @param _spaceId <p>会话空间唯一标识，由服务端生成，最大长度为 128 个字符。调用方不应自行构造或解析。</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>会话空间名称，用于标识会话空间的业务用途，最大长度为 128 个字符。</p>
                     * @return Name <p>会话空间名称，用于标识会话空间的业务用途，最大长度为 128 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>会话空间名称，用于标识会话空间的业务用途，最大长度为 128 个字符。</p>
                     * @param _name <p>会话空间名称，用于标识会话空间的业务用途，最大长度为 128 个字符。</p>
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
                     * 获取<p>会话空间描述，用于说明业务用途和使用范围，最大长度为 512 个字符。为空时该字段可能不返回</p>
                     * @return Description <p>会话空间描述，用于说明业务用途和使用范围，最大长度为 512 个字符。为空时该字段可能不返回</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>会话空间描述，用于说明业务用途和使用范围，最大长度为 512 个字符。为空时该字段可能不返回</p>
                     * @param _description <p>会话空间描述，用于说明业务用途和使用范围，最大长度为 512 个字符。为空时该字段可能不返回</p>
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
                     * 获取<p>会话空间当前状态。</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Deleting： 正在删除</li></ul>
                     * @return Status <p>会话空间当前状态。</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Deleting： 正在删除</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>会话空间当前状态。</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Deleting： 正在删除</li></ul>
                     * @param _status <p>会话空间当前状态。</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Deleting： 正在删除</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>是否为系统默认会话空间。true 表示默认会话空间，false 表示普通会话空间。默认会话空间不允许删除。</p>
                     * @return Default <p>是否为系统默认会话空间。true 表示默认会话空间，false 表示普通会话空间。默认会话空间不允许删除。</p>
                     * 
                     */
                    bool GetDefault() const;

                    /**
                     * 设置<p>是否为系统默认会话空间。true 表示默认会话空间，false 表示普通会话空间。默认会话空间不允许删除。</p>
                     * @param _default <p>是否为系统默认会话空间。true 表示默认会话空间，false 表示普通会话空间。默认会话空间不允许删除。</p>
                     * 
                     */
                    void SetDefault(const bool& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     * 
                     */
                    bool DefaultHasBeenSet() const;

                    /**
                     * 获取<p>会话空间创建时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * @return CreateTime <p>会话空间创建时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>会话空间创建时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * @param _createTime <p>会话空间创建时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>会话空间最后更新时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * @return UpdateTime <p>会话空间最后更新时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>会话空间最后更新时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * @param _updateTime <p>会话空间最后更新时间，采用 ISO 8601/RFC 3339 格式。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>会话空间唯一标识，由服务端生成，最大长度为 128 个字符。调用方不应自行构造或解析。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>会话空间名称，用于标识会话空间的业务用途，最大长度为 128 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>会话空间描述，用于说明业务用途和使用范围，最大长度为 512 个字符。为空时该字段可能不返回</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>会话空间当前状态。</p><p>枚举值：</p><ul><li>Active： 正常可用</li><li>Deleting： 正在删除</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>是否为系统默认会话空间。true 表示默认会话空间，false 表示普通会话空间。默认会话空间不允许删除。</p>
                     */
                    bool m_default;
                    bool m_defaultHasBeenSet;

                    /**
                     * <p>会话空间创建时间，采用 ISO 8601/RFC 3339 格式。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>会话空间最后更新时间，采用 ISO 8601/RFC 3339 格式。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_SESSIONSPACEINFO_H_
