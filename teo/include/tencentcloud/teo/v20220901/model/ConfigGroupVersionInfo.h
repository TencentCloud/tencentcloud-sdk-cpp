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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 配置组版本信息。
                */
                class ConfigGroupVersionInfo : public AbstractModel
                {
                public:
                    ConfigGroupVersionInfo();
                    ~ConfigGroupVersionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>配置组版本 ID，创建配置组版本时 EdgeOne 分配的唯一资源 ID。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * @return VersionId <p>配置组版本 ID，创建配置组版本时 EdgeOne 分配的唯一资源 ID。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置<p>配置组版本 ID，创建配置组版本时 EdgeOne 分配的唯一资源 ID。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * @param _versionId <p>配置组版本 ID，创建配置组版本时 EdgeOne 分配的唯一资源 ID。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    void SetVersionId(const std::string& _versionId);

                    /**
                     * 判断参数 VersionId 是否已赋值
                     * @return VersionId 是否已赋值
                     * 
                     */
                    bool VersionIdHasBeenSet() const;

                    /**
                     * 获取<p>配置组版本号。该参数仅作展示使用，配置组每创建一次新版本，该版本号自增加一，初始版本的版本号为 &quot;0&quot;。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></p>
                     * @return VersionNumber <p>配置组版本号。该参数仅作展示使用，配置组每创建一次新版本，该版本号自增加一，初始版本的版本号为 &quot;0&quot;。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></p>
                     * 
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置<p>配置组版本号。该参数仅作展示使用，配置组每创建一次新版本，该版本号自增加一，初始版本的版本号为 &quot;0&quot;。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></p>
                     * @param _versionNumber <p>配置组版本号。该参数仅作展示使用，配置组每创建一次新版本，该版本号自增加一，初始版本的版本号为 &quot;0&quot;。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></p>
                     * 
                     */
                    void SetVersionNumber(const std::string& _versionNumber);

                    /**
                     * 判断参数 VersionNumber 是否已赋值
                     * @return VersionNumber 是否已赋值
                     * 
                     */
                    bool VersionNumberHasBeenSet() const;

                    /**
                     * 获取<p>配置组版本所基于的来源版本 ID，在创建配置组版本时进行指定来源版本 ID，新版本将在该来源版本的配置基础上派生创建。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * @return SourceVersion <p>配置组版本所基于的来源版本 ID，在创建配置组版本时进行指定来源版本 ID，新版本将在该来源版本的配置基础上派生创建。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    std::string GetSourceVersion() const;

                    /**
                     * 设置<p>配置组版本所基于的来源版本 ID，在创建配置组版本时进行指定来源版本 ID，新版本将在该来源版本的配置基础上派生创建。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * @param _sourceVersion <p>配置组版本所基于的来源版本 ID，在创建配置组版本时进行指定来源版本 ID，新版本将在该来源版本的配置基础上派生创建。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     * 
                     */
                    void SetSourceVersion(const std::string& _sourceVersion);

                    /**
                     * 判断参数 SourceVersion 是否已赋值
                     * @return SourceVersion 是否已赋值
                     * 
                     */
                    bool SourceVersionHasBeenSet() const;

                    /**
                     * 获取<p>版本归属的配置组类型。</p><p>枚举值：</p><ul><li>l7_acceleration： 七层加速配置组</li><li>edge_functions： 边缘函数配置组</li><li>web_security： Web 防护配置组</li></ul>
                     * @return GroupType <p>版本归属的配置组类型。</p><p>枚举值：</p><ul><li>l7_acceleration： 七层加速配置组</li><li>edge_functions： 边缘函数配置组</li><li>web_security： Web 防护配置组</li></ul>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置<p>版本归属的配置组类型。</p><p>枚举值：</p><ul><li>l7_acceleration： 七层加速配置组</li><li>edge_functions： 边缘函数配置组</li><li>web_security： Web 防护配置组</li></ul>
                     * @param _groupType <p>版本归属的配置组类型。</p><p>枚举值：</p><ul><li>l7_acceleration： 七层加速配置组</li><li>edge_functions： 边缘函数配置组</li><li>web_security： Web 防护配置组</li></ul>
                     * 
                     */
                    void SetGroupType(const std::string& _groupType);

                    /**
                     * 判断参数 GroupType 是否已赋值
                     * @return GroupType 是否已赋值
                     * 
                     */
                    bool GroupTypeHasBeenSet() const;

                    /**
                     * 获取<p>版本归属的配置组 ID。</p><p>参数格式：cg-2kplomhisdcb</p>
                     * @return GroupId <p>版本归属的配置组 ID。</p><p>参数格式：cg-2kplomhisdcb</p>
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置<p>版本归属的配置组 ID。</p><p>参数格式：cg-2kplomhisdcb</p>
                     * @param _groupId <p>版本归属的配置组 ID。</p><p>参数格式：cg-2kplomhisdcb</p>
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取<p>版本描述。</p>
                     * @return Description <p>版本描述。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>版本描述。</p>
                     * @param _description <p>版本描述。</p>
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
                     * 获取<p>版本生效状态。</p><p>枚举值：</p><ul><li>creating： 版本创建中</li><li>inactive： 版本未生效</li><li>active： 版本已生效</li></ul>
                     * @return Status <p>版本生效状态。</p><p>枚举值：</p><ul><li>creating： 版本创建中</li><li>inactive： 版本未生效</li><li>active： 版本已生效</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>版本生效状态。</p><p>枚举值：</p><ul><li>creating： 版本创建中</li><li>inactive： 版本未生效</li><li>active： 版本已生效</li></ul>
                     * @param _status <p>版本生效状态。</p><p>枚举值：</p><ul><li>creating： 版本创建中</li><li>inactive： 版本未生效</li><li>active： 版本已生效</li></ul>
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
                     * 获取<p>版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @return CreateTime <p>版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     * @param _createTime <p>版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
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
                     * <p>配置组版本 ID，创建配置组版本时 EdgeOne 分配的唯一资源 ID。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * <p>配置组版本号。该参数仅作展示使用，配置组每创建一次新版本，该版本号自增加一，初始版本的版本号为 &quot;0&quot;。</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></p>
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * <p>配置组版本所基于的来源版本 ID，在创建配置组版本时进行指定来源版本 ID，新版本将在该来源版本的配置基础上派生创建。</p><p>参数格式：ver-2kplomhisdcb</p><p>取值参考：</p><ul><li><a href="https://cloud.tencent.com/document/api/1552/101867">CreateConfigGroupVersion</a> 返回值 <code>VersionId</code></li><li><a href="https://cloud.tencent.com/document/api/1552/101864">DescribeConfigGroupVersions</a> 返回值 <code>ConfigGroupVersionInfos</code></li></ul>
                     */
                    std::string m_sourceVersion;
                    bool m_sourceVersionHasBeenSet;

                    /**
                     * <p>版本归属的配置组类型。</p><p>枚举值：</p><ul><li>l7_acceleration： 七层加速配置组</li><li>edge_functions： 边缘函数配置组</li><li>web_security： Web 防护配置组</li></ul>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * <p>版本归属的配置组 ID。</p><p>参数格式：cg-2kplomhisdcb</p>
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>版本描述。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>版本生效状态。</p><p>枚举值：</p><ul><li>creating： 版本创建中</li><li>inactive： 版本未生效</li><li>active： 版本已生效</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_
