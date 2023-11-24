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
                     * 获取版本 ID。
                     * @return VersionId 版本 ID。
                     * 
                     */
                    std::string GetVersionId() const;

                    /**
                     * 设置版本 ID。
                     * @param _versionId 版本 ID。
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
                     * 获取版本号。
                     * @return VersionNumber 版本号。
                     * 
                     */
                    std::string GetVersionNumber() const;

                    /**
                     * 设置版本号。
                     * @param _versionNumber 版本号。
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
                     * 获取配置组 ID。
                     * @return GroupId 配置组 ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置配置组 ID。
                     * @param _groupId 配置组 ID。
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
                     * 获取配置组类型。取值有：
<li>l7_acceleration ：七层加速配置组。</li>
<li>edge_functions ：边缘函数配置组。</li>
                     * @return GroupType 配置组类型。取值有：
<li>l7_acceleration ：七层加速配置组。</li>
<li>edge_functions ：边缘函数配置组。</li>
                     * 
                     */
                    std::string GetGroupType() const;

                    /**
                     * 设置配置组类型。取值有：
<li>l7_acceleration ：七层加速配置组。</li>
<li>edge_functions ：边缘函数配置组。</li>
                     * @param _groupType 配置组类型。取值有：
<li>l7_acceleration ：七层加速配置组。</li>
<li>edge_functions ：边缘函数配置组。</li>
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
                     * 获取版本描述。
                     * @return Description 版本描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置版本描述。
                     * @param _description 版本描述。
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
                     * 获取版本状态，取值有：
<li>creating：创建中；</li>
<li>inactive：未生效；</li>
<li>active：已生效。</li>
                     * @return Status 版本状态，取值有：
<li>creating：创建中；</li>
<li>inactive：未生效；</li>
<li>active：已生效。</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置版本状态，取值有：
<li>creating：创建中；</li>
<li>inactive：未生效；</li>
<li>active：已生效。</li>
                     * @param _status 版本状态，取值有：
<li>creating：创建中；</li>
<li>inactive：未生效；</li>
<li>active：已生效。</li>
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
                     * 获取版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @return CreateTime 版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     * @param _createTime 版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
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
                     * 版本 ID。
                     */
                    std::string m_versionId;
                    bool m_versionIdHasBeenSet;

                    /**
                     * 版本号。
                     */
                    std::string m_versionNumber;
                    bool m_versionNumberHasBeenSet;

                    /**
                     * 配置组 ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 配置组类型。取值有：
<li>l7_acceleration ：七层加速配置组。</li>
<li>edge_functions ：边缘函数配置组。</li>
                     */
                    std::string m_groupType;
                    bool m_groupTypeHasBeenSet;

                    /**
                     * 版本描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 版本状态，取值有：
<li>creating：创建中；</li>
<li>inactive：未生效；</li>
<li>active：已生效。</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 版本创建时间。时间为世界标准时间（UTC）， 遵循 ISO 8601 标准的日期和时间格式。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CONFIGGROUPVERSIONINFO_H_
