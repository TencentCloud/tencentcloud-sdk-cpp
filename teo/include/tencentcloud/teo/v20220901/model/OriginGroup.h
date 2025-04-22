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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/OriginRecord.h>
#include <tencentcloud/teo/v20220901/model/OriginGroupReference.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * 源站组信息
                */
                class OriginGroup : public AbstractModel
                {
                public:
                    OriginGroup();
                    ~OriginGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取源站组ID。
                     * @return GroupId 源站组ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置源站组ID。
                     * @param _groupId 源站组ID。
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
                     * 获取源站组名称。
                     * @return Name 源站组名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置源站组名称。
                     * @param _name 源站组名称。
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
                     * 获取源站组类型，取值有：
<li>GENERAL：通用型源站组；</li>
<li>HTTP： HTTP专用型源站组。</li>
                     * @return Type 源站组类型，取值有：
<li>GENERAL：通用型源站组；</li>
<li>HTTP： HTTP专用型源站组。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置源站组类型，取值有：
<li>GENERAL：通用型源站组；</li>
<li>HTTP： HTTP专用型源站组。</li>
                     * @param _type 源站组类型，取值有：
<li>GENERAL：通用型源站组；</li>
<li>HTTP： HTTP专用型源站组。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取源站记录信息。
                     * @return Records 源站记录信息。
                     * 
                     */
                    std::vector<OriginRecord> GetRecords() const;

                    /**
                     * 设置源站记录信息。
                     * @param _records 源站记录信息。
                     * 
                     */
                    void SetRecords(const std::vector<OriginRecord>& _records);

                    /**
                     * 判断参数 Records 是否已赋值
                     * @return Records 是否已赋值
                     * 
                     */
                    bool RecordsHasBeenSet() const;

                    /**
                     * 获取源站组被引用实例列表。	
                     * @return References 源站组被引用实例列表。	
                     * 
                     */
                    std::vector<OriginGroupReference> GetReferences() const;

                    /**
                     * 设置源站组被引用实例列表。	
                     * @param _references 源站组被引用实例列表。	
                     * 
                     */
                    void SetReferences(const std::vector<OriginGroupReference>& _references);

                    /**
                     * 判断参数 References 是否已赋值
                     * @return References 是否已赋值
                     * 
                     */
                    bool ReferencesHasBeenSet() const;

                    /**
                     * 获取源站组创建时间。
                     * @return CreateTime 源站组创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置源站组创建时间。
                     * @param _createTime 源站组创建时间。
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
                     * 获取源站组更新时间。
                     * @return UpdateTime 源站组更新时间。
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置源站组更新时间。
                     * @param _updateTime 源站组更新时间。
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取回源Host Header。
                     * @return HostHeader 回源Host Header。
                     * 
                     */
                    std::string GetHostHeader() const;

                    /**
                     * 设置回源Host Header。
                     * @param _hostHeader 回源Host Header。
                     * 
                     */
                    void SetHostHeader(const std::string& _hostHeader);

                    /**
                     * 判断参数 HostHeader 是否已赋值
                     * @return HostHeader 是否已赋值
                     * 
                     */
                    bool HostHeaderHasBeenSet() const;

                private:

                    /**
                     * 源站组ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 源站组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 源站组类型，取值有：
<li>GENERAL：通用型源站组；</li>
<li>HTTP： HTTP专用型源站组。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 源站记录信息。
                     */
                    std::vector<OriginRecord> m_records;
                    bool m_recordsHasBeenSet;

                    /**
                     * 源站组被引用实例列表。	
                     */
                    std::vector<OriginGroupReference> m_references;
                    bool m_referencesHasBeenSet;

                    /**
                     * 源站组创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 源站组更新时间。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 回源Host Header。
                     */
                    std::string m_hostHeader;
                    bool m_hostHeaderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_ORIGINGROUP_H_
