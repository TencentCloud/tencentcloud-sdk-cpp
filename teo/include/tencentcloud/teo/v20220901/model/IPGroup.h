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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/IPExpireInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * IP 网段组
                */
                class IPGroup : public AbstractModel
                {
                public:
                    IPGroup();
                    ~IPGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>IP 组 Id，创建时填 0 即可。</p>
                     * @return GroupId <p>IP 组 Id，创建时填 0 即可。</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>IP 组 Id，创建时填 0 即可。</p>
                     * @param _groupId <p>IP 组 Id，创建时填 0 即可。</p>
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>IP 组名称。</p>
                     * @return Name <p>IP 组名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>IP 组名称。</p>
                     * @param _name <p>IP 组名称。</p>
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
                     * 获取<p>IP 组内容，仅支持 IP 及 IP 网段。</p>
                     * @return Content <p>IP 组内容，仅支持 IP 及 IP 网段。</p>
                     * 
                     */
                    std::vector<std::string> GetContent() const;

                    /**
                     * 设置<p>IP 组内容，仅支持 IP 及 IP 网段。</p>
                     * @param _content <p>IP 组内容，仅支持 IP 及 IP 网段。</p>
                     * 
                     */
                    void SetContent(const std::vector<std::string>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取<p>IP 组中正在生效的 IP 或网段个数。作为出参时有效，作为入参时无需填写该字段。</p>
                     * @return IPTotalCount <p>IP 组中正在生效的 IP 或网段个数。作为出参时有效，作为入参时无需填写该字段。</p>
                     * 
                     */
                    int64_t GetIPTotalCount() const;

                    /**
                     * 设置<p>IP 组中正在生效的 IP 或网段个数。作为出参时有效，作为入参时无需填写该字段。</p>
                     * @param _iPTotalCount <p>IP 组中正在生效的 IP 或网段个数。作为出参时有效，作为入参时无需填写该字段。</p>
                     * 
                     */
                    void SetIPTotalCount(const int64_t& _iPTotalCount);

                    /**
                     * 判断参数 IPTotalCount 是否已赋值
                     * @return IPTotalCount 是否已赋值
                     * 
                     */
                    bool IPTotalCountHasBeenSet() const;

                    /**
                     * 获取<p>IP 定时过期信息。<br>作为入参，用于为指定的 IP 地址或网段配置定时过期时间。<br>作为出参，包含以下两类信息：</p><li>当前未到期的定时过期信息：尚未触发的过期配置。</li><li>一周内已到期的定时过期信息：已触发的过期配置。</li>
                     * @return IPExpireInfo <p>IP 定时过期信息。<br>作为入参，用于为指定的 IP 地址或网段配置定时过期时间。<br>作为出参，包含以下两类信息：</p><li>当前未到期的定时过期信息：尚未触发的过期配置。</li><li>一周内已到期的定时过期信息：已触发的过期配置。</li>
                     * 
                     */
                    std::vector<IPExpireInfo> GetIPExpireInfo() const;

                    /**
                     * 设置<p>IP 定时过期信息。<br>作为入参，用于为指定的 IP 地址或网段配置定时过期时间。<br>作为出参，包含以下两类信息：</p><li>当前未到期的定时过期信息：尚未触发的过期配置。</li><li>一周内已到期的定时过期信息：已触发的过期配置。</li>
                     * @param _iPExpireInfo <p>IP 定时过期信息。<br>作为入参，用于为指定的 IP 地址或网段配置定时过期时间。<br>作为出参，包含以下两类信息：</p><li>当前未到期的定时过期信息：尚未触发的过期配置。</li><li>一周内已到期的定时过期信息：已触发的过期配置。</li>
                     * 
                     */
                    void SetIPExpireInfo(const std::vector<IPExpireInfo>& _iPExpireInfo);

                    /**
                     * 判断参数 IPExpireInfo 是否已赋值
                     * @return IPExpireInfo 是否已赋值
                     * 
                     */
                    bool IPExpireInfoHasBeenSet() const;

                    /**
                     * 获取<p>IP 组被引用的数量。</p>
                     * @return RefCount <p>IP 组被引用的数量。</p>
                     * 
                     */
                    int64_t GetRefCount() const;

                    /**
                     * 设置<p>IP 组被引用的数量。</p>
                     * @param _refCount <p>IP 组被引用的数量。</p>
                     * 
                     */
                    void SetRefCount(const int64_t& _refCount);

                    /**
                     * 判断参数 RefCount 是否已赋值
                     * @return RefCount 是否已赋值
                     * 
                     */
                    bool RefCountHasBeenSet() const;

                private:

                    /**
                     * <p>IP 组 Id，创建时填 0 即可。</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>IP 组名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>IP 组内容，仅支持 IP 及 IP 网段。</p>
                     */
                    std::vector<std::string> m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * <p>IP 组中正在生效的 IP 或网段个数。作为出参时有效，作为入参时无需填写该字段。</p>
                     */
                    int64_t m_iPTotalCount;
                    bool m_iPTotalCountHasBeenSet;

                    /**
                     * <p>IP 定时过期信息。<br>作为入参，用于为指定的 IP 地址或网段配置定时过期时间。<br>作为出参，包含以下两类信息：</p><li>当前未到期的定时过期信息：尚未触发的过期配置。</li><li>一周内已到期的定时过期信息：已触发的过期配置。</li>
                     */
                    std::vector<IPExpireInfo> m_iPExpireInfo;
                    bool m_iPExpireInfoHasBeenSet;

                    /**
                     * <p>IP 组被引用的数量。</p>
                     */
                    int64_t m_refCount;
                    bool m_refCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_IPGROUP_H_
