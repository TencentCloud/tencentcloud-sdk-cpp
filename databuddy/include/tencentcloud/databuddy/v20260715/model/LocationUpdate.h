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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LOCATIONUPDATE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LOCATIONUPDATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/KVPair.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 更新location的操作单元，通过 UpdateType 指定操作类型
                */
                class LocationUpdate : public AbstractModel
                {
                public:
                    LocationUpdate();
                    ~LocationUpdate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取更新类型，取值：modify_location_name、modify_location_comment、modify_location_properties
                     * @return UpdateType 更新类型，取值：modify_location_name、modify_location_comment、modify_location_properties
                     * 
                     */
                    std::string GetUpdateType() const;

                    /**
                     * 设置更新类型，取值：modify_location_name、modify_location_comment、modify_location_properties
                     * @param _updateType 更新类型，取值：modify_location_name、modify_location_comment、modify_location_properties
                     * 
                     */
                    void SetUpdateType(const std::string& _updateType);

                    /**
                     * 判断参数 UpdateType 是否已赋值
                     * @return UpdateType 是否已赋值
                     * 
                     */
                    bool UpdateTypeHasBeenSet() const;

                    /**
                     * 获取新的备注，可选，UpdateType 为 modify_location_comment 时使用
                     * @return NewComment 新的备注，可选，UpdateType 为 modify_location_comment 时使用
                     * 
                     */
                    std::string GetNewComment() const;

                    /**
                     * 设置新的备注，可选，UpdateType 为 modify_location_comment 时使用
                     * @param _newComment 新的备注，可选，UpdateType 为 modify_location_comment 时使用
                     * 
                     */
                    void SetNewComment(const std::string& _newComment);

                    /**
                     * 判断参数 NewComment 是否已赋值
                     * @return NewComment 是否已赋值
                     * 
                     */
                    bool NewCommentHasBeenSet() const;

                    /**
                     * 获取新增/修改的属性键值对列表，可选，UpdateType 为 modify_location_properties 时使用
                     * @return SetProperties 新增/修改的属性键值对列表，可选，UpdateType 为 modify_location_properties 时使用
                     * 
                     */
                    std::vector<KVPair> GetSetProperties() const;

                    /**
                     * 设置新增/修改的属性键值对列表，可选，UpdateType 为 modify_location_properties 时使用
                     * @param _setProperties 新增/修改的属性键值对列表，可选，UpdateType 为 modify_location_properties 时使用
                     * 
                     */
                    void SetSetProperties(const std::vector<KVPair>& _setProperties);

                    /**
                     * 判断参数 SetProperties 是否已赋值
                     * @return SetProperties 是否已赋值
                     * 
                     */
                    bool SetPropertiesHasBeenSet() const;

                    /**
                     * 获取要移除的属性key列表，可选，UpdateType 为 modify_location_properties 时使用
                     * @return RemoveProperties 要移除的属性key列表，可选，UpdateType 为 modify_location_properties 时使用
                     * 
                     */
                    std::vector<std::string> GetRemoveProperties() const;

                    /**
                     * 设置要移除的属性key列表，可选，UpdateType 为 modify_location_properties 时使用
                     * @param _removeProperties 要移除的属性key列表，可选，UpdateType 为 modify_location_properties 时使用
                     * 
                     */
                    void SetRemoveProperties(const std::vector<std::string>& _removeProperties);

                    /**
                     * 判断参数 RemoveProperties 是否已赋值
                     * @return RemoveProperties 是否已赋值
                     * 
                     */
                    bool RemovePropertiesHasBeenSet() const;

                    /**
                     * 获取新的名称，可选，UpdateType 为 modify_location_name 时使用
                     * @return NewName 新的名称，可选，UpdateType 为 modify_location_name 时使用
                     * 
                     */
                    std::string GetNewName() const;

                    /**
                     * 设置新的名称，可选，UpdateType 为 modify_location_name 时使用
                     * @param _newName 新的名称，可选，UpdateType 为 modify_location_name 时使用
                     * 
                     */
                    void SetNewName(const std::string& _newName);

                    /**
                     * 判断参数 NewName 是否已赋值
                     * @return NewName 是否已赋值
                     * 
                     */
                    bool NewNameHasBeenSet() const;

                private:

                    /**
                     * 更新类型，取值：modify_location_name、modify_location_comment、modify_location_properties
                     */
                    std::string m_updateType;
                    bool m_updateTypeHasBeenSet;

                    /**
                     * 新的备注，可选，UpdateType 为 modify_location_comment 时使用
                     */
                    std::string m_newComment;
                    bool m_newCommentHasBeenSet;

                    /**
                     * 新增/修改的属性键值对列表，可选，UpdateType 为 modify_location_properties 时使用
                     */
                    std::vector<KVPair> m_setProperties;
                    bool m_setPropertiesHasBeenSet;

                    /**
                     * 要移除的属性key列表，可选，UpdateType 为 modify_location_properties 时使用
                     */
                    std::vector<std::string> m_removeProperties;
                    bool m_removePropertiesHasBeenSet;

                    /**
                     * 新的名称，可选，UpdateType 为 modify_location_name 时使用
                     */
                    std::string m_newName;
                    bool m_newNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LOCATIONUPDATE_H_
