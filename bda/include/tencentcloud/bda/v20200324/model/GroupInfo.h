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

#ifndef TENCENTCLOUD_BDA_V20200324_MODEL_GROUPINFO_H_
#define TENCENTCLOUD_BDA_V20200324_MODEL_GROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bda
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 返回的人员库信息。
                */
                class GroupInfo : public AbstractModel
                {
                public:
                    GroupInfo();
                    ~GroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人体库名称。
                     * @return GroupName 人体库名称。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置人体库名称。
                     * @param _groupName 人体库名称。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取人体库ID。
                     * @return GroupId 人体库ID。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置人体库ID。
                     * @param _groupId 人体库ID。
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
                     * 获取人体库信息备注。
                     * @return Tag 人体库信息备注。
                     * 
                     */
                    std::string GetTag() const;

                    /**
                     * 设置人体库信息备注。
                     * @param _tag 人体库信息备注。
                     * 
                     */
                    void SetTag(const std::string& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取人体识别所用的算法模型版本。
                     * @return BodyModelVersion 人体识别所用的算法模型版本。
                     * 
                     */
                    std::string GetBodyModelVersion() const;

                    /**
                     * 设置人体识别所用的算法模型版本。
                     * @param _bodyModelVersion 人体识别所用的算法模型版本。
                     * 
                     */
                    void SetBodyModelVersion(const std::string& _bodyModelVersion);

                    /**
                     * 判断参数 BodyModelVersion 是否已赋值
                     * @return BodyModelVersion 是否已赋值
                     * 
                     */
                    bool BodyModelVersionHasBeenSet() const;

                    /**
                     * 获取Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 。
                     * @return CreationTimestamp Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 。
                     * 
                     */
                    uint64_t GetCreationTimestamp() const;

                    /**
                     * 设置Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 。
                     * @param _creationTimestamp Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 。
                     * 
                     */
                    void SetCreationTimestamp(const uint64_t& _creationTimestamp);

                    /**
                     * 判断参数 CreationTimestamp 是否已赋值
                     * @return CreationTimestamp 是否已赋值
                     * 
                     */
                    bool CreationTimestampHasBeenSet() const;

                private:

                    /**
                     * 人体库名称。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 人体库ID。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 人体库信息备注。
                     */
                    std::string m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 人体识别所用的算法模型版本。
                     */
                    std::string m_bodyModelVersion;
                    bool m_bodyModelVersionHasBeenSet;

                    /**
                     * Group的创建时间和日期 CreationTimestamp。CreationTimestamp 的值是自 Unix 纪元时间到Group创建时间的毫秒数。  
Unix 纪元时间是 1970 年 1 月 1 日星期四，协调世界时 (UTC) 。
                     */
                    uint64_t m_creationTimestamp;
                    bool m_creationTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDA_V20200324_MODEL_GROUPINFO_H_
