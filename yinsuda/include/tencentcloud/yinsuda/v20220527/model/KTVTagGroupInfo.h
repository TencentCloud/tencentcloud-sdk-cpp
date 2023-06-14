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

#ifndef TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVTAGGROUPINFO_H_
#define TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVTAGGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/yinsuda/v20220527/model/KTVTagInfo.h>


namespace TencentCloud
{
    namespace Yinsuda
    {
        namespace V20220527
        {
            namespace Model
            {
                /**
                * 标签分组信息。
                */
                class KTVTagGroupInfo : public AbstractModel
                {
                public:
                    KTVTagGroupInfo();
                    ~KTVTagGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分组 Id。
                     * @return GroupId 分组 Id。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组 Id。
                     * @param _groupId 分组 Id。
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
                     * 获取分组名。
                     * @return Name 分组名。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置分组名。
                     * @param _name 分组名。
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
                     * 获取标签列表。
                     * @return TagInfoSet 标签列表。
                     * 
                     */
                    std::vector<KTVTagInfo> GetTagInfoSet() const;

                    /**
                     * 设置标签列表。
                     * @param _tagInfoSet 标签列表。
                     * 
                     */
                    void SetTagInfoSet(const std::vector<KTVTagInfo>& _tagInfoSet);

                    /**
                     * 判断参数 TagInfoSet 是否已赋值
                     * @return TagInfoSet 是否已赋值
                     * 
                     */
                    bool TagInfoSetHasBeenSet() const;

                private:

                    /**
                     * 分组 Id。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 分组名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签列表。
                     */
                    std::vector<KTVTagInfo> m_tagInfoSet;
                    bool m_tagInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YINSUDA_V20220527_MODEL_KTVTAGGROUPINFO_H_
