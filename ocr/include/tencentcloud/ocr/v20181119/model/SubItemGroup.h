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

#ifndef TENCENTCLOUD_OCR_V20181119_MODEL_SUBITEMGROUP_H_
#define TENCENTCLOUD_OCR_V20181119_MODEL_SUBITEMGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ocr/v20181119/model/FieldsInfo.h>


namespace TencentCloud
{
    namespace Ocr
    {
        namespace V20181119
        {
            namespace Model
            {
                /**
                * 用于分层展示抽取出的信息
                */
                class SubItemGroup : public AbstractModel
                {
                public:
                    SubItemGroup();
                    ~SubItemGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>子结构嵌套FieldsInfo结构</p>
                     * @return Groups <p>子结构嵌套FieldsInfo结构</p>
                     * 
                     */
                    std::vector<FieldsInfo> GetGroups() const;

                    /**
                     * 设置<p>子结构嵌套FieldsInfo结构</p>
                     * @param _groups <p>子结构嵌套FieldsInfo结构</p>
                     * 
                     */
                    void SetGroups(const std::vector<FieldsInfo>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                private:

                    /**
                     * <p>子结构嵌套FieldsInfo结构</p>
                     */
                    std::vector<FieldsInfo> m_groups;
                    bool m_groupsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCR_V20181119_MODEL_SUBITEMGROUP_H_
