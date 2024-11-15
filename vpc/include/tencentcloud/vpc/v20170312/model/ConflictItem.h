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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_CONFLICTITEM_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_CONFLICTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 冲突资源条目信息。
                */
                class ConflictItem : public AbstractModel
                {
                public:
                    ConflictItem();
                    ~ConflictItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取冲突资源的ID。已废弃
                     * @return ConfilctId 冲突资源的ID。已废弃
                     * 
                     */
                    std::string GetConfilctId() const;

                    /**
                     * 设置冲突资源的ID。已废弃
                     * @param _confilctId 冲突资源的ID。已废弃
                     * 
                     */
                    void SetConfilctId(const std::string& _confilctId);

                    /**
                     * 判断参数 ConfilctId 是否已赋值
                     * @return ConfilctId 是否已赋值
                     * 
                     */
                    bool ConfilctIdHasBeenSet() const;

                    /**
                     * 获取冲突目的资源
                     * @return DestinationItem 冲突目的资源
                     * 
                     */
                    std::string GetDestinationItem() const;

                    /**
                     * 设置冲突目的资源
                     * @param _destinationItem 冲突目的资源
                     * 
                     */
                    void SetDestinationItem(const std::string& _destinationItem);

                    /**
                     * 判断参数 DestinationItem 是否已赋值
                     * @return DestinationItem 是否已赋值
                     * 
                     */
                    bool DestinationItemHasBeenSet() const;

                    /**
                     * 获取冲突资源的ID
                     * @return ConflictId 冲突资源的ID
                     * 
                     */
                    std::string GetConflictId() const;

                    /**
                     * 设置冲突资源的ID
                     * @param _conflictId 冲突资源的ID
                     * 
                     */
                    void SetConflictId(const std::string& _conflictId);

                    /**
                     * 判断参数 ConflictId 是否已赋值
                     * @return ConflictId 是否已赋值
                     * 
                     */
                    bool ConflictIdHasBeenSet() const;

                private:

                    /**
                     * 冲突资源的ID。已废弃
                     */
                    std::string m_confilctId;
                    bool m_confilctIdHasBeenSet;

                    /**
                     * 冲突目的资源
                     */
                    std::string m_destinationItem;
                    bool m_destinationItemHasBeenSet;

                    /**
                     * 冲突资源的ID
                     */
                    std::string m_conflictId;
                    bool m_conflictIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_CONFLICTITEM_H_
