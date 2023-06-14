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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_GROUPITEM_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_GROUPITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 描述组信息。
                */
                class GroupItem : public AbstractModel
                {
                public:
                    GroupItem();
                    ~GroupItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组id。
                     * @return Id 组id。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置组id。
                     * @param _id 组id。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取组名称。
                     * @return Name 组名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置组名称。
                     * @param _name 组名称。
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
                     * 获取组成员数量。
                     * @return MemberCount 组成员数量。
                     * 
                     */
                    int64_t GetMemberCount() const;

                    /**
                     * 设置组成员数量。
                     * @param _memberCount 组成员数量。
                     * 
                     */
                    void SetMemberCount(const int64_t& _memberCount);

                    /**
                     * 判断参数 MemberCount 是否已赋值
                     * @return MemberCount 是否已赋值
                     * 
                     */
                    bool MemberCountHasBeenSet() const;

                private:

                    /**
                     * 组id。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 组名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 组成员数量。
                     */
                    int64_t m_memberCount;
                    bool m_memberCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_GROUPITEM_H_
