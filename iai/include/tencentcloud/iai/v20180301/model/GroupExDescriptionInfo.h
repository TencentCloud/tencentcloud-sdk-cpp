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

#ifndef TENCENTCLOUD_IAI_V20180301_MODEL_GROUPEXDESCRIPTIONINFO_H_
#define TENCENTCLOUD_IAI_V20180301_MODEL_GROUPEXDESCRIPTIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iai
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * 需要修改的人员库自定义描述字段key-value
                */
                class GroupExDescriptionInfo : public AbstractModel
                {
                public:
                    GroupExDescriptionInfo();
                    ~GroupExDescriptionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取人员库自定义描述字段Index，从0开始
                     * @return GroupExDescriptionIndex 人员库自定义描述字段Index，从0开始
                     * 
                     */
                    uint64_t GetGroupExDescriptionIndex() const;

                    /**
                     * 设置人员库自定义描述字段Index，从0开始
                     * @param _groupExDescriptionIndex 人员库自定义描述字段Index，从0开始
                     * 
                     */
                    void SetGroupExDescriptionIndex(const uint64_t& _groupExDescriptionIndex);

                    /**
                     * 判断参数 GroupExDescriptionIndex 是否已赋值
                     * @return GroupExDescriptionIndex 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionIndexHasBeenSet() const;

                    /**
                     * 获取需要更新的人员库自定义描述字段内容
                     * @return GroupExDescription 需要更新的人员库自定义描述字段内容
                     * 
                     */
                    std::string GetGroupExDescription() const;

                    /**
                     * 设置需要更新的人员库自定义描述字段内容
                     * @param _groupExDescription 需要更新的人员库自定义描述字段内容
                     * 
                     */
                    void SetGroupExDescription(const std::string& _groupExDescription);

                    /**
                     * 判断参数 GroupExDescription 是否已赋值
                     * @return GroupExDescription 是否已赋值
                     * 
                     */
                    bool GroupExDescriptionHasBeenSet() const;

                private:

                    /**
                     * 人员库自定义描述字段Index，从0开始
                     */
                    uint64_t m_groupExDescriptionIndex;
                    bool m_groupExDescriptionIndexHasBeenSet;

                    /**
                     * 需要更新的人员库自定义描述字段内容
                     */
                    std::string m_groupExDescription;
                    bool m_groupExDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IAI_V20180301_MODEL_GROUPEXDESCRIPTIONINFO_H_
