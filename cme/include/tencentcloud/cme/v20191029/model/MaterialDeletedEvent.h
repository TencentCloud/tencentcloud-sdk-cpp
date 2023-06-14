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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MATERIALDELETEDEVENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MATERIALDELETEDEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 媒体删除事件。
                */
                class MaterialDeletedEvent : public AbstractModel
                {
                public:
                    MaterialDeletedEvent();
                    ~MaterialDeletedEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除的媒体 Id 列表。
                     * @return MaterialIdSet 删除的媒体 Id 列表。
                     * 
                     */
                    std::vector<std::string> GetMaterialIdSet() const;

                    /**
                     * 设置删除的媒体 Id 列表。
                     * @param _materialIdSet 删除的媒体 Id 列表。
                     * 
                     */
                    void SetMaterialIdSet(const std::vector<std::string>& _materialIdSet);

                    /**
                     * 判断参数 MaterialIdSet 是否已赋值
                     * @return MaterialIdSet 是否已赋值
                     * 
                     */
                    bool MaterialIdSetHasBeenSet() const;

                private:

                    /**
                     * 删除的媒体 Id 列表。
                     */
                    std::vector<std::string> m_materialIdSet;
                    bool m_materialIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MATERIALDELETEDEVENT_H_
