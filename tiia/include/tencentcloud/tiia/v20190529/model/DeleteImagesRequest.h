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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DELETEIMAGESREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DELETEIMAGESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DeleteImages请求参数结构体
                */
                class DeleteImagesRequest : public AbstractModel
                {
                public:
                    DeleteImagesRequest();
                    ~DeleteImagesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取图库名称。
                     * @return GroupId 图库名称。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库名称。
                     * @param _groupId 图库名称。
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
                     * 获取物品ID。
                     * @return EntityId 物品ID。
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置物品ID。
                     * @param _entityId 物品ID。
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取图片名称，如果不指定本参数，则删除EntityId下所有的图片；否则删除指定的图。
                     * @return PicName 图片名称，如果不指定本参数，则删除EntityId下所有的图片；否则删除指定的图。
                     * 
                     */
                    std::string GetPicName() const;

                    /**
                     * 设置图片名称，如果不指定本参数，则删除EntityId下所有的图片；否则删除指定的图。
                     * @param _picName 图片名称，如果不指定本参数，则删除EntityId下所有的图片；否则删除指定的图。
                     * 
                     */
                    void SetPicName(const std::string& _picName);

                    /**
                     * 判断参数 PicName 是否已赋值
                     * @return PicName 是否已赋值
                     * 
                     */
                    bool PicNameHasBeenSet() const;

                private:

                    /**
                     * 图库名称。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 物品ID。
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * 图片名称，如果不指定本参数，则删除EntityId下所有的图片；否则删除指定的图。
                     */
                    std::string m_picName;
                    bool m_picNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DELETEIMAGESREQUEST_H_
